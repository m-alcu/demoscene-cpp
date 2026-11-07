// Program 2, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_2(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x21fe1: goto L21fe1;
    case 0x21ffa: goto L21ffa;
    case 0x21fff: goto L21fff;
    case 0x2200d: goto L2200d;
    case 0x22012: goto L22012;
    case 0x22021: goto L22021;
    case 0x22022: goto L22022;
    case 0x22037: goto L22037;
    case 0x22038: goto L22038;
    case 0x22045: goto L22045;
    case 0x22051: goto L22051;
    case 0x22df0: goto L22df0;
    case 0x22e4d: goto L22e4d;
    case 0x22e54: goto L22e54;
    case 0x22e5d: goto L22e5d;
    case 0x22e64: goto L22e64;
    case 0x22e68: goto L22e68;
    case 0x22e6f: goto L22e6f;
    case 0x22e7d: goto L22e7d;
    case 0x22e82: goto L22e82;
    case 0x22e8a: goto L22e8a;
    case 0x22e8e: goto L22e8e;
    case 0x22e9c: goto L22e9c;
    case 0x22ea0: goto L22ea0;
    case 0x22eac: goto L22eac;
    case 0x22ebe: goto L22ebe;
    case 0x22ef5: goto L22ef5;
    case 0x22ef7: goto L22ef7;
    case 0x22ef9: goto L22ef9;
    case 0x22f04: goto L22f04;
    case 0x22f09: goto L22f09;
    case 0x22f1c: goto L22f1c;
    case 0x22f21: goto L22f21;
    default: c.callLinear(t); return;
    }
L21fe1:
    if (c.tracing) c.traceAt(0x21fe1);
    // 21ef:00f1  mov word ptr cs:[0x32], ax  [x21]
    c.w16(c.csb + (uint16_t)(0x32u), c.a.x);
    // 21ef:00f5  shr eax, 0x10  [x21]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), false));
    // 21ef:00f9  mov byte ptr cs:[0x34], al  [x21]
    c.w8(c.csb + (uint16_t)(0x34u), c.a.l);
    // 21ef:00fd  mov byte ptr cs:[0x37], ah  [x21]
    c.w8(c.csb + (uint16_t)(0x37u), c.a.h);
    // 21ef:0102  mov eax, cr0  [x21]
    c.a.e = (uint32_t)(c.cr0);
    // 21ef:0105  or al, 1  [x21]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), true));
    // 21ef:0107  mov cr0, eax  [x21]
    c.setCr0(c.a.e);
L21ffa:
    if (c.tracing) c.traceAt(0x21ffa);
    // 21ef:010a  ljmp 8:0x10f  [x21]
    c.loadCs(0x8u); t = c.csb + 0x10fu; goto dispatch;
L21fff:
    if (c.tracing) c.traceAt(0x21fff);
    // 0008:010f  mov ax, 0x28  [x21]
    c.a.x = (uint16_t)(0x28u);
    // 0008:0112  lldt ax  [x21]
    c.ldtBase = c.segBase(c.a.x);
    // 0008:0115  mov eax, cr0  [x21]
    c.a.e = (uint32_t)(c.cr0);
    // 0008:0118  and al, 0xfe  [x21]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfeu), true));
    // 0008:011a  mov cr0, eax  [x21]
    c.setCr0(c.a.e);
L2200d:
    if (c.tracing) c.traceAt(0x2200d);
    // 0008:011d  ljmp 0x21ef:0x122  [x21]
    c.loadCs(0x21efu); t = c.csb + 0x122u; goto dispatch;
L22012:
    if (c.tracing) c.traceAt(0x22012);
    // 21ef:0122  mov eax, dword ptr cs:[0x1c2]  [x21]
    c.a.e = (uint32_t)(c.r32(c.csb + (uint32_t)(0x1c2u)));
    // 21ef:012a  mov ebx, dword ptr cs:[0x4c]  [x21]
    c.b.e = (uint32_t)(c.r32(c.csb + (uint16_t)(0x4cu)));
    // 21ef:0130  iret   [x21]
    c.iret(); return;
L22021:
    if (c.tracing) c.traceAt(0x22021);
    // 21ef:0131  iret   [x3]
    c.iret(); return;
L22022:
    if (c.tracing) c.traceAt(0x22022);
    // 21ef:0132  pushal   [x1]
    { const uint32_t t0 = c.sp.e; c.push32(c.a.e); c.push32(c.c.e); c.push32(c.dx_.e); c.push32(c.b.e); c.push32(t0); c.push32(c.bp.e); c.push32(c.si.e); c.push32(c.di.e); }
    // 21ef:0134  push ds  [x1]
    c.push16(c.ds);
    // 21ef:0135  cli   [x1]
    c.m.cli();
    // 21ef:0136  lds si, ptr cs:[0x48]  [x1]
    { const uint32_t t0 = c.r16(c.csb + (uint16_t)(0x48u)); const uint16_t t1 = c.r16(c.csb + (uint16_t)(0x48u) + 2); c.si.x = (uint16_t)(t0); c.loadDs(t1); }
    // 21ef:013b  mov byte ptr [si], 0xcb  [x1]
    c.w8(c.dsb + (uint16_t)(c.si.x), (c.r8(0x2202d)));
    // 21ef:013e  mov dword ptr [si + 1], 0  [x1]
    c.w32(c.dsb + (uint16_t)(c.si.x + 0x1u), (c.r32(0x22032)));
    // 21ef:0146  sti   [x1]
    c.ip = 0x147u; c.d32 = false; c.m.sti();
L22037:
    if (c.tracing) c.traceAt(0x22037);
    // 21ef:0147  push cs  [x1]
    c.push16(c.cs);
L22038:
    if (c.tracing) c.traceAt(0x22038);
    // 21ef:0148  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 21ef:0149  mov ah, 0xd  [x1]
    c.a.h = (uint8_t)(0xdu);
    // 21ef:014b  mov dx, word ptr cs:[0x50]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x50u)));
    // 21ef:0150  lcall cs:[0x48]  [x1]
    { const uint32_t t0 = c.r16(c.csb + (uint16_t)(0x48u)); const uint16_t t1 = c.r16(c.csb + (uint16_t)(0x48u) + 2); c.push16(c.cs); c.push16(0x155u); c.loadCs(t1); c.callLinear(c.csb + t0); }
L22045:
    if (c.tracing) c.traceAt(0x22045);
    // 21ef:0155  mov ah, 0xa  [x1]
    c.a.h = (uint8_t)(0xau);
    // 21ef:0157  mov dx, word ptr cs:[0x50]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x50u)));
    // 21ef:015c  lcall cs:[0x48]  [x1]
    { const uint32_t t0 = c.r16(c.csb + (uint16_t)(0x48u)); const uint16_t t1 = c.r16(c.csb + (uint16_t)(0x48u) + 2); c.push16(c.cs); c.push16(0x161u); c.loadCs(t1); c.callLinear(c.csb + t0); }
L22051:
    if (c.tracing) c.traceAt(0x22051);
    // 21ef:0161  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 21ef:0162  popal   [x1]
    c.di.e = c.pop32(); c.si.e = c.pop32(); c.bp.e = c.pop32(); c.pop32(); c.b.e = c.pop32(); c.dx_.e = c.pop32(); c.c.e = c.pop32(); c.a.e = c.pop32();
    // 21ef:0164  iret   [x1]
    c.iret(); return;
L22df0:
    if (c.tracing) c.traceAt(0x22df0);
    // 22df:0000  mov ax, 0x21ef  [x1]
    c.a.x = (uint16_t)(0x21efu);
    // 22df:0003  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 22df:0005  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 22df:0009  shl eax, 4  [x1]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 22df:000d  add dword ptr [2], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x2u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x2u)), c.a.e, false));
    // 22df:0012  add dword ptr [0x1c2], eax  [x1]
    c.w32(c.dsb + (uint32_t)(0x1c2u), c.add<32>(c.r32(c.dsb + (uint32_t)(0x1c2u)), c.a.e, false));
    // 22df:001a  mov si, 8  [x1]
    c.si.x = (uint16_t)(0x8u);
    // 22df:001d  lgdt [0]  [x1]
    c.gdtLimit = c.r16(c.dsb + (uint16_t)(0u)); c.gdtBase = c.r32(c.dsb + (uint16_t)(0u) + 2) & 0xFFFFFFu;
    // 22df:0022  mov word ptr [si + 0xa], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xau), c.a.x);
    // 22df:0025  shr eax, 0x10  [x1]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), false));
    // 22df:0029  mov byte ptr [si + 0xc], al  [x1]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0xcu), c.a.l);
    // 22df:002c  mov ax, 0x220b  [x1]
    c.a.x = (uint16_t)(0x220bu);
    // 22df:002f  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 22df:0033  shl eax, 4  [x1]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 22df:0037  mov word ptr [si + 0x1a], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x1au), c.a.x);
    // 22df:003a  shr eax, 0x10  [x1]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), false));
    // 22df:003e  mov byte ptr [si + 0x1c], al  [x1]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0x1cu), c.a.l);
    // 22df:0041  mov ax, 0x22df  [x1]
    c.a.x = (uint16_t)(0x22dfu);
    // 22df:0044  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 22df:0048  shl eax, 4  [x1]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 22df:004c  mov word ptr [si + 0x32], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x32u), c.a.x);
    // 22df:004f  shr eax, 0x10  [x1]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), true));
    // 22df:0053  mov byte ptr [si + 0x34], al  [x1]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0x34u), c.a.l);
    // 22df:0056  pushf   [x1]
    c.push16(c.flags());
    // 22df:0057  pop ax  [x1]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 22df:0058  or ah, 0xf0  [x1]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (0xf0u), false));
    // 22df:005b  push ax  [x1]
    c.push16(c.a.x);
    // 22df:005c  popf   [x1]
    c.ip = 0x5du; c.d32 = false; c.setFlags((uint16_t)c.pop16());
L22e4d:
    if (c.tracing) c.traceAt(0x22e4d);
    // 22df:005d  pushf   [x1]
    c.push16(c.flags());
    // 22df:005e  pop ax  [x1]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 22df:005f  and ah, 0xf0  [x1]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xf0u), true));
    // 22df:0062  je 0xc2  [x1]
    if (c.zf) { t = 0x22eb2u; goto dispatch; }
L22e54:
    if (c.tracing) c.traceAt(0x22e54);
    // 22df:0064  nop   [x1]
    // 22df:0065  nop   [x1]
    // 22df:0066  smsw ax  [x1]
    c.a.x = (uint16_t)((uint16_t)c.cr0);
    // 22df:0069  test al, 1  [x1]
    c.logic<8>((c.a.l) & (0x1u), true);
    // 22df:006b  jne 0xc2  [x1]
    if (!c.zf) { t = 0x22eb2u; goto dispatch; }
L22e5d:
    if (c.tracing) c.traceAt(0x22e5d);
    // 22df:006d  nop   [x1]
    // 22df:006e  nop   [x1]
    // 22df:006f  mov ax, 0x4300  [x1]
    c.a.x = (uint16_t)(0x4300u);
    // 22df:0072  int 0x2f  [x1]
    c.ip = 0x74u; c.d32 = false; c.intr(0x2f, 0x74u);
L22e64:
    if (c.tracing) c.traceAt(0x22e64);
    // 22df:0074  cmp al, 0x80  [x1]
    c.sub<8>(c.a.l, 0x80u, true);
    // 22df:0076  jne 0xc2  [x1]
    if (!c.zf) { t = 0x22eb2u; goto dispatch; }
L22e68:
    if (c.tracing) c.traceAt(0x22e68);
    // 22df:0078  nop   [x1]
    // 22df:0079  nop   [x1]
    // 22df:007a  mov ax, 0x4310  [x1]
    c.a.x = (uint16_t)(0x4310u);
    // 22df:007d  int 0x2f  [x1]
    c.ip = 0x7fu; c.d32 = false; c.intr(0x2f, 0x7fu);
L22e6f:
    if (c.tracing) c.traceAt(0x22e6f);
    // 22df:007f  mov word ptr [0x48], bx  [x1]
    c.w16(c.dsb + (uint16_t)(0x48u), c.b.x);
    // 22df:0083  mov word ptr [0x4a], es  [x1]
    c.w16(c.dsb + (uint16_t)(0x4au), c.es);
    // 22df:0087  xor ah, ah  [x1]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), true));
    // 22df:0089  lcall [0x48]  [x1]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x48u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x48u) + 2); c.push16(c.cs); c.push16(0x8du); c.loadCs(t1); c.callLinear(c.csb + t0); }
L22e7d:
    if (c.tracing) c.traceAt(0x22e7d);
    // 22df:008d  cmp ah, 2  [x1]
    c.sub<8>(c.a.h, 0x2u, true);
    // 22df:0090  jb 0xc2  [x1]
    if (c.cf) { t = 0x22eb2u; goto dispatch; }
L22e82:
    if (c.tracing) c.traceAt(0x22e82);
    // 22df:0092  nop   [x1]
    // 22df:0093  nop   [x1]
    // 22df:0094  mov ah, 3  [x1]
    c.a.h = (uint8_t)(0x3u);
    // 22df:0096  lcall [0x48]  [x1]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x48u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x48u) + 2); c.push16(c.cs); c.push16(0x9au); c.loadCs(t1); c.callLinear(c.csb + t0); }
L22e8a:
    if (c.tracing) c.traceAt(0x22e8a);
    // 22df:009a  or ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.a.x), true));
    // 22df:009c  je 0xc2  [x1]
    if (c.zf) { t = 0x22eb2u; goto dispatch; }
L22e8e:
    if (c.tracing) c.traceAt(0x22e8e);
    // 22df:009e  nop   [x1]
    // 22df:009f  nop   [x1]
    // 22df:00a0  mov edx, 0x86b  [x1]
    c.dx_.e = (uint32_t)(0x86bu);
    // 22df:00a6  mov ah, 9  [x1]
    c.a.h = (uint8_t)(0x9u);
    // 22df:00a8  lcall [0x48]  [x1]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x48u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x48u) + 2); c.push16(c.cs); c.push16(0xacu); c.loadCs(t1); c.callLinear(c.csb + t0); }
L22e9c:
    if (c.tracing) c.traceAt(0x22e9c);
    // 22df:00ac  or ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.a.x), true));
    // 22df:00ae  je 0xc2  [x1]
    if (c.zf) { t = 0x22eb2u; goto dispatch; }
L22ea0:
    if (c.tracing) c.traceAt(0x22ea0);
    // 22df:00b0  nop   [x1]
    // 22df:00b1  nop   [x1]
    // 22df:00b2  mov word ptr [0x50], dx  [x1]
    c.w16(c.dsb + (uint16_t)(0x50u), c.dx_.x);
    // 22df:00b6  mov ah, 0xc  [x1]
    c.a.h = (uint8_t)(0xcu);
    // 22df:00b8  lcall [0x48]  [x1]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x48u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x48u) + 2); c.push16(c.cs); c.push16(0xbcu); c.loadCs(t1); c.callLinear(c.csb + t0); }
L22eac:
    if (c.tracing) c.traceAt(0x22eac);
    // 22df:00bc  or ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.a.x), true));
    // 22df:00be  jne 0xce  [x1]
    if (!c.zf) goto L22ebe;
    c.notTranslated(0x22eb0, "fall-through");
L22ebe:
    if (c.tracing) c.traceAt(0x22ebe);
    // 22df:00ce  mov word ptr [0x4c], bx  [x1]
    c.w16(c.dsb + (uint16_t)(0x4cu), c.b.x);
    // 22df:00d2  mov word ptr [0x4e], dx  [x1]
    c.w16(c.dsb + (uint16_t)(0x4eu), c.dx_.x);
    // 22df:00d6  mov ax, 0x21ef  [x1]
    c.a.x = (uint16_t)(0x21efu);
    // 22df:00d9  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 22df:00db  lds si, ptr [0x48]  [x1]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x48u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x48u) + 2); c.si.x = (uint16_t)(t0); c.loadDs(t1); }
    // 22df:00df  mov al, 0xea  [x1]
    c.a.l = (uint8_t)(0xeau);
    // 22df:00e1  xchg byte ptr [si], al  [x1]
    { const uint32_t t0 = c.r8(c.dsb + (uint16_t)(c.si.x)); c.w8(c.dsb + (uint16_t)(c.si.x), c.a.l); c.a.l = (uint8_t)(t0); }
    // 22df:00e3  mov byte ptr es:[0xc4], al  [x1]
    c.w8(c.esb + (uint16_t)(0xc4u), c.a.l);
    // 22df:00e7  mov byte ptr es:[0x13d], al  [x1]
    c.w8(c.esb + (uint16_t)(0x13du), c.a.l);
    // 22df:00eb  mov eax, 0x21ef00a3  [x1]
    c.a.e = (uint32_t)(0x21ef00a3u);
    // 22df:00f1  xchg dword ptr [si + 1], eax  [x1]
    { const uint32_t t0 = c.r32(c.dsb + (uint16_t)(c.si.x + 0x1u)); c.w32(c.dsb + (uint16_t)(c.si.x + 0x1u), c.a.e); c.a.e = (uint32_t)(t0); }
    // 22df:00f5  mov dword ptr es:[0xc9], eax  [x1]
    c.w32(c.esb + (uint16_t)(0xc9u), c.a.e);
    // 22df:00fa  mov dword ptr es:[0x142], eax  [x1]
    c.w32(c.esb + (uint16_t)(0x142u), c.a.e);
    // 22df:00ff  mov al, 0x80  [x1]
    c.a.l = (uint8_t)(0x80u);
    // 22df:0101  out 0x70, al  [x1]
    c.ip = 0x103u; c.d32 = false; c.out8(0x70, c.a.l);
    // 22df:0103  jmp 0x105  [x1]
    goto L22ef5;
L22ef5:
    if (c.tracing) c.traceAt(0x22ef5);
    // 22df:0105  jmp 0x107  [x1]
    goto L22ef7;
L22ef7:
    if (c.tracing) c.traceAt(0x22ef7);
    // 22df:0107  jmp 0x109  [x1]
    goto L22ef9;
L22ef9:
    if (c.tracing) c.traceAt(0x22ef9);
    // 22df:0109  in al, 0x71  [x1]
    c.ip = 0x10bu; c.d32 = false; c.a.l = c.in8(0x71);
    // 22df:010b  cli   [x1]
    c.m.cli();
    // 22df:010c  mov eax, cr0  [x1]
    c.a.e = (uint32_t)(c.cr0);
    // 22df:010f  or al, 1  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), true));
    // 22df:0111  mov cr0, eax  [x1]
    c.setCr0(c.a.e);
L22f04:
    if (c.tracing) c.traceAt(0x22f04);
    // 22df:0114  ljmp 0x30:0x119  [x1]
    c.loadCs(0x30u); t = c.csb + 0x119u; goto dispatch;
L22f09:
    if (c.tracing) c.traceAt(0x22f09);
    // 0030:0119  mov ax, 0x20  [x1]
    c.a.x = (uint16_t)(0x20u);
    // 0030:011c  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 0030:011e  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 0030:0120  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 0030:0122  mov gs, ax  [x1]
    c.loadGs(c.a.x);
    // 0030:0124  mov eax, cr0  [x1]
    c.a.e = (uint32_t)(c.cr0);
    // 0030:0127  and al, 0xfe  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfeu), true));
    // 0030:0129  mov cr0, eax  [x1]
    c.setCr0(c.a.e);
L22f1c:
    if (c.tracing) c.traceAt(0x22f1c);
    // 0030:012c  ljmp 0x22df:0x131  [x1]
    c.loadCs(0x22dfu); t = c.csb + 0x131u; goto dispatch;
L22f21:
    if (c.tracing) c.traceAt(0x22f21);
    // 22df:0131  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 22df:0133  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 22df:0135  mov dword ptr [0x3f0], 0x21ef00f1  [x1]
    c.w32(c.dsb + (uint16_t)(0x3f0u), 0x21ef00f1u);
    // 22df:013e  mov dword ptr [0x3f4], 0x21ef0131  [x1]
    c.w32(c.dsb + (uint16_t)(0x3f4u), 0x21ef0131u);
    // 22df:0147  mov dword ptr [0x3f8], 0x21ef0132  [x1]
    c.w32(c.dsb + (uint16_t)(0x3f8u), 0x21ef0132u);
    // 22df:0150  mov ax, 0x3100  [x1]
    c.a.x = (uint16_t)(0x3100u);
    // 22df:0153  mov dx, 0x100  [x1]
    c.dx_.x = (uint16_t)(0x100u);
    // 22df:0156  int 0x21  [x1]
    c.ip = 0x158u; c.d32 = false; c.intr(0x21, 0x158u);
    c.notTranslated(0x22f48, "fall-through");
}

static Register reg02(2, {0x21fe1, 0x21ffa, 0x21fff, 0x2200d, 0x22012, 0x22021, 0x22022, 0x22037, 0x22038, 0x22045, 0x22051, 0x22df0, 0x22e4d, 0x22e54, 0x22e5d, 0x22e64, 0x22e68, 0x22e6f, 0x22e7d, 0x22e82, 0x22e8a, 0x22e8e, 0x22e9c, 0x22ea0, 0x22eac, 0x22ebe, 0x22ef5, 0x22ef7, 0x22ef9, 0x22f04, 0x22f09, 0x22f1c, 0x22f21}, code_2);

}  // namespace angel
