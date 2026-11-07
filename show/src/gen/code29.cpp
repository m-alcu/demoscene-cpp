// Part 28 (KOM.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_29(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x191a7: goto L191a7;
    case 0x191b2: goto L191b2;
    case 0x191c6: goto L191c6;
    case 0x191cb: goto L191cb;
    case 0x191f8: goto L191f8;
    case 0x191fa: goto L191fa;
    case 0x1920a: goto L1920a;
    case 0x1920c: goto L1920c;
    case 0x19213: goto L19213;
    case 0x19216: goto L19216;
    case 0x1921e: goto L1921e;
    case 0x19228: goto L19228;
    case 0x1922b: goto L1922b;
    case 0x1922e: goto L1922e;
    case 0x19231: goto L19231;
    case 0x19241: goto L19241;
    case 0x19248: goto L19248;
    case 0x1925e: goto L1925e;
    case 0x1925f: goto L1925f;
    case 0x19263: goto L19263;
    case 0x19264: goto L19264;
    case 0x19268: goto L19268;
    case 0x19279: goto L19279;
    case 0x1927c: goto L1927c;
    case 0x19290: goto L19290;
    case 0x19293: goto L19293;
    case 0x192bc: goto L192bc;
    case 0x192bf: goto L192bf;
    case 0x192c2: goto L192c2;
    case 0x192d3: goto L192d3;
    case 0x192da: goto L192da;
    case 0x192e3: goto L192e3;
    case 0x192ea: goto L192ea;
    case 0x192eb: goto L192eb;
    case 0x193a4: goto L193a4;
    case 0x193ac: goto L193ac;
    case 0x193cc: goto L193cc;
    case 0x193e4: goto L193e4;
    case 0x193e7: goto L193e7;
    case 0x193f6: goto L193f6;
    case 0x193f9: goto L193f9;
    case 0x195a0: goto L195a0;
    case 0x1975d: goto L1975d;
    case 0x19955: goto L19955;
    case 0x19b46: goto L19b46;
    case 0x19b9e: goto L19b9e;
    case 0x19baa: goto L19baa;
    case 0x19bac: goto L19bac;
    case 0x19d44: goto L19d44;
    case 0x19eee: goto L19eee;
    case 0x1a0cf: goto L1a0cf;
    case 0x1a2b0: goto L1a2b0;
    case 0x1a354: goto L1a354;
    case 0x1a365: goto L1a365;
    case 0x1a368: goto L1a368;
    case 0x1a502: goto L1a502;
    case 0x1a6ad: goto L1a6ad;
    case 0x1a88e: goto L1a88e;
    case 0x1aa6f: goto L1aa6f;
    case 0x1ab0e: goto L1ab0e;
    case 0x1aca6: goto L1aca6;
    case 0x1ae50: goto L1ae50;
    case 0x1b031: goto L1b031;
    case 0x1b212: goto L1b212;
    case 0x1b2b6: goto L1b2b6;
    case 0x1b2d6: goto L1b2d6;
    case 0x1b2d8: goto L1b2d8;
    case 0x1b2e2: goto L1b2e2;
    case 0x1b304: goto L1b304;
    case 0x1b345: goto L1b345;
    case 0x1b348: goto L1b348;
    case 0x1b34d: goto L1b34d;
    case 0x1b350: goto L1b350;
    case 0x1b35e: goto L1b35e;
    case 0x1b36d: goto L1b36d;
    case 0x1b378: goto L1b378;
    case 0x1b379: goto L1b379;
    case 0x1b393: goto L1b393;
    case 0x1b3a3: goto L1b3a3;
    case 0x1b3af: goto L1b3af;
    case 0x1b3ca: goto L1b3ca;
    case 0x1b3d1: goto L1b3d1;
    case 0x1b3d6: goto L1b3d6;
    case 0x1b3e1: goto L1b3e1;
    case 0x1b3e4: goto L1b3e4;
    case 0x1b3e5: goto L1b3e5;
    case 0x1b3ee: goto L1b3ee;
    case 0x1b414: goto L1b414;
    case 0x1b42b: goto L1b42b;
    case 0x1b437: goto L1b437;
    case 0x1b444: goto L1b444;
    case 0x1b456: goto L1b456;
    case 0x1b457: goto L1b457;
    case 0x1b47f: goto L1b47f;
    case 0x1b496: goto L1b496;
    case 0x1b4a2: goto L1b4a2;
    case 0x1b4ac: goto L1b4ac;
    case 0x1b4d4: goto L1b4d4;
    case 0x1b4eb: goto L1b4eb;
    case 0x1b4f7: goto L1b4f7;
    case 0x1b501: goto L1b501;
    case 0x1b502: goto L1b502;
    case 0x1b510: goto L1b510;
    case 0x1b55b: goto L1b55b;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x4197  [x1]
    goto L191a7;
L191a7:
    if (c.tracing) c.traceAt(0x191a7);
    // 1501:4197  mov gs, ax  [x1]
    c.loadGs(c.a.x);
    // 1501:4199  add ax, 0x1000  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1000u, false));
    // 1501:419c  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 1501:419e  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:41a0  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L191b2:
    if (c.tracing) c.traceAt(0x191b2);
    // 1501:41a2  mov word ptr cs:[si + 0x2663], ax  [x80]
    c.w16(c.csb + (uint16_t)(c.si.x + 0x2663u), c.a.x);
    // 1501:41a7  mov word ptr cs:[si + 0x2665], ax  [x80]
    c.w16(c.csb + (uint16_t)(c.si.x + 0x2665u), c.a.x);
    // 1501:41ac  inc ax  [x80]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 1501:41ad  add si, 4  [x80]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:41b0  cmp si, 0x140  [x80]
    c.sub<16>(c.si.x, 0x140u, true);
    // 1501:41b4  jb 0x41a2  [x80]
    if (c.cf) goto L191b2;
L191c6:
    if (c.tracing) c.traceAt(0x191c6);
    // 1501:41b6  mov ax, 0x13  [x1]
    c.a.x = (uint16_t)(0x13u);
    // 1501:41b9  int 0x10  [x1]
    c.ip = 0x41bbu; c.d32 = false; c.intr(0x10, 0x41bbu);
L191cb:
    if (c.tracing) c.traceAt(0x191cb);
    // 1501:41bb  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:41be  mov ax, 0x604  [x1]
    c.a.x = (uint16_t)(0x604u);
    // 1501:41c1  out dx, ax  [x1]
    c.ip = 0x41c2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:41c2  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:41c5  mov ax, 0x14  [x1]
    c.a.x = (uint16_t)(0x14u);
    // 1501:41c8  out dx, ax  [x1]
    c.ip = 0x41c9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:41c9  mov ax, 0xe317  [x1]
    c.a.x = (uint16_t)(0xe317u);
    // 1501:41cc  out dx, ax  [x1]
    c.ip = 0x41cdu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:41cd  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:41d0  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:41d2  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:41d5  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:41d8  out dx, ax  [x1]
    c.ip = 0x41d9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:41d9  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:41dc  mov ax, 0x4013  [x1]
    c.a.x = (uint16_t)(0x4013u);
    // 1501:41df  out dx, ax  [x1]
    c.ip = 0x41e0u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:41e0  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 1501:41e3  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:41e5  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
L191f8:
    if (c.tracing) c.traceAt(0x191f8);
    // 1501:41e8  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L191fa:
    if (c.tracing) c.traceAt(0x191fa);
    // 1501:41ea  push ds  [x1]
    c.push16(c.ds);
    // 1501:41eb  push cs  [x1]
    c.push16(c.cs);
    // 1501:41ec  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 1501:41ed  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:41f0  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:41f2  out dx, al  [x1]
    c.ip = 0x41f3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:41f3  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:41f4  mov si, 8  [x1]
    c.si.x = (uint16_t)(0x8u);
    // 1501:41f7  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
L1920a:
    if (c.tracing) c.traceAt(0x1920a);
    // 1501:41fa  rep outsb dx, byte ptr [si]  [x769]
    c.ip = 0x41fcu; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L1920c:
    if (c.tracing) c.traceAt(0x1920c);
    // 1501:41fc  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 1501:41fd  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 1501:4200  mov di, 0xff00  [x1]
    c.di.x = (uint16_t)(0xff00u);
L19213:
    if (c.tracing) c.traceAt(0x19213);
    // 1501:4203  mov cx, 0x100  [x56]
    c.c.x = (uint16_t)(0x100u);
L19216:
    if (c.tracing) c.traceAt(0x19216);
    // 1501:4206  mov al, byte ptr [si]  [x14336]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4208  mov byte ptr [di], al  [x14336]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.a.l);
    // 1501:420a  inc si  [x14336]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:420b  inc di  [x14336]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:420c  loop 0x4206  [x14336]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L19216;
L1921e:
    if (c.tracing) c.traceAt(0x1921e);
    // 1501:420e  sub di, 0x200  [x56]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, 0x200u, false));
    // 1501:4212  cmp si, 0x3800  [x56]
    c.sub<16>(c.si.x, 0x3800u, true);
    // 1501:4216  jb 0x4203  [x56]
    if (c.cf) goto L19213;
L19228:
    if (c.tracing) c.traceAt(0x19228);
    // 1501:4218  call 0x63d5  [x1]
    c.push16(0x421bu); code_29(c, 0x1b3e5u); if (c.ip != 0x421bu) c.badReturn(0x19228);
L1922b:
    if (c.tracing) c.traceAt(0x1922b);
    // 1501:421b  call 0x6447  [x1]
    c.push16(0x421eu); code_29(c, 0x1b457u); if (c.ip != 0x421eu) c.badReturn(0x1922b);
L1922e:
    if (c.tracing) c.traceAt(0x1922e);
    // 1501:421e  call 0x4394  [x1]
    c.push16(0x4221u); code_29(c, 0x193a4u); if (c.ip != 0x4221u) c.badReturn(0x1922e);
L19231:
    if (c.tracing) c.traceAt(0x19231);
    // 1501:4221  mov cx, 0x8000  [x970]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:4224  mov bx, 0xa000  [x970]
    c.b.x = (uint16_t)(0xa000u);
    // 1501:4227  xor al, al  [x970]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:4229  cmp byte ptr cs:[0xd62], 0  [x970]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0xd62u)), 0x0u, true);
    // 1501:422f  jne 0x4238  [x970]
    if (!c.zf) goto L19248;
L19241:
    if (c.tracing) c.traceAt(0x19241);
    // 1501:4231  mov al, 1  [x485]
    c.a.l = (uint8_t)(0x1u);
    // 1501:4233  mov bx, 0xa800  [x485]
    c.b.x = (uint16_t)(0xa800u);
    // 1501:4236  xor cx, cx  [x485]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), true));
L19248:
    if (c.tracing) c.traceAt(0x19248);
    // 1501:4238  mov byte ptr cs:[0xd62], al  [x970]
    c.w8(c.csb + (uint16_t)(0xd62u), c.a.l);
    // 1501:423c  mov es, bx  [x970]
    c.loadEs(c.b.x);
    // 1501:423e  mov dx, 0x3d4  [x970]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:4241  mov al, 0xc  [x970]
    c.a.l = (uint8_t)(0xcu);
    // 1501:4243  mov ah, ch  [x970]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:4245  out dx, ax  [x970]
    c.ip = 0x4246u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:4246  mov al, 0xd  [x970]
    c.a.l = (uint8_t)(0xdu);
    // 1501:4248  mov ah, cl  [x970]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:424a  out dx, ax  [x970]
    c.ip = 0x424bu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:424b  mov dx, 0x3da  [x970]
    c.dx_.x = (uint16_t)(0x3dau);
L1925e:
    if (c.tracing) c.traceAt(0x1925e);
    // 1501:424e  in al, dx  [x3091]
    c.ip = 0x424fu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1925f:
    if (c.tracing) c.traceAt(0x1925f);
    // 1501:424f  and al, 8  [x4121]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:4251  jne 0x424e  [x4121]
    if (!c.zf) goto L1925e;
L19263:
    if (c.tracing) c.traceAt(0x19263);
    // 1501:4253  in al, dx  [x45228]
    c.ip = 0x4254u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L19264:
    if (c.tracing) c.traceAt(0x19264);
    // 1501:4254  and al, 8  [x59981]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:4256  je 0x4253  [x59981]
    if (c.zf) goto L19263;
L19268:
    if (c.tracing) c.traceAt(0x19268);
    // 1501:4258  mov al, byte ptr cs:[0xd62]  [x970]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0xd62u)));
    // 1501:425c  cwde   [x970]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:425d  mov dx, 0x140  [x970]
    c.dx_.x = (uint16_t)(0x140u);
    // 1501:4260  mul dx  [x970]
    c.mul16(c.dx_.x);
    // 1501:4262  mov word ptr cs:[0xd40], ax  [x970]
    c.w16(c.csb + (uint16_t)(0xd40u), c.a.x);
    // 1501:4266  call 0x4394  [x970]
    c.push16(0x4269u); code_29(c, 0x193a4u); if (c.ip != 0x4269u) c.badReturn(0x19276);
L19279:
    if (c.tracing) c.traceAt(0x19279);
    // 1501:4269  call 0x62a6  [x970]
    c.push16(0x426cu); code_29(c, 0x1b2b6u); if (c.ip != 0x426cu) c.badReturn(0x19279);
L1927c:
    if (c.tracing) c.traceAt(0x1927c);
    // 1501:426c  mov si, word ptr cs:[0x308]  [x970]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x308u)));
    // 1501:4271  add word ptr cs:[0x308], 6  [x970]
    c.w16(c.csb + (uint16_t)(0x308u), c.add<16>(c.r16(c.csb + (uint16_t)(0x308u)), 0x6u, false));
    // 1501:4277  cmp word ptr cs:[0x308], 0x16bc  [x970]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x308u)), 0x16bcu, true);
    // 1501:427e  jb 0x4283  [x970]
    if (c.cf) goto L19293;
L19290:
    if (c.tracing) c.traceAt(0x19290);
    // 1501:4280  jmp 0x654b  [x1]
    goto L1b55b;
L19293:
    if (c.tracing) c.traceAt(0x19293);
    // 1501:4283  mov ax, word ptr cs:[si + 0x2a27]  [x969]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x2a27u)));
    // 1501:4288  mov word ptr cs:[0xd42], ax  [x969]
    c.w16(c.csb + (uint16_t)(0xd42u), c.a.x);
    // 1501:428c  mov ax, word ptr cs:[si + 0x2a29]  [x969]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x2a29u)));
    // 1501:4291  mov word ptr cs:[0x30c], ax  [x969]
    c.w16(c.csb + (uint16_t)(0x30cu), c.a.x);
    // 1501:4295  mov ax, word ptr cs:[si + 0x2a2b]  [x969]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x2a2bu)));
    // 1501:429a  mov word ptr cs:[0x310], ax  [x969]
    c.w16(c.csb + (uint16_t)(0x310u), c.a.x);
    // 1501:429e  mov ax, 0x64  [x969]
    c.a.x = (uint16_t)(0x64u);
    // 1501:42a1  sub ax, word ptr cs:[0x310]  [x969]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x310u)), false));
    // 1501:42a6  sar ax, 4  [x969]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x4u) & 31), true));
    // 1501:42a9  call 0x64f2  [x969]
    c.push16(0x42acu); code_29(c, 0x1b502u); if (c.ip != 0x42acu) c.badReturn(0x192b9);
L192bc:
    if (c.tracing) c.traceAt(0x192bc);
    // 1501:42ac  call 0x42b2  [x969]
    c.push16(0x42afu); code_29(c, 0x192c2u); if (c.ip != 0x42afu) c.badReturn(0x192bc);
L192bf:
    if (c.tracing) c.traceAt(0x192bf);
    // 1501:42af  jmp 0x4221  [x969]
    goto L19231;
L192c2:
    if (c.tracing) c.traceAt(0x192c2);
    // 1501:42b2  mov ax, word ptr cs:[0x30c]  [x969]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x30cu)));
    // 1501:42b6  sar ax, 2  [x969]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x2u) & 31), false));
    // 1501:42b9  and ax, 0xfffe  [x969]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0xfffeu), false));
    // 1501:42bc  add word ptr cs:[0xa1e], ax  [x969]
    c.w16(c.csb + (uint16_t)(0xa1eu), c.add<16>(c.r16(c.csb + (uint16_t)(0xa1eu)), c.a.x, true));
    // 1501:42c1  jns 0x42ca  [x969]
    if (!c.sf) goto L192da;
L192d3:
    if (c.tracing) c.traceAt(0x192d3);
    // 1501:42c3  add word ptr cs:[0xa1e], 0x5a0  [x3]
    c.w16(c.csb + (uint16_t)(0xa1eu), c.add<16>(c.r16(c.csb + (uint16_t)(0xa1eu)), 0x5a0u, true));
L192da:
    if (c.tracing) c.traceAt(0x192da);
    // 1501:42ca  cmp word ptr cs:[0xa1e], 0x5a0  [x969]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0xa1eu)), 0x5a0u, true);
    // 1501:42d1  jb 0x42da  [x969]
    if (c.cf) goto L192ea;
L192e3:
    if (c.tracing) c.traceAt(0x192e3);
    // 1501:42d3  sub word ptr cs:[0xa1e], 0x5a0  [x2]
    c.w16(c.csb + (uint16_t)(0xa1eu), c.sub<16>(c.r16(c.csb + (uint16_t)(0xa1eu)), 0x5a0u, true));
L192ea:
    if (c.tracing) c.traceAt(0x192ea);
    // 1501:42da  ret   [x969]
    c.ip = c.pop16(); return;
L192eb:
    if (c.tracing) c.traceAt(0x192eb);
    // 1501:42db  mov si, word ptr cs:[0xa1e]  [x39809]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xa1eu)));
    // 1501:42e0  mov cx, 0x7fff  [x39809]
    c.c.x = (uint16_t)(0x7fffu);
    // 1501:42e3  mov ax, word ptr cs:[0xd4c]  [x39809]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd4cu)));
    // 1501:42e7  imul word ptr cs:[si + 0x47e]  [x39809]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x47eu)));
    // 1501:42ec  idiv cx  [x39809]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x42ecu); }   // #DE: int 0, then again
    // 1501:42ee  push ax  [x39809]
    c.push16(c.a.x);
    // 1501:42ef  mov ax, word ptr cs:[0xd4e]  [x39809]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd4eu)));
    // 1501:42f3  imul word ptr cs:[si + 0x316]  [x39809]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x316u)));
    // 1501:42f8  idiv cx  [x39809]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x42f8u); }   // #DE: int 0, then again
    // 1501:42fa  pop bp  [x39809]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
    // 1501:42fb  sub bp, ax  [x39809]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.a.x, false));
    // 1501:42fd  mov ax, word ptr cs:[0xd4e]  [x39809]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd4eu)));
    // 1501:4301  imul word ptr cs:[si + 0x47e]  [x39809]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x47eu)));
    // 1501:4306  idiv cx  [x39809]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4306u); }   // #DE: int 0, then again
    // 1501:4308  push ax  [x39809]
    c.push16(c.a.x);
    // 1501:4309  mov ax, word ptr cs:[0xd4c]  [x39809]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd4cu)));
    // 1501:430d  imul word ptr cs:[si + 0x316]  [x39809]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x316u)));
    // 1501:4312  idiv cx  [x39809]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4312u); }   // #DE: int 0, then again
    // 1501:4314  pop bx  [x39809]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:4315  add bx, ax  [x39809]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:4317  mov word ptr cs:[0xd4e], bx  [x39809]
    c.w16(c.csb + (uint16_t)(0xd4eu), c.b.x);
    // 1501:431c  mov word ptr cs:[0xd4c], bp  [x39809]
    c.w16(c.csb + (uint16_t)(0xd4cu), c.bp.x);
    // 1501:4321  mov ax, word ptr cs:[0xd50]  [x39809]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd50u)));
    // 1501:4325  imul word ptr cs:[si + 0x47e]  [x39809]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x47eu)));
    // 1501:432a  idiv cx  [x39809]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x432au); }   // #DE: int 0, then again
    // 1501:432c  push ax  [x39809]
    c.push16(c.a.x);
    // 1501:432d  mov ax, word ptr cs:[0xd52]  [x39809]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd52u)));
    // 1501:4331  imul word ptr cs:[si + 0x316]  [x39809]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x316u)));
    // 1501:4336  idiv cx  [x39809]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4336u); }   // #DE: int 0, then again
    // 1501:4338  pop bp  [x39809]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
    // 1501:4339  sub bp, ax  [x39809]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.a.x, false));
    // 1501:433b  mov ax, word ptr cs:[0xd52]  [x39809]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd52u)));
    // 1501:433f  imul word ptr cs:[si + 0x47e]  [x39809]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x47eu)));
    // 1501:4344  idiv cx  [x39809]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4344u); }   // #DE: int 0, then again
    // 1501:4346  push ax  [x39809]
    c.push16(c.a.x);
    // 1501:4347  mov ax, word ptr cs:[0xd50]  [x39809]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd50u)));
    // 1501:434b  imul word ptr cs:[si + 0x316]  [x39809]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x316u)));
    // 1501:4350  idiv cx  [x39809]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4350u); }   // #DE: int 0, then again
    // 1501:4352  pop bx  [x39809]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:4353  add bx, ax  [x39809]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:4355  mov word ptr cs:[0xd52], bx  [x39809]
    c.w16(c.csb + (uint16_t)(0xd52u), c.b.x);
    // 1501:435a  mov word ptr cs:[0xd50], bp  [x39809]
    c.w16(c.csb + (uint16_t)(0xd50u), c.bp.x);
    // 1501:435f  mov ax, word ptr cs:[0xd4c]  [x39809]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd4cu)));
    // 1501:4363  add ax, word ptr cs:[0xd60]  [x39809]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0xd60u)), false));
    // 1501:4368  mov word ptr cs:[0xd4c], ax  [x39809]
    c.w16(c.csb + (uint16_t)(0xd4cu), c.a.x);
    // 1501:436c  mov ax, word ptr cs:[0xd50]  [x39809]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd50u)));
    // 1501:4370  add ax, word ptr cs:[0xd60]  [x39809]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0xd60u)), false));
    // 1501:4375  mov word ptr cs:[0xd50], ax  [x39809]
    c.w16(c.csb + (uint16_t)(0xd50u), c.a.x);
    // 1501:4379  mov ax, word ptr cs:[0xd4e]  [x39809]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd4eu)));
    // 1501:437d  add ax, word ptr cs:[0xd5e]  [x39809]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0xd5eu)), false));
    // 1501:4382  mov word ptr cs:[0xd4e], ax  [x39809]
    c.w16(c.csb + (uint16_t)(0xd4eu), c.a.x);
    // 1501:4386  mov ax, word ptr cs:[0xd52]  [x39809]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd52u)));
    // 1501:438a  add ax, word ptr cs:[0xd5e]  [x39809]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0xd5eu)), true));
    // 1501:438f  mov word ptr cs:[0xd52], ax  [x39809]
    c.w16(c.csb + (uint16_t)(0xd52u), c.a.x);
    // 1501:4393  ret   [x39809]
    c.ip = c.pop16(); return;
L193a4:
    if (c.tracing) c.traceAt(0x193a4);
    // 1501:4394  push es  [x971]
    c.push16(c.es);
    // 1501:4395  push cs  [x971]
    c.push16(c.cs);
    // 1501:4396  pop es  [x971]
    c.loadEs((uint16_t)c.pop16());
    // 1501:4397  mov di, 0xd63  [x971]
    c.di.x = (uint16_t)(0xd63u);
    // 1501:439a  xor si, si  [x971]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L193ac:
    if (c.tracing) c.traceAt(0x193ac);
    // 1501:439c  mov ax, word ptr cs:[si + 0xa20]  [x38840]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0xa20u)));
    // 1501:43a1  mov word ptr cs:[0xd50], ax  [x38840]
    c.w16(c.csb + (uint16_t)(0xd50u), c.a.x);
    // 1501:43a5  neg ax  [x38840]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
    // 1501:43a7  mov word ptr cs:[0xd4c], ax  [x38840]
    c.w16(c.csb + (uint16_t)(0xd4cu), c.a.x);
    // 1501:43ab  mov ax, word ptr cs:[si + 0xa22]  [x38840]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0xa22u)));
    // 1501:43b0  mov word ptr cs:[0xd4e], ax  [x38840]
    c.w16(c.csb + (uint16_t)(0xd4eu), c.a.x);
    // 1501:43b4  mov word ptr cs:[0xd52], ax  [x38840]
    c.w16(c.csb + (uint16_t)(0xd52u), c.a.x);
    // 1501:43b8  push si  [x38840]
    c.push16(c.si.x);
    // 1501:43b9  call 0x42db  [x38840]
    c.push16(0x43bcu); code_29(c, 0x192ebu); if (c.ip != 0x43bcu) c.badReturn(0x193c9);
L193cc:
    if (c.tracing) c.traceAt(0x193cc);
    // 1501:43bc  mov ax, word ptr cs:[0xd4e]  [x38840]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd4eu)));
    // 1501:43c0  xchg ah, al  [x38840]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:43c2  add ax, word ptr cs:[0xd4c]  [x38840]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0xd4cu)), false));
    // 1501:43c7  mov si, ax  [x38840]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:43c9  mov ax, word ptr cs:[0xd50]  [x38840]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd50u)));
    // 1501:43cd  sub ax, word ptr cs:[0xd4c]  [x38840]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0xd4cu)), true));
    // 1501:43d2  jns 0x43d7  [x38840]
    if (!c.sf) goto L193e7;
L193e4:
    if (c.tracing) c.traceAt(0x193e4);
    // 1501:43d4  jmp 0x5344  [x12520]
    goto L1a354;
L193e7:
    if (c.tracing) c.traceAt(0x193e7);
    // 1501:43d7  xchg ah, al  [x26320]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:43d9  mov bx, ax  [x26320]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:43db  mov ax, word ptr cs:[0xd52]  [x26320]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd52u)));
    // 1501:43df  sub ax, word ptr cs:[0xd4e]  [x26320]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0xd4eu)), true));
    // 1501:43e4  jns 0x43e9  [x26320]
    if (!c.sf) goto L193f9;
L193f6:
    if (c.tracing) c.traceAt(0x193f6);
    // 1501:43e6  jmp 0x4b9c  [x16501]
    goto L19bac;
L193f9:
    if (c.tracing) c.traceAt(0x193f9);
    // 1501:43e9  xchg ah, al  [x9819]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:43eb  mov bp, ax  [x9819]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:43ed  xor al, al  [x9819]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:43ef  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:43f1  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:43f2  add si, word ptr gs:[bx]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x)), false));
    // 1501:43f5  add si, word ptr fs:[bp]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x)), false));
    // 1501:43f9  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:43fb  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:43fc  add si, word ptr gs:[bx + 2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2u)), false));
    // 1501:4400  add si, word ptr fs:[bp + 2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2u)), false));
    // 1501:4404  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4406  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4407  add si, word ptr gs:[bx + 4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4u)), false));
    // 1501:440b  add si, word ptr fs:[bp + 4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4u)), false));
    // 1501:440f  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4411  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4412  add si, word ptr gs:[bx + 6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 1501:4416  add si, word ptr fs:[bp + 6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6u)), false));
    // 1501:441a  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:441c  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:441d  add si, word ptr gs:[bx + 8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8u)), false));
    // 1501:4421  add si, word ptr fs:[bp + 8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8u)), false));
    // 1501:4425  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4427  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4428  add si, word ptr gs:[bx + 0xa]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xau)), false));
    // 1501:442c  add si, word ptr fs:[bp + 0xa]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xau)), false));
    // 1501:4430  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4432  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4433  add si, word ptr gs:[bx + 0xc]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xcu)), false));
    // 1501:4437  add si, word ptr fs:[bp + 0xc]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xcu)), false));
    // 1501:443b  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:443d  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:443e  add si, word ptr gs:[bx + 0xe]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 1501:4442  add si, word ptr fs:[bp + 0xe]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xeu)), false));
    // 1501:4446  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4448  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4449  add si, word ptr gs:[bx + 0x10]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10u)), false));
    // 1501:444d  add si, word ptr fs:[bp + 0x10]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10u)), false));
    // 1501:4451  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4453  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4454  add si, word ptr gs:[bx + 0x12]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12u)), false));
    // 1501:4458  add si, word ptr fs:[bp + 0x12]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12u)), false));
    // 1501:445c  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:445e  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:445f  add si, word ptr gs:[bx + 0x14]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x14u)), false));
    // 1501:4463  add si, word ptr fs:[bp + 0x14]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x14u)), false));
    // 1501:4467  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4469  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:446a  add si, word ptr gs:[bx + 0x16]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x16u)), false));
    // 1501:446e  add si, word ptr fs:[bp + 0x16]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x16u)), false));
    // 1501:4472  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4474  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4475  add si, word ptr gs:[bx + 0x18]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x18u)), false));
    // 1501:4479  add si, word ptr fs:[bp + 0x18]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x18u)), false));
    // 1501:447d  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:447f  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4480  add si, word ptr gs:[bx + 0x1a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x1au)), false));
    // 1501:4484  add si, word ptr fs:[bp + 0x1a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x1au)), false));
    // 1501:4488  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:448a  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:448b  add si, word ptr gs:[bx + 0x1c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x1cu)), false));
    // 1501:448f  add si, word ptr fs:[bp + 0x1c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x1cu)), false));
    // 1501:4493  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4495  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4496  add si, word ptr gs:[bx + 0x1e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x1eu)), false));
    // 1501:449a  add si, word ptr fs:[bp + 0x1e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x1eu)), false));
    // 1501:449e  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:44a0  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:44a1  add si, word ptr gs:[bx + 0x20]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x20u)), false));
    // 1501:44a5  add si, word ptr fs:[bp + 0x20]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x20u)), false));
    // 1501:44a9  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:44ab  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:44ac  add si, word ptr gs:[bx + 0x22]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x22u)), false));
    // 1501:44b0  add si, word ptr fs:[bp + 0x22]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x22u)), false));
    // 1501:44b4  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:44b6  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:44b7  add si, word ptr gs:[bx + 0x24]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x24u)), false));
    // 1501:44bb  add si, word ptr fs:[bp + 0x24]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x24u)), false));
    // 1501:44bf  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:44c1  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:44c2  add si, word ptr gs:[bx + 0x26]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x26u)), false));
    // 1501:44c6  add si, word ptr fs:[bp + 0x26]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x26u)), false));
    // 1501:44ca  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:44cc  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:44cd  add si, word ptr gs:[bx + 0x28]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x28u)), false));
    // 1501:44d1  add si, word ptr fs:[bp + 0x28]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x28u)), false));
    // 1501:44d5  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:44d7  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:44d8  add si, word ptr gs:[bx + 0x2a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2au)), false));
    // 1501:44dc  add si, word ptr fs:[bp + 0x2a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2au)), false));
    // 1501:44e0  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:44e2  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:44e3  add si, word ptr gs:[bx + 0x2c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2cu)), false));
    // 1501:44e7  add si, word ptr fs:[bp + 0x2c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2cu)), false));
    // 1501:44eb  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:44ed  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:44ee  add si, word ptr gs:[bx + 0x2e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2eu)), false));
    // 1501:44f2  add si, word ptr fs:[bp + 0x2e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2eu)), false));
    // 1501:44f6  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:44f8  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:44f9  add si, word ptr gs:[bx + 0x30]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x30u)), false));
    // 1501:44fd  add si, word ptr fs:[bp + 0x30]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x30u)), false));
    // 1501:4501  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4503  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4504  add si, word ptr gs:[bx + 0x32]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x32u)), false));
    // 1501:4508  add si, word ptr fs:[bp + 0x32]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x32u)), false));
    // 1501:450c  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:450e  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:450f  add si, word ptr gs:[bx + 0x34]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x34u)), false));
    // 1501:4513  add si, word ptr fs:[bp + 0x34]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x34u)), false));
    // 1501:4517  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4519  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:451a  add si, word ptr gs:[bx + 0x36]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x36u)), false));
    // 1501:451e  add si, word ptr fs:[bp + 0x36]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x36u)), false));
    // 1501:4522  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4524  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4525  add si, word ptr gs:[bx + 0x38]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x38u)), false));
    // 1501:4529  add si, word ptr fs:[bp + 0x38]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x38u)), false));
    // 1501:452d  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:452f  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4530  add si, word ptr gs:[bx + 0x3a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x3au)), false));
    // 1501:4534  add si, word ptr fs:[bp + 0x3a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x3au)), false));
    // 1501:4538  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:453a  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:453b  add si, word ptr gs:[bx + 0x3c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x3cu)), false));
    // 1501:453f  add si, word ptr fs:[bp + 0x3c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x3cu)), false));
    // 1501:4543  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4545  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4546  add si, word ptr gs:[bx + 0x3e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x3eu)), false));
    // 1501:454a  add si, word ptr fs:[bp + 0x3e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x3eu)), false));
    // 1501:454e  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4550  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4551  add si, word ptr gs:[bx + 0x40]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x40u)), false));
    // 1501:4555  add si, word ptr fs:[bp + 0x40]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x40u)), false));
    // 1501:4559  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:455b  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:455c  add si, word ptr gs:[bx + 0x42]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x42u)), false));
    // 1501:4560  add si, word ptr fs:[bp + 0x42]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x42u)), false));
    // 1501:4564  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4566  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4567  add si, word ptr gs:[bx + 0x44]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x44u)), false));
    // 1501:456b  add si, word ptr fs:[bp + 0x44]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x44u)), false));
    // 1501:456f  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4571  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4572  add si, word ptr gs:[bx + 0x46]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x46u)), false));
    // 1501:4576  add si, word ptr fs:[bp + 0x46]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x46u)), false));
    // 1501:457a  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:457c  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:457d  add si, word ptr gs:[bx + 0x48]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x48u)), false));
    // 1501:4581  add si, word ptr fs:[bp + 0x48]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x48u)), false));
    // 1501:4585  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4587  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4588  add si, word ptr gs:[bx + 0x4a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4au)), false));
    // 1501:458c  add si, word ptr fs:[bp + 0x4a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4au)), true));
L195a0:
    if (c.tracing) c.traceAt(0x195a0);
    // 1501:4590  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4592  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4593  add si, word ptr gs:[bx + 0x4c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4cu)), false));
    // 1501:4597  add si, word ptr fs:[bp + 0x4c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4cu)), false));
    // 1501:459b  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:459d  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:459e  add si, word ptr gs:[bx + 0x4e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4eu)), false));
    // 1501:45a2  add si, word ptr fs:[bp + 0x4e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4eu)), false));
    // 1501:45a6  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:45a8  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:45a9  add si, word ptr gs:[bx + 0x50]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x50u)), false));
    // 1501:45ad  add si, word ptr fs:[bp + 0x50]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x50u)), false));
    // 1501:45b1  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:45b3  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:45b4  add si, word ptr gs:[bx + 0x52]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x52u)), false));
    // 1501:45b8  add si, word ptr fs:[bp + 0x52]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x52u)), false));
    // 1501:45bc  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:45be  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:45bf  add si, word ptr gs:[bx + 0x54]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x54u)), false));
    // 1501:45c3  add si, word ptr fs:[bp + 0x54]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x54u)), false));
    // 1501:45c7  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:45c9  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:45ca  add si, word ptr gs:[bx + 0x56]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x56u)), false));
    // 1501:45ce  add si, word ptr fs:[bp + 0x56]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x56u)), false));
    // 1501:45d2  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:45d4  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:45d5  add si, word ptr gs:[bx + 0x58]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x58u)), false));
    // 1501:45d9  add si, word ptr fs:[bp + 0x58]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x58u)), false));
    // 1501:45dd  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:45df  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:45e0  add si, word ptr gs:[bx + 0x5a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x5au)), false));
    // 1501:45e4  add si, word ptr fs:[bp + 0x5a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x5au)), false));
    // 1501:45e8  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:45ea  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:45eb  add si, word ptr gs:[bx + 0x5c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x5cu)), false));
    // 1501:45ef  add si, word ptr fs:[bp + 0x5c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x5cu)), false));
    // 1501:45f3  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:45f5  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:45f6  add si, word ptr gs:[bx + 0x5e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x5eu)), false));
    // 1501:45fa  add si, word ptr fs:[bp + 0x5e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x5eu)), false));
    // 1501:45fe  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4600  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4601  add si, word ptr gs:[bx + 0x60]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x60u)), false));
    // 1501:4605  add si, word ptr fs:[bp + 0x60]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x60u)), false));
    // 1501:4609  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:460b  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:460c  add si, word ptr gs:[bx + 0x62]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x62u)), false));
    // 1501:4610  add si, word ptr fs:[bp + 0x62]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x62u)), false));
    // 1501:4614  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4616  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4617  add si, word ptr gs:[bx + 0x64]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x64u)), false));
    // 1501:461b  add si, word ptr fs:[bp + 0x64]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x64u)), false));
    // 1501:461f  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4621  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4622  add si, word ptr gs:[bx + 0x66]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x66u)), false));
    // 1501:4626  add si, word ptr fs:[bp + 0x66]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x66u)), false));
    // 1501:462a  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:462c  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:462d  add si, word ptr gs:[bx + 0x68]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x68u)), false));
    // 1501:4631  add si, word ptr fs:[bp + 0x68]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x68u)), false));
    // 1501:4635  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4637  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4638  add si, word ptr gs:[bx + 0x6a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6au)), false));
    // 1501:463c  add si, word ptr fs:[bp + 0x6a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6au)), false));
    // 1501:4640  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4642  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4643  add si, word ptr gs:[bx + 0x6c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6cu)), false));
    // 1501:4647  add si, word ptr fs:[bp + 0x6c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6cu)), false));
    // 1501:464b  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:464d  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:464e  add si, word ptr gs:[bx + 0x6e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6eu)), false));
    // 1501:4652  add si, word ptr fs:[bp + 0x6e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6eu)), false));
    // 1501:4656  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4658  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4659  add si, word ptr gs:[bx + 0x70]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x70u)), false));
    // 1501:465d  add si, word ptr fs:[bp + 0x70]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x70u)), false));
    // 1501:4661  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4663  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4664  add si, word ptr gs:[bx + 0x72]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x72u)), false));
    // 1501:4668  add si, word ptr fs:[bp + 0x72]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x72u)), false));
    // 1501:466c  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:466e  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:466f  add si, word ptr gs:[bx + 0x74]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x74u)), false));
    // 1501:4673  add si, word ptr fs:[bp + 0x74]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x74u)), false));
    // 1501:4677  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4679  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:467a  add si, word ptr gs:[bx + 0x76]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x76u)), false));
    // 1501:467e  add si, word ptr fs:[bp + 0x76]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x76u)), false));
    // 1501:4682  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4684  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4685  add si, word ptr gs:[bx + 0x78]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x78u)), false));
    // 1501:4689  add si, word ptr fs:[bp + 0x78]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x78u)), false));
    // 1501:468d  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:468f  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4690  add si, word ptr gs:[bx + 0x7a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x7au)), false));
    // 1501:4694  add si, word ptr fs:[bp + 0x7a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x7au)), false));
    // 1501:4698  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:469a  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:469b  add si, word ptr gs:[bx + 0x7c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x7cu)), false));
    // 1501:469f  add si, word ptr fs:[bp + 0x7c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x7cu)), false));
    // 1501:46a3  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:46a5  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:46a6  add si, word ptr gs:[bx + 0x7e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x7eu)), false));
    // 1501:46aa  add si, word ptr fs:[bp + 0x7e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x7eu)), false));
    // 1501:46ae  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:46b0  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:46b1  add si, word ptr gs:[bx + 0x80]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x80u)), false));
    // 1501:46b6  add si, word ptr fs:[bp + 0x80]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x80u)), false));
    // 1501:46bb  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:46bd  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:46be  add si, word ptr gs:[bx + 0x82]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x82u)), false));
    // 1501:46c3  add si, word ptr fs:[bp + 0x82]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x82u)), false));
    // 1501:46c8  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:46ca  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:46cb  add si, word ptr gs:[bx + 0x84]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x84u)), false));
    // 1501:46d0  add si, word ptr fs:[bp + 0x84]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x84u)), false));
    // 1501:46d5  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:46d7  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:46d8  add si, word ptr gs:[bx + 0x86]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x86u)), false));
    // 1501:46dd  add si, word ptr fs:[bp + 0x86]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x86u)), false));
    // 1501:46e2  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:46e4  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:46e5  add si, word ptr gs:[bx + 0x88]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x88u)), false));
    // 1501:46ea  add si, word ptr fs:[bp + 0x88]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x88u)), false));
    // 1501:46ef  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:46f1  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:46f2  add si, word ptr gs:[bx + 0x8a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8au)), false));
    // 1501:46f7  add si, word ptr fs:[bp + 0x8a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8au)), false));
    // 1501:46fc  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:46fe  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:46ff  add si, word ptr gs:[bx + 0x8c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8cu)), false));
    // 1501:4704  add si, word ptr fs:[bp + 0x8c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8cu)), false));
    // 1501:4709  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:470b  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:470c  add si, word ptr gs:[bx + 0x8e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8eu)), false));
    // 1501:4711  add si, word ptr fs:[bp + 0x8e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8eu)), false));
    // 1501:4716  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4718  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4719  add si, word ptr gs:[bx + 0x90]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x90u)), false));
    // 1501:471e  add si, word ptr fs:[bp + 0x90]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x90u)), false));
    // 1501:4723  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4725  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4726  add si, word ptr gs:[bx + 0x92]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x92u)), false));
    // 1501:472b  add si, word ptr fs:[bp + 0x92]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x92u)), false));
    // 1501:4730  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4732  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4733  add si, word ptr gs:[bx + 0x94]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x94u)), false));
    // 1501:4738  add si, word ptr fs:[bp + 0x94]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x94u)), false));
    // 1501:473d  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:473f  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4740  add si, word ptr gs:[bx + 0x96]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x96u)), false));
    // 1501:4745  add si, word ptr fs:[bp + 0x96]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x96u)), true));
    // 1501:474a  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:474c  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
L1975d:
    if (c.tracing) c.traceAt(0x1975d);
    // 1501:474d  add si, word ptr gs:[bx + 0x98]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x98u)), false));
    // 1501:4752  add si, word ptr fs:[bp + 0x98]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x98u)), false));
    // 1501:4757  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4759  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:475a  add si, word ptr gs:[bx + 0x9a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x9au)), false));
    // 1501:475f  add si, word ptr fs:[bp + 0x9a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x9au)), false));
    // 1501:4764  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4766  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4767  add si, word ptr gs:[bx + 0x9c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x9cu)), false));
    // 1501:476c  add si, word ptr fs:[bp + 0x9c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x9cu)), false));
    // 1501:4771  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4773  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4774  add si, word ptr gs:[bx + 0x9e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x9eu)), false));
    // 1501:4779  add si, word ptr fs:[bp + 0x9e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x9eu)), false));
    // 1501:477e  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4780  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4781  add si, word ptr gs:[bx + 0xa0]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa0u)), false));
    // 1501:4786  add si, word ptr fs:[bp + 0xa0]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa0u)), false));
    // 1501:478b  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:478d  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:478e  add si, word ptr gs:[bx + 0xa2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa2u)), false));
    // 1501:4793  add si, word ptr fs:[bp + 0xa2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa2u)), false));
    // 1501:4798  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:479a  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:479b  add si, word ptr gs:[bx + 0xa4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa4u)), false));
    // 1501:47a0  add si, word ptr fs:[bp + 0xa4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa4u)), false));
    // 1501:47a5  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:47a7  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:47a8  add si, word ptr gs:[bx + 0xa6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa6u)), false));
    // 1501:47ad  add si, word ptr fs:[bp + 0xa6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa6u)), false));
    // 1501:47b2  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:47b4  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:47b5  add si, word ptr gs:[bx + 0xa8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa8u)), false));
    // 1501:47ba  add si, word ptr fs:[bp + 0xa8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa8u)), false));
    // 1501:47bf  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:47c1  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:47c2  add si, word ptr gs:[bx + 0xaa]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xaau)), false));
    // 1501:47c7  add si, word ptr fs:[bp + 0xaa]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xaau)), false));
    // 1501:47cc  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:47ce  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:47cf  add si, word ptr gs:[bx + 0xac]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xacu)), false));
    // 1501:47d4  add si, word ptr fs:[bp + 0xac]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xacu)), false));
    // 1501:47d9  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:47db  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:47dc  add si, word ptr gs:[bx + 0xae]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xaeu)), false));
    // 1501:47e1  add si, word ptr fs:[bp + 0xae]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xaeu)), false));
    // 1501:47e6  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:47e8  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:47e9  add si, word ptr gs:[bx + 0xb0]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb0u)), false));
    // 1501:47ee  add si, word ptr fs:[bp + 0xb0]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb0u)), false));
    // 1501:47f3  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:47f5  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:47f6  add si, word ptr gs:[bx + 0xb2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb2u)), false));
    // 1501:47fb  add si, word ptr fs:[bp + 0xb2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb2u)), false));
    // 1501:4800  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4802  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4803  add si, word ptr gs:[bx + 0xb4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb4u)), false));
    // 1501:4808  add si, word ptr fs:[bp + 0xb4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb4u)), false));
    // 1501:480d  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:480f  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4810  add si, word ptr gs:[bx + 0xb6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb6u)), false));
    // 1501:4815  add si, word ptr fs:[bp + 0xb6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb6u)), false));
    // 1501:481a  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:481c  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:481d  add si, word ptr gs:[bx + 0xb8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb8u)), false));
    // 1501:4822  add si, word ptr fs:[bp + 0xb8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb8u)), false));
    // 1501:4827  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4829  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:482a  add si, word ptr gs:[bx + 0xba]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xbau)), false));
    // 1501:482f  add si, word ptr fs:[bp + 0xba]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xbau)), false));
    // 1501:4834  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4836  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4837  add si, word ptr gs:[bx + 0xbc]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xbcu)), false));
    // 1501:483c  add si, word ptr fs:[bp + 0xbc]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xbcu)), false));
    // 1501:4841  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4843  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4844  add si, word ptr gs:[bx + 0xbe]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xbeu)), false));
    // 1501:4849  add si, word ptr fs:[bp + 0xbe]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xbeu)), false));
    // 1501:484e  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4850  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4851  add si, word ptr gs:[bx + 0xc0]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc0u)), false));
    // 1501:4856  add si, word ptr fs:[bp + 0xc0]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc0u)), false));
    // 1501:485b  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:485d  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:485e  add si, word ptr gs:[bx + 0xc2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc2u)), false));
    // 1501:4863  add si, word ptr fs:[bp + 0xc2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc2u)), false));
    // 1501:4868  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:486a  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:486b  add si, word ptr gs:[bx + 0xc4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc4u)), false));
    // 1501:4870  add si, word ptr fs:[bp + 0xc4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc4u)), false));
    // 1501:4875  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4877  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4878  add si, word ptr gs:[bx + 0xc6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc6u)), false));
    // 1501:487d  add si, word ptr fs:[bp + 0xc6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc6u)), false));
    // 1501:4882  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4884  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4885  add si, word ptr gs:[bx + 0xc8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc8u)), false));
    // 1501:488a  add si, word ptr fs:[bp + 0xc8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc8u)), false));
    // 1501:488f  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4891  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4892  add si, word ptr gs:[bx + 0xca]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xcau)), false));
    // 1501:4897  add si, word ptr fs:[bp + 0xca]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xcau)), false));
    // 1501:489c  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:489e  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:489f  add si, word ptr gs:[bx + 0xcc]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xccu)), false));
    // 1501:48a4  add si, word ptr fs:[bp + 0xcc]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xccu)), false));
    // 1501:48a9  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:48ab  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:48ac  add si, word ptr gs:[bx + 0xce]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xceu)), false));
    // 1501:48b1  add si, word ptr fs:[bp + 0xce]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xceu)), false));
    // 1501:48b6  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:48b8  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:48b9  add si, word ptr gs:[bx + 0xd0]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd0u)), false));
    // 1501:48be  add si, word ptr fs:[bp + 0xd0]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd0u)), false));
    // 1501:48c3  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:48c5  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:48c6  add si, word ptr gs:[bx + 0xd2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd2u)), false));
    // 1501:48cb  add si, word ptr fs:[bp + 0xd2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd2u)), false));
    // 1501:48d0  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:48d2  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:48d3  add si, word ptr gs:[bx + 0xd4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd4u)), false));
    // 1501:48d8  add si, word ptr fs:[bp + 0xd4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd4u)), false));
    // 1501:48dd  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:48df  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:48e0  add si, word ptr gs:[bx + 0xd6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd6u)), false));
    // 1501:48e5  add si, word ptr fs:[bp + 0xd6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd6u)), false));
    // 1501:48ea  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:48ec  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:48ed  add si, word ptr gs:[bx + 0xd8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd8u)), false));
    // 1501:48f2  add si, word ptr fs:[bp + 0xd8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd8u)), false));
    // 1501:48f7  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:48f9  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:48fa  add si, word ptr gs:[bx + 0xda]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xdau)), false));
    // 1501:48ff  add si, word ptr fs:[bp + 0xda]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xdau)), false));
    // 1501:4904  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4906  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4907  add si, word ptr gs:[bx + 0xdc]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xdcu)), false));
    // 1501:490c  add si, word ptr fs:[bp + 0xdc]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xdcu)), false));
    // 1501:4911  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4913  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4914  add si, word ptr gs:[bx + 0xde]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xdeu)), false));
    // 1501:4919  add si, word ptr fs:[bp + 0xde]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xdeu)), false));
    // 1501:491e  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4920  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4921  add si, word ptr gs:[bx + 0xe0]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe0u)), false));
    // 1501:4926  add si, word ptr fs:[bp + 0xe0]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe0u)), false));
    // 1501:492b  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:492d  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:492e  add si, word ptr gs:[bx + 0xe2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe2u)), false));
    // 1501:4933  add si, word ptr fs:[bp + 0xe2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe2u)), false));
    // 1501:4938  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:493a  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:493b  add si, word ptr gs:[bx + 0xe4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe4u)), false));
    // 1501:4940  add si, word ptr fs:[bp + 0xe4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe4u)), true));
L19955:
    if (c.tracing) c.traceAt(0x19955);
    // 1501:4945  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4947  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4948  add si, word ptr gs:[bx + 0xe6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe6u)), false));
    // 1501:494d  add si, word ptr fs:[bp + 0xe6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe6u)), false));
    // 1501:4952  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4954  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4955  add si, word ptr gs:[bx + 0xe8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe8u)), false));
    // 1501:495a  add si, word ptr fs:[bp + 0xe8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe8u)), false));
    // 1501:495f  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4961  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4962  add si, word ptr gs:[bx + 0xea]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xeau)), false));
    // 1501:4967  add si, word ptr fs:[bp + 0xea]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xeau)), false));
    // 1501:496c  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:496e  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:496f  add si, word ptr gs:[bx + 0xec]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xecu)), false));
    // 1501:4974  add si, word ptr fs:[bp + 0xec]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xecu)), false));
    // 1501:4979  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:497b  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:497c  add si, word ptr gs:[bx + 0xee]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xeeu)), false));
    // 1501:4981  add si, word ptr fs:[bp + 0xee]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xeeu)), false));
    // 1501:4986  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4988  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4989  add si, word ptr gs:[bx + 0xf0]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf0u)), false));
    // 1501:498e  add si, word ptr fs:[bp + 0xf0]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf0u)), false));
    // 1501:4993  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4995  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4996  add si, word ptr gs:[bx + 0xf2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf2u)), false));
    // 1501:499b  add si, word ptr fs:[bp + 0xf2]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf2u)), false));
    // 1501:49a0  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:49a2  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:49a3  add si, word ptr gs:[bx + 0xf4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf4u)), false));
    // 1501:49a8  add si, word ptr fs:[bp + 0xf4]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf4u)), false));
    // 1501:49ad  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:49af  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:49b0  add si, word ptr gs:[bx + 0xf6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf6u)), false));
    // 1501:49b5  add si, word ptr fs:[bp + 0xf6]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf6u)), false));
    // 1501:49ba  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:49bc  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:49bd  add si, word ptr gs:[bx + 0xf8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf8u)), false));
    // 1501:49c2  add si, word ptr fs:[bp + 0xf8]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf8u)), false));
    // 1501:49c7  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:49c9  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:49ca  add si, word ptr gs:[bx + 0xfa]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xfau)), false));
    // 1501:49cf  add si, word ptr fs:[bp + 0xfa]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xfau)), false));
    // 1501:49d4  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:49d6  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:49d7  add si, word ptr gs:[bx + 0xfc]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xfcu)), false));
    // 1501:49dc  add si, word ptr fs:[bp + 0xfc]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xfcu)), false));
    // 1501:49e1  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:49e3  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:49e4  add si, word ptr gs:[bx + 0xfe]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xfeu)), false));
    // 1501:49e9  add si, word ptr fs:[bp + 0xfe]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xfeu)), false));
    // 1501:49ee  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:49f0  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:49f1  add si, word ptr gs:[bx + 0x100]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x100u)), false));
    // 1501:49f6  add si, word ptr fs:[bp + 0x100]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x100u)), false));
    // 1501:49fb  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:49fd  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:49fe  add si, word ptr gs:[bx + 0x102]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x102u)), false));
    // 1501:4a03  add si, word ptr fs:[bp + 0x102]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x102u)), false));
    // 1501:4a08  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4a0a  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4a0b  add si, word ptr gs:[bx + 0x104]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x104u)), false));
    // 1501:4a10  add si, word ptr fs:[bp + 0x104]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x104u)), false));
    // 1501:4a15  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4a17  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4a18  add si, word ptr gs:[bx + 0x106]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x106u)), false));
    // 1501:4a1d  add si, word ptr fs:[bp + 0x106]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x106u)), false));
    // 1501:4a22  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4a24  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4a25  add si, word ptr gs:[bx + 0x108]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x108u)), false));
    // 1501:4a2a  add si, word ptr fs:[bp + 0x108]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x108u)), false));
    // 1501:4a2f  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4a31  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4a32  add si, word ptr gs:[bx + 0x10a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10au)), false));
    // 1501:4a37  add si, word ptr fs:[bp + 0x10a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10au)), false));
    // 1501:4a3c  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4a3e  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4a3f  add si, word ptr gs:[bx + 0x10c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10cu)), false));
    // 1501:4a44  add si, word ptr fs:[bp + 0x10c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10cu)), false));
    // 1501:4a49  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4a4b  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4a4c  add si, word ptr gs:[bx + 0x10e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10eu)), false));
    // 1501:4a51  add si, word ptr fs:[bp + 0x10e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10eu)), false));
    // 1501:4a56  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4a58  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4a59  add si, word ptr gs:[bx + 0x110]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x110u)), false));
    // 1501:4a5e  add si, word ptr fs:[bp + 0x110]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x110u)), false));
    // 1501:4a63  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4a65  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4a66  add si, word ptr gs:[bx + 0x112]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x112u)), false));
    // 1501:4a6b  add si, word ptr fs:[bp + 0x112]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x112u)), false));
    // 1501:4a70  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4a72  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4a73  add si, word ptr gs:[bx + 0x114]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x114u)), false));
    // 1501:4a78  add si, word ptr fs:[bp + 0x114]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x114u)), false));
    // 1501:4a7d  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4a7f  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4a80  add si, word ptr gs:[bx + 0x116]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x116u)), false));
    // 1501:4a85  add si, word ptr fs:[bp + 0x116]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x116u)), false));
    // 1501:4a8a  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4a8c  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4a8d  add si, word ptr gs:[bx + 0x118]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x118u)), false));
    // 1501:4a92  add si, word ptr fs:[bp + 0x118]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x118u)), false));
    // 1501:4a97  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4a99  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4a9a  add si, word ptr gs:[bx + 0x11a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x11au)), false));
    // 1501:4a9f  add si, word ptr fs:[bp + 0x11a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x11au)), false));
    // 1501:4aa4  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4aa6  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4aa7  add si, word ptr gs:[bx + 0x11c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x11cu)), false));
    // 1501:4aac  add si, word ptr fs:[bp + 0x11c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x11cu)), false));
    // 1501:4ab1  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ab3  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4ab4  add si, word ptr gs:[bx + 0x11e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x11eu)), false));
    // 1501:4ab9  add si, word ptr fs:[bp + 0x11e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x11eu)), false));
    // 1501:4abe  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ac0  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4ac1  add si, word ptr gs:[bx + 0x120]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x120u)), false));
    // 1501:4ac6  add si, word ptr fs:[bp + 0x120]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x120u)), false));
    // 1501:4acb  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4acd  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4ace  add si, word ptr gs:[bx + 0x122]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x122u)), false));
    // 1501:4ad3  add si, word ptr fs:[bp + 0x122]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x122u)), false));
    // 1501:4ad8  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ada  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4adb  add si, word ptr gs:[bx + 0x124]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x124u)), false));
    // 1501:4ae0  add si, word ptr fs:[bp + 0x124]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x124u)), false));
    // 1501:4ae5  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ae7  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4ae8  add si, word ptr gs:[bx + 0x126]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x126u)), false));
    // 1501:4aed  add si, word ptr fs:[bp + 0x126]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x126u)), false));
    // 1501:4af2  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4af4  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4af5  add si, word ptr gs:[bx + 0x128]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x128u)), false));
    // 1501:4afa  add si, word ptr fs:[bp + 0x128]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x128u)), false));
    // 1501:4aff  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4b01  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4b02  add si, word ptr gs:[bx + 0x12a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12au)), false));
    // 1501:4b07  add si, word ptr fs:[bp + 0x12a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12au)), false));
    // 1501:4b0c  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4b0e  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4b0f  add si, word ptr gs:[bx + 0x12c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12cu)), false));
    // 1501:4b14  add si, word ptr fs:[bp + 0x12c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12cu)), false));
    // 1501:4b19  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4b1b  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4b1c  add si, word ptr gs:[bx + 0x12e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12eu)), false));
    // 1501:4b21  add si, word ptr fs:[bp + 0x12e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12eu)), false));
    // 1501:4b26  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4b28  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4b29  add si, word ptr gs:[bx + 0x130]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x130u)), false));
    // 1501:4b2e  add si, word ptr fs:[bp + 0x130]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x130u)), true));
    // 1501:4b33  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4b35  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
L19b46:
    if (c.tracing) c.traceAt(0x19b46);
    // 1501:4b36  add si, word ptr gs:[bx + 0x132]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x132u)), false));
    // 1501:4b3b  add si, word ptr fs:[bp + 0x132]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x132u)), false));
    // 1501:4b40  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4b42  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4b43  add si, word ptr gs:[bx + 0x134]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x134u)), false));
    // 1501:4b48  add si, word ptr fs:[bp + 0x134]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x134u)), false));
    // 1501:4b4d  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4b4f  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4b50  add si, word ptr gs:[bx + 0x136]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x136u)), false));
    // 1501:4b55  add si, word ptr fs:[bp + 0x136]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x136u)), false));
    // 1501:4b5a  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4b5c  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4b5d  add si, word ptr gs:[bx + 0x138]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x138u)), false));
    // 1501:4b62  add si, word ptr fs:[bp + 0x138]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x138u)), false));
    // 1501:4b67  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4b69  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4b6a  add si, word ptr gs:[bx + 0x13a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x13au)), false));
    // 1501:4b6f  add si, word ptr fs:[bp + 0x13a]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x13au)), false));
    // 1501:4b74  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4b76  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4b77  add si, word ptr gs:[bx + 0x13c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x13cu)), false));
    // 1501:4b7c  add si, word ptr fs:[bp + 0x13c]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x13cu)), false));
    // 1501:4b81  mov al, byte ptr [si]  [x9819]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4b83  stosb byte ptr es:[di], al  [x9819]
    c.stos<8, false>(0);
    // 1501:4b84  add si, word ptr gs:[bx + 0x13e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x13eu)), false));
    // 1501:4b89  add si, word ptr fs:[bp + 0x13e]  [x9819]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x13eu)), true));
L19b9e:
    if (c.tracing) c.traceAt(0x19b9e);
    // 1501:4b8e  pop si  [x38840]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:4b8f  add si, 4  [x38840]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:4b92  cmp si, 0xa0  [x38840]
    c.sub<16>(c.si.x, 0xa0u, true);
    // 1501:4b96  jb 0x439c  [x38840]
    if (c.cf) goto L193ac;
L19baa:
    if (c.tracing) c.traceAt(0x19baa);
    // 1501:4b9a  pop es  [x971]
    c.loadEs((uint16_t)c.pop16());
    // 1501:4b9b  ret   [x971]
    c.ip = c.pop16(); return;
L19bac:
    if (c.tracing) c.traceAt(0x19bac);
    // 1501:4b9c  neg ax  [x16501]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:4b9e  xchg ah, al  [x16501]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:4ba0  mov bp, ax  [x16501]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:4ba2  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ba4  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4ba5  add si, word ptr gs:[bx]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x)), false));
    // 1501:4ba8  sub si, word ptr fs:[bp]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x)), false));
    // 1501:4bac  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4bae  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4baf  add si, word ptr gs:[bx + 2]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2u)), false));
    // 1501:4bb3  sub si, word ptr fs:[bp + 2]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2u)), false));
    // 1501:4bb7  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4bb9  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4bba  add si, word ptr gs:[bx + 4]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4u)), false));
    // 1501:4bbe  sub si, word ptr fs:[bp + 4]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4u)), false));
    // 1501:4bc2  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4bc4  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4bc5  add si, word ptr gs:[bx + 6]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 1501:4bc9  sub si, word ptr fs:[bp + 6]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6u)), false));
    // 1501:4bcd  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4bcf  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4bd0  add si, word ptr gs:[bx + 8]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8u)), false));
    // 1501:4bd4  sub si, word ptr fs:[bp + 8]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8u)), false));
    // 1501:4bd8  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4bda  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4bdb  add si, word ptr gs:[bx + 0xa]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xau)), false));
    // 1501:4bdf  sub si, word ptr fs:[bp + 0xa]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xau)), false));
    // 1501:4be3  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4be5  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4be6  add si, word ptr gs:[bx + 0xc]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xcu)), false));
    // 1501:4bea  sub si, word ptr fs:[bp + 0xc]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xcu)), false));
    // 1501:4bee  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4bf0  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4bf1  add si, word ptr gs:[bx + 0xe]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 1501:4bf5  sub si, word ptr fs:[bp + 0xe]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xeu)), false));
    // 1501:4bf9  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4bfb  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4bfc  add si, word ptr gs:[bx + 0x10]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10u)), false));
    // 1501:4c00  sub si, word ptr fs:[bp + 0x10]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10u)), false));
    // 1501:4c04  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c06  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c07  add si, word ptr gs:[bx + 0x12]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12u)), false));
    // 1501:4c0b  sub si, word ptr fs:[bp + 0x12]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12u)), false));
    // 1501:4c0f  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c11  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c12  add si, word ptr gs:[bx + 0x14]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x14u)), false));
    // 1501:4c16  sub si, word ptr fs:[bp + 0x14]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x14u)), false));
    // 1501:4c1a  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c1c  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c1d  add si, word ptr gs:[bx + 0x16]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x16u)), false));
    // 1501:4c21  sub si, word ptr fs:[bp + 0x16]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x16u)), false));
    // 1501:4c25  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c27  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c28  add si, word ptr gs:[bx + 0x18]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x18u)), false));
    // 1501:4c2c  sub si, word ptr fs:[bp + 0x18]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x18u)), false));
    // 1501:4c30  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c32  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c33  add si, word ptr gs:[bx + 0x1a]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x1au)), false));
    // 1501:4c37  sub si, word ptr fs:[bp + 0x1a]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x1au)), false));
    // 1501:4c3b  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c3d  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c3e  add si, word ptr gs:[bx + 0x1c]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x1cu)), false));
    // 1501:4c42  sub si, word ptr fs:[bp + 0x1c]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x1cu)), false));
    // 1501:4c46  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c48  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c49  add si, word ptr gs:[bx + 0x1e]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x1eu)), false));
    // 1501:4c4d  sub si, word ptr fs:[bp + 0x1e]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x1eu)), false));
    // 1501:4c51  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c53  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c54  add si, word ptr gs:[bx + 0x20]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x20u)), false));
    // 1501:4c58  sub si, word ptr fs:[bp + 0x20]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x20u)), false));
    // 1501:4c5c  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c5e  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c5f  add si, word ptr gs:[bx + 0x22]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x22u)), false));
    // 1501:4c63  sub si, word ptr fs:[bp + 0x22]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x22u)), false));
    // 1501:4c67  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c69  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c6a  add si, word ptr gs:[bx + 0x24]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x24u)), false));
    // 1501:4c6e  sub si, word ptr fs:[bp + 0x24]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x24u)), false));
    // 1501:4c72  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c74  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c75  add si, word ptr gs:[bx + 0x26]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x26u)), false));
    // 1501:4c79  sub si, word ptr fs:[bp + 0x26]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x26u)), false));
    // 1501:4c7d  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c7f  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c80  add si, word ptr gs:[bx + 0x28]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x28u)), false));
    // 1501:4c84  sub si, word ptr fs:[bp + 0x28]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x28u)), false));
    // 1501:4c88  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c8a  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c8b  add si, word ptr gs:[bx + 0x2a]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2au)), false));
    // 1501:4c8f  sub si, word ptr fs:[bp + 0x2a]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2au)), false));
    // 1501:4c93  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4c95  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4c96  add si, word ptr gs:[bx + 0x2c]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2cu)), false));
    // 1501:4c9a  sub si, word ptr fs:[bp + 0x2c]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2cu)), false));
    // 1501:4c9e  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ca0  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4ca1  add si, word ptr gs:[bx + 0x2e]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2eu)), false));
    // 1501:4ca5  sub si, word ptr fs:[bp + 0x2e]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2eu)), false));
    // 1501:4ca9  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4cab  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4cac  add si, word ptr gs:[bx + 0x30]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x30u)), false));
    // 1501:4cb0  sub si, word ptr fs:[bp + 0x30]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x30u)), false));
    // 1501:4cb4  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4cb6  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4cb7  add si, word ptr gs:[bx + 0x32]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x32u)), false));
    // 1501:4cbb  sub si, word ptr fs:[bp + 0x32]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x32u)), false));
    // 1501:4cbf  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4cc1  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4cc2  add si, word ptr gs:[bx + 0x34]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x34u)), false));
    // 1501:4cc6  sub si, word ptr fs:[bp + 0x34]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x34u)), false));
    // 1501:4cca  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ccc  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4ccd  add si, word ptr gs:[bx + 0x36]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x36u)), false));
    // 1501:4cd1  sub si, word ptr fs:[bp + 0x36]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x36u)), false));
    // 1501:4cd5  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4cd7  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4cd8  add si, word ptr gs:[bx + 0x38]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x38u)), false));
    // 1501:4cdc  sub si, word ptr fs:[bp + 0x38]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x38u)), false));
    // 1501:4ce0  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ce2  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4ce3  add si, word ptr gs:[bx + 0x3a]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x3au)), false));
    // 1501:4ce7  sub si, word ptr fs:[bp + 0x3a]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x3au)), false));
    // 1501:4ceb  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ced  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4cee  add si, word ptr gs:[bx + 0x3c]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x3cu)), false));
    // 1501:4cf2  sub si, word ptr fs:[bp + 0x3c]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x3cu)), false));
    // 1501:4cf6  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4cf8  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4cf9  add si, word ptr gs:[bx + 0x3e]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x3eu)), false));
    // 1501:4cfd  sub si, word ptr fs:[bp + 0x3e]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x3eu)), false));
    // 1501:4d01  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d03  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d04  add si, word ptr gs:[bx + 0x40]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x40u)), false));
    // 1501:4d08  sub si, word ptr fs:[bp + 0x40]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x40u)), false));
    // 1501:4d0c  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d0e  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d0f  add si, word ptr gs:[bx + 0x42]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x42u)), false));
    // 1501:4d13  sub si, word ptr fs:[bp + 0x42]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x42u)), false));
    // 1501:4d17  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d19  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d1a  add si, word ptr gs:[bx + 0x44]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x44u)), false));
    // 1501:4d1e  sub si, word ptr fs:[bp + 0x44]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x44u)), false));
    // 1501:4d22  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d24  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d25  add si, word ptr gs:[bx + 0x46]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x46u)), false));
    // 1501:4d29  sub si, word ptr fs:[bp + 0x46]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x46u)), false));
    // 1501:4d2d  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d2f  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d30  add si, word ptr gs:[bx + 0x48]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x48u)), true));
L19d44:
    if (c.tracing) c.traceAt(0x19d44);
    // 1501:4d34  sub si, word ptr fs:[bp + 0x48]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x48u)), false));
    // 1501:4d38  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d3a  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d3b  add si, word ptr gs:[bx + 0x4a]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4au)), false));
    // 1501:4d3f  sub si, word ptr fs:[bp + 0x4a]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4au)), false));
    // 1501:4d43  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d45  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d46  add si, word ptr gs:[bx + 0x4c]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4cu)), false));
    // 1501:4d4a  sub si, word ptr fs:[bp + 0x4c]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4cu)), false));
    // 1501:4d4e  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d50  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d51  add si, word ptr gs:[bx + 0x4e]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4eu)), false));
    // 1501:4d55  sub si, word ptr fs:[bp + 0x4e]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4eu)), false));
    // 1501:4d59  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d5b  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d5c  add si, word ptr gs:[bx + 0x50]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x50u)), false));
    // 1501:4d60  sub si, word ptr fs:[bp + 0x50]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x50u)), false));
    // 1501:4d64  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d66  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d67  add si, word ptr gs:[bx + 0x52]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x52u)), false));
    // 1501:4d6b  sub si, word ptr fs:[bp + 0x52]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x52u)), false));
    // 1501:4d6f  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d71  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d72  add si, word ptr gs:[bx + 0x54]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x54u)), false));
    // 1501:4d76  sub si, word ptr fs:[bp + 0x54]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x54u)), false));
    // 1501:4d7a  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d7c  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d7d  add si, word ptr gs:[bx + 0x56]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x56u)), false));
    // 1501:4d81  sub si, word ptr fs:[bp + 0x56]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x56u)), false));
    // 1501:4d85  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d87  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d88  add si, word ptr gs:[bx + 0x58]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x58u)), false));
    // 1501:4d8c  sub si, word ptr fs:[bp + 0x58]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x58u)), false));
    // 1501:4d90  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d92  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d93  add si, word ptr gs:[bx + 0x5a]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x5au)), false));
    // 1501:4d97  sub si, word ptr fs:[bp + 0x5a]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x5au)), false));
    // 1501:4d9b  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4d9d  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4d9e  add si, word ptr gs:[bx + 0x5c]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x5cu)), false));
    // 1501:4da2  sub si, word ptr fs:[bp + 0x5c]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x5cu)), false));
    // 1501:4da6  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4da8  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4da9  add si, word ptr gs:[bx + 0x5e]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x5eu)), false));
    // 1501:4dad  sub si, word ptr fs:[bp + 0x5e]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x5eu)), false));
    // 1501:4db1  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4db3  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4db4  add si, word ptr gs:[bx + 0x60]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x60u)), false));
    // 1501:4db8  sub si, word ptr fs:[bp + 0x60]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x60u)), false));
    // 1501:4dbc  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4dbe  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4dbf  add si, word ptr gs:[bx + 0x62]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x62u)), false));
    // 1501:4dc3  sub si, word ptr fs:[bp + 0x62]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x62u)), false));
    // 1501:4dc7  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4dc9  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4dca  add si, word ptr gs:[bx + 0x64]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x64u)), false));
    // 1501:4dce  sub si, word ptr fs:[bp + 0x64]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x64u)), false));
    // 1501:4dd2  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4dd4  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4dd5  add si, word ptr gs:[bx + 0x66]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x66u)), false));
    // 1501:4dd9  sub si, word ptr fs:[bp + 0x66]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x66u)), false));
    // 1501:4ddd  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ddf  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4de0  add si, word ptr gs:[bx + 0x68]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x68u)), false));
    // 1501:4de4  sub si, word ptr fs:[bp + 0x68]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x68u)), false));
    // 1501:4de8  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4dea  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4deb  add si, word ptr gs:[bx + 0x6a]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6au)), false));
    // 1501:4def  sub si, word ptr fs:[bp + 0x6a]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6au)), false));
    // 1501:4df3  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4df5  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4df6  add si, word ptr gs:[bx + 0x6c]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6cu)), false));
    // 1501:4dfa  sub si, word ptr fs:[bp + 0x6c]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6cu)), false));
    // 1501:4dfe  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e00  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e01  add si, word ptr gs:[bx + 0x6e]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6eu)), false));
    // 1501:4e05  sub si, word ptr fs:[bp + 0x6e]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6eu)), false));
    // 1501:4e09  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e0b  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e0c  add si, word ptr gs:[bx + 0x70]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x70u)), false));
    // 1501:4e10  sub si, word ptr fs:[bp + 0x70]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x70u)), false));
    // 1501:4e14  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e16  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e17  add si, word ptr gs:[bx + 0x72]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x72u)), false));
    // 1501:4e1b  sub si, word ptr fs:[bp + 0x72]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x72u)), false));
    // 1501:4e1f  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e21  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e22  add si, word ptr gs:[bx + 0x74]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x74u)), false));
    // 1501:4e26  sub si, word ptr fs:[bp + 0x74]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x74u)), false));
    // 1501:4e2a  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e2c  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e2d  add si, word ptr gs:[bx + 0x76]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x76u)), false));
    // 1501:4e31  sub si, word ptr fs:[bp + 0x76]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x76u)), false));
    // 1501:4e35  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e37  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e38  add si, word ptr gs:[bx + 0x78]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x78u)), false));
    // 1501:4e3c  sub si, word ptr fs:[bp + 0x78]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x78u)), false));
    // 1501:4e40  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e42  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e43  add si, word ptr gs:[bx + 0x7a]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x7au)), false));
    // 1501:4e47  sub si, word ptr fs:[bp + 0x7a]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x7au)), false));
    // 1501:4e4b  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e4d  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e4e  add si, word ptr gs:[bx + 0x7c]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x7cu)), false));
    // 1501:4e52  sub si, word ptr fs:[bp + 0x7c]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x7cu)), false));
    // 1501:4e56  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e58  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e59  add si, word ptr gs:[bx + 0x7e]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x7eu)), false));
    // 1501:4e5d  sub si, word ptr fs:[bp + 0x7e]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x7eu)), false));
    // 1501:4e61  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e63  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e64  add si, word ptr gs:[bx + 0x80]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x80u)), false));
    // 1501:4e69  sub si, word ptr fs:[bp + 0x80]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x80u)), false));
    // 1501:4e6e  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e70  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e71  add si, word ptr gs:[bx + 0x82]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x82u)), false));
    // 1501:4e76  sub si, word ptr fs:[bp + 0x82]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x82u)), false));
    // 1501:4e7b  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e7d  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e7e  add si, word ptr gs:[bx + 0x84]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x84u)), false));
    // 1501:4e83  sub si, word ptr fs:[bp + 0x84]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x84u)), false));
    // 1501:4e88  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e8a  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e8b  add si, word ptr gs:[bx + 0x86]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x86u)), false));
    // 1501:4e90  sub si, word ptr fs:[bp + 0x86]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x86u)), false));
    // 1501:4e95  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4e97  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4e98  add si, word ptr gs:[bx + 0x88]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x88u)), false));
    // 1501:4e9d  sub si, word ptr fs:[bp + 0x88]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x88u)), false));
    // 1501:4ea2  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ea4  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4ea5  add si, word ptr gs:[bx + 0x8a]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8au)), false));
    // 1501:4eaa  sub si, word ptr fs:[bp + 0x8a]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8au)), false));
    // 1501:4eaf  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4eb1  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4eb2  add si, word ptr gs:[bx + 0x8c]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8cu)), false));
    // 1501:4eb7  sub si, word ptr fs:[bp + 0x8c]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8cu)), false));
    // 1501:4ebc  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ebe  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4ebf  add si, word ptr gs:[bx + 0x8e]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8eu)), false));
    // 1501:4ec4  sub si, word ptr fs:[bp + 0x8e]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8eu)), false));
    // 1501:4ec9  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ecb  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4ecc  add si, word ptr gs:[bx + 0x90]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x90u)), false));
    // 1501:4ed1  sub si, word ptr fs:[bp + 0x90]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x90u)), false));
    // 1501:4ed6  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ed8  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4ed9  add si, word ptr gs:[bx + 0x92]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x92u)), true));
L19eee:
    if (c.tracing) c.traceAt(0x19eee);
    // 1501:4ede  sub si, word ptr fs:[bp + 0x92]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x92u)), false));
    // 1501:4ee3  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ee5  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4ee6  add si, word ptr gs:[bx + 0x94]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x94u)), false));
    // 1501:4eeb  sub si, word ptr fs:[bp + 0x94]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x94u)), false));
    // 1501:4ef0  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ef2  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4ef3  add si, word ptr gs:[bx + 0x96]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x96u)), false));
    // 1501:4ef8  sub si, word ptr fs:[bp + 0x96]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x96u)), false));
    // 1501:4efd  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4eff  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4f00  add si, word ptr gs:[bx + 0x98]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x98u)), false));
    // 1501:4f05  sub si, word ptr fs:[bp + 0x98]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x98u)), false));
    // 1501:4f0a  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4f0c  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4f0d  add si, word ptr gs:[bx + 0x9a]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x9au)), false));
    // 1501:4f12  sub si, word ptr fs:[bp + 0x9a]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x9au)), false));
    // 1501:4f17  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4f19  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4f1a  add si, word ptr gs:[bx + 0x9c]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x9cu)), false));
    // 1501:4f1f  sub si, word ptr fs:[bp + 0x9c]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x9cu)), false));
    // 1501:4f24  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4f26  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4f27  add si, word ptr gs:[bx + 0x9e]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x9eu)), false));
    // 1501:4f2c  sub si, word ptr fs:[bp + 0x9e]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x9eu)), false));
    // 1501:4f31  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4f33  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4f34  add si, word ptr gs:[bx + 0xa0]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa0u)), false));
    // 1501:4f39  sub si, word ptr fs:[bp + 0xa0]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa0u)), false));
    // 1501:4f3e  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4f40  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4f41  add si, word ptr gs:[bx + 0xa2]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa2u)), false));
    // 1501:4f46  sub si, word ptr fs:[bp + 0xa2]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa2u)), false));
    // 1501:4f4b  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4f4d  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4f4e  add si, word ptr gs:[bx + 0xa4]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa4u)), false));
    // 1501:4f53  sub si, word ptr fs:[bp + 0xa4]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa4u)), false));
    // 1501:4f58  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4f5a  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4f5b  add si, word ptr gs:[bx + 0xa6]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa6u)), false));
    // 1501:4f60  sub si, word ptr fs:[bp + 0xa6]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa6u)), false));
    // 1501:4f65  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4f67  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4f68  add si, word ptr gs:[bx + 0xa8]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa8u)), false));
    // 1501:4f6d  sub si, word ptr fs:[bp + 0xa8]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa8u)), false));
    // 1501:4f72  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4f74  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4f75  add si, word ptr gs:[bx + 0xaa]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xaau)), false));
    // 1501:4f7a  sub si, word ptr fs:[bp + 0xaa]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xaau)), false));
    // 1501:4f7f  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4f81  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4f82  add si, word ptr gs:[bx + 0xac]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xacu)), false));
    // 1501:4f87  sub si, word ptr fs:[bp + 0xac]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xacu)), false));
    // 1501:4f8c  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4f8e  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4f8f  add si, word ptr gs:[bx + 0xae]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xaeu)), false));
    // 1501:4f94  sub si, word ptr fs:[bp + 0xae]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xaeu)), false));
    // 1501:4f99  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4f9b  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4f9c  add si, word ptr gs:[bx + 0xb0]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb0u)), false));
    // 1501:4fa1  sub si, word ptr fs:[bp + 0xb0]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb0u)), false));
    // 1501:4fa6  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4fa8  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4fa9  add si, word ptr gs:[bx + 0xb2]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb2u)), false));
    // 1501:4fae  sub si, word ptr fs:[bp + 0xb2]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb2u)), false));
    // 1501:4fb3  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4fb5  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4fb6  add si, word ptr gs:[bx + 0xb4]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb4u)), false));
    // 1501:4fbb  sub si, word ptr fs:[bp + 0xb4]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb4u)), false));
    // 1501:4fc0  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4fc2  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4fc3  add si, word ptr gs:[bx + 0xb6]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb6u)), false));
    // 1501:4fc8  sub si, word ptr fs:[bp + 0xb6]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb6u)), false));
    // 1501:4fcd  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4fcf  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4fd0  add si, word ptr gs:[bx + 0xb8]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb8u)), false));
    // 1501:4fd5  sub si, word ptr fs:[bp + 0xb8]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb8u)), false));
    // 1501:4fda  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4fdc  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4fdd  add si, word ptr gs:[bx + 0xba]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xbau)), false));
    // 1501:4fe2  sub si, word ptr fs:[bp + 0xba]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xbau)), false));
    // 1501:4fe7  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4fe9  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4fea  add si, word ptr gs:[bx + 0xbc]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xbcu)), false));
    // 1501:4fef  sub si, word ptr fs:[bp + 0xbc]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xbcu)), false));
    // 1501:4ff4  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:4ff6  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:4ff7  add si, word ptr gs:[bx + 0xbe]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xbeu)), false));
    // 1501:4ffc  sub si, word ptr fs:[bp + 0xbe]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xbeu)), false));
    // 1501:5001  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5003  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5004  add si, word ptr gs:[bx + 0xc0]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc0u)), false));
    // 1501:5009  sub si, word ptr fs:[bp + 0xc0]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc0u)), false));
    // 1501:500e  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5010  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5011  add si, word ptr gs:[bx + 0xc2]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc2u)), false));
    // 1501:5016  sub si, word ptr fs:[bp + 0xc2]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc2u)), false));
    // 1501:501b  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:501d  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:501e  add si, word ptr gs:[bx + 0xc4]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc4u)), false));
    // 1501:5023  sub si, word ptr fs:[bp + 0xc4]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc4u)), false));
    // 1501:5028  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:502a  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:502b  add si, word ptr gs:[bx + 0xc6]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc6u)), false));
    // 1501:5030  sub si, word ptr fs:[bp + 0xc6]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc6u)), false));
    // 1501:5035  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5037  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5038  add si, word ptr gs:[bx + 0xc8]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc8u)), false));
    // 1501:503d  sub si, word ptr fs:[bp + 0xc8]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc8u)), false));
    // 1501:5042  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5044  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5045  add si, word ptr gs:[bx + 0xca]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xcau)), false));
    // 1501:504a  sub si, word ptr fs:[bp + 0xca]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xcau)), false));
    // 1501:504f  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5051  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5052  add si, word ptr gs:[bx + 0xcc]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xccu)), false));
    // 1501:5057  sub si, word ptr fs:[bp + 0xcc]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xccu)), false));
    // 1501:505c  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:505e  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:505f  add si, word ptr gs:[bx + 0xce]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xceu)), false));
    // 1501:5064  sub si, word ptr fs:[bp + 0xce]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xceu)), false));
    // 1501:5069  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:506b  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:506c  add si, word ptr gs:[bx + 0xd0]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd0u)), false));
    // 1501:5071  sub si, word ptr fs:[bp + 0xd0]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd0u)), false));
    // 1501:5076  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5078  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5079  add si, word ptr gs:[bx + 0xd2]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd2u)), false));
    // 1501:507e  sub si, word ptr fs:[bp + 0xd2]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd2u)), false));
    // 1501:5083  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5085  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5086  add si, word ptr gs:[bx + 0xd4]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd4u)), false));
    // 1501:508b  sub si, word ptr fs:[bp + 0xd4]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd4u)), false));
    // 1501:5090  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5092  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5093  add si, word ptr gs:[bx + 0xd6]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd6u)), false));
    // 1501:5098  sub si, word ptr fs:[bp + 0xd6]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd6u)), false));
    // 1501:509d  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:509f  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:50a0  add si, word ptr gs:[bx + 0xd8]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd8u)), false));
    // 1501:50a5  sub si, word ptr fs:[bp + 0xd8]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd8u)), false));
    // 1501:50aa  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:50ac  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:50ad  add si, word ptr gs:[bx + 0xda]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xdau)), false));
    // 1501:50b2  sub si, word ptr fs:[bp + 0xda]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xdau)), false));
    // 1501:50b7  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:50b9  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:50ba  add si, word ptr gs:[bx + 0xdc]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xdcu)), true));
L1a0cf:
    if (c.tracing) c.traceAt(0x1a0cf);
    // 1501:50bf  sub si, word ptr fs:[bp + 0xdc]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xdcu)), false));
    // 1501:50c4  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:50c6  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:50c7  add si, word ptr gs:[bx + 0xde]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xdeu)), false));
    // 1501:50cc  sub si, word ptr fs:[bp + 0xde]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xdeu)), false));
    // 1501:50d1  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:50d3  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:50d4  add si, word ptr gs:[bx + 0xe0]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe0u)), false));
    // 1501:50d9  sub si, word ptr fs:[bp + 0xe0]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe0u)), false));
    // 1501:50de  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:50e0  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:50e1  add si, word ptr gs:[bx + 0xe2]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe2u)), false));
    // 1501:50e6  sub si, word ptr fs:[bp + 0xe2]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe2u)), false));
    // 1501:50eb  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:50ed  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:50ee  add si, word ptr gs:[bx + 0xe4]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe4u)), false));
    // 1501:50f3  sub si, word ptr fs:[bp + 0xe4]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe4u)), false));
    // 1501:50f8  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:50fa  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:50fb  add si, word ptr gs:[bx + 0xe6]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe6u)), false));
    // 1501:5100  sub si, word ptr fs:[bp + 0xe6]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe6u)), false));
    // 1501:5105  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5107  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5108  add si, word ptr gs:[bx + 0xe8]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe8u)), false));
    // 1501:510d  sub si, word ptr fs:[bp + 0xe8]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe8u)), false));
    // 1501:5112  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5114  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5115  add si, word ptr gs:[bx + 0xea]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xeau)), false));
    // 1501:511a  sub si, word ptr fs:[bp + 0xea]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xeau)), false));
    // 1501:511f  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5121  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5122  add si, word ptr gs:[bx + 0xec]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xecu)), false));
    // 1501:5127  sub si, word ptr fs:[bp + 0xec]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xecu)), false));
    // 1501:512c  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:512e  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:512f  add si, word ptr gs:[bx + 0xee]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xeeu)), false));
    // 1501:5134  sub si, word ptr fs:[bp + 0xee]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xeeu)), false));
    // 1501:5139  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:513b  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:513c  add si, word ptr gs:[bx + 0xf0]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf0u)), false));
    // 1501:5141  sub si, word ptr fs:[bp + 0xf0]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf0u)), false));
    // 1501:5146  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5148  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5149  add si, word ptr gs:[bx + 0xf2]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf2u)), false));
    // 1501:514e  sub si, word ptr fs:[bp + 0xf2]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf2u)), false));
    // 1501:5153  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5155  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5156  add si, word ptr gs:[bx + 0xf4]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf4u)), false));
    // 1501:515b  sub si, word ptr fs:[bp + 0xf4]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf4u)), false));
    // 1501:5160  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5162  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5163  add si, word ptr gs:[bx + 0xf6]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf6u)), false));
    // 1501:5168  sub si, word ptr fs:[bp + 0xf6]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf6u)), false));
    // 1501:516d  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:516f  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5170  add si, word ptr gs:[bx + 0xf8]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf8u)), false));
    // 1501:5175  sub si, word ptr fs:[bp + 0xf8]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf8u)), false));
    // 1501:517a  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:517c  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:517d  add si, word ptr gs:[bx + 0xfa]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xfau)), false));
    // 1501:5182  sub si, word ptr fs:[bp + 0xfa]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xfau)), false));
    // 1501:5187  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5189  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:518a  add si, word ptr gs:[bx + 0xfc]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xfcu)), false));
    // 1501:518f  sub si, word ptr fs:[bp + 0xfc]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xfcu)), false));
    // 1501:5194  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5196  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5197  add si, word ptr gs:[bx + 0xfe]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xfeu)), false));
    // 1501:519c  sub si, word ptr fs:[bp + 0xfe]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xfeu)), false));
    // 1501:51a1  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:51a3  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:51a4  add si, word ptr gs:[bx + 0x100]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x100u)), false));
    // 1501:51a9  sub si, word ptr fs:[bp + 0x100]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x100u)), false));
    // 1501:51ae  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:51b0  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:51b1  add si, word ptr gs:[bx + 0x102]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x102u)), false));
    // 1501:51b6  sub si, word ptr fs:[bp + 0x102]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x102u)), false));
    // 1501:51bb  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:51bd  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:51be  add si, word ptr gs:[bx + 0x104]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x104u)), false));
    // 1501:51c3  sub si, word ptr fs:[bp + 0x104]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x104u)), false));
    // 1501:51c8  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:51ca  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:51cb  add si, word ptr gs:[bx + 0x106]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x106u)), false));
    // 1501:51d0  sub si, word ptr fs:[bp + 0x106]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x106u)), false));
    // 1501:51d5  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:51d7  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:51d8  add si, word ptr gs:[bx + 0x108]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x108u)), false));
    // 1501:51dd  sub si, word ptr fs:[bp + 0x108]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x108u)), false));
    // 1501:51e2  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:51e4  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:51e5  add si, word ptr gs:[bx + 0x10a]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10au)), false));
    // 1501:51ea  sub si, word ptr fs:[bp + 0x10a]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10au)), false));
    // 1501:51ef  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:51f1  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:51f2  add si, word ptr gs:[bx + 0x10c]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10cu)), false));
    // 1501:51f7  sub si, word ptr fs:[bp + 0x10c]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10cu)), false));
    // 1501:51fc  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:51fe  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:51ff  add si, word ptr gs:[bx + 0x10e]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10eu)), false));
    // 1501:5204  sub si, word ptr fs:[bp + 0x10e]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10eu)), false));
    // 1501:5209  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:520b  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:520c  add si, word ptr gs:[bx + 0x110]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x110u)), false));
    // 1501:5211  sub si, word ptr fs:[bp + 0x110]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x110u)), false));
    // 1501:5216  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5218  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5219  add si, word ptr gs:[bx + 0x112]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x112u)), false));
    // 1501:521e  sub si, word ptr fs:[bp + 0x112]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x112u)), false));
    // 1501:5223  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5225  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5226  add si, word ptr gs:[bx + 0x114]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x114u)), false));
    // 1501:522b  sub si, word ptr fs:[bp + 0x114]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x114u)), false));
    // 1501:5230  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5232  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5233  add si, word ptr gs:[bx + 0x116]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x116u)), false));
    // 1501:5238  sub si, word ptr fs:[bp + 0x116]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x116u)), false));
    // 1501:523d  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:523f  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5240  add si, word ptr gs:[bx + 0x118]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x118u)), false));
    // 1501:5245  sub si, word ptr fs:[bp + 0x118]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x118u)), false));
    // 1501:524a  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:524c  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:524d  add si, word ptr gs:[bx + 0x11a]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x11au)), false));
    // 1501:5252  sub si, word ptr fs:[bp + 0x11a]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x11au)), false));
    // 1501:5257  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5259  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:525a  add si, word ptr gs:[bx + 0x11c]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x11cu)), false));
    // 1501:525f  sub si, word ptr fs:[bp + 0x11c]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x11cu)), false));
    // 1501:5264  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5266  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5267  add si, word ptr gs:[bx + 0x11e]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x11eu)), false));
    // 1501:526c  sub si, word ptr fs:[bp + 0x11e]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x11eu)), false));
    // 1501:5271  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5273  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5274  add si, word ptr gs:[bx + 0x120]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x120u)), false));
    // 1501:5279  sub si, word ptr fs:[bp + 0x120]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x120u)), false));
    // 1501:527e  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5280  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5281  add si, word ptr gs:[bx + 0x122]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x122u)), false));
    // 1501:5286  sub si, word ptr fs:[bp + 0x122]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x122u)), false));
    // 1501:528b  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:528d  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:528e  add si, word ptr gs:[bx + 0x124]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x124u)), false));
    // 1501:5293  sub si, word ptr fs:[bp + 0x124]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x124u)), false));
    // 1501:5298  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:529a  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:529b  add si, word ptr gs:[bx + 0x126]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x126u)), true));
L1a2b0:
    if (c.tracing) c.traceAt(0x1a2b0);
    // 1501:52a0  sub si, word ptr fs:[bp + 0x126]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x126u)), false));
    // 1501:52a5  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:52a7  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:52a8  add si, word ptr gs:[bx + 0x128]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x128u)), false));
    // 1501:52ad  sub si, word ptr fs:[bp + 0x128]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x128u)), false));
    // 1501:52b2  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:52b4  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:52b5  add si, word ptr gs:[bx + 0x12a]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12au)), false));
    // 1501:52ba  sub si, word ptr fs:[bp + 0x12a]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12au)), false));
    // 1501:52bf  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:52c1  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:52c2  add si, word ptr gs:[bx + 0x12c]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12cu)), false));
    // 1501:52c7  sub si, word ptr fs:[bp + 0x12c]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12cu)), false));
    // 1501:52cc  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:52ce  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:52cf  add si, word ptr gs:[bx + 0x12e]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12eu)), false));
    // 1501:52d4  sub si, word ptr fs:[bp + 0x12e]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12eu)), false));
    // 1501:52d9  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:52db  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:52dc  add si, word ptr gs:[bx + 0x130]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x130u)), false));
    // 1501:52e1  sub si, word ptr fs:[bp + 0x130]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x130u)), false));
    // 1501:52e6  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:52e8  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:52e9  add si, word ptr gs:[bx + 0x132]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x132u)), false));
    // 1501:52ee  sub si, word ptr fs:[bp + 0x132]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x132u)), false));
    // 1501:52f3  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:52f5  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:52f6  add si, word ptr gs:[bx + 0x134]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x134u)), false));
    // 1501:52fb  sub si, word ptr fs:[bp + 0x134]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x134u)), false));
    // 1501:5300  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5302  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5303  add si, word ptr gs:[bx + 0x136]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x136u)), false));
    // 1501:5308  sub si, word ptr fs:[bp + 0x136]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x136u)), false));
    // 1501:530d  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:530f  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5310  add si, word ptr gs:[bx + 0x138]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x138u)), false));
    // 1501:5315  sub si, word ptr fs:[bp + 0x138]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x138u)), false));
    // 1501:531a  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:531c  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:531d  add si, word ptr gs:[bx + 0x13a]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x13au)), false));
    // 1501:5322  sub si, word ptr fs:[bp + 0x13a]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x13au)), false));
    // 1501:5327  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5329  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:532a  add si, word ptr gs:[bx + 0x13c]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x13cu)), false));
    // 1501:532f  sub si, word ptr fs:[bp + 0x13c]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x13cu)), false));
    // 1501:5334  mov al, byte ptr [si]  [x16501]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5336  stosb byte ptr es:[di], al  [x16501]
    c.stos<8, false>(0);
    // 1501:5337  add si, word ptr gs:[bx + 0x13e]  [x16501]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x13eu)), false));
    // 1501:533c  sub si, word ptr fs:[bp + 0x13e]  [x16501]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x13eu)), true));
    // 1501:5341  jmp 0x4b8e  [x16501]
    goto L19b9e;
L1a354:
    if (c.tracing) c.traceAt(0x1a354);
    // 1501:5344  neg ax  [x12520]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:5346  xchg ah, al  [x12520]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:5348  mov bx, ax  [x12520]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:534a  mov ax, word ptr cs:[0xd52]  [x12520]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd52u)));
    // 1501:534e  sub ax, word ptr cs:[0xd4e]  [x12520]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0xd4eu)), true));
    // 1501:5353  jns 0x5358  [x12520]
    if (!c.sf) goto L1a368;
L1a365:
    if (c.tracing) c.traceAt(0x1a365);
    // 1501:5355  jmp 0x5afe  [x5405]
    goto L1ab0e;
L1a368:
    if (c.tracing) c.traceAt(0x1a368);
    // 1501:5358  xchg ah, al  [x7115]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:535a  mov bp, ax  [x7115]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:535c  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:535e  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:535f  sub si, word ptr gs:[bx]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x)), false));
    // 1501:5362  add si, word ptr fs:[bp]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x)), false));
    // 1501:5366  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5368  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5369  sub si, word ptr gs:[bx + 2]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2u)), false));
    // 1501:536d  add si, word ptr fs:[bp + 2]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2u)), false));
    // 1501:5371  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5373  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5374  sub si, word ptr gs:[bx + 4]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4u)), false));
    // 1501:5378  add si, word ptr fs:[bp + 4]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4u)), false));
    // 1501:537c  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:537e  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:537f  sub si, word ptr gs:[bx + 6]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 1501:5383  add si, word ptr fs:[bp + 6]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6u)), false));
    // 1501:5387  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5389  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:538a  sub si, word ptr gs:[bx + 8]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8u)), false));
    // 1501:538e  add si, word ptr fs:[bp + 8]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8u)), false));
    // 1501:5392  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5394  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5395  sub si, word ptr gs:[bx + 0xa]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xau)), false));
    // 1501:5399  add si, word ptr fs:[bp + 0xa]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xau)), false));
    // 1501:539d  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:539f  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:53a0  sub si, word ptr gs:[bx + 0xc]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xcu)), false));
    // 1501:53a4  add si, word ptr fs:[bp + 0xc]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xcu)), false));
    // 1501:53a8  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:53aa  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:53ab  sub si, word ptr gs:[bx + 0xe]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 1501:53af  add si, word ptr fs:[bp + 0xe]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xeu)), false));
    // 1501:53b3  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:53b5  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:53b6  sub si, word ptr gs:[bx + 0x10]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10u)), false));
    // 1501:53ba  add si, word ptr fs:[bp + 0x10]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10u)), false));
    // 1501:53be  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:53c0  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:53c1  sub si, word ptr gs:[bx + 0x12]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12u)), false));
    // 1501:53c5  add si, word ptr fs:[bp + 0x12]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12u)), false));
    // 1501:53c9  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:53cb  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:53cc  sub si, word ptr gs:[bx + 0x14]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x14u)), false));
    // 1501:53d0  add si, word ptr fs:[bp + 0x14]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x14u)), false));
    // 1501:53d4  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:53d6  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:53d7  sub si, word ptr gs:[bx + 0x16]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x16u)), false));
    // 1501:53db  add si, word ptr fs:[bp + 0x16]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x16u)), false));
    // 1501:53df  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:53e1  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:53e2  sub si, word ptr gs:[bx + 0x18]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x18u)), false));
    // 1501:53e6  add si, word ptr fs:[bp + 0x18]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x18u)), false));
    // 1501:53ea  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:53ec  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:53ed  sub si, word ptr gs:[bx + 0x1a]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x1au)), false));
    // 1501:53f1  add si, word ptr fs:[bp + 0x1a]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x1au)), false));
    // 1501:53f5  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:53f7  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:53f8  sub si, word ptr gs:[bx + 0x1c]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x1cu)), false));
    // 1501:53fc  add si, word ptr fs:[bp + 0x1c]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x1cu)), false));
    // 1501:5400  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5402  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5403  sub si, word ptr gs:[bx + 0x1e]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x1eu)), false));
    // 1501:5407  add si, word ptr fs:[bp + 0x1e]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x1eu)), false));
    // 1501:540b  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:540d  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:540e  sub si, word ptr gs:[bx + 0x20]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x20u)), false));
    // 1501:5412  add si, word ptr fs:[bp + 0x20]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x20u)), false));
    // 1501:5416  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5418  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5419  sub si, word ptr gs:[bx + 0x22]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x22u)), false));
    // 1501:541d  add si, word ptr fs:[bp + 0x22]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x22u)), false));
    // 1501:5421  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5423  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5424  sub si, word ptr gs:[bx + 0x24]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x24u)), false));
    // 1501:5428  add si, word ptr fs:[bp + 0x24]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x24u)), false));
    // 1501:542c  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:542e  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:542f  sub si, word ptr gs:[bx + 0x26]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x26u)), false));
    // 1501:5433  add si, word ptr fs:[bp + 0x26]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x26u)), false));
    // 1501:5437  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5439  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:543a  sub si, word ptr gs:[bx + 0x28]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x28u)), false));
    // 1501:543e  add si, word ptr fs:[bp + 0x28]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x28u)), false));
    // 1501:5442  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5444  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5445  sub si, word ptr gs:[bx + 0x2a]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2au)), false));
    // 1501:5449  add si, word ptr fs:[bp + 0x2a]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2au)), false));
    // 1501:544d  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:544f  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5450  sub si, word ptr gs:[bx + 0x2c]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2cu)), false));
    // 1501:5454  add si, word ptr fs:[bp + 0x2c]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2cu)), false));
    // 1501:5458  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:545a  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:545b  sub si, word ptr gs:[bx + 0x2e]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2eu)), false));
    // 1501:545f  add si, word ptr fs:[bp + 0x2e]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2eu)), false));
    // 1501:5463  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5465  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5466  sub si, word ptr gs:[bx + 0x30]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x30u)), false));
    // 1501:546a  add si, word ptr fs:[bp + 0x30]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x30u)), false));
    // 1501:546e  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5470  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5471  sub si, word ptr gs:[bx + 0x32]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x32u)), false));
    // 1501:5475  add si, word ptr fs:[bp + 0x32]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x32u)), false));
    // 1501:5479  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:547b  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:547c  sub si, word ptr gs:[bx + 0x34]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x34u)), false));
    // 1501:5480  add si, word ptr fs:[bp + 0x34]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x34u)), false));
    // 1501:5484  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5486  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5487  sub si, word ptr gs:[bx + 0x36]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x36u)), false));
    // 1501:548b  add si, word ptr fs:[bp + 0x36]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x36u)), false));
    // 1501:548f  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5491  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5492  sub si, word ptr gs:[bx + 0x38]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x38u)), false));
    // 1501:5496  add si, word ptr fs:[bp + 0x38]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x38u)), false));
    // 1501:549a  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:549c  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:549d  sub si, word ptr gs:[bx + 0x3a]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x3au)), false));
    // 1501:54a1  add si, word ptr fs:[bp + 0x3a]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x3au)), false));
    // 1501:54a5  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:54a7  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:54a8  sub si, word ptr gs:[bx + 0x3c]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x3cu)), false));
    // 1501:54ac  add si, word ptr fs:[bp + 0x3c]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x3cu)), false));
    // 1501:54b0  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:54b2  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:54b3  sub si, word ptr gs:[bx + 0x3e]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x3eu)), false));
    // 1501:54b7  add si, word ptr fs:[bp + 0x3e]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x3eu)), false));
    // 1501:54bb  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:54bd  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:54be  sub si, word ptr gs:[bx + 0x40]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x40u)), false));
    // 1501:54c2  add si, word ptr fs:[bp + 0x40]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x40u)), false));
    // 1501:54c6  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:54c8  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:54c9  sub si, word ptr gs:[bx + 0x42]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x42u)), false));
    // 1501:54cd  add si, word ptr fs:[bp + 0x42]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x42u)), false));
    // 1501:54d1  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:54d3  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:54d4  sub si, word ptr gs:[bx + 0x44]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x44u)), false));
    // 1501:54d8  add si, word ptr fs:[bp + 0x44]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x44u)), false));
    // 1501:54dc  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:54de  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:54df  sub si, word ptr gs:[bx + 0x46]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x46u)), false));
    // 1501:54e3  add si, word ptr fs:[bp + 0x46]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x46u)), false));
    // 1501:54e7  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:54e9  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:54ea  sub si, word ptr gs:[bx + 0x48]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x48u)), false));
    // 1501:54ee  add si, word ptr fs:[bp + 0x48]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x48u)), true));
L1a502:
    if (c.tracing) c.traceAt(0x1a502);
    // 1501:54f2  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:54f4  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:54f5  sub si, word ptr gs:[bx + 0x4a]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4au)), false));
    // 1501:54f9  add si, word ptr fs:[bp + 0x4a]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4au)), false));
    // 1501:54fd  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:54ff  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5500  sub si, word ptr gs:[bx + 0x4c]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4cu)), false));
    // 1501:5504  add si, word ptr fs:[bp + 0x4c]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4cu)), false));
    // 1501:5508  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:550a  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:550b  sub si, word ptr gs:[bx + 0x4e]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4eu)), false));
    // 1501:550f  add si, word ptr fs:[bp + 0x4e]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4eu)), false));
    // 1501:5513  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5515  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5516  sub si, word ptr gs:[bx + 0x50]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x50u)), false));
    // 1501:551a  add si, word ptr fs:[bp + 0x50]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x50u)), false));
    // 1501:551e  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5520  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5521  sub si, word ptr gs:[bx + 0x52]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x52u)), false));
    // 1501:5525  add si, word ptr fs:[bp + 0x52]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x52u)), false));
    // 1501:5529  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:552b  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:552c  sub si, word ptr gs:[bx + 0x54]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x54u)), false));
    // 1501:5530  add si, word ptr fs:[bp + 0x54]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x54u)), false));
    // 1501:5534  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5536  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5537  sub si, word ptr gs:[bx + 0x56]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x56u)), false));
    // 1501:553b  add si, word ptr fs:[bp + 0x56]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x56u)), false));
    // 1501:553f  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5541  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5542  sub si, word ptr gs:[bx + 0x58]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x58u)), false));
    // 1501:5546  add si, word ptr fs:[bp + 0x58]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x58u)), false));
    // 1501:554a  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:554c  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:554d  sub si, word ptr gs:[bx + 0x5a]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x5au)), false));
    // 1501:5551  add si, word ptr fs:[bp + 0x5a]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x5au)), false));
    // 1501:5555  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5557  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5558  sub si, word ptr gs:[bx + 0x5c]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x5cu)), false));
    // 1501:555c  add si, word ptr fs:[bp + 0x5c]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x5cu)), false));
    // 1501:5560  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5562  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5563  sub si, word ptr gs:[bx + 0x5e]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x5eu)), false));
    // 1501:5567  add si, word ptr fs:[bp + 0x5e]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x5eu)), false));
    // 1501:556b  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:556d  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:556e  sub si, word ptr gs:[bx + 0x60]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x60u)), false));
    // 1501:5572  add si, word ptr fs:[bp + 0x60]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x60u)), false));
    // 1501:5576  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5578  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5579  sub si, word ptr gs:[bx + 0x62]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x62u)), false));
    // 1501:557d  add si, word ptr fs:[bp + 0x62]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x62u)), false));
    // 1501:5581  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5583  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5584  sub si, word ptr gs:[bx + 0x64]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x64u)), false));
    // 1501:5588  add si, word ptr fs:[bp + 0x64]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x64u)), false));
    // 1501:558c  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:558e  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:558f  sub si, word ptr gs:[bx + 0x66]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x66u)), false));
    // 1501:5593  add si, word ptr fs:[bp + 0x66]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x66u)), false));
    // 1501:5597  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5599  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:559a  sub si, word ptr gs:[bx + 0x68]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x68u)), false));
    // 1501:559e  add si, word ptr fs:[bp + 0x68]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x68u)), false));
    // 1501:55a2  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:55a4  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:55a5  sub si, word ptr gs:[bx + 0x6a]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6au)), false));
    // 1501:55a9  add si, word ptr fs:[bp + 0x6a]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6au)), false));
    // 1501:55ad  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:55af  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:55b0  sub si, word ptr gs:[bx + 0x6c]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6cu)), false));
    // 1501:55b4  add si, word ptr fs:[bp + 0x6c]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6cu)), false));
    // 1501:55b8  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:55ba  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:55bb  sub si, word ptr gs:[bx + 0x6e]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6eu)), false));
    // 1501:55bf  add si, word ptr fs:[bp + 0x6e]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6eu)), false));
    // 1501:55c3  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:55c5  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:55c6  sub si, word ptr gs:[bx + 0x70]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x70u)), false));
    // 1501:55ca  add si, word ptr fs:[bp + 0x70]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x70u)), false));
    // 1501:55ce  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:55d0  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:55d1  sub si, word ptr gs:[bx + 0x72]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x72u)), false));
    // 1501:55d5  add si, word ptr fs:[bp + 0x72]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x72u)), false));
    // 1501:55d9  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:55db  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:55dc  sub si, word ptr gs:[bx + 0x74]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x74u)), false));
    // 1501:55e0  add si, word ptr fs:[bp + 0x74]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x74u)), false));
    // 1501:55e4  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:55e6  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:55e7  sub si, word ptr gs:[bx + 0x76]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x76u)), false));
    // 1501:55eb  add si, word ptr fs:[bp + 0x76]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x76u)), false));
    // 1501:55ef  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:55f1  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:55f2  sub si, word ptr gs:[bx + 0x78]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x78u)), false));
    // 1501:55f6  add si, word ptr fs:[bp + 0x78]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x78u)), false));
    // 1501:55fa  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:55fc  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:55fd  sub si, word ptr gs:[bx + 0x7a]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x7au)), false));
    // 1501:5601  add si, word ptr fs:[bp + 0x7a]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x7au)), false));
    // 1501:5605  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5607  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5608  sub si, word ptr gs:[bx + 0x7c]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x7cu)), false));
    // 1501:560c  add si, word ptr fs:[bp + 0x7c]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x7cu)), false));
    // 1501:5610  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5612  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5613  sub si, word ptr gs:[bx + 0x7e]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x7eu)), false));
    // 1501:5617  add si, word ptr fs:[bp + 0x7e]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x7eu)), false));
    // 1501:561b  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:561d  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:561e  sub si, word ptr gs:[bx + 0x80]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x80u)), false));
    // 1501:5623  add si, word ptr fs:[bp + 0x80]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x80u)), false));
    // 1501:5628  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:562a  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:562b  sub si, word ptr gs:[bx + 0x82]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x82u)), false));
    // 1501:5630  add si, word ptr fs:[bp + 0x82]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x82u)), false));
    // 1501:5635  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5637  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5638  sub si, word ptr gs:[bx + 0x84]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x84u)), false));
    // 1501:563d  add si, word ptr fs:[bp + 0x84]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x84u)), false));
    // 1501:5642  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5644  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5645  sub si, word ptr gs:[bx + 0x86]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x86u)), false));
    // 1501:564a  add si, word ptr fs:[bp + 0x86]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x86u)), false));
    // 1501:564f  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5651  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5652  sub si, word ptr gs:[bx + 0x88]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x88u)), false));
    // 1501:5657  add si, word ptr fs:[bp + 0x88]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x88u)), false));
    // 1501:565c  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:565e  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:565f  sub si, word ptr gs:[bx + 0x8a]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8au)), false));
    // 1501:5664  add si, word ptr fs:[bp + 0x8a]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8au)), false));
    // 1501:5669  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:566b  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:566c  sub si, word ptr gs:[bx + 0x8c]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8cu)), false));
    // 1501:5671  add si, word ptr fs:[bp + 0x8c]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8cu)), false));
    // 1501:5676  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5678  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5679  sub si, word ptr gs:[bx + 0x8e]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8eu)), false));
    // 1501:567e  add si, word ptr fs:[bp + 0x8e]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8eu)), false));
    // 1501:5683  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5685  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5686  sub si, word ptr gs:[bx + 0x90]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x90u)), false));
    // 1501:568b  add si, word ptr fs:[bp + 0x90]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x90u)), false));
    // 1501:5690  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5692  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5693  sub si, word ptr gs:[bx + 0x92]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x92u)), false));
    // 1501:5698  add si, word ptr fs:[bp + 0x92]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x92u)), true));
L1a6ad:
    if (c.tracing) c.traceAt(0x1a6ad);
    // 1501:569d  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:569f  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:56a0  sub si, word ptr gs:[bx + 0x94]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x94u)), false));
    // 1501:56a5  add si, word ptr fs:[bp + 0x94]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x94u)), false));
    // 1501:56aa  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:56ac  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:56ad  sub si, word ptr gs:[bx + 0x96]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x96u)), false));
    // 1501:56b2  add si, word ptr fs:[bp + 0x96]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x96u)), false));
    // 1501:56b7  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:56b9  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:56ba  sub si, word ptr gs:[bx + 0x98]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x98u)), false));
    // 1501:56bf  add si, word ptr fs:[bp + 0x98]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x98u)), false));
    // 1501:56c4  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:56c6  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:56c7  sub si, word ptr gs:[bx + 0x9a]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x9au)), false));
    // 1501:56cc  add si, word ptr fs:[bp + 0x9a]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x9au)), false));
    // 1501:56d1  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:56d3  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:56d4  sub si, word ptr gs:[bx + 0x9c]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x9cu)), false));
    // 1501:56d9  add si, word ptr fs:[bp + 0x9c]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x9cu)), false));
    // 1501:56de  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:56e0  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:56e1  sub si, word ptr gs:[bx + 0x9e]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x9eu)), false));
    // 1501:56e6  add si, word ptr fs:[bp + 0x9e]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x9eu)), false));
    // 1501:56eb  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:56ed  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:56ee  sub si, word ptr gs:[bx + 0xa0]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa0u)), false));
    // 1501:56f3  add si, word ptr fs:[bp + 0xa0]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa0u)), false));
    // 1501:56f8  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:56fa  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:56fb  sub si, word ptr gs:[bx + 0xa2]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa2u)), false));
    // 1501:5700  add si, word ptr fs:[bp + 0xa2]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa2u)), false));
    // 1501:5705  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5707  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5708  sub si, word ptr gs:[bx + 0xa4]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa4u)), false));
    // 1501:570d  add si, word ptr fs:[bp + 0xa4]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa4u)), false));
    // 1501:5712  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5714  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5715  sub si, word ptr gs:[bx + 0xa6]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa6u)), false));
    // 1501:571a  add si, word ptr fs:[bp + 0xa6]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa6u)), false));
    // 1501:571f  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5721  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5722  sub si, word ptr gs:[bx + 0xa8]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa8u)), false));
    // 1501:5727  add si, word ptr fs:[bp + 0xa8]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa8u)), false));
    // 1501:572c  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:572e  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:572f  sub si, word ptr gs:[bx + 0xaa]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xaau)), false));
    // 1501:5734  add si, word ptr fs:[bp + 0xaa]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xaau)), false));
    // 1501:5739  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:573b  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:573c  sub si, word ptr gs:[bx + 0xac]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xacu)), false));
    // 1501:5741  add si, word ptr fs:[bp + 0xac]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xacu)), false));
    // 1501:5746  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5748  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5749  sub si, word ptr gs:[bx + 0xae]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xaeu)), false));
    // 1501:574e  add si, word ptr fs:[bp + 0xae]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xaeu)), false));
    // 1501:5753  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5755  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5756  sub si, word ptr gs:[bx + 0xb0]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb0u)), false));
    // 1501:575b  add si, word ptr fs:[bp + 0xb0]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb0u)), false));
    // 1501:5760  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5762  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5763  sub si, word ptr gs:[bx + 0xb2]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb2u)), false));
    // 1501:5768  add si, word ptr fs:[bp + 0xb2]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb2u)), false));
    // 1501:576d  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:576f  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5770  sub si, word ptr gs:[bx + 0xb4]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb4u)), false));
    // 1501:5775  add si, word ptr fs:[bp + 0xb4]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb4u)), false));
    // 1501:577a  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:577c  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:577d  sub si, word ptr gs:[bx + 0xb6]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb6u)), false));
    // 1501:5782  add si, word ptr fs:[bp + 0xb6]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb6u)), false));
    // 1501:5787  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5789  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:578a  sub si, word ptr gs:[bx + 0xb8]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb8u)), false));
    // 1501:578f  add si, word ptr fs:[bp + 0xb8]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb8u)), false));
    // 1501:5794  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5796  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5797  sub si, word ptr gs:[bx + 0xba]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xbau)), false));
    // 1501:579c  add si, word ptr fs:[bp + 0xba]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xbau)), false));
    // 1501:57a1  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:57a3  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:57a4  sub si, word ptr gs:[bx + 0xbc]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xbcu)), false));
    // 1501:57a9  add si, word ptr fs:[bp + 0xbc]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xbcu)), false));
    // 1501:57ae  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:57b0  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:57b1  sub si, word ptr gs:[bx + 0xbe]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xbeu)), false));
    // 1501:57b6  add si, word ptr fs:[bp + 0xbe]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xbeu)), false));
    // 1501:57bb  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:57bd  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:57be  sub si, word ptr gs:[bx + 0xc0]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc0u)), false));
    // 1501:57c3  add si, word ptr fs:[bp + 0xc0]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc0u)), false));
    // 1501:57c8  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:57ca  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:57cb  sub si, word ptr gs:[bx + 0xc2]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc2u)), false));
    // 1501:57d0  add si, word ptr fs:[bp + 0xc2]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc2u)), false));
    // 1501:57d5  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:57d7  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:57d8  sub si, word ptr gs:[bx + 0xc4]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc4u)), false));
    // 1501:57dd  add si, word ptr fs:[bp + 0xc4]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc4u)), false));
    // 1501:57e2  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:57e4  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:57e5  sub si, word ptr gs:[bx + 0xc6]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc6u)), false));
    // 1501:57ea  add si, word ptr fs:[bp + 0xc6]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc6u)), false));
    // 1501:57ef  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:57f1  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:57f2  sub si, word ptr gs:[bx + 0xc8]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc8u)), false));
    // 1501:57f7  add si, word ptr fs:[bp + 0xc8]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc8u)), false));
    // 1501:57fc  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:57fe  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:57ff  sub si, word ptr gs:[bx + 0xca]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xcau)), false));
    // 1501:5804  add si, word ptr fs:[bp + 0xca]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xcau)), false));
    // 1501:5809  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:580b  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:580c  sub si, word ptr gs:[bx + 0xcc]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xccu)), false));
    // 1501:5811  add si, word ptr fs:[bp + 0xcc]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xccu)), false));
    // 1501:5816  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5818  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5819  sub si, word ptr gs:[bx + 0xce]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xceu)), false));
    // 1501:581e  add si, word ptr fs:[bp + 0xce]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xceu)), false));
    // 1501:5823  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5825  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5826  sub si, word ptr gs:[bx + 0xd0]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd0u)), false));
    // 1501:582b  add si, word ptr fs:[bp + 0xd0]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd0u)), false));
    // 1501:5830  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5832  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5833  sub si, word ptr gs:[bx + 0xd2]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd2u)), false));
    // 1501:5838  add si, word ptr fs:[bp + 0xd2]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd2u)), false));
    // 1501:583d  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:583f  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5840  sub si, word ptr gs:[bx + 0xd4]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd4u)), false));
    // 1501:5845  add si, word ptr fs:[bp + 0xd4]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd4u)), false));
    // 1501:584a  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:584c  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:584d  sub si, word ptr gs:[bx + 0xd6]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd6u)), false));
    // 1501:5852  add si, word ptr fs:[bp + 0xd6]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd6u)), false));
    // 1501:5857  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5859  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:585a  sub si, word ptr gs:[bx + 0xd8]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd8u)), false));
    // 1501:585f  add si, word ptr fs:[bp + 0xd8]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd8u)), false));
    // 1501:5864  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5866  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5867  sub si, word ptr gs:[bx + 0xda]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xdau)), false));
    // 1501:586c  add si, word ptr fs:[bp + 0xda]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xdau)), false));
    // 1501:5871  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5873  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5874  sub si, word ptr gs:[bx + 0xdc]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xdcu)), false));
    // 1501:5879  add si, word ptr fs:[bp + 0xdc]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xdcu)), true));
L1a88e:
    if (c.tracing) c.traceAt(0x1a88e);
    // 1501:587e  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5880  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5881  sub si, word ptr gs:[bx + 0xde]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xdeu)), false));
    // 1501:5886  add si, word ptr fs:[bp + 0xde]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xdeu)), false));
    // 1501:588b  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:588d  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:588e  sub si, word ptr gs:[bx + 0xe0]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe0u)), false));
    // 1501:5893  add si, word ptr fs:[bp + 0xe0]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe0u)), false));
    // 1501:5898  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:589a  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:589b  sub si, word ptr gs:[bx + 0xe2]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe2u)), false));
    // 1501:58a0  add si, word ptr fs:[bp + 0xe2]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe2u)), false));
    // 1501:58a5  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:58a7  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:58a8  sub si, word ptr gs:[bx + 0xe4]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe4u)), false));
    // 1501:58ad  add si, word ptr fs:[bp + 0xe4]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe4u)), false));
    // 1501:58b2  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:58b4  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:58b5  sub si, word ptr gs:[bx + 0xe6]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe6u)), false));
    // 1501:58ba  add si, word ptr fs:[bp + 0xe6]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe6u)), false));
    // 1501:58bf  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:58c1  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:58c2  sub si, word ptr gs:[bx + 0xe8]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe8u)), false));
    // 1501:58c7  add si, word ptr fs:[bp + 0xe8]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe8u)), false));
    // 1501:58cc  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:58ce  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:58cf  sub si, word ptr gs:[bx + 0xea]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xeau)), false));
    // 1501:58d4  add si, word ptr fs:[bp + 0xea]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xeau)), false));
    // 1501:58d9  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:58db  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:58dc  sub si, word ptr gs:[bx + 0xec]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xecu)), false));
    // 1501:58e1  add si, word ptr fs:[bp + 0xec]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xecu)), false));
    // 1501:58e6  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:58e8  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:58e9  sub si, word ptr gs:[bx + 0xee]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xeeu)), false));
    // 1501:58ee  add si, word ptr fs:[bp + 0xee]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xeeu)), false));
    // 1501:58f3  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:58f5  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:58f6  sub si, word ptr gs:[bx + 0xf0]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf0u)), false));
    // 1501:58fb  add si, word ptr fs:[bp + 0xf0]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf0u)), false));
    // 1501:5900  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5902  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5903  sub si, word ptr gs:[bx + 0xf2]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf2u)), false));
    // 1501:5908  add si, word ptr fs:[bp + 0xf2]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf2u)), false));
    // 1501:590d  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:590f  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5910  sub si, word ptr gs:[bx + 0xf4]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf4u)), false));
    // 1501:5915  add si, word ptr fs:[bp + 0xf4]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf4u)), false));
    // 1501:591a  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:591c  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:591d  sub si, word ptr gs:[bx + 0xf6]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf6u)), false));
    // 1501:5922  add si, word ptr fs:[bp + 0xf6]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf6u)), false));
    // 1501:5927  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5929  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:592a  sub si, word ptr gs:[bx + 0xf8]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf8u)), false));
    // 1501:592f  add si, word ptr fs:[bp + 0xf8]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf8u)), false));
    // 1501:5934  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5936  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5937  sub si, word ptr gs:[bx + 0xfa]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xfau)), false));
    // 1501:593c  add si, word ptr fs:[bp + 0xfa]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xfau)), false));
    // 1501:5941  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5943  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5944  sub si, word ptr gs:[bx + 0xfc]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xfcu)), false));
    // 1501:5949  add si, word ptr fs:[bp + 0xfc]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xfcu)), false));
    // 1501:594e  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5950  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5951  sub si, word ptr gs:[bx + 0xfe]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xfeu)), false));
    // 1501:5956  add si, word ptr fs:[bp + 0xfe]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xfeu)), false));
    // 1501:595b  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:595d  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:595e  sub si, word ptr gs:[bx + 0x100]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x100u)), false));
    // 1501:5963  add si, word ptr fs:[bp + 0x100]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x100u)), false));
    // 1501:5968  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:596a  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:596b  sub si, word ptr gs:[bx + 0x102]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x102u)), false));
    // 1501:5970  add si, word ptr fs:[bp + 0x102]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x102u)), false));
    // 1501:5975  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5977  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5978  sub si, word ptr gs:[bx + 0x104]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x104u)), false));
    // 1501:597d  add si, word ptr fs:[bp + 0x104]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x104u)), false));
    // 1501:5982  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5984  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5985  sub si, word ptr gs:[bx + 0x106]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x106u)), false));
    // 1501:598a  add si, word ptr fs:[bp + 0x106]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x106u)), false));
    // 1501:598f  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5991  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5992  sub si, word ptr gs:[bx + 0x108]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x108u)), false));
    // 1501:5997  add si, word ptr fs:[bp + 0x108]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x108u)), false));
    // 1501:599c  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:599e  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:599f  sub si, word ptr gs:[bx + 0x10a]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10au)), false));
    // 1501:59a4  add si, word ptr fs:[bp + 0x10a]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10au)), false));
    // 1501:59a9  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:59ab  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:59ac  sub si, word ptr gs:[bx + 0x10c]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10cu)), false));
    // 1501:59b1  add si, word ptr fs:[bp + 0x10c]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10cu)), false));
    // 1501:59b6  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:59b8  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:59b9  sub si, word ptr gs:[bx + 0x10e]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10eu)), false));
    // 1501:59be  add si, word ptr fs:[bp + 0x10e]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10eu)), false));
    // 1501:59c3  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:59c5  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:59c6  sub si, word ptr gs:[bx + 0x110]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x110u)), false));
    // 1501:59cb  add si, word ptr fs:[bp + 0x110]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x110u)), false));
    // 1501:59d0  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:59d2  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:59d3  sub si, word ptr gs:[bx + 0x112]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x112u)), false));
    // 1501:59d8  add si, word ptr fs:[bp + 0x112]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x112u)), false));
    // 1501:59dd  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:59df  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:59e0  sub si, word ptr gs:[bx + 0x114]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x114u)), false));
    // 1501:59e5  add si, word ptr fs:[bp + 0x114]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x114u)), false));
    // 1501:59ea  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:59ec  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:59ed  sub si, word ptr gs:[bx + 0x116]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x116u)), false));
    // 1501:59f2  add si, word ptr fs:[bp + 0x116]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x116u)), false));
    // 1501:59f7  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:59f9  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:59fa  sub si, word ptr gs:[bx + 0x118]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x118u)), false));
    // 1501:59ff  add si, word ptr fs:[bp + 0x118]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x118u)), false));
    // 1501:5a04  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5a06  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5a07  sub si, word ptr gs:[bx + 0x11a]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x11au)), false));
    // 1501:5a0c  add si, word ptr fs:[bp + 0x11a]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x11au)), false));
    // 1501:5a11  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5a13  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5a14  sub si, word ptr gs:[bx + 0x11c]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x11cu)), false));
    // 1501:5a19  add si, word ptr fs:[bp + 0x11c]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x11cu)), false));
    // 1501:5a1e  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5a20  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5a21  sub si, word ptr gs:[bx + 0x11e]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x11eu)), false));
    // 1501:5a26  add si, word ptr fs:[bp + 0x11e]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x11eu)), false));
    // 1501:5a2b  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5a2d  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5a2e  sub si, word ptr gs:[bx + 0x120]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x120u)), false));
    // 1501:5a33  add si, word ptr fs:[bp + 0x120]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x120u)), false));
    // 1501:5a38  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5a3a  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5a3b  sub si, word ptr gs:[bx + 0x122]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x122u)), false));
    // 1501:5a40  add si, word ptr fs:[bp + 0x122]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x122u)), false));
    // 1501:5a45  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5a47  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5a48  sub si, word ptr gs:[bx + 0x124]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x124u)), false));
    // 1501:5a4d  add si, word ptr fs:[bp + 0x124]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x124u)), false));
    // 1501:5a52  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5a54  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5a55  sub si, word ptr gs:[bx + 0x126]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x126u)), false));
    // 1501:5a5a  add si, word ptr fs:[bp + 0x126]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x126u)), true));
L1aa6f:
    if (c.tracing) c.traceAt(0x1aa6f);
    // 1501:5a5f  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5a61  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5a62  sub si, word ptr gs:[bx + 0x128]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x128u)), false));
    // 1501:5a67  add si, word ptr fs:[bp + 0x128]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x128u)), false));
    // 1501:5a6c  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5a6e  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5a6f  sub si, word ptr gs:[bx + 0x12a]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12au)), false));
    // 1501:5a74  add si, word ptr fs:[bp + 0x12a]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12au)), false));
    // 1501:5a79  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5a7b  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5a7c  sub si, word ptr gs:[bx + 0x12c]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12cu)), false));
    // 1501:5a81  add si, word ptr fs:[bp + 0x12c]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12cu)), false));
    // 1501:5a86  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5a88  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5a89  sub si, word ptr gs:[bx + 0x12e]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12eu)), false));
    // 1501:5a8e  add si, word ptr fs:[bp + 0x12e]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12eu)), false));
    // 1501:5a93  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5a95  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5a96  sub si, word ptr gs:[bx + 0x130]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x130u)), false));
    // 1501:5a9b  add si, word ptr fs:[bp + 0x130]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x130u)), false));
    // 1501:5aa0  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5aa2  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5aa3  sub si, word ptr gs:[bx + 0x132]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x132u)), false));
    // 1501:5aa8  add si, word ptr fs:[bp + 0x132]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x132u)), false));
    // 1501:5aad  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5aaf  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5ab0  sub si, word ptr gs:[bx + 0x134]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x134u)), false));
    // 1501:5ab5  add si, word ptr fs:[bp + 0x134]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x134u)), false));
    // 1501:5aba  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5abc  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5abd  sub si, word ptr gs:[bx + 0x136]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x136u)), false));
    // 1501:5ac2  add si, word ptr fs:[bp + 0x136]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x136u)), false));
    // 1501:5ac7  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5ac9  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5aca  sub si, word ptr gs:[bx + 0x138]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x138u)), false));
    // 1501:5acf  add si, word ptr fs:[bp + 0x138]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x138u)), false));
    // 1501:5ad4  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5ad6  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5ad7  sub si, word ptr gs:[bx + 0x13a]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x13au)), false));
    // 1501:5adc  add si, word ptr fs:[bp + 0x13a]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x13au)), false));
    // 1501:5ae1  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5ae3  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5ae4  sub si, word ptr gs:[bx + 0x13c]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x13cu)), false));
    // 1501:5ae9  add si, word ptr fs:[bp + 0x13c]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x13cu)), false));
    // 1501:5aee  mov al, byte ptr [si]  [x7115]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5af0  stosb byte ptr es:[di], al  [x7115]
    c.stos<8, false>(0);
    // 1501:5af1  sub si, word ptr gs:[bx + 0x13e]  [x7115]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x13eu)), false));
    // 1501:5af6  add si, word ptr fs:[bp + 0x13e]  [x7115]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x13eu)), true));
    // 1501:5afb  jmp 0x4b8e  [x7115]
    goto L19b9e;
L1ab0e:
    if (c.tracing) c.traceAt(0x1ab0e);
    // 1501:5afe  neg ax  [x5405]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:5b00  xchg ah, al  [x5405]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:5b02  mov bp, ax  [x5405]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:5b04  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b06  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b07  sub si, word ptr gs:[bx]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x)), false));
    // 1501:5b0a  sub si, word ptr fs:[bp]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x)), false));
    // 1501:5b0e  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b10  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b11  sub si, word ptr gs:[bx + 2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2u)), false));
    // 1501:5b15  sub si, word ptr fs:[bp + 2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2u)), false));
    // 1501:5b19  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b1b  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b1c  sub si, word ptr gs:[bx + 4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4u)), false));
    // 1501:5b20  sub si, word ptr fs:[bp + 4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4u)), false));
    // 1501:5b24  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b26  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b27  sub si, word ptr gs:[bx + 6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 1501:5b2b  sub si, word ptr fs:[bp + 6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6u)), false));
    // 1501:5b2f  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b31  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b32  sub si, word ptr gs:[bx + 8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8u)), false));
    // 1501:5b36  sub si, word ptr fs:[bp + 8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8u)), false));
    // 1501:5b3a  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b3c  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b3d  sub si, word ptr gs:[bx + 0xa]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xau)), false));
    // 1501:5b41  sub si, word ptr fs:[bp + 0xa]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xau)), false));
    // 1501:5b45  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b47  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b48  sub si, word ptr gs:[bx + 0xc]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xcu)), false));
    // 1501:5b4c  sub si, word ptr fs:[bp + 0xc]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xcu)), false));
    // 1501:5b50  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b52  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b53  sub si, word ptr gs:[bx + 0xe]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 1501:5b57  sub si, word ptr fs:[bp + 0xe]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xeu)), false));
    // 1501:5b5b  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b5d  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b5e  sub si, word ptr gs:[bx + 0x10]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10u)), false));
    // 1501:5b62  sub si, word ptr fs:[bp + 0x10]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10u)), false));
    // 1501:5b66  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b68  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b69  sub si, word ptr gs:[bx + 0x12]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12u)), false));
    // 1501:5b6d  sub si, word ptr fs:[bp + 0x12]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12u)), false));
    // 1501:5b71  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b73  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b74  sub si, word ptr gs:[bx + 0x14]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x14u)), false));
    // 1501:5b78  sub si, word ptr fs:[bp + 0x14]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x14u)), false));
    // 1501:5b7c  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b7e  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b7f  sub si, word ptr gs:[bx + 0x16]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x16u)), false));
    // 1501:5b83  sub si, word ptr fs:[bp + 0x16]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x16u)), false));
    // 1501:5b87  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b89  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b8a  sub si, word ptr gs:[bx + 0x18]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x18u)), false));
    // 1501:5b8e  sub si, word ptr fs:[bp + 0x18]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x18u)), false));
    // 1501:5b92  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b94  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5b95  sub si, word ptr gs:[bx + 0x1a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x1au)), false));
    // 1501:5b99  sub si, word ptr fs:[bp + 0x1a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x1au)), false));
    // 1501:5b9d  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5b9f  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5ba0  sub si, word ptr gs:[bx + 0x1c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x1cu)), false));
    // 1501:5ba4  sub si, word ptr fs:[bp + 0x1c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x1cu)), false));
    // 1501:5ba8  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5baa  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5bab  sub si, word ptr gs:[bx + 0x1e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x1eu)), false));
    // 1501:5baf  sub si, word ptr fs:[bp + 0x1e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x1eu)), false));
    // 1501:5bb3  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5bb5  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5bb6  sub si, word ptr gs:[bx + 0x20]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x20u)), false));
    // 1501:5bba  sub si, word ptr fs:[bp + 0x20]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x20u)), false));
    // 1501:5bbe  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5bc0  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5bc1  sub si, word ptr gs:[bx + 0x22]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x22u)), false));
    // 1501:5bc5  sub si, word ptr fs:[bp + 0x22]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x22u)), false));
    // 1501:5bc9  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5bcb  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5bcc  sub si, word ptr gs:[bx + 0x24]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x24u)), false));
    // 1501:5bd0  sub si, word ptr fs:[bp + 0x24]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x24u)), false));
    // 1501:5bd4  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5bd6  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5bd7  sub si, word ptr gs:[bx + 0x26]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x26u)), false));
    // 1501:5bdb  sub si, word ptr fs:[bp + 0x26]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x26u)), false));
    // 1501:5bdf  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5be1  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5be2  sub si, word ptr gs:[bx + 0x28]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x28u)), false));
    // 1501:5be6  sub si, word ptr fs:[bp + 0x28]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x28u)), false));
    // 1501:5bea  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5bec  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5bed  sub si, word ptr gs:[bx + 0x2a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2au)), false));
    // 1501:5bf1  sub si, word ptr fs:[bp + 0x2a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2au)), false));
    // 1501:5bf5  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5bf7  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5bf8  sub si, word ptr gs:[bx + 0x2c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2cu)), false));
    // 1501:5bfc  sub si, word ptr fs:[bp + 0x2c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2cu)), false));
    // 1501:5c00  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c02  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c03  sub si, word ptr gs:[bx + 0x2e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x2eu)), false));
    // 1501:5c07  sub si, word ptr fs:[bp + 0x2e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x2eu)), false));
    // 1501:5c0b  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c0d  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c0e  sub si, word ptr gs:[bx + 0x30]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x30u)), false));
    // 1501:5c12  sub si, word ptr fs:[bp + 0x30]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x30u)), false));
    // 1501:5c16  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c18  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c19  sub si, word ptr gs:[bx + 0x32]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x32u)), false));
    // 1501:5c1d  sub si, word ptr fs:[bp + 0x32]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x32u)), false));
    // 1501:5c21  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c23  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c24  sub si, word ptr gs:[bx + 0x34]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x34u)), false));
    // 1501:5c28  sub si, word ptr fs:[bp + 0x34]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x34u)), false));
    // 1501:5c2c  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c2e  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c2f  sub si, word ptr gs:[bx + 0x36]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x36u)), false));
    // 1501:5c33  sub si, word ptr fs:[bp + 0x36]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x36u)), false));
    // 1501:5c37  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c39  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c3a  sub si, word ptr gs:[bx + 0x38]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x38u)), false));
    // 1501:5c3e  sub si, word ptr fs:[bp + 0x38]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x38u)), false));
    // 1501:5c42  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c44  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c45  sub si, word ptr gs:[bx + 0x3a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x3au)), false));
    // 1501:5c49  sub si, word ptr fs:[bp + 0x3a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x3au)), false));
    // 1501:5c4d  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c4f  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c50  sub si, word ptr gs:[bx + 0x3c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x3cu)), false));
    // 1501:5c54  sub si, word ptr fs:[bp + 0x3c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x3cu)), false));
    // 1501:5c58  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c5a  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c5b  sub si, word ptr gs:[bx + 0x3e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x3eu)), false));
    // 1501:5c5f  sub si, word ptr fs:[bp + 0x3e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x3eu)), false));
    // 1501:5c63  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c65  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c66  sub si, word ptr gs:[bx + 0x40]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x40u)), false));
    // 1501:5c6a  sub si, word ptr fs:[bp + 0x40]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x40u)), false));
    // 1501:5c6e  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c70  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c71  sub si, word ptr gs:[bx + 0x42]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x42u)), false));
    // 1501:5c75  sub si, word ptr fs:[bp + 0x42]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x42u)), false));
    // 1501:5c79  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c7b  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c7c  sub si, word ptr gs:[bx + 0x44]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x44u)), false));
    // 1501:5c80  sub si, word ptr fs:[bp + 0x44]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x44u)), false));
    // 1501:5c84  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c86  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c87  sub si, word ptr gs:[bx + 0x46]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x46u)), false));
    // 1501:5c8b  sub si, word ptr fs:[bp + 0x46]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x46u)), false));
    // 1501:5c8f  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c91  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c92  sub si, word ptr gs:[bx + 0x48]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x48u)), true));
L1aca6:
    if (c.tracing) c.traceAt(0x1aca6);
    // 1501:5c96  sub si, word ptr fs:[bp + 0x48]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x48u)), false));
    // 1501:5c9a  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5c9c  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5c9d  sub si, word ptr gs:[bx + 0x4a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4au)), false));
    // 1501:5ca1  sub si, word ptr fs:[bp + 0x4a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4au)), false));
    // 1501:5ca5  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5ca7  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5ca8  sub si, word ptr gs:[bx + 0x4c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4cu)), false));
    // 1501:5cac  sub si, word ptr fs:[bp + 0x4c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4cu)), false));
    // 1501:5cb0  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5cb2  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5cb3  sub si, word ptr gs:[bx + 0x4e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x4eu)), false));
    // 1501:5cb7  sub si, word ptr fs:[bp + 0x4e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x4eu)), false));
    // 1501:5cbb  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5cbd  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5cbe  sub si, word ptr gs:[bx + 0x50]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x50u)), false));
    // 1501:5cc2  sub si, word ptr fs:[bp + 0x50]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x50u)), false));
    // 1501:5cc6  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5cc8  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5cc9  sub si, word ptr gs:[bx + 0x52]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x52u)), false));
    // 1501:5ccd  sub si, word ptr fs:[bp + 0x52]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x52u)), false));
    // 1501:5cd1  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5cd3  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5cd4  sub si, word ptr gs:[bx + 0x54]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x54u)), false));
    // 1501:5cd8  sub si, word ptr fs:[bp + 0x54]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x54u)), false));
    // 1501:5cdc  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5cde  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5cdf  sub si, word ptr gs:[bx + 0x56]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x56u)), false));
    // 1501:5ce3  sub si, word ptr fs:[bp + 0x56]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x56u)), false));
    // 1501:5ce7  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5ce9  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5cea  sub si, word ptr gs:[bx + 0x58]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x58u)), false));
    // 1501:5cee  sub si, word ptr fs:[bp + 0x58]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x58u)), false));
    // 1501:5cf2  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5cf4  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5cf5  sub si, word ptr gs:[bx + 0x5a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x5au)), false));
    // 1501:5cf9  sub si, word ptr fs:[bp + 0x5a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x5au)), false));
    // 1501:5cfd  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5cff  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d00  sub si, word ptr gs:[bx + 0x5c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x5cu)), false));
    // 1501:5d04  sub si, word ptr fs:[bp + 0x5c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x5cu)), false));
    // 1501:5d08  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d0a  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d0b  sub si, word ptr gs:[bx + 0x5e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x5eu)), false));
    // 1501:5d0f  sub si, word ptr fs:[bp + 0x5e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x5eu)), false));
    // 1501:5d13  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d15  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d16  sub si, word ptr gs:[bx + 0x60]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x60u)), false));
    // 1501:5d1a  sub si, word ptr fs:[bp + 0x60]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x60u)), false));
    // 1501:5d1e  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d20  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d21  sub si, word ptr gs:[bx + 0x62]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x62u)), false));
    // 1501:5d25  sub si, word ptr fs:[bp + 0x62]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x62u)), false));
    // 1501:5d29  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d2b  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d2c  sub si, word ptr gs:[bx + 0x64]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x64u)), false));
    // 1501:5d30  sub si, word ptr fs:[bp + 0x64]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x64u)), false));
    // 1501:5d34  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d36  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d37  sub si, word ptr gs:[bx + 0x66]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x66u)), false));
    // 1501:5d3b  sub si, word ptr fs:[bp + 0x66]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x66u)), false));
    // 1501:5d3f  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d41  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d42  sub si, word ptr gs:[bx + 0x68]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x68u)), false));
    // 1501:5d46  sub si, word ptr fs:[bp + 0x68]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x68u)), false));
    // 1501:5d4a  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d4c  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d4d  sub si, word ptr gs:[bx + 0x6a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6au)), false));
    // 1501:5d51  sub si, word ptr fs:[bp + 0x6a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6au)), false));
    // 1501:5d55  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d57  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d58  sub si, word ptr gs:[bx + 0x6c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6cu)), false));
    // 1501:5d5c  sub si, word ptr fs:[bp + 0x6c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6cu)), false));
    // 1501:5d60  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d62  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d63  sub si, word ptr gs:[bx + 0x6e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x6eu)), false));
    // 1501:5d67  sub si, word ptr fs:[bp + 0x6e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x6eu)), false));
    // 1501:5d6b  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d6d  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d6e  sub si, word ptr gs:[bx + 0x70]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x70u)), false));
    // 1501:5d72  sub si, word ptr fs:[bp + 0x70]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x70u)), false));
    // 1501:5d76  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d78  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d79  sub si, word ptr gs:[bx + 0x72]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x72u)), false));
    // 1501:5d7d  sub si, word ptr fs:[bp + 0x72]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x72u)), false));
    // 1501:5d81  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d83  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d84  sub si, word ptr gs:[bx + 0x74]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x74u)), false));
    // 1501:5d88  sub si, word ptr fs:[bp + 0x74]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x74u)), false));
    // 1501:5d8c  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d8e  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d8f  sub si, word ptr gs:[bx + 0x76]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x76u)), false));
    // 1501:5d93  sub si, word ptr fs:[bp + 0x76]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x76u)), false));
    // 1501:5d97  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5d99  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5d9a  sub si, word ptr gs:[bx + 0x78]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x78u)), false));
    // 1501:5d9e  sub si, word ptr fs:[bp + 0x78]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x78u)), false));
    // 1501:5da2  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5da4  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5da5  sub si, word ptr gs:[bx + 0x7a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x7au)), false));
    // 1501:5da9  sub si, word ptr fs:[bp + 0x7a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x7au)), false));
    // 1501:5dad  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5daf  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5db0  sub si, word ptr gs:[bx + 0x7c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x7cu)), false));
    // 1501:5db4  sub si, word ptr fs:[bp + 0x7c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x7cu)), false));
    // 1501:5db8  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5dba  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5dbb  sub si, word ptr gs:[bx + 0x7e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x7eu)), false));
    // 1501:5dbf  sub si, word ptr fs:[bp + 0x7e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x7eu)), false));
    // 1501:5dc3  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5dc5  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5dc6  sub si, word ptr gs:[bx + 0x80]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x80u)), false));
    // 1501:5dcb  sub si, word ptr fs:[bp + 0x80]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x80u)), false));
    // 1501:5dd0  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5dd2  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5dd3  sub si, word ptr gs:[bx + 0x82]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x82u)), false));
    // 1501:5dd8  sub si, word ptr fs:[bp + 0x82]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x82u)), false));
    // 1501:5ddd  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5ddf  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5de0  sub si, word ptr gs:[bx + 0x84]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x84u)), false));
    // 1501:5de5  sub si, word ptr fs:[bp + 0x84]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x84u)), false));
    // 1501:5dea  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5dec  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5ded  sub si, word ptr gs:[bx + 0x86]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x86u)), false));
    // 1501:5df2  sub si, word ptr fs:[bp + 0x86]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x86u)), false));
    // 1501:5df7  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5df9  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5dfa  sub si, word ptr gs:[bx + 0x88]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x88u)), false));
    // 1501:5dff  sub si, word ptr fs:[bp + 0x88]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x88u)), false));
    // 1501:5e04  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5e06  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5e07  sub si, word ptr gs:[bx + 0x8a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8au)), false));
    // 1501:5e0c  sub si, word ptr fs:[bp + 0x8a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8au)), false));
    // 1501:5e11  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5e13  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5e14  sub si, word ptr gs:[bx + 0x8c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8cu)), false));
    // 1501:5e19  sub si, word ptr fs:[bp + 0x8c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8cu)), false));
    // 1501:5e1e  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5e20  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5e21  sub si, word ptr gs:[bx + 0x8e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x8eu)), false));
    // 1501:5e26  sub si, word ptr fs:[bp + 0x8e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x8eu)), false));
    // 1501:5e2b  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5e2d  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5e2e  sub si, word ptr gs:[bx + 0x90]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x90u)), false));
    // 1501:5e33  sub si, word ptr fs:[bp + 0x90]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x90u)), false));
    // 1501:5e38  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5e3a  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5e3b  sub si, word ptr gs:[bx + 0x92]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x92u)), true));
L1ae50:
    if (c.tracing) c.traceAt(0x1ae50);
    // 1501:5e40  sub si, word ptr fs:[bp + 0x92]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x92u)), false));
    // 1501:5e45  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5e47  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5e48  sub si, word ptr gs:[bx + 0x94]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x94u)), false));
    // 1501:5e4d  sub si, word ptr fs:[bp + 0x94]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x94u)), false));
    // 1501:5e52  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5e54  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5e55  sub si, word ptr gs:[bx + 0x96]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x96u)), false));
    // 1501:5e5a  sub si, word ptr fs:[bp + 0x96]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x96u)), false));
    // 1501:5e5f  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5e61  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5e62  sub si, word ptr gs:[bx + 0x98]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x98u)), false));
    // 1501:5e67  sub si, word ptr fs:[bp + 0x98]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x98u)), false));
    // 1501:5e6c  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5e6e  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5e6f  sub si, word ptr gs:[bx + 0x9a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x9au)), false));
    // 1501:5e74  sub si, word ptr fs:[bp + 0x9a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x9au)), false));
    // 1501:5e79  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5e7b  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5e7c  sub si, word ptr gs:[bx + 0x9c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x9cu)), false));
    // 1501:5e81  sub si, word ptr fs:[bp + 0x9c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x9cu)), false));
    // 1501:5e86  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5e88  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5e89  sub si, word ptr gs:[bx + 0x9e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x9eu)), false));
    // 1501:5e8e  sub si, word ptr fs:[bp + 0x9e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x9eu)), false));
    // 1501:5e93  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5e95  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5e96  sub si, word ptr gs:[bx + 0xa0]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa0u)), false));
    // 1501:5e9b  sub si, word ptr fs:[bp + 0xa0]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa0u)), false));
    // 1501:5ea0  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5ea2  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5ea3  sub si, word ptr gs:[bx + 0xa2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa2u)), false));
    // 1501:5ea8  sub si, word ptr fs:[bp + 0xa2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa2u)), false));
    // 1501:5ead  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5eaf  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5eb0  sub si, word ptr gs:[bx + 0xa4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa4u)), false));
    // 1501:5eb5  sub si, word ptr fs:[bp + 0xa4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa4u)), false));
    // 1501:5eba  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5ebc  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5ebd  sub si, word ptr gs:[bx + 0xa6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa6u)), false));
    // 1501:5ec2  sub si, word ptr fs:[bp + 0xa6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa6u)), false));
    // 1501:5ec7  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5ec9  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5eca  sub si, word ptr gs:[bx + 0xa8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xa8u)), false));
    // 1501:5ecf  sub si, word ptr fs:[bp + 0xa8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xa8u)), false));
    // 1501:5ed4  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5ed6  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5ed7  sub si, word ptr gs:[bx + 0xaa]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xaau)), false));
    // 1501:5edc  sub si, word ptr fs:[bp + 0xaa]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xaau)), false));
    // 1501:5ee1  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5ee3  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5ee4  sub si, word ptr gs:[bx + 0xac]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xacu)), false));
    // 1501:5ee9  sub si, word ptr fs:[bp + 0xac]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xacu)), false));
    // 1501:5eee  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5ef0  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5ef1  sub si, word ptr gs:[bx + 0xae]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xaeu)), false));
    // 1501:5ef6  sub si, word ptr fs:[bp + 0xae]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xaeu)), false));
    // 1501:5efb  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5efd  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5efe  sub si, word ptr gs:[bx + 0xb0]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb0u)), false));
    // 1501:5f03  sub si, word ptr fs:[bp + 0xb0]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb0u)), false));
    // 1501:5f08  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5f0a  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5f0b  sub si, word ptr gs:[bx + 0xb2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb2u)), false));
    // 1501:5f10  sub si, word ptr fs:[bp + 0xb2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb2u)), false));
    // 1501:5f15  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5f17  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5f18  sub si, word ptr gs:[bx + 0xb4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb4u)), false));
    // 1501:5f1d  sub si, word ptr fs:[bp + 0xb4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb4u)), false));
    // 1501:5f22  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5f24  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5f25  sub si, word ptr gs:[bx + 0xb6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb6u)), false));
    // 1501:5f2a  sub si, word ptr fs:[bp + 0xb6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb6u)), false));
    // 1501:5f2f  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5f31  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5f32  sub si, word ptr gs:[bx + 0xb8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xb8u)), false));
    // 1501:5f37  sub si, word ptr fs:[bp + 0xb8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xb8u)), false));
    // 1501:5f3c  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5f3e  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5f3f  sub si, word ptr gs:[bx + 0xba]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xbau)), false));
    // 1501:5f44  sub si, word ptr fs:[bp + 0xba]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xbau)), false));
    // 1501:5f49  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5f4b  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5f4c  sub si, word ptr gs:[bx + 0xbc]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xbcu)), false));
    // 1501:5f51  sub si, word ptr fs:[bp + 0xbc]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xbcu)), false));
    // 1501:5f56  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5f58  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5f59  sub si, word ptr gs:[bx + 0xbe]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xbeu)), false));
    // 1501:5f5e  sub si, word ptr fs:[bp + 0xbe]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xbeu)), false));
    // 1501:5f63  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5f65  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5f66  sub si, word ptr gs:[bx + 0xc0]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc0u)), false));
    // 1501:5f6b  sub si, word ptr fs:[bp + 0xc0]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc0u)), false));
    // 1501:5f70  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5f72  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5f73  sub si, word ptr gs:[bx + 0xc2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc2u)), false));
    // 1501:5f78  sub si, word ptr fs:[bp + 0xc2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc2u)), false));
    // 1501:5f7d  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5f7f  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5f80  sub si, word ptr gs:[bx + 0xc4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc4u)), false));
    // 1501:5f85  sub si, word ptr fs:[bp + 0xc4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc4u)), false));
    // 1501:5f8a  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5f8c  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5f8d  sub si, word ptr gs:[bx + 0xc6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc6u)), false));
    // 1501:5f92  sub si, word ptr fs:[bp + 0xc6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc6u)), false));
    // 1501:5f97  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5f99  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5f9a  sub si, word ptr gs:[bx + 0xc8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xc8u)), false));
    // 1501:5f9f  sub si, word ptr fs:[bp + 0xc8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xc8u)), false));
    // 1501:5fa4  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5fa6  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5fa7  sub si, word ptr gs:[bx + 0xca]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xcau)), false));
    // 1501:5fac  sub si, word ptr fs:[bp + 0xca]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xcau)), false));
    // 1501:5fb1  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5fb3  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5fb4  sub si, word ptr gs:[bx + 0xcc]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xccu)), false));
    // 1501:5fb9  sub si, word ptr fs:[bp + 0xcc]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xccu)), false));
    // 1501:5fbe  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5fc0  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5fc1  sub si, word ptr gs:[bx + 0xce]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xceu)), false));
    // 1501:5fc6  sub si, word ptr fs:[bp + 0xce]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xceu)), false));
    // 1501:5fcb  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5fcd  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5fce  sub si, word ptr gs:[bx + 0xd0]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd0u)), false));
    // 1501:5fd3  sub si, word ptr fs:[bp + 0xd0]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd0u)), false));
    // 1501:5fd8  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5fda  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5fdb  sub si, word ptr gs:[bx + 0xd2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd2u)), false));
    // 1501:5fe0  sub si, word ptr fs:[bp + 0xd2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd2u)), false));
    // 1501:5fe5  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5fe7  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5fe8  sub si, word ptr gs:[bx + 0xd4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd4u)), false));
    // 1501:5fed  sub si, word ptr fs:[bp + 0xd4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd4u)), false));
    // 1501:5ff2  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:5ff4  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:5ff5  sub si, word ptr gs:[bx + 0xd6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd6u)), false));
    // 1501:5ffa  sub si, word ptr fs:[bp + 0xd6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd6u)), false));
    // 1501:5fff  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6001  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6002  sub si, word ptr gs:[bx + 0xd8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xd8u)), false));
    // 1501:6007  sub si, word ptr fs:[bp + 0xd8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xd8u)), false));
    // 1501:600c  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:600e  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:600f  sub si, word ptr gs:[bx + 0xda]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xdau)), false));
    // 1501:6014  sub si, word ptr fs:[bp + 0xda]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xdau)), false));
    // 1501:6019  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:601b  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:601c  sub si, word ptr gs:[bx + 0xdc]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xdcu)), true));
L1b031:
    if (c.tracing) c.traceAt(0x1b031);
    // 1501:6021  sub si, word ptr fs:[bp + 0xdc]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xdcu)), false));
    // 1501:6026  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6028  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6029  sub si, word ptr gs:[bx + 0xde]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xdeu)), false));
    // 1501:602e  sub si, word ptr fs:[bp + 0xde]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xdeu)), false));
    // 1501:6033  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6035  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6036  sub si, word ptr gs:[bx + 0xe0]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe0u)), false));
    // 1501:603b  sub si, word ptr fs:[bp + 0xe0]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe0u)), false));
    // 1501:6040  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6042  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6043  sub si, word ptr gs:[bx + 0xe2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe2u)), false));
    // 1501:6048  sub si, word ptr fs:[bp + 0xe2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe2u)), false));
    // 1501:604d  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:604f  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6050  sub si, word ptr gs:[bx + 0xe4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe4u)), false));
    // 1501:6055  sub si, word ptr fs:[bp + 0xe4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe4u)), false));
    // 1501:605a  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:605c  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:605d  sub si, word ptr gs:[bx + 0xe6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe6u)), false));
    // 1501:6062  sub si, word ptr fs:[bp + 0xe6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe6u)), false));
    // 1501:6067  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6069  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:606a  sub si, word ptr gs:[bx + 0xe8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xe8u)), false));
    // 1501:606f  sub si, word ptr fs:[bp + 0xe8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xe8u)), false));
    // 1501:6074  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6076  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6077  sub si, word ptr gs:[bx + 0xea]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xeau)), false));
    // 1501:607c  sub si, word ptr fs:[bp + 0xea]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xeau)), false));
    // 1501:6081  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6083  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6084  sub si, word ptr gs:[bx + 0xec]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xecu)), false));
    // 1501:6089  sub si, word ptr fs:[bp + 0xec]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xecu)), false));
    // 1501:608e  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6090  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6091  sub si, word ptr gs:[bx + 0xee]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xeeu)), false));
    // 1501:6096  sub si, word ptr fs:[bp + 0xee]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xeeu)), false));
    // 1501:609b  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:609d  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:609e  sub si, word ptr gs:[bx + 0xf0]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf0u)), false));
    // 1501:60a3  sub si, word ptr fs:[bp + 0xf0]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf0u)), false));
    // 1501:60a8  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:60aa  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:60ab  sub si, word ptr gs:[bx + 0xf2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf2u)), false));
    // 1501:60b0  sub si, word ptr fs:[bp + 0xf2]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf2u)), false));
    // 1501:60b5  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:60b7  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:60b8  sub si, word ptr gs:[bx + 0xf4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf4u)), false));
    // 1501:60bd  sub si, word ptr fs:[bp + 0xf4]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf4u)), false));
    // 1501:60c2  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:60c4  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:60c5  sub si, word ptr gs:[bx + 0xf6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf6u)), false));
    // 1501:60ca  sub si, word ptr fs:[bp + 0xf6]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf6u)), false));
    // 1501:60cf  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:60d1  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:60d2  sub si, word ptr gs:[bx + 0xf8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xf8u)), false));
    // 1501:60d7  sub si, word ptr fs:[bp + 0xf8]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xf8u)), false));
    // 1501:60dc  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:60de  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:60df  sub si, word ptr gs:[bx + 0xfa]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xfau)), false));
    // 1501:60e4  sub si, word ptr fs:[bp + 0xfa]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xfau)), false));
    // 1501:60e9  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:60eb  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:60ec  sub si, word ptr gs:[bx + 0xfc]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xfcu)), false));
    // 1501:60f1  sub si, word ptr fs:[bp + 0xfc]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xfcu)), false));
    // 1501:60f6  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:60f8  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:60f9  sub si, word ptr gs:[bx + 0xfe]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0xfeu)), false));
    // 1501:60fe  sub si, word ptr fs:[bp + 0xfe]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0xfeu)), false));
    // 1501:6103  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6105  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6106  sub si, word ptr gs:[bx + 0x100]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x100u)), false));
    // 1501:610b  sub si, word ptr fs:[bp + 0x100]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x100u)), false));
    // 1501:6110  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6112  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6113  sub si, word ptr gs:[bx + 0x102]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x102u)), false));
    // 1501:6118  sub si, word ptr fs:[bp + 0x102]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x102u)), false));
    // 1501:611d  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:611f  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6120  sub si, word ptr gs:[bx + 0x104]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x104u)), false));
    // 1501:6125  sub si, word ptr fs:[bp + 0x104]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x104u)), false));
    // 1501:612a  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:612c  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:612d  sub si, word ptr gs:[bx + 0x106]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x106u)), false));
    // 1501:6132  sub si, word ptr fs:[bp + 0x106]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x106u)), false));
    // 1501:6137  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6139  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:613a  sub si, word ptr gs:[bx + 0x108]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x108u)), false));
    // 1501:613f  sub si, word ptr fs:[bp + 0x108]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x108u)), false));
    // 1501:6144  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6146  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6147  sub si, word ptr gs:[bx + 0x10a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10au)), false));
    // 1501:614c  sub si, word ptr fs:[bp + 0x10a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10au)), false));
    // 1501:6151  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6153  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6154  sub si, word ptr gs:[bx + 0x10c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10cu)), false));
    // 1501:6159  sub si, word ptr fs:[bp + 0x10c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10cu)), false));
    // 1501:615e  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6160  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6161  sub si, word ptr gs:[bx + 0x10e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x10eu)), false));
    // 1501:6166  sub si, word ptr fs:[bp + 0x10e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x10eu)), false));
    // 1501:616b  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:616d  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:616e  sub si, word ptr gs:[bx + 0x110]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x110u)), false));
    // 1501:6173  sub si, word ptr fs:[bp + 0x110]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x110u)), false));
    // 1501:6178  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:617a  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:617b  sub si, word ptr gs:[bx + 0x112]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x112u)), false));
    // 1501:6180  sub si, word ptr fs:[bp + 0x112]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x112u)), false));
    // 1501:6185  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6187  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6188  sub si, word ptr gs:[bx + 0x114]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x114u)), false));
    // 1501:618d  sub si, word ptr fs:[bp + 0x114]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x114u)), false));
    // 1501:6192  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6194  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6195  sub si, word ptr gs:[bx + 0x116]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x116u)), false));
    // 1501:619a  sub si, word ptr fs:[bp + 0x116]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x116u)), false));
    // 1501:619f  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:61a1  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:61a2  sub si, word ptr gs:[bx + 0x118]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x118u)), false));
    // 1501:61a7  sub si, word ptr fs:[bp + 0x118]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x118u)), false));
    // 1501:61ac  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:61ae  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:61af  sub si, word ptr gs:[bx + 0x11a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x11au)), false));
    // 1501:61b4  sub si, word ptr fs:[bp + 0x11a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x11au)), false));
    // 1501:61b9  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:61bb  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:61bc  sub si, word ptr gs:[bx + 0x11c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x11cu)), false));
    // 1501:61c1  sub si, word ptr fs:[bp + 0x11c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x11cu)), false));
    // 1501:61c6  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:61c8  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:61c9  sub si, word ptr gs:[bx + 0x11e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x11eu)), false));
    // 1501:61ce  sub si, word ptr fs:[bp + 0x11e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x11eu)), false));
    // 1501:61d3  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:61d5  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:61d6  sub si, word ptr gs:[bx + 0x120]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x120u)), false));
    // 1501:61db  sub si, word ptr fs:[bp + 0x120]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x120u)), false));
    // 1501:61e0  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:61e2  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:61e3  sub si, word ptr gs:[bx + 0x122]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x122u)), false));
    // 1501:61e8  sub si, word ptr fs:[bp + 0x122]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x122u)), false));
    // 1501:61ed  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:61ef  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:61f0  sub si, word ptr gs:[bx + 0x124]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x124u)), false));
    // 1501:61f5  sub si, word ptr fs:[bp + 0x124]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x124u)), false));
    // 1501:61fa  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:61fc  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:61fd  sub si, word ptr gs:[bx + 0x126]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x126u)), true));
L1b212:
    if (c.tracing) c.traceAt(0x1b212);
    // 1501:6202  sub si, word ptr fs:[bp + 0x126]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x126u)), false));
    // 1501:6207  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6209  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:620a  sub si, word ptr gs:[bx + 0x128]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x128u)), false));
    // 1501:620f  sub si, word ptr fs:[bp + 0x128]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x128u)), false));
    // 1501:6214  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6216  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6217  sub si, word ptr gs:[bx + 0x12a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12au)), false));
    // 1501:621c  sub si, word ptr fs:[bp + 0x12a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12au)), false));
    // 1501:6221  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6223  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6224  sub si, word ptr gs:[bx + 0x12c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12cu)), false));
    // 1501:6229  sub si, word ptr fs:[bp + 0x12c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12cu)), false));
    // 1501:622e  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6230  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6231  sub si, word ptr gs:[bx + 0x12e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x12eu)), false));
    // 1501:6236  sub si, word ptr fs:[bp + 0x12e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x12eu)), false));
    // 1501:623b  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:623d  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:623e  sub si, word ptr gs:[bx + 0x130]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x130u)), false));
    // 1501:6243  sub si, word ptr fs:[bp + 0x130]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x130u)), false));
    // 1501:6248  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:624a  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:624b  sub si, word ptr gs:[bx + 0x132]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x132u)), false));
    // 1501:6250  sub si, word ptr fs:[bp + 0x132]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x132u)), false));
    // 1501:6255  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6257  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6258  sub si, word ptr gs:[bx + 0x134]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x134u)), false));
    // 1501:625d  sub si, word ptr fs:[bp + 0x134]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x134u)), false));
    // 1501:6262  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6264  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6265  sub si, word ptr gs:[bx + 0x136]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x136u)), false));
    // 1501:626a  sub si, word ptr fs:[bp + 0x136]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x136u)), false));
    // 1501:626f  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6271  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6272  sub si, word ptr gs:[bx + 0x138]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x138u)), false));
    // 1501:6277  sub si, word ptr fs:[bp + 0x138]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x138u)), false));
    // 1501:627c  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:627e  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:627f  sub si, word ptr gs:[bx + 0x13a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x13au)), false));
    // 1501:6284  sub si, word ptr fs:[bp + 0x13a]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x13au)), false));
    // 1501:6289  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:628b  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:628c  sub si, word ptr gs:[bx + 0x13c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x13cu)), false));
    // 1501:6291  sub si, word ptr fs:[bp + 0x13c]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x13cu)), false));
    // 1501:6296  mov al, byte ptr [si]  [x5405]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:6298  stosb byte ptr es:[di], al  [x5405]
    c.stos<8, false>(0);
    // 1501:6299  sub si, word ptr gs:[bx + 0x13e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.b.x + 0x13eu)), false));
    // 1501:629e  sub si, word ptr fs:[bp + 0x13e]  [x5405]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.bp.x + 0x13eu)), true));
    // 1501:62a3  jmp 0x4b8e  [x5405]
    goto L19b9e;
L1b2b6:
    if (c.tracing) c.traceAt(0x1b2b6);
    // 1501:62a6  mov dx, 0x3c4  [x970]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:62a9  mov al, 2  [x970]
    c.a.l = (uint8_t)(0x2u);
    // 1501:62ab  out dx, al  [x970]
    c.ip = 0x62acu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:62ac  mov bx, word ptr cs:[0x30c]  [x970]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x30cu)));
    // 1501:62b1  sar bx, 1  [x970]
    c.b.x = (uint16_t)(c.sar<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:62b3  mov ax, word ptr cs:[0x310]  [x970]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x310u)));
    // 1501:62b7  sub ax, bx  [x970]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.b.x, false));
    // 1501:62b9  mov word ptr cs:[0x30e], ax  [x970]
    c.w16(c.csb + (uint16_t)(0x30eu), c.a.x);
    // 1501:62bd  mov ax, word ptr cs:[0x30c]  [x970]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x30cu)));
    // 1501:62c1  cmp ax, 0  [x970]
    c.sub<16>(c.a.x, 0x0u, true);
    // 1501:62c4  jns 0x62c8  [x970]
    if (!c.sf) goto L1b2d8;
L1b2d6:
    if (c.tracing) c.traceAt(0x1b2d6);
    // 1501:62c6  neg ax  [x609]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
L1b2d8:
    if (c.tracing) c.traceAt(0x1b2d8);
    // 1501:62c8  xchg ah, al  [x970]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:62ca  mov word ptr cs:[0x30a], ax  [x970]
    c.w16(c.csb + (uint16_t)(0x30au), c.a.x);
    // 1501:62ce  xor si, si  [x970]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:62d0  xor bx, bx  [x970]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L1b2e2:
    if (c.tracing) c.traceAt(0x1b2e2);
    // 1501:62d2  mov word ptr cs:[0xd4a], 0xa  [x155200]
    c.w16(c.csb + (uint16_t)(0xd4au), 0xau);
    // 1501:62d9  push si  [x155200]
    c.push16(c.si.x);
    // 1501:62da  mov dx, 0x3c5  [x155200]
    c.dx_.x = (uint16_t)(0x3c5u);
    // 1501:62dd  mov al, byte ptr cs:[bx + 0x27a3]  [x155200]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.b.x + 0x27a3u)));
    // 1501:62e2  out dx, al  [x155200]
    c.ip = 0x62e3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:62e3  mov word ptr cs:[0x2a23], 0  [x155200]
    c.w16(c.csb + (uint16_t)(0x2a23u), 0x0u);
    // 1501:62ea  mov word ptr cs:[0x2a25], 0xc8  [x155200]
    c.w16(c.csb + (uint16_t)(0x2a25u), 0xc8u);
    // 1501:62f1  mov bp, 0x6400  [x155200]
    c.bp.x = (uint16_t)(0x6400u);
L1b304:
    if (c.tracing) c.traceAt(0x1b304);
    // 1501:62f4  mov al, byte ptr cs:[si + 0xd63]  [x6052800]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0xd63u)));
    // 1501:62f9  xor ah, ah  [x6052800]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:62fb  mov word ptr cs:[0xd44], ax  [x6052800]
    c.w16(c.csb + (uint16_t)(0xd44u), c.a.x);
    // 1501:62ff  mov ax, word ptr cs:[0xd42]  [x6052800]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd42u)));
    // 1501:6303  sub ax, word ptr cs:[0xd44]  [x6052800]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0xd44u)), false));
    // 1501:6308  mov dx, word ptr cs:[0xd4a]  [x6052800]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd4au)));
    // 1501:630d  sub dx, 0xc8  [x6052800]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0xc8u, false));
    // 1501:6311  imul dx  [x6052800]
    c.imul16(c.dx_.x);
    // 1501:6313  idiv word ptr cs:[0xd4a]  [x6052800]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0xd4au)))) { c.d32 = false; c.intr(0, 0x6313u); }   // #DE: int 0, then again
    // 1501:6318  mov word ptr cs:[0xd46], ax  [x6052800]
    c.w16(c.csb + (uint16_t)(0xd46u), c.a.x);
    // 1501:631c  mov dx, word ptr cs:[0xd42]  [x6052800]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd42u)));
    // 1501:6321  sub dx, word ptr cs:[0xd44]  [x6052800]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0xd44u)), false));
    // 1501:6326  sub dx, word ptr cs:[0xd46]  [x6052800]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0xd46u)), false));
    // 1501:632b  sar dx, 1  [x6052800]
    c.dx_.x = (uint16_t)(c.sar<16>(c.dx_.x, (int)((0x1u) & 31), false));
    // 1501:632d  mov ax, word ptr cs:[0x30e]  [x6052800]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x30eu)));
    // 1501:6331  add ax, dx  [x6052800]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.dx_.x, true));
    // 1501:6333  jns 0x6338  [x6052800]
    if (!c.sf) goto L1b348;
L1b345:
    if (c.tracing) c.traceAt(0x1b345);
    // 1501:6335  mov ax, 0  [x37886]
    c.a.x = (uint16_t)(0x0u);
L1b348:
    if (c.tracing) c.traceAt(0x1b348);
    // 1501:6338  cmp ax, 0xc8  [x6052800]
    c.sub<16>(c.a.x, 0xc8u, true);
    // 1501:633b  jb 0x6340  [x6052800]
    if (c.cf) goto L1b350;
L1b34d:
    if (c.tracing) c.traceAt(0x1b34d);
    // 1501:633d  mov ax, 0xc8  [x1822176]
    c.a.x = (uint16_t)(0xc8u);
L1b350:
    if (c.tracing) c.traceAt(0x1b350);
    // 1501:6340  shl ax, 7  [x6052800]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), false));
    // 1501:6343  mov di, ax  [x6052800]
    c.di.x = (uint16_t)(c.a.x);
    // 1501:6345  add di, word ptr cs:[bx + 0x2663]  [x6052800]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.csb + (uint16_t)(c.b.x + 0x2663u)), false));
    // 1501:634a  cmp di, bp  [x6052800]
    c.sub<16>(c.di.x, c.bp.x, true);
    // 1501:634c  jae 0x6369  [x6052800]
    if (!c.cf) goto L1b379;
L1b35e:
    if (c.tracing) c.traceAt(0x1b35e);
    // 1501:634e  push di  [x3019204]
    c.push16(c.di.x);
    // 1501:634f  mov cx, word ptr cs:[0x2a25]  [x3019204]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2a25u)));
    // 1501:6354  sub cx, word ptr cs:[0xd46]  [x3019204]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.csb + (uint16_t)(0xd46u)), true));
    // 1501:6359  mov ax, word ptr cs:[0xd44]  [x3019204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd44u)));
L1b36d:
    if (c.tracing) c.traceAt(0x1b36d);
    // 1501:635d  mov byte ptr es:[di], al  [x17291752]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:6360  add di, 0x80  [x17291752]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x80u, false));
    // 1501:6364  cmp di, bp  [x17291752]
    c.sub<16>(c.di.x, c.bp.x, true);
    // 1501:6366  jb 0x635d  [x17291752]
    if (c.cf) goto L1b36d;
L1b378:
    if (c.tracing) c.traceAt(0x1b378);
    // 1501:6368  pop bp  [x3019204]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
L1b379:
    if (c.tracing) c.traceAt(0x1b379);
    // 1501:6369  mov ax, word ptr cs:[0xd46]  [x6052800]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd46u)));
    // 1501:636d  mov word ptr cs:[0x2a25], ax  [x6052800]
    c.w16(c.csb + (uint16_t)(0x2a25u), c.a.x);
    // 1501:6371  add word ptr cs:[0xd4a], 0xc  [x6052800]
    c.w16(c.csb + (uint16_t)(0xd4au), c.add<16>(c.r16(c.csb + (uint16_t)(0xd4au)), 0xcu, false));
    // 1501:6377  add si, 0xa0  [x6052800]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:637b  cmp si, 0x1860  [x6052800]
    c.sub<16>(c.si.x, 0x1860u, true);
    // 1501:637f  jb 0x62f4  [x6052800]
    if (c.cf) goto L1b304;
L1b393:
    if (c.tracing) c.traceAt(0x1b393);
    // 1501:6383  mov si, word ptr cs:[0xd40]  [x155200]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd40u)));
    // 1501:6388  add si, bx  [x155200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.b.x, false));
    // 1501:638a  mov di, word ptr cs:[si + 0xac0]  [x155200]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0xac0u)));
    // 1501:638f  cmp di, bp  [x155200]
    c.sub<16>(c.di.x, c.bp.x, true);
    // 1501:6391  jae 0x639f  [x155200]
    if (!c.cf) goto L1b3af;
L1b3a3:
    if (c.tracing) c.traceAt(0x1b3a3);
    // 1501:6393  mov byte ptr es:[di], 0  [x605414]
    c.w8(c.esb + (uint16_t)(c.di.x), 0x0u);
    // 1501:6397  add di, 0x80  [x605414]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x80u, false));
    // 1501:639b  cmp di, bp  [x605414]
    c.sub<16>(c.di.x, c.bp.x, true);
    // 1501:639d  jb 0x6393  [x605414]
    if (c.cf) goto L1b3a3;
L1b3af:
    if (c.tracing) c.traceAt(0x1b3af);
    // 1501:639f  mov word ptr cs:[si + 0xac0], bp  [x155200]
    c.w16(c.csb + (uint16_t)(c.si.x + 0xac0u), c.bp.x);
    // 1501:63a4  mov si, word ptr cs:[0x30a]  [x155200]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x30au)));
    // 1501:63a9  add word ptr cs:[0x30a], 2  [x155200]
    c.w16(c.csb + (uint16_t)(0x30au), c.add<16>(c.r16(c.csb + (uint16_t)(0x30au)), 0x2u, false));
    // 1501:63af  mov ax, word ptr gs:[si]  [x155200]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint16_t)(c.si.x)));
    // 1501:63b2  cmp word ptr cs:[0x30c], 0  [x155200]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x30cu)), 0x0u, true);
    // 1501:63b8  jns 0x63c1  [x155200]
    if (!c.sf) goto L1b3d1;
L1b3ca:
    if (c.tracing) c.traceAt(0x1b3ca);
    // 1501:63ba  sub word ptr cs:[0x30e], ax  [x97440]
    c.w16(c.csb + (uint16_t)(0x30eu), c.sub<16>(c.r16(c.csb + (uint16_t)(0x30eu)), c.a.x, true));
    // 1501:63bf  jmp 0x63c6  [x97440]
    goto L1b3d6;
L1b3d1:
    if (c.tracing) c.traceAt(0x1b3d1);
    // 1501:63c1  add word ptr cs:[0x30e], ax  [x57760]
    c.w16(c.csb + (uint16_t)(0x30eu), c.add<16>(c.r16(c.csb + (uint16_t)(0x30eu)), c.a.x, true));
L1b3d6:
    if (c.tracing) c.traceAt(0x1b3d6);
    // 1501:63c6  pop si  [x155200]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:63c7  inc si  [x155200]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:63c8  add bx, 2  [x155200]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:63cb  cmp bx, 0x140  [x155200]
    c.sub<16>(c.b.x, 0x140u, true);
    // 1501:63cf  jae 0x63d4  [x155200]
    if (!c.cf) goto L1b3e4;
L1b3e1:
    if (c.tracing) c.traceAt(0x1b3e1);
    // 1501:63d1  jmp 0x62d2  [x154230]
    goto L1b2e2;
L1b3e4:
    if (c.tracing) c.traceAt(0x1b3e4);
    // 1501:63d4  ret   [x970]
    c.ip = c.pop16(); return;
L1b3e5:
    if (c.tracing) c.traceAt(0x1b3e5);
    // 1501:63d5  mov word ptr cs:[0xd54], 0  [x1]
    c.w16(c.csb + (uint16_t)(0xd54u), 0x0u);
    // 1501:63dc  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1b3ee:
    if (c.tracing) c.traceAt(0x1b3ee);
    // 1501:63de  mov cx, 0xa0  [x100]
    c.c.x = (uint16_t)(0xa0u);
    // 1501:63e1  mov word ptr cs:[0xd56], 1  [x100]
    c.w16(c.csb + (uint16_t)(0xd56u), 0x1u);
    // 1501:63e8  mov ax, word ptr cs:[0xd54]  [x100]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd54u)));
    // 1501:63ec  cdq   [x100]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:63ed  div cx  [x100]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x63edu); }   // #DE: int 0, then again
    // 1501:63ef  mov word ptr cs:[0xd58], ax  [x100]
    c.w16(c.csb + (uint16_t)(0xd58u), c.a.x);
    // 1501:63f3  mov word ptr cs:[0xd5a], dx  [x100]
    c.w16(c.csb + (uint16_t)(0xd5au), c.dx_.x);
    // 1501:63f8  mov word ptr cs:[0xd5c], 0x50  [x100]
    c.w16(c.csb + (uint16_t)(0xd5cu), 0x50u);
    // 1501:63ff  xor bx, bx  [x100]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:6401  mov cx, 0xa0  [x100]
    c.c.x = (uint16_t)(0xa0u);
L1b414:
    if (c.tracing) c.traceAt(0x1b414);
    // 1501:6404  mov dx, word ptr cs:[0xd58]  [x16000]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd58u)));
    // 1501:6409  mov ax, word ptr cs:[0xd5a]  [x16000]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd5au)));
    // 1501:640d  add word ptr cs:[0xd5c], ax  [x16000]
    c.w16(c.csb + (uint16_t)(0xd5cu), c.add<16>(c.r16(c.csb + (uint16_t)(0xd5cu)), c.a.x, false));
    // 1501:6412  cmp word ptr cs:[0xd5c], 0xa0  [x16000]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0xd5cu)), 0xa0u, true);
    // 1501:6419  jl 0x6427  [x16000]
    if ((c.sf != c.of)) goto L1b437;
L1b42b:
    if (c.tracing) c.traceAt(0x1b42b);
    // 1501:641b  sub word ptr cs:[0xd5c], 0xa0  [x4950]
    c.w16(c.csb + (uint16_t)(0xd5cu), c.sub<16>(c.r16(c.csb + (uint16_t)(0xd5cu)), 0xa0u, false));
    // 1501:6422  add dx, word ptr cs:[0xd56]  [x4950]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0xd56u)), true));
L1b437:
    if (c.tracing) c.traceAt(0x1b437);
    // 1501:6427  mov word ptr gs:[bx + di], dx  [x16000]
    c.w16(c.gsb + (uint16_t)(c.b.x + c.di.x), c.dx_.x);
    // 1501:642a  xchg dh, dl  [x16000]
    { const uint32_t t0 = c.dx_.h; c.dx_.h = (uint8_t)(c.dx_.l); c.dx_.l = (uint8_t)(t0); }
    // 1501:642c  mov word ptr fs:[bx + di], dx  [x16000]
    c.w16(c.fsb + (uint16_t)(c.b.x + c.di.x), c.dx_.x);
    // 1501:642f  add bx, 2  [x16000]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, true));
    // 1501:6432  loop 0x6404  [x16000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1b414;
L1b444:
    if (c.tracing) c.traceAt(0x1b444);
    // 1501:6434  add di, 0x100  [x100]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x100u, false));
    // 1501:6438  add word ptr cs:[0xd54], 1  [x100]
    c.w16(c.csb + (uint16_t)(0xd54u), c.add<16>(c.r16(c.csb + (uint16_t)(0xd54u)), 0x1u, false));
    // 1501:643e  cmp word ptr cs:[0xd54], 0x64  [x100]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0xd54u)), 0x64u, true);
    // 1501:6444  jb 0x63de  [x100]
    if (c.cf) goto L1b3ee;
L1b456:
    if (c.tracing) c.traceAt(0x1b456);
    // 1501:6446  ret   [x1]
    c.ip = c.pop16(); return;
L1b457:
    if (c.tracing) c.traceAt(0x1b457);
    // 1501:6447  mov cx, 0x28  [x1]
    c.c.x = (uint16_t)(0x28u);
    // 1501:644a  mov word ptr cs:[0xd56], 1  [x1]
    c.w16(c.csb + (uint16_t)(0xd56u), 0x1u);
    // 1501:6451  mov ax, 0x32  [x1]
    c.a.x = (uint16_t)(0x32u);
    // 1501:6454  cdq   [x1]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:6455  div cx  [x1]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x6455u); }   // #DE: int 0, then again
    // 1501:6457  mov word ptr cs:[0xd58], ax  [x1]
    c.w16(c.csb + (uint16_t)(0xd58u), c.a.x);
    // 1501:645b  mov word ptr cs:[0xd5a], dx  [x1]
    c.w16(c.csb + (uint16_t)(0xd5au), c.dx_.x);
    // 1501:6460  mov word ptr cs:[0xd5c], 0x14  [x1]
    c.w16(c.csb + (uint16_t)(0xd5cu), 0x14u);
    // 1501:6467  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:6469  mov dx, 5  [x1]
    c.dx_.x = (uint16_t)(0x5u);
    // 1501:646c  mov cx, 0x28  [x1]
    c.c.x = (uint16_t)(0x28u);
L1b47f:
    if (c.tracing) c.traceAt(0x1b47f);
    // 1501:646f  add dx, word ptr cs:[0xd58]  [x40]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0xd58u)), false));
    // 1501:6474  mov ax, word ptr cs:[0xd5a]  [x40]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd5au)));
    // 1501:6478  add word ptr cs:[0xd5c], ax  [x40]
    c.w16(c.csb + (uint16_t)(0xd5cu), c.add<16>(c.r16(c.csb + (uint16_t)(0xd5cu)), c.a.x, false));
    // 1501:647d  cmp word ptr cs:[0xd5c], 0xa0  [x40]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0xd5cu)), 0xa0u, true);
    // 1501:6484  jl 0x6492  [x40]
    if ((c.sf != c.of)) goto L1b4a2;
L1b496:
    if (c.tracing) c.traceAt(0x1b496);
    // 1501:6486  sub word ptr cs:[0xd5c], 0xa0  [x2]
    c.w16(c.csb + (uint16_t)(0xd5cu), c.sub<16>(c.r16(c.csb + (uint16_t)(0xd5cu)), 0xa0u, false));
    // 1501:648d  add dx, word ptr cs:[0xd56]  [x2]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0xd56u)), true));
L1b4a2:
    if (c.tracing) c.traceAt(0x1b4a2);
    // 1501:6492  mov word ptr cs:[si + 0xa22], dx  [x40]
    c.w16(c.csb + (uint16_t)(c.si.x + 0xa22u), c.dx_.x);
    // 1501:6497  add si, 4  [x40]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:649a  loop 0x646f  [x40]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1b47f;
L1b4ac:
    if (c.tracing) c.traceAt(0x1b4ac);
    // 1501:649c  mov cx, 0x28  [x1]
    c.c.x = (uint16_t)(0x28u);
    // 1501:649f  mov word ptr cs:[0xd56], 1  [x1]
    c.w16(c.csb + (uint16_t)(0xd56u), 0x1u);
    // 1501:64a6  mov ax, 0x34  [x1]
    c.a.x = (uint16_t)(0x34u);
    // 1501:64a9  cdq   [x1]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:64aa  div cx  [x1]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x64aau); }   // #DE: int 0, then again
    // 1501:64ac  mov word ptr cs:[0xd58], ax  [x1]
    c.w16(c.csb + (uint16_t)(0xd58u), c.a.x);
    // 1501:64b0  mov word ptr cs:[0xd5a], dx  [x1]
    c.w16(c.csb + (uint16_t)(0xd5au), c.dx_.x);
    // 1501:64b5  mov word ptr cs:[0xd5c], 0x14  [x1]
    c.w16(c.csb + (uint16_t)(0xd5cu), 0x14u);
    // 1501:64bc  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:64be  mov dx, 3  [x1]
    c.dx_.x = (uint16_t)(0x3u);
    // 1501:64c1  mov cx, 0x28  [x1]
    c.c.x = (uint16_t)(0x28u);
L1b4d4:
    if (c.tracing) c.traceAt(0x1b4d4);
    // 1501:64c4  add dx, word ptr cs:[0xd58]  [x40]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0xd58u)), false));
    // 1501:64c9  mov ax, word ptr cs:[0xd5a]  [x40]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd5au)));
    // 1501:64cd  add word ptr cs:[0xd5c], ax  [x40]
    c.w16(c.csb + (uint16_t)(0xd5cu), c.add<16>(c.r16(c.csb + (uint16_t)(0xd5cu)), c.a.x, false));
    // 1501:64d2  cmp word ptr cs:[0xd5c], 0xa0  [x40]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0xd5cu)), 0xa0u, true);
    // 1501:64d9  jl 0x64e7  [x40]
    if ((c.sf != c.of)) goto L1b4f7;
L1b4eb:
    if (c.tracing) c.traceAt(0x1b4eb);
    // 1501:64db  sub word ptr cs:[0xd5c], 0xa0  [x3]
    c.w16(c.csb + (uint16_t)(0xd5cu), c.sub<16>(c.r16(c.csb + (uint16_t)(0xd5cu)), 0xa0u, false));
    // 1501:64e2  add dx, word ptr cs:[0xd56]  [x3]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0xd56u)), true));
L1b4f7:
    if (c.tracing) c.traceAt(0x1b4f7);
    // 1501:64e7  mov word ptr cs:[si + 0xa20], dx  [x40]
    c.w16(c.csb + (uint16_t)(c.si.x + 0xa20u), c.dx_.x);
    // 1501:64ec  add si, 4  [x40]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:64ef  loop 0x64c4  [x40]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1b4d4;
L1b501:
    if (c.tracing) c.traceAt(0x1b501);
    // 1501:64f1  ret   [x1]
    c.ip = c.pop16(); return;
L1b502:
    if (c.tracing) c.traceAt(0x1b502);
    // 1501:64f2  mov word ptr cs:[0xd4c], 0  [x969]
    c.w16(c.csb + (uint16_t)(0xd4cu), 0x0u);
    // 1501:64f9  mov word ptr cs:[0xd4e], ax  [x969]
    c.w16(c.csb + (uint16_t)(0xd4eu), c.a.x);
    // 1501:64fd  call 0x42db  [x969]
    c.push16(0x6500u); code_29(c, 0x192ebu); if (c.ip != 0x6500u) c.badReturn(0x1b50d);
L1b510:
    if (c.tracing) c.traceAt(0x1b510);
    // 1501:6500  mov ax, word ptr cs:[0xd4c]  [x969]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd4cu)));
    // 1501:6504  sub ax, word ptr cs:[0xd60]  [x969]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0xd60u)), false));
    // 1501:6509  add word ptr cs:[0xd60], ax  [x969]
    c.w16(c.csb + (uint16_t)(0xd60u), c.add<16>(c.r16(c.csb + (uint16_t)(0xd60u)), c.a.x, false));
    // 1501:650e  mov ax, word ptr cs:[0xd4e]  [x969]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd4eu)));
    // 1501:6512  sub ax, word ptr cs:[0xd5e]  [x969]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0xd5eu)), false));
    // 1501:6517  add word ptr cs:[0xd5e], ax  [x969]
    c.w16(c.csb + (uint16_t)(0xd5eu), c.add<16>(c.r16(c.csb + (uint16_t)(0xd5eu)), c.a.x, true));
    // 1501:651c  ret   [x969]
    c.ip = c.pop16(); return;
L1b55b:
    if (c.tracing) c.traceAt(0x1b55b);
    // 1501:654b  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_29(29, {0x15010, 0x191a7, 0x191b2, 0x191c6, 0x191cb, 0x191f8, 0x191fa, 0x1920a, 0x1920c, 0x19213, 0x19216, 0x1921e, 0x19228, 0x1922b, 0x1922e, 0x19231, 0x19241, 0x19248, 0x1925e, 0x1925f, 0x19263, 0x19264, 0x19268, 0x19279, 0x1927c, 0x19290, 0x19293, 0x192bc, 0x192bf, 0x192c2, 0x192d3, 0x192da, 0x192e3, 0x192ea, 0x192eb, 0x193a4, 0x193ac, 0x193cc, 0x193e4, 0x193e7, 0x193f6, 0x193f9, 0x195a0, 0x1975d, 0x19955, 0x19b46, 0x19b9e, 0x19baa, 0x19bac, 0x19d44, 0x19eee, 0x1a0cf, 0x1a2b0, 0x1a354, 0x1a365, 0x1a368, 0x1a502, 0x1a6ad, 0x1a88e, 0x1aa6f, 0x1ab0e, 0x1aca6, 0x1ae50, 0x1b031, 0x1b212, 0x1b2b6, 0x1b2d6, 0x1b2d8, 0x1b2e2, 0x1b304, 0x1b345, 0x1b348, 0x1b34d, 0x1b350, 0x1b35e, 0x1b36d, 0x1b378, 0x1b379, 0x1b393, 0x1b3a3, 0x1b3af, 0x1b3ca, 0x1b3d1, 0x1b3d6, 0x1b3e1, 0x1b3e4, 0x1b3e5, 0x1b3ee, 0x1b414, 0x1b42b, 0x1b437, 0x1b444, 0x1b456, 0x1b457, 0x1b47f, 0x1b496, 0x1b4a2, 0x1b4ac, 0x1b4d4, 0x1b4eb, 0x1b4f7, 0x1b501, 0x1b502, 0x1b510, 0x1b55b}, code_29);

}  // namespace show
