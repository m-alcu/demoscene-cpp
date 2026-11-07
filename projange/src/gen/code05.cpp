// Program 5, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_5(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x31fa0: goto L31fa0;
    case 0x32450: goto L32450;
    case 0x325a1: goto L325a1;
    case 0x32a51: goto L32a51;
    case 0x5f960: goto L5f960;
    case 0x5f973: goto L5f973;
    case 0x5f980: goto L5f980;
    case 0x5f989: goto L5f989;
    case 0x5f990: goto L5f990;
    case 0x5f992: goto L5f992;
    case 0x5f996: goto L5f996;
    case 0x5f998: goto L5f998;
    case 0x5f99c: goto L5f99c;
    case 0x5f9a5: goto L5f9a5;
    case 0x5f9a7: goto L5f9a7;
    case 0x5f9a9: goto L5f9a9;
    case 0x5f9b3: goto L5f9b3;
    case 0x5f9b4: goto L5f9b4;
    case 0x5f9f6: goto L5f9f6;
    case 0x5fa03: goto L5fa03;
    case 0x5fa13: goto L5fa13;
    case 0x5fa15: goto L5fa15;
    case 0x5fa1e: goto L5fa1e;
    case 0x5fa22: goto L5fa22;
    case 0x5fa24: goto L5fa24;
    case 0x5fa2d: goto L5fa2d;
    case 0x5fa2f: goto L5fa2f;
    case 0x5fa31: goto L5fa31;
    case 0x5fa33: goto L5fa33;
    case 0x5fa3b: goto L5fa3b;
    case 0x5fa3c: goto L5fa3c;
    case 0x5fa41: goto L5fa41;
    case 0x5fa48: goto L5fa48;
    case 0x5fa4a: goto L5fa4a;
    case 0x5fa4c: goto L5fa4c;
    case 0x5fa4d: goto L5fa4d;
    case 0x5fa51: goto L5fa51;
    case 0x5fa60: goto L5fa60;
    case 0x5fa85: goto L5fa85;
    case 0x5fa89: goto L5fa89;
    case 0x5fa8e: goto L5fa8e;
    case 0x5fa92: goto L5fa92;
    case 0x5fa96: goto L5fa96;
    case 0x5faa6: goto L5faa6;
    case 0x5faa7: goto L5faa7;
    case 0x5faae: goto L5faae;
    case 0x5fab5: goto L5fab5;
    case 0x5fcfc: goto L5fcfc;
    case 0x5fd05: goto L5fd05;
    case 0x5fd52: goto L5fd52;
    case 0x5fd56: goto L5fd56;
    case 0x5fd7a: goto L5fd7a;
    case 0x5fe19: goto L5fe19;
    case 0x5fe1c: goto L5fe1c;
    case 0x5fe9d: goto L5fe9d;
    case 0x5feb3: goto L5feb3;
    case 0x5fec9: goto L5fec9;
    case 0x5fee9: goto L5fee9;
    case 0x5fef3: goto L5fef3;
    case 0x5ff06: goto L5ff06;
    case 0x5ff2b: goto L5ff2b;
    case 0x5ff4b: goto L5ff4b;
    case 0x5ff55: goto L5ff55;
    case 0x5ff68: goto L5ff68;
    case 0x5ff8d: goto L5ff8d;
    case 0x5ff95: goto L5ff95;
    case 0x5ffb0: goto L5ffb0;
    case 0x5ffbe: goto L5ffbe;
    case 0x5ffcc: goto L5ffcc;
    case 0x5ffce: goto L5ffce;
    case 0x5ffd0: goto L5ffd0;
    case 0x5ffd5: goto L5ffd5;
    case 0x5ffd8: goto L5ffd8;
    case 0x5ffdd: goto L5ffdd;
    case 0x5ffdf: goto L5ffdf;
    case 0x60001: goto L60001;
    case 0x6000e: goto L6000e;
    case 0x6002e: goto L6002e;
    case 0x60038: goto L60038;
    case 0x6004b: goto L6004b;
    case 0x60070: goto L60070;
    case 0x60077: goto L60077;
    case 0x60082: goto L60082;
    case 0x600a2: goto L600a2;
    case 0x600ac: goto L600ac;
    case 0x600bf: goto L600bf;
    case 0x600e4: goto L600e4;
    case 0x600f1: goto L600f1;
    case 0x600f2: goto L600f2;
    case 0x600ff: goto L600ff;
    case 0x6010d: goto L6010d;
    case 0x60110: goto L60110;
    case 0x60113: goto L60113;
    case 0x6011f: goto L6011f;
    case 0x60131: goto L60131;
    case 0x60134: goto L60134;
    case 0x60137: goto L60137;
    case 0x6013f: goto L6013f;
    case 0x60144: goto L60144;
    case 0x60146: goto L60146;
    case 0x60154: goto L60154;
    case 0x60157: goto L60157;
    case 0x6015a: goto L6015a;
    case 0x60166: goto L60166;
    case 0x60178: goto L60178;
    case 0x6017b: goto L6017b;
    case 0x6017e: goto L6017e;
    case 0x60186: goto L60186;
    case 0x6018b: goto L6018b;
    case 0x6018c: goto L6018c;
    case 0x60197: goto L60197;
    case 0x601a9: goto L601a9;
    case 0x601b1: goto L601b1;
    case 0x601e5: goto L601e5;
    case 0x601e7: goto L601e7;
    case 0x601ea: goto L601ea;
    case 0x601ed: goto L601ed;
    case 0x601ff: goto L601ff;
    case 0x60222: goto L60222;
    case 0x60236: goto L60236;
    case 0x6023b: goto L6023b;
    case 0x60342: goto L60342;
    case 0x6035d: goto L6035d;
    case 0x6039c: goto L6039c;
    case 0x603cd: goto L603cd;
    case 0x6040b: goto L6040b;
    case 0x6040f: goto L6040f;
    case 0x60443: goto L60443;
    case 0x60451: goto L60451;
    case 0x60457: goto L60457;
    case 0x6045c: goto L6045c;
    case 0x6045f: goto L6045f;
    case 0x60461: goto L60461;
    case 0x60473: goto L60473;
    case 0x6047a: goto L6047a;
    case 0x60481: goto L60481;
    case 0x60490: goto L60490;
    case 0x60496: goto L60496;
    case 0x604ab: goto L604ab;
    case 0x604ec: goto L604ec;
    case 0x604ef: goto L604ef;
    case 0x604f9: goto L604f9;
    case 0x604ff: goto L604ff;
    case 0x60521: goto L60521;
    case 0x6053c: goto L6053c;
    case 0x60554: goto L60554;
    case 0x60555: goto L60555;
    case 0x60571: goto L60571;
    case 0x60583: goto L60583;
    case 0x60585: goto L60585;
    case 0x6059d: goto L6059d;
    case 0x605a1: goto L605a1;
    case 0x605c0: goto L605c0;
    case 0x605c4: goto L605c4;
    case 0x605c8: goto L605c8;
    case 0x605cd: goto L605cd;
    case 0x605d4: goto L605d4;
    case 0x605df: goto L605df;
    case 0x605e8: goto L605e8;
    case 0x605ea: goto L605ea;
    case 0x605eb: goto L605eb;
    case 0x605ef: goto L605ef;
    case 0x6060e: goto L6060e;
    case 0x60612: goto L60612;
    case 0x60616: goto L60616;
    case 0x6061b: goto L6061b;
    case 0x60622: goto L60622;
    case 0x6062d: goto L6062d;
    case 0x60636: goto L60636;
    case 0x60638: goto L60638;
    case 0x60639: goto L60639;
    case 0x60642: goto L60642;
    case 0x60647: goto L60647;
    case 0x60649: goto L60649;
    case 0x6064d: goto L6064d;
    case 0x6064f: goto L6064f;
    case 0x60667: goto L60667;
    case 0x60698: goto L60698;
    case 0x606a9: goto L606a9;
    case 0x606ce: goto L606ce;
    case 0x606ea: goto L606ea;
    case 0x606ef: goto L606ef;
    case 0x606f3: goto L606f3;
    case 0x60706: goto L60706;
    case 0x6070b: goto L6070b;
    case 0x60710: goto L60710;
    case 0x60715: goto L60715;
    case 0x6071a: goto L6071a;
    case 0x6072a: goto L6072a;
    case 0x6072e: goto L6072e;
    case 0x60738: goto L60738;
    case 0x6074b: goto L6074b;
    case 0x6074e: goto L6074e;
    case 0x60768: goto L60768;
    case 0x6076c: goto L6076c;
    case 0x60770: goto L60770;
    case 0x60774: goto L60774;
    case 0x60778: goto L60778;
    case 0x60782: goto L60782;
    case 0x60792: goto L60792;
    case 0x60796: goto L60796;
    case 0x607a0: goto L607a0;
    case 0x607b3: goto L607b3;
    case 0x607b6: goto L607b6;
    case 0x607d0: goto L607d0;
    case 0x607d4: goto L607d4;
    case 0x607d8: goto L607d8;
    case 0x607dc: goto L607dc;
    case 0x607e0: goto L607e0;
    case 0x607ea: goto L607ea;
    case 0x607fa: goto L607fa;
    case 0x607fe: goto L607fe;
    case 0x60808: goto L60808;
    case 0x6081b: goto L6081b;
    case 0x6081e: goto L6081e;
    case 0x60838: goto L60838;
    case 0x6083c: goto L6083c;
    case 0x60840: goto L60840;
    case 0x60844: goto L60844;
    case 0x60848: goto L60848;
    case 0x60852: goto L60852;
    case 0x60862: goto L60862;
    case 0x60866: goto L60866;
    case 0x60870: goto L60870;
    case 0x60883: goto L60883;
    case 0x60886: goto L60886;
    case 0x608a0: goto L608a0;
    case 0x608a4: goto L608a4;
    case 0x608a8: goto L608a8;
    case 0x608ac: goto L608ac;
    case 0x608b0: goto L608b0;
    case 0x608b4: goto L608b4;
    case 0x608c6: goto L608c6;
    case 0x608c9: goto L608c9;
    case 0x608cd: goto L608cd;
    default: c.callLinear(t); return;
    }
L31fa0:
    if (c.tracing) c.traceAt(0x31fa0);
    // 31fa:0000  mov byte ptr es:[0x41], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x41u), 0x83u);
    // 31fa:0006  mov byte ptr es:[0x2b3], 0xcf  [x764]
    c.w8(c.esb + (uint16_t)(0x2b3u), 0xcfu);
    // 31fa:000c  mov byte ptr es:[0x537], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x537u), 0x8u);
    // 31fa:0012  mov byte ptr es:[0x6ac], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x6acu), 0x82u);
    // 31fa:0018  mov byte ptr es:[0x6b1], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x6b1u), 0x83u);
    // 31fa:001e  mov byte ptr es:[0x6be], 0x8e  [x764]
    c.w8(c.esb + (uint16_t)(0x6beu), 0x8eu);
    // 31fa:0024  mov byte ptr es:[0x7f1], 0xcf  [x764]
    c.w8(c.esb + (uint16_t)(0x7f1u), 0xcfu);
    // 31fa:002a  mov byte ptr es:[0x7f7], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0x7f7u), 0xeu);
    // 31fa:0030  mov byte ptr es:[0x7fa], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x7fau), 0x4u);
    // 31fa:0036  mov byte ptr es:[0xbb9], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0xbb9u), 0x89u);
    // 31fa:003c  mov byte ptr es:[0xcb2], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xcb2u), 0x85u);
    // 31fa:0042  mov byte ptr es:[0xcf4], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xcf4u), 0x85u);
    // 31fa:0048  mov byte ptr es:[0xf28], 0x96  [x764]
    c.w8(c.esb + (uint16_t)(0xf28u), 0x96u);
    // 31fa:004e  mov byte ptr es:[0x105c], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x105cu), 0x8u);
    // 31fa:0054  mov byte ptr es:[0x1064], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x1064u), 0x8u);
    // 31fa:005a  mov byte ptr es:[0x10a6], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x10a6u), 0x80u);
    // 31fa:0060  mov byte ptr es:[0x11a4], 0x90  [x764]
    c.w8(c.esb + (uint16_t)(0x11a4u), 0x90u);
    // 31fa:0066  mov byte ptr es:[0x1339], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x1339u), 0x83u);
    // 31fa:006c  mov byte ptr es:[0x146d], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x146du), 0x80u);
    // 31fa:0072  mov byte ptr es:[0x1477], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0x1477u), 0x8bu);
    // 31fa:0078  mov byte ptr es:[0x1569], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0x1569u), 0x88u);
    // 31fa:007e  mov byte ptr es:[0x15bf], 0x90  [x764]
    c.w8(c.esb + (uint16_t)(0x15bfu), 0x90u);
    // 31fa:0084  mov byte ptr es:[0x16ce], 0x90  [x764]
    c.w8(c.esb + (uint16_t)(0x16ceu), 0x90u);
    // 31fa:008a  mov byte ptr es:[0x1831], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x1831u), 0x80u);
    // 31fa:0090  mov byte ptr es:[0x1951], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0x1951u), 0x85u);
    // 31fa:0096  mov byte ptr es:[0x1983], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x1983u), 0x83u);
    // 31fa:009c  mov byte ptr es:[0x1ce3], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x1ce3u), 0x80u);
    // 31fa:00a2  mov byte ptr es:[0x1e87], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x1e87u), 0x80u);
    // 31fa:00a8  mov byte ptr es:[0x1f63], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x1f63u), 0x4u);
    // 31fa:00ae  mov byte ptr es:[0x1f66], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x1f66u), 0x80u);
    // 31fa:00b4  mov byte ptr es:[0x1f99], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x1f99u), 0x83u);
    // 31fa:00ba  mov byte ptr es:[0x209a], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x209au), 0x80u);
    // 31fa:00c0  mov byte ptr es:[0x20ac], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x20acu), 0x8u);
    // 31fa:00c6  mov byte ptr es:[0x20ce], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x20ceu), 0x4u);
    // 31fa:00cc  mov byte ptr es:[0x25ec], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x25ecu), 0x8u);
    // 31fa:00d2  mov byte ptr es:[0x286b], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0x286bu), 0x10u);
    // 31fa:00d8  mov byte ptr es:[0x296f], 0x8c  [x764]
    c.w8(c.esb + (uint16_t)(0x296fu), 0x8cu);
    // 31fa:00de  mov byte ptr es:[0x2a9e], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x2a9eu), 0x82u);
    // 31fa:00e4  mov byte ptr es:[0x2ac1], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x2ac1u), 0x80u);
    // 31fa:00ea  mov byte ptr es:[0x2d59], 0x9a  [x764]
    c.w8(c.esb + (uint16_t)(0x2d59u), 0x9au);
    // 31fa:00f0  mov byte ptr es:[0x2d66], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0x2d66u), 0x85u);
    // 31fa:00f6  mov byte ptr es:[0x2eb4], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0x2eb4u), 0x85u);
    // 31fa:00fc  mov byte ptr es:[0x2fa5], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0x2fa5u), 0xdu);
    // 31fa:0102  mov byte ptr es:[0x2fdb], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0x2fdbu), 0x89u);
    // 31fa:0108  mov byte ptr es:[0x2ffe], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x2ffeu), 0x80u);
    // 31fa:010e  mov byte ptr es:[0x30eb], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x30ebu), 0x8u);
    // 31fa:0114  mov byte ptr es:[0x3106], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x3106u), 0x80u);
    // 31fa:011a  mov byte ptr es:[0x310f], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0x310fu), 0x10u);
    // 31fa:0120  mov byte ptr es:[0x3112], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x3112u), 0x80u);
    // 31fa:0126  mov byte ptr es:[0x321b], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x321bu), 0x82u);
    // 31fa:012c  mov byte ptr es:[0x337f], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0x337fu), 0x89u);
    // 31fa:0132  mov byte ptr es:[0x33c0], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0x33c0u), 0xdu);
    // 31fa:0138  mov byte ptr es:[0x35da], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x35dau), 0x83u);
    // 31fa:013e  mov byte ptr es:[0x3641], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0x3641u), 0x86u);
    // 31fa:0144  mov byte ptr es:[0x39d7], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x39d7u), 0x80u);
    // 31fa:014a  mov byte ptr es:[0x3c33], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0x3c33u), 0xeu);
    // 31fa:0150  mov byte ptr es:[0x3c3d], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0x3c3du), 0x88u);
    // 31fa:0156  mov byte ptr es:[0x3d5e], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0x3d5eu), 0xdu);
    // 31fa:015c  mov byte ptr es:[0x3ed5], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x3ed5u), 0x4u);
    // 31fa:0162  mov byte ptr es:[0x3feb], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x3febu), 0x4u);
    // 31fa:0168  mov byte ptr es:[0x4003], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x4003u), 0x4u);
    // 31fa:016e  mov byte ptr es:[0x4172], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0x4172u), 0x89u);
    // 31fa:0174  mov byte ptr es:[0x44fa], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0x44fau), 0x8bu);
    // 31fa:017a  mov byte ptr es:[0x4638], 0x93  [x764]
    c.w8(c.esb + (uint16_t)(0x4638u), 0x93u);
    // 31fa:0180  mov byte ptr es:[0x466e], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x466eu), 0x82u);
    // 31fa:0186  mov byte ptr es:[0x4688], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0x4688u), 0xdu);
    // 31fa:018c  mov byte ptr es:[0x4776], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x4776u), 0x80u);
    // 31fa:0192  mov byte ptr es:[0x4786], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0x4786u), 0x89u);
    // 31fa:0198  mov byte ptr es:[0x49e1], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x49e1u), 0xau);
    // 31fa:019e  mov byte ptr es:[0x4a1d], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0x4a1du), 0x10u);
    // 31fa:01a4  mov byte ptr es:[0x4dad], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x4dadu), 0x82u);
    // 31fa:01aa  mov byte ptr es:[0x4dde], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0x4ddeu), 0x85u);
    // 31fa:01b0  mov byte ptr es:[0x4ee8], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0x4ee8u), 0x85u);
    // 31fa:01b6  mov byte ptr es:[0x5025], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x5025u), 0x80u);
    // 31fa:01bc  mov byte ptr es:[0x5026], 0x91  [x764]
    c.w8(c.esb + (uint16_t)(0x5026u), 0x91u);
    // 31fa:01c2  mov byte ptr es:[0x5068], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0x5068u), 0x89u);
    // 31fa:01c8  mov byte ptr es:[0x5163], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x5163u), 0x80u);
    // 31fa:01ce  mov byte ptr es:[0x5190], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x5190u), 0x8u);
    // 31fa:01d4  mov byte ptr es:[0x52a8], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0x52a8u), 0x89u);
    // 31fa:01da  mov byte ptr es:[0x57dd], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0x57ddu), 0xdu);
    // 31fa:01e0  mov byte ptr es:[0x58f6], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x58f6u), 0x4u);
    // 31fa:01e6  mov byte ptr es:[0x58fc], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0x58fcu), 0x89u);
    // 31fa:01ec  mov byte ptr es:[0x5916], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x5916u), 0x80u);
    // 31fa:01f2  mov byte ptr es:[0x5cad], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x5cadu), 0x80u);
    // 31fa:01f8  mov byte ptr es:[0x5f1f], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x5f1fu), 0x80u);
    // 31fa:01fe  mov byte ptr es:[0x5f3e], 0x91  [x764]
    c.w8(c.esb + (uint16_t)(0x5f3eu), 0x91u);
    // 31fa:0204  mov byte ptr es:[0x5f4a], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x5f4au), 0x4u);
    // 31fa:020a  mov byte ptr es:[0x6059], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x6059u), 0xau);
    // 31fa:0210  mov byte ptr es:[0x606a], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x606au), 0x8u);
    // 31fa:0216  mov byte ptr es:[0x61a8], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x61a8u), 0x80u);
    // 31fa:021c  mov byte ptr es:[0x630c], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0x630cu), 0x86u);
    // 31fa:0222  mov byte ptr es:[0x632b], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0x632bu), 0xeu);
    // 31fa:0228  mov byte ptr es:[0x6438], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0x6438u), 0x10u);
    // 31fa:022e  mov byte ptr es:[0x6466], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0x6466u), 0xdu);
    // 31fa:0234  mov byte ptr es:[0x6468], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0x6468u), 0x88u);
    // 31fa:023a  mov byte ptr es:[0x66d5], 0x8e  [x764]
    c.w8(c.esb + (uint16_t)(0x66d5u), 0x8eu);
    // 31fa:0240  mov byte ptr es:[0x6934], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0x6934u), 0xeu);
    // 31fa:0246  mov byte ptr es:[0x6937], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x6937u), 0x4u);
    // 31fa:024c  mov byte ptr es:[0x6a6e], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0x6a6eu), 0x86u);
    // 31fa:0252  mov byte ptr es:[0x6bcc], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x6bccu), 0xau);
    // 31fa:0258  mov byte ptr es:[0x6be8], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x6be8u), 0x8u);
    // 31fa:025e  mov byte ptr es:[0x6bf5], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x6bf5u), 0x83u);
    // 31fa:0264  mov byte ptr es:[0x6cd8], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x6cd8u), 0x80u);
    // 31fa:026a  mov byte ptr es:[0x70a7], 0x8e  [x764]
    c.w8(c.esb + (uint16_t)(0x70a7u), 0x8eu);
    // 31fa:0270  mov byte ptr es:[0x7103], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0x7103u), 0x88u);
    // 31fa:0276  mov byte ptr es:[0x71f7], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0x71f7u), 0xdu);
    // 31fa:027c  mov byte ptr es:[0x71ff], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x71ffu), 0x4u);
    // 31fa:0282  mov byte ptr es:[0x7247], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0x7247u), 0xeu);
    // 31fa:0288  mov byte ptr es:[0x749f], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x749fu), 0x4u);
    // 31fa:028e  mov byte ptr es:[0x74a5], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x74a5u), 0x4u);
    // 31fa:0294  mov byte ptr es:[0x74a7], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x74a7u), 0x4u);
    // 31fa:029a  mov byte ptr es:[0x7605], 0x91  [x764]
    c.w8(c.esb + (uint16_t)(0x7605u), 0x91u);
    // 31fa:02a0  mov byte ptr es:[0x76fe], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x76feu), 0xau);
    // 31fa:02a6  mov byte ptr es:[0x770a], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x770au), 0xau);
    // 31fa:02ac  mov byte ptr es:[0x781e], 0xcf  [x764]
    c.w8(c.esb + (uint16_t)(0x781eu), 0xcfu);
    // 31fa:02b2  mov byte ptr es:[0x7829], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0x7829u), 0x10u);
    // 31fa:02b8  mov byte ptr es:[0x7975], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x7975u), 0xau);
    // 31fa:02be  mov byte ptr es:[0x7998], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x7998u), 0x8u);
    // 31fa:02c4  mov byte ptr es:[0x7ab2], 0x90  [x764]
    c.w8(c.esb + (uint16_t)(0x7ab2u), 0x90u);
    // 31fa:02ca  mov byte ptr es:[0x7ab8], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x7ab8u), 0x4u);
    // 31fa:02d0  mov byte ptr es:[0x7abb], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x7abbu), 0x80u);
    // 31fa:02d6  mov byte ptr es:[0x7ac5], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x7ac5u), 0x4u);
    // 31fa:02dc  mov byte ptr es:[0x7ad1], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x7ad1u), 0x80u);
    // 31fa:02e2  mov byte ptr es:[0x7b06], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x7b06u), 0x80u);
    // 31fa:02e8  mov byte ptr es:[0x7ea2], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x7ea2u), 0x8u);
    // 31fa:02ee  mov byte ptr es:[0x8122], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8122u), 0x8u);
    // 31fa:02f4  mov byte ptr es:[0x825c], 0x90  [x764]
    c.w8(c.esb + (uint16_t)(0xffff825cu), 0x90u);
    // 31fa:02fa  mov byte ptr es:[0x84a4], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0xffff84a4u), 0x83u);
    // 31fa:0300  mov byte ptr es:[0x84b5], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0xffff84b5u), 0x88u);
    // 31fa:0306  mov byte ptr es:[0x85dc], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffff85dcu), 0x8u);
    // 31fa:030c  mov byte ptr es:[0x85e2], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff85e2u), 0x80u);
    // 31fa:0312  mov byte ptr es:[0x8610], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8610u), 0xau);
    // 31fa:0318  mov byte ptr es:[0x8631], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8631u), 0x85u);
    // 31fa:031e  mov byte ptr es:[0x885b], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff885bu), 0x80u);
    // 31fa:0324  mov byte ptr es:[0x8873], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8873u), 0x4u);
    // 31fa:032a  mov byte ptr es:[0x889a], 0xcf  [x764]
    c.w8(c.esb + (uint16_t)(0xffff889au), 0xcfu);
    // 31fa:0330  mov byte ptr es:[0x89c5], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffff89c5u), 0x4u);
    // 31fa:0336  mov byte ptr es:[0x89df], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffff89dfu), 0x82u);
    // 31fa:033c  mov byte ptr es:[0x8c2d], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8c2du), 0x10u);
    // 31fa:0342  mov byte ptr es:[0x8c32], 0x91  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8c32u), 0x91u);
    // 31fa:0348  mov byte ptr es:[0x8c88], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8c88u), 0xeu);
    // 31fa:034e  mov byte ptr es:[0x8da7], 0x8c  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8da7u), 0x8cu);
    // 31fa:0354  mov byte ptr es:[0x8db8], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8db8u), 0x10u);
    // 31fa:035a  mov byte ptr es:[0x8ea5], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8ea5u), 0x80u);
    // 31fa:0360  mov byte ptr es:[0x8eae], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8eaeu), 0x89u);
    // 31fa:0366  mov byte ptr es:[0x8fe8], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8fe8u), 0x80u);
    // 31fa:036c  mov byte ptr es:[0x9012], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9012u), 0xdu);
    // 31fa:0372  mov byte ptr es:[0x9136], 0x91  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9136u), 0x91u);
    // 31fa:0378  mov byte ptr es:[0x915c], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0xffff915cu), 0xdu);
    // 31fa:037e  mov byte ptr es:[0x926a], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffff926au), 0x8u);
    // 31fa:0384  mov byte ptr es:[0x93bd], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0xffff93bdu), 0x83u);
    // 31fa:038a  mov byte ptr es:[0x94dd], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffff94ddu), 0x4u);
    // 31fa:0390  mov byte ptr es:[0x94f7], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffff94f7u), 0x82u);
    // 31fa:0396  mov byte ptr es:[0x964c], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0xffff964cu), 0x88u);
    // 31fa:039c  mov byte ptr es:[0x97c7], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0xffff97c7u), 0x83u);
    // 31fa:03a2  mov byte ptr es:[0x98ae], 0x93  [x764]
    c.w8(c.esb + (uint16_t)(0xffff98aeu), 0x93u);
    // 31fa:03a8  mov byte ptr es:[0x98c6], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffff98c6u), 0x82u);
    // 31fa:03ae  mov byte ptr es:[0x98f2], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0xffff98f2u), 0xeu);
    // 31fa:03b4  mov byte ptr es:[0x99db], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0xffff99dbu), 0x89u);
    // 31fa:03ba  mov byte ptr es:[0x99e3], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff99e3u), 0x80u);
    // 31fa:03c0  mov byte ptr es:[0x9b28], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9b28u), 0x85u);
    // 31fa:03c6  mov byte ptr es:[0x9b34], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9b34u), 0x88u);
    // 31fa:03cc  mov byte ptr es:[0x9b3f], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9b3fu), 0x80u);
    // 31fa:03d2  mov byte ptr es:[0x9b4f], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9b4fu), 0x4u);
    // 31fa:03d8  mov byte ptr es:[0x9b80], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9b80u), 0x82u);
    // 31fa:03de  mov byte ptr es:[0x9c76], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9c76u), 0x80u);
    // 31fa:03e4  mov byte ptr es:[0x9c8f], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9c8fu), 0x8bu);
    // 31fa:03ea  mov byte ptr es:[0x9f0b], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9f0bu), 0x8u);
    // 31fa:03f0  mov byte ptr es:[0xa16a], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa16au), 0x8u);
    // 31fa:03f6  mov byte ptr es:[0xa174], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa174u), 0x80u);
    // 31fa:03fc  mov byte ptr es:[0xa413], 0x8e  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa413u), 0x8eu);
    // 31fa:0402  mov byte ptr es:[0xa423], 0x97  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa423u), 0x97u);
    // 31fa:0408  mov byte ptr es:[0xa55f], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa55fu), 0x86u);
    // 31fa:040e  mov byte ptr es:[0xa581], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa581u), 0x80u);
    // 31fa:0414  mov byte ptr es:[0xab63], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0xffffab63u), 0xdu);
    // 31fa:041a  mov byte ptr es:[0xacc4], 0xcf  [x764]
    c.w8(c.esb + (uint16_t)(0xffffacc4u), 0xcfu);
    // 31fa:0420  mov byte ptr es:[0xace5], 0x91  [x764]
    c.w8(c.esb + (uint16_t)(0xfffface5u), 0x91u);
    // 31fa:0426  mov byte ptr es:[0xb1d8], 0xcf  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb1d8u), 0xcfu);
    // 31fa:042c  mov byte ptr es:[0xb303], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb303u), 0x86u);
    // 31fa:0432  mov byte ptr es:[0xb473], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb473u), 0x86u);
    // 31fa:0438  mov byte ptr es:[0xb580], 0xcf  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb580u), 0xcfu);
    // 31fa:043e  mov byte ptr es:[0xb6fd], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb6fdu), 0x88u);
    // 31fa:0444  mov byte ptr es:[0xb841], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb841u), 0x4u);
    // 31fa:044a  mov byte ptr es:[0xb964], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb964u), 0xdu);
    // 31fa:0450  mov byte ptr es:[0xb977], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb977u), 0x8u);
    // 31fa:0456  mov byte ptr es:[0xb97b], 0x8c  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb97bu), 0x8cu);
    // 31fa:045c  mov byte ptr es:[0xb986], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb986u), 0x8u);
    // 31fa:0462  mov byte ptr es:[0xba61], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xffffba61u), 0x85u);
    // 31fa:0468  mov byte ptr es:[0xbd09], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffbd09u), 0x4u);
    // 31fa:046e  mov byte ptr es:[0xbd0d], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffbd0du), 0x80u);
    // 31fa:0474  mov byte ptr es:[0xbe35], 0x94  [x764]
    c.w8(c.esb + (uint16_t)(0xffffbe35u), 0x94u);
    // 31fa:047a  mov byte ptr es:[0xbe49], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffbe49u), 0x80u);
    // 31fa:0480  mov byte ptr es:[0xbe4e], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0xffffbe4eu), 0xdu);
    // 31fa:0486  mov byte ptr es:[0xbf69], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0xffffbf69u), 0x8bu);
    // 31fa:048c  mov byte ptr es:[0xbf6b], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0xffffbf6bu), 0x10u);
    // 31fa:0492  mov byte ptr es:[0xc0a4], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffc0a4u), 0x4u);
    // 31fa:0498  mov byte ptr es:[0xc100], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xffffc100u), 0x85u);
    // 31fa:049e  mov byte ptr es:[0xc220], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffffc220u), 0x82u);
    // 31fa:04a4  mov byte ptr es:[0xc37b], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0xffffc37bu), 0x88u);
    // 31fa:04aa  mov byte ptr es:[0xc72f], 0x8c  [x764]
    c.w8(c.esb + (uint16_t)(0xffffc72fu), 0x8cu);
L32450:
    if (c.tracing) c.traceAt(0x32450);
    // 31fa:04b0  mov byte ptr es:[0xc744], 0x90  [x764]
    c.w8(c.esb + (uint16_t)(0xffffc744u), 0x90u);
    // 31fa:04b6  mov byte ptr es:[0xc832], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffc832u), 0x4u);
    // 31fa:04bc  mov byte ptr es:[0xc834], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffffc834u), 0x8u);
    // 31fa:04c2  mov byte ptr es:[0xca99], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffca99u), 0x80u);
    // 31fa:04c8  mov byte ptr es:[0xcac1], 0x94  [x764]
    c.w8(c.esb + (uint16_t)(0xffffcac1u), 0x94u);
    // 31fa:04ce  mov byte ptr es:[0xcd47], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffffcd47u), 0x8u);
    // 31fa:04d4  mov byte ptr es:[0xcd60], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0xffffcd60u), 0xeu);
    // 31fa:04da  mov byte ptr es:[0xcd71], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffcd71u), 0x4u);
    // 31fa:04e0  mov byte ptr es:[0xcd7a], 0x8c  [x764]
    c.w8(c.esb + (uint16_t)(0xffffcd7au), 0x8cu);
    // 31fa:04e6  mov byte ptr es:[0xce75], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffce75u), 0x80u);
    // 31fa:04ec  mov byte ptr es:[0xcf9d], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0xffffcf9du), 0xeu);
    // 31fa:04f2  mov byte ptr es:[0xcfbd], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffffcfbdu), 0x8u);
    // 31fa:04f8  mov byte ptr es:[0xcfe9], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffcfe9u), 0x4u);
    // 31fa:04fe  mov byte ptr es:[0xd23e], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd23eu), 0xau);
    // 31fa:0504  mov byte ptr es:[0xd250], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd250u), 0x10u);
    // 31fa:050a  mov byte ptr es:[0xd26a], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd26au), 0x4u);
    // 31fa:0510  mov byte ptr es:[0xd4d9], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd4d9u), 0x82u);
    // 31fa:0516  mov byte ptr es:[0xd4f9], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd4f9u), 0x83u);
    // 31fa:051c  mov byte ptr es:[0xd5fd], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd5fdu), 0x4u);
    // 31fa:0522  mov byte ptr es:[0xd879], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd879u), 0xau);
    // 31fa:0528  mov byte ptr es:[0xd9da], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd9dau), 0xau);
    // 31fa:052e  mov byte ptr es:[0xd9e0], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd9e0u), 0x82u);
    // 31fa:0534  mov byte ptr es:[0xdafb], 0x94  [x764]
    c.w8(c.esb + (uint16_t)(0xffffdafbu), 0x94u);
    // 31fa:053a  mov byte ptr es:[0xdc6e], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0xffffdc6eu), 0xdu);
    // 31fa:0540  mov byte ptr es:[0xded8], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffffded8u), 0x8u);
    // 31fa:0546  mov byte ptr es:[0xdfe2], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffdfe2u), 0x80u);
    // 31fa:054c  mov byte ptr es:[0xe012], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe012u), 0x80u);
    // 31fa:0552  mov byte ptr es:[0xe119], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe119u), 0xau);
    // 31fa:0558  mov byte ptr es:[0xe142], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe142u), 0x80u);
    // 31fa:055e  mov byte ptr es:[0xe155], 0xcf  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe155u), 0xcfu);
    // 31fa:0564  mov byte ptr es:[0xe284], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe284u), 0x83u);
    // 31fa:056a  mov byte ptr es:[0xe28d], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe28du), 0x88u);
    // 31fa:0570  mov byte ptr es:[0xe3cd], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe3cdu), 0x88u);
    // 31fa:0576  mov byte ptr es:[0xe524], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe524u), 0x85u);
    // 31fa:057c  mov byte ptr es:[0xe687], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe687u), 0xau);
    // 31fa:0582  mov byte ptr es:[0xe775], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe775u), 0x4u);
    // 31fa:0588  mov byte ptr es:[0xeb64], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffeb64u), 0x80u);
    // 31fa:058e  mov byte ptr es:[0xec75], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0xffffec75u), 0x86u);
    // 31fa:0594  mov byte ptr es:[0xecb1], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffffecb1u), 0x82u);
    // 31fa:059a  mov byte ptr es:[0xedfa], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffedfau), 0x4u);
    // 31fa:05a0  mov byte ptr es:[0xee06], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffee06u), 0x80u);
    // 31fa:05a6  mov byte ptr es:[0xeee3], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffeee3u), 0x80u);
    // 31fa:05ac  mov byte ptr es:[0xf182], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff182u), 0x80u);
    // 31fa:05b2  mov byte ptr es:[0xf1bc], 0x93  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff1bcu), 0x93u);
    // 31fa:05b8  mov byte ptr es:[0xf2a7], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff2a7u), 0x4u);
    // 31fa:05be  mov byte ptr es:[0xf2ae], 0x8e  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff2aeu), 0x8eu);
    // 31fa:05c4  mov byte ptr es:[0xf3f6], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff3f6u), 0x86u);
    // 31fa:05ca  mov byte ptr es:[0xf409], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff409u), 0x4u);
    // 31fa:05d0  mov byte ptr es:[0xf42e], 0x8c  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff42eu), 0x8cu);
    // 31fa:05d6  mov byte ptr es:[0xf445], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff445u), 0xau);
    // 31fa:05dc  mov byte ptr es:[0xf51d], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff51du), 0xdu);
    // 31fa:05e2  mov byte ptr es:[0xf54d], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff54du), 0x80u);
    // 31fa:05e8  mov byte ptr es:[0xf55f], 0x8c  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff55fu), 0x8cu);
    // 31fa:05ee  mov byte ptr es:[0xf57f], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff57fu), 0x80u);
    // 31fa:05f4  mov byte ptr es:[0xf6b6], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff6b6u), 0x82u);
    // 31fa:05fa  mov byte ptr es:[0xf804], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff804u), 0x8bu);
    // 31fa:0600  retf   [x764]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L325a1:
    if (c.tracing) c.traceAt(0x325a1);
    // 31fa:0601  mov byte ptr es:[0x27], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0x27u), 0x85u);
    // 31fa:0607  mov byte ptr es:[0x40], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x40u), 0x8u);
    // 31fa:060d  mov byte ptr es:[0x177], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x177u), 0x82u);
    // 31fa:0613  mov byte ptr es:[0x1af], 0x9c  [x764]
    c.w8(c.esb + (uint16_t)(0x1afu), 0x9cu);
    // 31fa:0619  mov byte ptr es:[0x2fb], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x2fbu), 0x80u);
    // 31fa:061f  mov byte ptr es:[0x308], 0x8c  [x764]
    c.w8(c.esb + (uint16_t)(0x308u), 0x8cu);
    // 31fa:0625  mov byte ptr es:[0x3e6], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x3e6u), 0x80u);
    // 31fa:062b  mov byte ptr es:[0x53b], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x53bu), 0x4u);
    // 31fa:0631  mov byte ptr es:[0x555], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0x555u), 0x86u);
    // 31fa:0637  mov byte ptr es:[0x7b5], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0x7b5u), 0x8bu);
    // 31fa:063d  mov byte ptr es:[0x804], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0x804u), 0x86u);
    // 31fa:0643  mov byte ptr es:[0xa2b], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0xa2bu), 0x89u);
    // 31fa:0649  mov byte ptr es:[0xa74], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0xa74u), 0x89u);
    // 31fa:064f  mov byte ptr es:[0xa7c], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xa7cu), 0x4u);
    // 31fa:0655  mov byte ptr es:[0xb82], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0xb82u), 0x8bu);
    // 31fa:065b  mov byte ptr es:[0xbc7], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xbc7u), 0x80u);
    // 31fa:0661  mov byte ptr es:[0xd02], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0xd02u), 0xdu);
    // 31fa:0667  mov byte ptr es:[0xde3], 0x93  [x764]
    c.w8(c.esb + (uint16_t)(0xde3u), 0x93u);
    // 31fa:066d  mov byte ptr es:[0xdfa], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xdfau), 0x80u);
    // 31fa:0673  mov byte ptr es:[0x1079], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0x1079u), 0x10u);
    // 31fa:0679  mov byte ptr es:[0x109e], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x109eu), 0x4u);
    // 31fa:067f  mov byte ptr es:[0x119d], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0x119du), 0xeu);
    // 31fa:0685  mov byte ptr es:[0x11cb], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x11cbu), 0x8u);
    // 31fa:068b  mov byte ptr es:[0x12da], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x12dau), 0x80u);
    // 31fa:0691  mov byte ptr es:[0x1306], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x1306u), 0x80u);
    // 31fa:0697  mov byte ptr es:[0x131f], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x131fu), 0x83u);
    // 31fa:069d  mov byte ptr es:[0x1320], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x1320u), 0x8u);
    // 31fa:06a3  mov byte ptr es:[0x1472], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0x1472u), 0x8bu);
    // 31fa:06a9  mov byte ptr es:[0x155d], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x155du), 0x8u);
    // 31fa:06af  mov byte ptr es:[0x1576], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x1576u), 0x80u);
    // 31fa:06b5  mov byte ptr es:[0x16ad], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0x16adu), 0xeu);
    // 31fa:06bb  mov byte ptr es:[0x16e4], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x16e4u), 0x8u);
    // 31fa:06c1  mov byte ptr es:[0x16f2], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x16f2u), 0x80u);
    // 31fa:06c7  mov byte ptr es:[0x181a], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x181au), 0x8u);
    // 31fa:06cd  mov byte ptr es:[0x1967], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0x1967u), 0x89u);
    // 31fa:06d3  mov byte ptr es:[0x1b99], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x1b99u), 0x80u);
    // 31fa:06d9  mov byte ptr es:[0x1be2], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x1be2u), 0x8u);
    // 31fa:06df  mov byte ptr es:[0x1e37], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x1e37u), 0x82u);
    // 31fa:06e5  mov byte ptr es:[0x1f88], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0x1f88u), 0x86u);
    // 31fa:06eb  mov byte ptr es:[0x20c7], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0x20c7u), 0x89u);
    // 31fa:06f1  mov byte ptr es:[0x2343], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x2343u), 0x83u);
    // 31fa:06f7  mov byte ptr es:[0x2377], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0x2377u), 0x89u);
    // 31fa:06fd  mov byte ptr es:[0x25d2], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x25d2u), 0x80u);
    // 31fa:0703  mov byte ptr es:[0x25ef], 0x94  [x764]
    c.w8(c.esb + (uint16_t)(0x25efu), 0x94u);
    // 31fa:0709  mov byte ptr es:[0x270c], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0x270cu), 0x85u);
    // 31fa:070f  mov byte ptr es:[0x2845], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0x2845u), 0x88u);
    // 31fa:0715  mov byte ptr es:[0x2875], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0x2875u), 0x89u);
    // 31fa:071b  mov byte ptr es:[0x29a0], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x29a0u), 0x82u);
    // 31fa:0721  mov byte ptr es:[0x29ad], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x29adu), 0xau);
    // 31fa:0727  mov byte ptr es:[0x29ba], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x29bau), 0x80u);
    // 31fa:072d  mov byte ptr es:[0x2ae0], 0x96  [x764]
    c.w8(c.esb + (uint16_t)(0x2ae0u), 0x96u);
    // 31fa:0733  mov byte ptr es:[0x2ae9], 0x8c  [x764]
    c.w8(c.esb + (uint16_t)(0x2ae9u), 0x8cu);
    // 31fa:0739  mov byte ptr es:[0x2c3d], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x2c3du), 0x80u);
    // 31fa:073f  mov byte ptr es:[0x2d3e], 0xcf  [x764]
    c.w8(c.esb + (uint16_t)(0x2d3eu), 0xcfu);
    // 31fa:0745  mov byte ptr es:[0x2e76], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0x2e76u), 0x85u);
    // 31fa:074b  mov byte ptr es:[0x2eb1], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0x2eb1u), 0x10u);
    // 31fa:0751  mov byte ptr es:[0x2fac], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x2facu), 0x83u);
    // 31fa:0757  mov byte ptr es:[0x30f6], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x30f6u), 0xau);
    // 31fa:075d  mov byte ptr es:[0x323e], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x323eu), 0x82u);
    // 31fa:0763  mov byte ptr es:[0x3265], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x3265u), 0x4u);
    // 31fa:0769  mov byte ptr es:[0x3285], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x3285u), 0x8u);
    // 31fa:076f  mov byte ptr es:[0x338f], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x338fu), 0x8u);
    // 31fa:0775  mov byte ptr es:[0x33a1], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x33a1u), 0x4u);
    // 31fa:077b  mov byte ptr es:[0x34c8], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0x34c8u), 0x85u);
    // 31fa:0781  mov byte ptr es:[0x362d], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x362du), 0x82u);
    // 31fa:0787  mov byte ptr es:[0x3784], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x3784u), 0xau);
    // 31fa:078d  mov byte ptr es:[0x399d], 0x93  [x764]
    c.w8(c.esb + (uint16_t)(0x399du), 0x93u);
    // 31fa:0793  mov byte ptr es:[0x3b33], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0x3b33u), 0x86u);
    // 31fa:0799  mov byte ptr es:[0x3c58], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0x3c58u), 0xdu);
    // 31fa:079f  mov byte ptr es:[0x4045], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x4045u), 0x80u);
    // 31fa:07a5  mov byte ptr es:[0x413b], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x413bu), 0x8u);
    // 31fa:07ab  mov byte ptr es:[0x4161], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0x4161u), 0x85u);
    // 31fa:07b1  mov byte ptr es:[0x428d], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0x428du), 0x86u);
    // 31fa:07b7  mov byte ptr es:[0x4291], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0x4291u), 0x86u);
    // 31fa:07bd  mov byte ptr es:[0x42a2], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x42a2u), 0x80u);
    // 31fa:07c3  mov byte ptr es:[0x439a], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x439au), 0x80u);
    // 31fa:07c9  mov byte ptr es:[0x439c], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x439cu), 0x8u);
    // 31fa:07cf  mov byte ptr es:[0x43ad], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x43adu), 0x8u);
    // 31fa:07d5  mov byte ptr es:[0x44ec], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x44ecu), 0x80u);
    // 31fa:07db  mov byte ptr es:[0x4502], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x4502u), 0x80u);
    // 31fa:07e1  mov byte ptr es:[0x461e], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x461eu), 0xau);
    // 31fa:07e7  mov byte ptr es:[0x4660], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x4660u), 0x80u);
    // 31fa:07ed  mov byte ptr es:[0x4902], 0x8e  [x764]
    c.w8(c.esb + (uint16_t)(0x4902u), 0x8eu);
    // 31fa:07f3  mov byte ptr es:[0x4c75], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x4c75u), 0x82u);
    // 31fa:07f9  mov byte ptr es:[0x4c86], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x4c86u), 0x8u);
    // 31fa:07ff  mov byte ptr es:[0x4de2], 0x8c  [x764]
    c.w8(c.esb + (uint16_t)(0x4de2u), 0x8cu);
    // 31fa:0805  mov byte ptr es:[0x4eeb], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x4eebu), 0x80u);
    // 31fa:080b  mov byte ptr es:[0x507c], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x507cu), 0x83u);
    // 31fa:0811  mov byte ptr es:[0x519f], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0x519fu), 0x88u);
    // 31fa:0817  mov byte ptr es:[0x52d2], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x52d2u), 0x4u);
    // 31fa:081d  mov byte ptr es:[0x52da], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x52dau), 0x80u);
    // 31fa:0823  mov byte ptr es:[0x52f7], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0x52f7u), 0xdu);
    // 31fa:0829  mov byte ptr es:[0x5424], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x5424u), 0x83u);
    // 31fa:082f  mov byte ptr es:[0x579e], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x579eu), 0x80u);
    // 31fa:0835  mov byte ptr es:[0x590b], 0x8e  [x764]
    c.w8(c.esb + (uint16_t)(0x590bu), 0x8eu);
    // 31fa:083b  mov byte ptr es:[0x5931], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0x5931u), 0x85u);
    // 31fa:0841  mov byte ptr es:[0x5e07], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x5e07u), 0x80u);
    // 31fa:0847  mov byte ptr es:[0x5e0e], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0x5e0eu), 0x88u);
    // 31fa:084d  mov byte ptr es:[0x5e1d], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0x5e1du), 0x86u);
    // 31fa:0853  mov byte ptr es:[0x5f44], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x5f44u), 0x82u);
    // 31fa:0859  mov byte ptr es:[0x5f87], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x5f87u), 0xau);
    // 31fa:085f  mov byte ptr es:[0x6070], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x6070u), 0x83u);
    // 31fa:0865  mov byte ptr es:[0x61b7], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x61b7u), 0x80u);
    // 31fa:086b  mov byte ptr es:[0x61d5], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x61d5u), 0x4u);
    // 31fa:0871  mov byte ptr es:[0x6344], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0x6344u), 0x86u);
    // 31fa:0877  mov byte ptr es:[0x6475], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x6475u), 0xau);
    // 31fa:087d  mov byte ptr es:[0x658b], 0x93  [x764]
    c.w8(c.esb + (uint16_t)(0x658bu), 0x93u);
    // 31fa:0883  mov byte ptr es:[0x693f], 0x97  [x764]
    c.w8(c.esb + (uint16_t)(0x693fu), 0x97u);
    // 31fa:0889  mov byte ptr es:[0x6941], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x6941u), 0x82u);
    // 31fa:088f  mov byte ptr es:[0x697e], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x697eu), 0x4u);
    // 31fa:0895  mov byte ptr es:[0x6aa7], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x6aa7u), 0xau);
    // 31fa:089b  mov byte ptr es:[0x6bc2], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0x6bc2u), 0xau);
    // 31fa:08a1  mov byte ptr es:[0x6bc4], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0x6bc4u), 0x10u);
    // 31fa:08a7  mov byte ptr es:[0x6d09], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0x6d09u), 0x88u);
    // 31fa:08ad  mov byte ptr es:[0x6fa6], 0x94  [x764]
    c.w8(c.esb + (uint16_t)(0x6fa6u), 0x94u);
    // 31fa:08b3  mov byte ptr es:[0x6fc4], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x6fc4u), 0x82u);
    // 31fa:08b9  mov byte ptr es:[0x70d0], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x70d0u), 0x8u);
    // 31fa:08bf  mov byte ptr es:[0x70f5], 0x97  [x764]
    c.w8(c.esb + (uint16_t)(0x70f5u), 0x97u);
    // 31fa:08c5  mov byte ptr es:[0x720c], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x720cu), 0x82u);
    // 31fa:08cb  mov byte ptr es:[0x7370], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0x7370u), 0x83u);
    // 31fa:08d1  mov byte ptr es:[0x74a1], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0x74a1u), 0x85u);
    // 31fa:08d7  mov byte ptr es:[0x74ac], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0x74acu), 0x85u);
    // 31fa:08dd  mov byte ptr es:[0x75cb], 8  [x764]
    c.w8(c.esb + (uint16_t)(0x75cbu), 0x8u);
    // 31fa:08e3  mov byte ptr es:[0x75cf], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0x75cfu), 0x8bu);
    // 31fa:08e9  mov byte ptr es:[0x76f4], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x76f4u), 0x80u);
    // 31fa:08ef  mov byte ptr es:[0x7716], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x7716u), 0x80u);
    // 31fa:08f5  mov byte ptr es:[0x7732], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0x7732u), 0x8bu);
    // 31fa:08fb  mov byte ptr es:[0x782a], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x782au), 0x82u);
    // 31fa:0901  mov byte ptr es:[0x7867], 0x94  [x764]
    c.w8(c.esb + (uint16_t)(0x7867u), 0x94u);
    // 31fa:0907  mov byte ptr es:[0x7970], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0x7970u), 0x89u);
    // 31fa:090d  mov byte ptr es:[0x7af1], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x7af1u), 0x4u);
    // 31fa:0913  mov byte ptr es:[0x7be3], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x7be3u), 0x80u);
    // 31fa:0919  mov byte ptr es:[0x7c28], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0x7c28u), 0x10u);
    // 31fa:091f  mov byte ptr es:[0x7d6b], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x7d6bu), 0x82u);
    // 31fa:0925  mov byte ptr es:[0x7e6a], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0x7e6au), 0x80u);
    // 31fa:092b  mov byte ptr es:[0x7eb1], 4  [x764]
    c.w8(c.esb + (uint16_t)(0x7eb1u), 0x4u);
    // 31fa:0931  mov byte ptr es:[0x7ec6], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0x7ec6u), 0x82u);
    // 31fa:0937  mov byte ptr es:[0x7fe9], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0x7fe9u), 0xdu);
    // 31fa:093d  mov byte ptr es:[0x80f5], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffff80f5u), 0x4u);
    // 31fa:0943  mov byte ptr es:[0x812f], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0xffff812fu), 0x83u);
    // 31fa:0949  mov byte ptr es:[0x8274], 0x90  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8274u), 0x90u);
    // 31fa:094f  mov byte ptr es:[0x8282], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8282u), 0x83u);
    // 31fa:0955  mov byte ptr es:[0x8376], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8376u), 0x89u);
    // 31fa:095b  mov byte ptr es:[0x887d], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0xffff887du), 0xau);
    // 31fa:0961  mov byte ptr es:[0x89ab], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0xffff89abu), 0x83u);
    // 31fa:0967  mov byte ptr es:[0x8c3d], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8c3du), 0xeu);
    // 31fa:096d  mov byte ptr es:[0x8c5c], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8c5cu), 0x80u);
    // 31fa:0973  mov byte ptr es:[0x8d5f], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8d5fu), 0x80u);
    // 31fa:0979  mov byte ptr es:[0x8eb9], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8eb9u), 0x82u);
    // 31fa:097f  mov byte ptr es:[0x8fdc], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff8fdcu), 0x80u);
    // 31fa:0985  mov byte ptr es:[0x9014], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9014u), 0x86u);
    // 31fa:098b  mov byte ptr es:[0x9122], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9122u), 0x80u);
    // 31fa:0991  mov byte ptr es:[0x912c], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffff912cu), 0x8u);
    // 31fa:0997  mov byte ptr es:[0x916b], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0xffff916bu), 0x88u);
    // 31fa:099d  mov byte ptr es:[0x926a], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffff926au), 0x8u);
    // 31fa:09a3  mov byte ptr es:[0x9297], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9297u), 0x88u);
    // 31fa:09a9  mov byte ptr es:[0x94df], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0xffff94dfu), 0x8bu);
    // 31fa:09af  mov byte ptr es:[0x9795], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9795u), 0x8bu);
    // 31fa:09b5  mov byte ptr es:[0x979f], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffff979fu), 0x4u);
    // 31fa:09bb  mov byte ptr es:[0x99d9], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0xffff99d9u), 0x86u);
    // 31fa:09c1  mov byte ptr es:[0x99fd], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff99fdu), 0x80u);
    // 31fa:09c7  mov byte ptr es:[0x9b47], 0x8e  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9b47u), 0x8eu);
    // 31fa:09cd  mov byte ptr es:[0x9cae], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9caeu), 0x80u);
    // 31fa:09d3  mov byte ptr es:[0x9cb0], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9cb0u), 0x8u);
    // 31fa:09d9  mov byte ptr es:[0x9dab], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9dabu), 0x80u);
    // 31fa:09df  mov byte ptr es:[0x9f43], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffff9f43u), 0x8u);
    // 31fa:09e5  mov byte ptr es:[0xa03b], 0x8e  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa03bu), 0x8eu);
    // 31fa:09eb  mov byte ptr es:[0xa197], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa197u), 0x80u);
    // 31fa:09f1  mov byte ptr es:[0xa19b], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa19bu), 0xdu);
    // 31fa:09f7  mov byte ptr es:[0xa1b7], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa1b7u), 0x86u);
    // 31fa:09fd  mov byte ptr es:[0xa2cb], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa2cbu), 0x4u);
    // 31fa:0a03  mov byte ptr es:[0xa3da], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa3dau), 0x10u);
    // 31fa:0a09  mov byte ptr es:[0xa541], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa541u), 0x82u);
    // 31fa:0a0f  mov byte ptr es:[0xa6a0], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa6a0u), 0x82u);
    // 31fa:0a15  mov byte ptr es:[0xa8e9], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa8e9u), 0x88u);
    // 31fa:0a1b  mov byte ptr es:[0xa901], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa901u), 0x82u);
    // 31fa:0a21  mov byte ptr es:[0xa931], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0xffffa931u), 0x83u);
    // 31fa:0a27  mov byte ptr es:[0xaa26], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0xffffaa26u), 0xau);
    // 31fa:0a2d  mov byte ptr es:[0xade5], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xffffade5u), 0x85u);
    // 31fa:0a33  mov byte ptr es:[0xb061], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb061u), 0x82u);
    // 31fa:0a39  mov byte ptr es:[0xb088], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb088u), 0x83u);
    // 31fa:0a3f  mov byte ptr es:[0xb1a2], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb1a2u), 0xau);
    // 31fa:0a45  mov byte ptr es:[0xb45b], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb45bu), 0x8bu);
    // 31fa:0a4b  mov byte ptr es:[0xb597], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb597u), 0x82u);
    // 31fa:0a51  mov byte ptr es:[0xb82c], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0xffffb82cu), 0x10u);
    // 31fa:0a57  mov byte ptr es:[0xba70], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0xffffba70u), 0x89u);
    // 31fa:0a5d  mov byte ptr es:[0xba90], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffba90u), 0x80u);
    // 31fa:0a63  mov byte ptr es:[0xbbbb], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0xffffbbbbu), 0xdu);
    // 31fa:0a69  mov byte ptr es:[0xbe1a], 0x90  [x764]
    c.w8(c.esb + (uint16_t)(0xffffbe1au), 0x90u);
    // 31fa:0a6f  mov byte ptr es:[0xbf87], 0xcf  [x764]
    c.w8(c.esb + (uint16_t)(0xffffbf87u), 0xcfu);
    // 31fa:0a75  mov byte ptr es:[0xc33b], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffc33bu), 0x4u);
    // 31fa:0a7b  mov byte ptr es:[0xc36e], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffc36eu), 0x80u);
    // 31fa:0a81  mov byte ptr es:[0xc5ec], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffc5ecu), 0x80u);
    // 31fa:0a87  mov byte ptr es:[0xc818], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffc818u), 0x80u);
    // 31fa:0a8d  mov byte ptr es:[0xc959], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0xffffc959u), 0xeu);
    // 31fa:0a93  mov byte ptr es:[0xce7a], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffce7au), 0x4u);
    // 31fa:0a99  mov byte ptr es:[0xcf9a], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xffffcf9au), 0x85u);
    // 31fa:0a9f  mov byte ptr es:[0xcffa], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffcffau), 0x80u);
    // 31fa:0aa5  mov byte ptr es:[0xd10c], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd10cu), 0x85u);
    // 31fa:0aab  mov byte ptr es:[0xd228], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd228u), 0x86u);
L32a51:
    if (c.tracing) c.traceAt(0x32a51);
    // 31fa:0ab1  mov byte ptr es:[0xd24e], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd24eu), 0x80u);
    // 31fa:0ab7  mov byte ptr es:[0xd27c], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd27cu), 0x4u);
    // 31fa:0abd  mov byte ptr es:[0xd377], 0x10  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd377u), 0x10u);
    // 31fa:0ac3  mov byte ptr es:[0xd4dd], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd4ddu), 0x4u);
    // 31fa:0ac9  mov byte ptr es:[0xd624], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd624u), 0x8u);
    // 31fa:0acf  mov byte ptr es:[0xd9ff], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffd9ffu), 0x80u);
    // 31fa:0ad5  mov byte ptr es:[0xdc86], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffdc86u), 0x80u);
    // 31fa:0adb  mov byte ptr es:[0xdd88], 0x93  [x764]
    c.w8(c.esb + (uint16_t)(0xffffdd88u), 0x93u);
    // 31fa:0ae1  mov byte ptr es:[0xddaf], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xffffddafu), 0x85u);
    // 31fa:0ae7  mov byte ptr es:[0xdeb3], 0x86  [x764]
    c.w8(c.esb + (uint16_t)(0xffffdeb3u), 0x86u);
    // 31fa:0aed  mov byte ptr es:[0xdeb6], 0xe  [x764]
    c.w8(c.esb + (uint16_t)(0xffffdeb6u), 0xeu);
    // 31fa:0af3  mov byte ptr es:[0xe01f], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe01fu), 0x85u);
    // 31fa:0af9  mov byte ptr es:[0xe131], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe131u), 0x80u);
    // 31fa:0aff  mov byte ptr es:[0xe15f], 8  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe15fu), 0x8u);
    // 31fa:0b05  mov byte ptr es:[0xe3c0], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe3c0u), 0x83u);
    // 31fa:0b0b  mov byte ptr es:[0xe3e9], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe3e9u), 0x85u);
    // 31fa:0b11  mov byte ptr es:[0xe4f2], 0x88  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe4f2u), 0x88u);
    // 31fa:0b17  mov byte ptr es:[0xe544], 0xcf  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe544u), 0xcfu);
    // 31fa:0b1d  mov byte ptr es:[0xe9fc], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xffffe9fcu), 0x80u);
    // 31fa:0b23  mov byte ptr es:[0xeb68], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xffffeb68u), 0x4u);
    // 31fa:0b29  mov byte ptr es:[0xeca0], 0x82  [x764]
    c.w8(c.esb + (uint16_t)(0xffffeca0u), 0x82u);
    // 31fa:0b2f  mov byte ptr es:[0xedb4], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0xffffedb4u), 0xdu);
    // 31fa:0b35  mov byte ptr es:[0xedbb], 0x8e  [x764]
    c.w8(c.esb + (uint16_t)(0xffffedbbu), 0x8eu);
    // 31fa:0b3b  mov byte ptr es:[0xf041], 0x90  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff041u), 0x90u);
    // 31fa:0b41  mov byte ptr es:[0xf088], 0x8e  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff088u), 0x8eu);
    // 31fa:0b47  mov byte ptr es:[0xf2ca], 0x8b  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff2cau), 0x8bu);
    // 31fa:0b4d  mov byte ptr es:[0xf2ce], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff2ceu), 0x80u);
    // 31fa:0b53  mov byte ptr es:[0xf556], 0x80  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff556u), 0x80u);
    // 31fa:0b59  mov byte ptr es:[0xf68e], 0x89  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff68eu), 0x89u);
    // 31fa:0b5f  mov byte ptr es:[0xf6c8], 0xd  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff6c8u), 0xdu);
    // 31fa:0b65  mov byte ptr es:[0xf7cd], 4  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff7cdu), 0x4u);
    // 31fa:0b6b  mov byte ptr es:[0xf801], 0x85  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff801u), 0x85u);
    // 31fa:0b71  mov byte ptr es:[0xf8de], 0xa  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff8deu), 0xau);
    // 31fa:0b77  mov byte ptr es:[0xf925], 0x83  [x764]
    c.w8(c.esb + (uint16_t)(0xfffff925u), 0x83u);
    // 31fa:0b7d  retf   [x764]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5f960:
    if (c.tracing) c.traceAt(0x5f960);
    // 5f96:0000  mov esi, dword ptr [0xe9]  [x3]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xe9u)));
    // 5f96:0005  mov bx, 0xa000  [x3]
    c.b.x = (uint16_t)(0xa000u);
    // 5f96:0008  mov es, bx  [x3]
    c.loadEs(c.b.x);
    // 5f96:000a  mov bx, 0  [x3]
    c.b.x = (uint16_t)(0x0u);
    // 5f96:000d  mov di, bx  [x3]
    c.di.x = (uint16_t)(c.b.x);
    // 5f96:000f  mov dx, di  [x3]
    c.dx_.x = (uint16_t)(c.di.x);
    // 5f96:0011  xor ah, ah  [x3]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), true));
L5f973:
    if (c.tracing) c.traceAt(0x5f973);
    // 5f96:0013  mov di, dx  [x600]
    c.di.x = (uint16_t)(c.dx_.x);
    // 5f96:0015  mov al, byte ptr [esi]  [x600]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(c.si.e)));
    // 5f96:0018  inc esi  [x600]
    c.si.e = (uint32_t)(c.inc<32>(c.si.e, false));
    // 5f96:001a  mov bl, al  [x600]
    c.b.l = (uint8_t)(c.a.l);
    // 5f96:001c  test bl, bl  [x600]
    c.logic<8>((c.b.l) & (c.b.l), true);
    // 5f96:001e  jmp 0x47  [x600]
    goto L5f9a7;
L5f980:
    if (c.tracing) c.traceAt(0x5f980);
    // 5f96:0020  mov al, byte ptr [esi]  [x16572]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(c.si.e)));
    // 5f96:0023  inc esi  [x16572]
    c.si.e = (uint32_t)(c.inc<32>(c.si.e, false));
    // 5f96:0025  test al, al  [x16572]
    c.logic<8>((c.a.l) & (c.a.l), true);
    // 5f96:0027  js 0x38  [x16572]
    if (c.sf) goto L5f998;
L5f989:
    if (c.tracing) c.traceAt(0x5f989);
    // 5f96:0029  mov cx, ax  [x10268]
    c.c.x = (uint16_t)(c.a.x);
    // 5f96:002b  mov al, byte ptr [esi]  [x10268]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(c.si.e)));
    // 5f96:002e  inc esi  [x10268]
    c.si.e = (uint32_t)(c.inc<32>(c.si.e, true));
L5f990:
    if (c.tracing) c.traceAt(0x5f990);
    // 5f96:0030  rep stosb byte ptr es:[di], al  [x178146]
    c.stos<8, false>(1);
L5f992:
    if (c.tracing) c.traceAt(0x5f992);
    // 5f96:0032  dec bl  [x10268]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
    // 5f96:0034  jne 0x20  [x10268]
    if (!c.zf) goto L5f980;
L5f996:
    if (c.tracing) c.traceAt(0x5f996);
    // 5f96:0036  jmp 0x49  [x539]
    goto L5f9a9;
L5f998:
    if (c.tracing) c.traceAt(0x5f998);
    // 5f96:0038  neg al  [x6304]
    c.a.l = (uint8_t)(c.neg<8>(c.a.l, true));
    // 5f96:003a  mov cx, ax  [x6304]
    c.c.x = (uint16_t)(c.a.x);
L5f99c:
    if (c.tracing) c.traceAt(0x5f99c);
    // 5f96:003c  mov al, byte ptr [esi]  [x24122]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(c.si.e)));
    // 5f96:003f  inc esi  [x24122]
    c.si.e = (uint32_t)(c.inc<32>(c.si.e, false));
    // 5f96:0041  stosb byte ptr es:[di], al  [x24122]
    c.stos<8, false>(0);
    // 5f96:0042  dec cx  [x24122]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 5f96:0043  jne 0x3c  [x24122]
    if (!c.zf) goto L5f99c;
L5f9a5:
    if (c.tracing) c.traceAt(0x5f9a5);
    // 5f96:0045  dec bl  [x6304]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
L5f9a7:
    if (c.tracing) c.traceAt(0x5f9a7);
    // 5f96:0047  jne 0x20  [x6904]
    if (!c.zf) goto L5f980;
L5f9a9:
    if (c.tracing) c.traceAt(0x5f9a9);
    // 5f96:0049  add dx, 0x140  [x600]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x140u, false));
    // 5f96:004d  cmp di, 0xf9ff  [x600]
    c.sub<16>(c.di.x, 0xf9ffu, true);
    // 5f96:0051  jb 0x13  [x600]
    if (c.cf) goto L5f973;
L5f9b3:
    if (c.tracing) c.traceAt(0x5f9b3);
    // 5f96:0053  retf   [x3]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5f9b4:
    if (c.tracing) c.traceAt(0x5f9b4);
    // 5f96:0054  cld   [x134]
    c.df = false;
    // 5f96:0055  mov ax, word ptr [0xf7]  [x134]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf7u)));
    // 5f96:0058  mov fs, ax  [x134]
    c.loadFs(c.a.x);
    // 5f96:005a  mov esi, dword ptr [0xe9]  [x134]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xe9u)));
    // 5f96:005f  mov ebx, dword ptr [0xed]  [x134]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xedu)));
    // 5f96:0064  shl ebx, 2  [x134]
    c.b.e = (uint32_t)(c.shl<32>(c.b.e, (int)((0x2u) & 31), false));
    // 5f96:0068  add ebx, 0xe  [x134]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xeu, false));
    // 5f96:006c  mov eax, dword ptr fs:[ebx]  [x134]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.b.e)));
    // 5f96:0071  add esi, eax  [x134]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.a.e, false));
    // 5f96:0074  mov bx, 0xa000  [x134]
    c.b.x = (uint16_t)(0xa000u);
    // 5f96:0077  mov es, bx  [x134]
    c.loadEs(c.b.x);
    // 5f96:0079  xor di, di  [x134]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 5f96:007b  mov ax, word ptr [esi]  [x134]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e)));
    // 5f96:007e  add esi, 2  [x134]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x2u, false));
    // 5f96:0082  mov dx, 0x140  [x134]
    c.dx_.x = (uint16_t)(0x140u);
    // 5f96:0085  mul dx  [x134]
    c.mul16(c.dx_.x);
    // 5f96:0087  add di, ax  [x134]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 5f96:0089  mov ax, word ptr [esi]  [x134]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e)));
    // 5f96:008c  add esi, 2  [x134]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x2u, false));
    // 5f96:0090  mov bh, al  [x134]
    c.b.h = (uint8_t)(c.a.l);
    // 5f96:0092  mov dx, di  [x134]
    c.dx_.x = (uint16_t)(c.di.x);
    // 5f96:0094  xor ah, ah  [x134]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), true));
L5f9f6:
    if (c.tracing) c.traceAt(0x5f9f6);
    // 5f96:0096  mov di, dx  [x23449]
    c.di.x = (uint16_t)(c.dx_.x);
    // 5f96:0098  mov al, byte ptr [esi]  [x23449]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(c.si.e)));
    // 5f96:009b  inc esi  [x23449]
    c.si.e = (uint32_t)(c.inc<32>(c.si.e, false));
    // 5f96:009d  mov bl, al  [x23449]
    c.b.l = (uint8_t)(c.a.l);
    // 5f96:009f  test bl, bl  [x23449]
    c.logic<8>((c.b.l) & (c.b.l), true);
    // 5f96:00a1  jmp 0xd1  [x23449]
    goto L5fa31;
L5fa03:
    if (c.tracing) c.traceAt(0x5fa03);
    // 5f96:00a3  mov al, byte ptr [esi]  [x264998]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(c.si.e)));
    // 5f96:00a6  inc esi  [x264998]
    c.si.e = (uint32_t)(c.inc<32>(c.si.e, false));
    // 5f96:00a8  add di, ax  [x264998]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 5f96:00aa  mov al, byte ptr [esi]  [x264998]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(c.si.e)));
    // 5f96:00ad  inc esi  [x264998]
    c.si.e = (uint32_t)(c.inc<32>(c.si.e, false));
    // 5f96:00af  test al, al  [x264998]
    c.logic<8>((c.a.l) & (c.a.l), true);
    // 5f96:00b1  js 0xc4  [x264998]
    if (c.sf) goto L5fa24;
L5fa13:
    if (c.tracing) c.traceAt(0x5fa13);
    // 5f96:00b3  mov cx, ax  [x169755]
    c.c.x = (uint16_t)(c.a.x);
L5fa15:
    if (c.tracing) c.traceAt(0x5fa15);
    // 5f96:00b5  mov al, byte ptr [esi]  [x789391]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(c.si.e)));
    // 5f96:00b8  inc esi  [x789391]
    c.si.e = (uint32_t)(c.inc<32>(c.si.e, false));
    // 5f96:00ba  stosb byte ptr es:[di], al  [x789391]
    c.stos<8, false>(0);
    // 5f96:00bb  dec cx  [x789391]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 5f96:00bc  jne 0xb5  [x789391]
    if (!c.zf) goto L5fa15;
L5fa1e:
    if (c.tracing) c.traceAt(0x5fa1e);
    // 5f96:00be  dec bl  [x169755]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
    // 5f96:00c0  jne 0xa3  [x169755]
    if (!c.zf) goto L5fa03;
L5fa22:
    if (c.tracing) c.traceAt(0x5fa22);
    // 5f96:00c2  jmp 0xd3  [x15190]
    goto L5fa33;
L5fa24:
    if (c.tracing) c.traceAt(0x5fa24);
    // 5f96:00c4  neg al  [x95243]
    c.a.l = (uint8_t)(c.neg<8>(c.a.l, true));
    // 5f96:00c6  mov cx, ax  [x95243]
    c.c.x = (uint16_t)(c.a.x);
    // 5f96:00c8  mov al, byte ptr [esi]  [x95243]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(c.si.e)));
    // 5f96:00cb  inc esi  [x95243]
    c.si.e = (uint32_t)(c.inc<32>(c.si.e, true));
L5fa2d:
    if (c.tracing) c.traceAt(0x5fa2d);
    // 5f96:00cd  rep stosb byte ptr es:[di], al  [x1084072]
    c.stos<8, false>(1);
L5fa2f:
    if (c.tracing) c.traceAt(0x5fa2f);
    // 5f96:00cf  dec bl  [x95243]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
L5fa31:
    if (c.tracing) c.traceAt(0x5fa31);
    // 5f96:00d1  jne 0xa3  [x118692]
    if (!c.zf) goto L5fa03;
L5fa33:
    if (c.tracing) c.traceAt(0x5fa33);
    // 5f96:00d3  add dx, 0x140  [x23449]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x140u, true));
    // 5f96:00d7  dec bh  [x23449]
    c.b.h = (uint8_t)(c.dec<8>(c.b.h, true));
    // 5f96:00d9  jne 0x96  [x23449]
    if (!c.zf) goto L5f9f6;
L5fa3b:
    if (c.tracing) c.traceAt(0x5fa3b);
    // 5f96:00db  retf   [x134]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5fa3c:
    if (c.tracing) c.traceAt(0x5fa3c);
    // 5f96:00dc  mov bx, 0xe  [x134]
    c.b.x = (uint16_t)(0xeu);
    // 5f96:00df  int 0xff  [x134]
    c.ip = 0xe1u; c.d32 = false; c.intr(0xff, 0xe1u);
L5fa41:
    if (c.tracing) c.traceAt(0x5fa41);
    // 5f96:00e1  mov cx, 4  [x134]
    c.c.x = (uint16_t)(0x4u);
    // 5f96:00e4  sub cx, ax  [x134]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.a.x, true));
    // 5f96:00e6  jle 0xec  [x134]
    if ((c.zf || c.sf != c.of)) goto L5fa4c;
L5fa48:
    if (c.tracing) c.traceAt(0x5fa48);
    // 5f96:00e8  int 0xff  [x402]
    c.ip = 0xeau; c.d32 = false; c.intr(0xff, 0xeau);
L5fa4a:
    if (c.tracing) c.traceAt(0x5fa4a);
    // 5f96:00ea  loop 0xe8  [x402]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5fa48;
L5fa4c:
    if (c.tracing) c.traceAt(0x5fa4c);
    // 5f96:00ec  retf   [x134]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5fa4d:
    if (c.tracing) c.traceAt(0x5fa4d);
    // 5f96:00ed  push cs  [x3]
    c.push16(c.cs);
    // 5f96:00ee  call 0x147  [x3]
    c.push16(0xf1u); code_5(c, 0x5faa7u); if (c.ip != 0xf1u) c.badReturn(0x5fa4e);
L5fa51:
    if (c.tracing) c.traceAt(0x5fa51);
    // 5f96:00f1  mov ax, word ptr [0xf7]  [x3]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf7u)));
    // 5f96:00f4  mov fs, ax  [x3]
    c.loadFs(c.a.x);
    // 5f96:00f6  mov ax, word ptr fs:[0xc]  [x3]
    c.a.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(0xcu)));
    // 5f96:00fa  xor si, si  [x3]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 5f96:00fc  push cs  [x3]
    c.push16(c.cs);
    // 5f96:00fd  call 0xc11  [x3]
    c.push16(0x100u); code_5(c, 0x60571u); if (c.ip != 0x100u) c.badReturn(0x5fa5d);
L5fa60:
    if (c.tracing) c.traceAt(0x5fa60);
    // 5f96:0100  mov eax, dword ptr fs:[0]  [x3]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(0u)));
    // 5f96:0105  mov dword ptr [0xe9], eax  [x3]
    c.w32(c.dsb + (uint16_t)(0xe9u), c.a.e);
    // 5f96:0109  mov eax, dword ptr fs:[4]  [x3]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(0x4u)));
    // 5f96:010e  mov dword ptr [0xf1], eax  [x3]
    c.w32(c.dsb + (uint16_t)(0xf1u), c.a.e);
    // 5f96:0112  mov word ptr [0xf5], 4  [x3]
    c.w16(c.dsb + (uint16_t)(0xf5u), 0x4u);
    // 5f96:0118  mov dword ptr [0xed], 0  [x3]
    c.w32(c.dsb + (uint16_t)(0xedu), 0x0u);
    // 5f96:0121  push cs  [x3]
    c.push16(c.cs);
    // 5f96:0122  call 0  [x3]
    c.push16(0x125u); code_5(c, 0x5f960u); if (c.ip != 0x125u) c.badReturn(0x5fa82);
L5fa85:
    if (c.tracing) c.traceAt(0x5fa85);
    // 5f96:0125  push cs  [x3]
    c.push16(c.cs);
    // 5f96:0126  call 0x14e  [x3]
    c.push16(0x129u); code_5(c, 0x5faaeu); if (c.ip != 0x129u) c.badReturn(0x5fa86);
L5fa89:
    if (c.tracing) c.traceAt(0x5fa89);
    // 5f96:0129  inc dword ptr [0xed]  [x3]
    c.w32(c.dsb + (uint16_t)(0xedu), c.inc<32>(c.r32(c.dsb + (uint16_t)(0xedu)), true));
L5fa8e:
    if (c.tracing) c.traceAt(0x5fa8e);
    // 5f96:012e  push cs  [x134]
    c.push16(c.cs);
    // 5f96:012f  call 0x54  [x134]
    c.push16(0x132u); code_5(c, 0x5f9b4u); if (c.ip != 0x132u) c.badReturn(0x5fa8f);
L5fa92:
    if (c.tracing) c.traceAt(0x5fa92);
    // 5f96:0132  push cs  [x134]
    c.push16(c.cs);
    // 5f96:0133  call 0xdc  [x134]
    c.push16(0x136u); code_5(c, 0x5fa3cu); if (c.ip != 0x136u) c.badReturn(0x5fa93);
L5fa96:
    if (c.tracing) c.traceAt(0x5fa96);
    // 5f96:0136  inc dword ptr [0xed]  [x134]
    c.w32(c.dsb + (uint16_t)(0xedu), c.inc<32>(c.r32(c.dsb + (uint16_t)(0xedu)), false));
    // 5f96:013b  mov eax, dword ptr [0xf1]  [x134]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xf1u)));
    // 5f96:013f  cmp dword ptr [0xed], eax  [x134]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xedu)), c.a.e, true);
    // 5f96:0144  jne 0x12e  [x134]
    if (!c.zf) goto L5fa8e;
L5faa6:
    if (c.tracing) c.traceAt(0x5faa6);
    // 5f96:0146  retf   [x3]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5faa7:
    if (c.tracing) c.traceAt(0x5faa7);
    // 5f96:0147  mov dx, 0x3c6  [x8]
    c.dx_.x = (uint16_t)(0x3c6u);
    // 5f96:014a  mov al, 0  [x8]
    c.a.l = (uint8_t)(0x0u);
    // 5f96:014c  out dx, al  [x8]
    c.ip = 0x14du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5f96:014d  retf   [x8]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5faae:
    if (c.tracing) c.traceAt(0x5faae);
    // 5f96:014e  mov dx, 0x3c6  [x8]
    c.dx_.x = (uint16_t)(0x3c6u);
    // 5f96:0151  mov al, 0xff  [x8]
    c.a.l = (uint8_t)(0xffu);
    // 5f96:0153  out dx, al  [x8]
    c.ip = 0x154u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5f96:0154  retf   [x8]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5fab5:
    if (c.tracing) c.traceAt(0x5fab5);
    // 5f96:0155  mov ax, 0x25a8  [x1520]
    c.a.x = (uint16_t)(0x25a8u);
    // 5f96:0158  mov es, ax  [x1520]
    c.loadEs(c.a.x);
    // 5f96:015a  mov ebx, dword ptr [0x7b]  [x1520]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x7bu)));
    // 5f96:015f  mov edi, dword ptr [0x7f]  [x1520]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x7fu)));
    // 5f96:0164  add ebx, ebx  [x1520]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 5f96:0167  add edi, edi  [x1520]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.di.e, false));
    // 5f96:016a  mov ebp, ebx  [x1520]
    c.bp.e = (uint32_t)(c.b.e);
    // 5f96:016d  add ebx, edi  [x1520]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, false));
    // 5f96:0170  sub ebp, edi  [x1520]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.di.e, false));
    // 5f96:0173  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5f96:017d  add eax, dword ptr es:[ebp*2 + 0x3000]  [x1520]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 5f96:0187  sar eax, 1  [x1520]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5f96:018a  mov dword ptr [0x57], eax  [x1520]
    c.w32(c.dsb + (uint16_t)(0x57u), c.a.e);
    // 5f96:018e  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5f96:0198  add eax, dword ptr es:[ebp*2 + 0x3400]  [x1520]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 5f96:01a2  sar eax, 1  [x1520]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5f96:01a5  mov dword ptr [0x5b], eax  [x1520]
    c.w32(c.dsb + (uint16_t)(0x5bu), c.a.e);
    // 5f96:01a9  mov ebx, edi  [x1520]
    c.b.e = (uint32_t)(c.di.e);
    // 5f96:01ac  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5f96:01b6  mov dword ptr [0x5f], eax  [x1520]
    c.w32(c.dsb + (uint16_t)(0x5fu), c.a.e);
    // 5f96:01ba  mov ebp, dword ptr [0x83]  [x1520]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x83u)));
    // 5f96:01bf  add ebp, ebp  [x1520]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5f96:01c2  mov eax, ebx  [x1520]
    c.a.e = (uint32_t)(c.b.e);
    // 5f96:01c5  sub ebx, ebp  [x1520]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.bp.e, false));
    // 5f96:01c8  add ebp, eax  [x1520]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 5f96:01cb  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5f96:01d5  sub eax, dword ptr es:[ebp*2 + 0x3400]  [x1520]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 5f96:01df  sar eax, 1  [x1520]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5f96:01e2  mov dword ptr [0x6b], eax  [x1520]
    c.w32(c.dsb + (uint16_t)(0x6bu), c.a.e);
    // 5f96:01e6  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5f96:01f0  add eax, dword ptr es:[ebp*2 + 0x3000]  [x1520]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 5f96:01fa  sar eax, 1  [x1520]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5f96:01fd  mov dword ptr [0x77], eax  [x1520]
    c.w32(c.dsb + (uint16_t)(0x77u), c.a.e);
    // 5f96:0201  mov ebx, dword ptr [0x7b]  [x1520]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x7bu)));
    // 5f96:0206  add ebx, dword ptr [0x7f]  [x1520]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x7fu)), false));
    // 5f96:020b  sub ebx, dword ptr [0x83]  [x1520]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x83u)), false));
    // 5f96:0210  add ebx, ebx  [x1520]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 5f96:0213  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5f96:021d  mov ecx, dword ptr es:[ebx*2 + 0x3400]  [x1520]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5f96:0227  mov edx, ecx  [x1520]
    c.dx_.e = (uint32_t)(c.c.e);
    // 5f96:022a  neg edx  [x1520]
    c.dx_.e = (uint32_t)(c.neg<32>(c.dx_.e, false));
    // 5f96:022d  mov edi, eax  [x1520]
    c.di.e = (uint32_t)(c.a.e);
    // 5f96:0230  mov esi, dword ptr [0x83]  [x1520]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x83u)));
    // 5f96:0235  add esi, esi  [x1520]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 5f96:0238  add ebx, esi  [x1520]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 5f96:023b  add ebx, esi  [x1520]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 5f96:023e  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x1520]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5f96:0248  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x1520]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5f96:0252  sub eax, esi  [x1520]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5f96:0255  sub ecx, ebp  [x1520]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 5f96:0258  sub edx, ebp  [x1520]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.bp.e, false));
    // 5f96:025b  add edi, esi  [x1520]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.si.e, false));
    // 5f96:025e  mov esi, dword ptr [0x7f]  [x1520]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x7fu)));
    // 5f96:0263  add esi, esi  [x1520]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 5f96:0266  sub ebx, esi  [x1520]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 5f96:0269  sub ebx, esi  [x1520]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 5f96:026c  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x1520]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5f96:0276  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x1520]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5f96:0280  add eax, esi  [x1520]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.si.e, false));
    // 5f96:0283  add ecx, ebp  [x1520]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.bp.e, false));
    // 5f96:0286  add edx, ebp  [x1520]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 5f96:0289  sub edi, esi  [x1520]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 5f96:028c  mov esi, dword ptr [0x83]  [x1520]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x83u)));
    // 5f96:0291  add esi, esi  [x1520]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 5f96:0294  sub ebx, esi  [x1520]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 5f96:0297  sub ebx, esi  [x1520]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 5f96:029a  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x1520]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5f96:02a4  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x1520]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5f96:02ae  sub eax, esi  [x1520]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5f96:02b1  sub ecx, ebp  [x1520]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 5f96:02b4  add edx, ebp  [x1520]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 5f96:02b7  sub edi, esi  [x1520]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 5f96:02ba  sar eax, 2  [x1520]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x2u) & 31), false));
    // 5f96:02be  sar ecx, 2  [x1520]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x2u) & 31), false));
    // 5f96:02c2  sar edx, 2  [x1520]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x2u) & 31), false));
    // 5f96:02c6  sar edi, 2  [x1520]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x2u) & 31), false));
    // 5f96:02ca  mov dword ptr [0x63], eax  [x1520]
    c.w32(c.dsb + (uint16_t)(0x63u), c.a.e);
    // 5f96:02ce  mov dword ptr [0x67], ecx  [x1520]
    c.w32(c.dsb + (uint16_t)(0x67u), c.c.e);
    // 5f96:02d3  mov dword ptr [0x6f], edx  [x1520]
    c.w32(c.dsb + (uint16_t)(0x6fu), c.dx_.e);
    // 5f96:02d8  mov dword ptr [0x73], edi  [x1520]
    c.w32(c.dsb + (uint16_t)(0x73u), c.di.e);
    // 5f96:02dd  mov ebx, dword ptr [0x7b]  [x1520]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x7bu)));
    // 5f96:02e2  mov ebp, ebx  [x1520]
    c.bp.e = (uint32_t)(c.b.e);
    // 5f96:02e5  add ebx, dword ptr [0x83]  [x1520]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x83u)), false));
    // 5f96:02ea  sub ebp, dword ptr [0x83]  [x1520]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.r32(c.dsb + (uint16_t)(0x83u)), false));
    // 5f96:02ef  add ebx, ebx  [x1520]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 5f96:02f2  add ebp, ebp  [x1520]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5f96:02f5  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5f96:02ff  add eax, dword ptr es:[ebp*2 + 0x3400]  [x1520]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 5f96:0309  sar eax, 1  [x1520]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5f96:030c  add dword ptr [0x63], eax  [x1520]
    c.w32(c.dsb + (uint16_t)(0x63u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x63u)), c.a.e, false));
    // 5f96:0311  mov ecx, dword ptr es:[ebx*2 + 0x3000]  [x1520]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5f96:031b  add ecx, dword ptr es:[ebp*2 + 0x3000]  [x1520]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 5f96:0325  sar ecx, 1  [x1520]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x1u) & 31), false));
    // 5f96:0328  sub dword ptr [0x67], ecx  [x1520]
    c.w32(c.dsb + (uint16_t)(0x67u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x67u)), c.c.e, false));
    // 5f96:032d  mov edx, dword ptr es:[ebx*2 + 0x3000]  [x1520]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5f96:0337  sub edx, dword ptr es:[ebp*2 + 0x3000]  [x1520]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 5f96:0341  sar edx, 1  [x1520]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x1u) & 31), false));
    // 5f96:0344  sub dword ptr [0x6f], edx  [x1520]
    c.w32(c.dsb + (uint16_t)(0x6fu), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x6fu)), c.dx_.e, false));
    // 5f96:0349  mov edi, dword ptr es:[ebx*2 + 0x3400]  [x1520]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5f96:0353  sub edi, dword ptr es:[ebp*2 + 0x3400]  [x1520]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 5f96:035d  sar edi, 1  [x1520]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x1u) & 31), false));
    // 5f96:0360  sub dword ptr [0x73], edi  [x1520]
    c.w32(c.dsb + (uint16_t)(0x73u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x73u)), c.di.e, false));
    // 5f96:0365  sar dword ptr [0x6f], 5  [x1520]
    c.w32(c.dsb + (uint16_t)(0x6fu), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x6fu)), (int)((0x5u) & 31), false));
    // 5f96:036b  sar dword ptr [0x73], 5  [x1520]
    c.w32(c.dsb + (uint16_t)(0x73u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x73u)), (int)((0x5u) & 31), false));
    // 5f96:0371  sar dword ptr [0x77], 5  [x1520]
    c.w32(c.dsb + (uint16_t)(0x77u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x77u)), (int)((0x5u) & 31), false));
    // 5f96:0377  shl dword ptr [0x57], 3  [x1520]
    c.w32(c.dsb + (uint16_t)(0x57u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x57u)), (int)((0x3u) & 31), false));
    // 5f96:037d  shl dword ptr [0x5b], 3  [x1520]
    c.w32(c.dsb + (uint16_t)(0x5bu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x5bu)), (int)((0x3u) & 31), false));
    // 5f96:0383  shl dword ptr [0x5f], 3  [x1520]
    c.w32(c.dsb + (uint16_t)(0x5fu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x5fu)), (int)((0x3u) & 31), false));
    // 5f96:0389  shl dword ptr [0x63], 3  [x1520]
    c.w32(c.dsb + (uint16_t)(0x63u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x63u)), (int)((0x3u) & 31), false));
    // 5f96:038f  shl dword ptr [0x67], 3  [x1520]
    c.w32(c.dsb + (uint16_t)(0x67u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x67u)), (int)((0x3u) & 31), false));
    // 5f96:0395  shl dword ptr [0x6b], 3  [x1520]
    c.w32(c.dsb + (uint16_t)(0x6bu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x6bu)), (int)((0x3u) & 31), true));
    // 5f96:039b  retf   [x1520]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5fcfc:
    if (c.tracing) c.traceAt(0x5fcfc);
    // 5f96:039c  lfs si, ptr [0x4b]  [x1520]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4bu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4bu) + 2); c.si.x = (uint16_t)(t0); c.loadFs(t1); }
    // 5f96:03a1  mov di, word ptr [0x3d]  [x1520]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x3du)));
L5fd05:
    if (c.tracing) c.traceAt(0x5fd05);
    // 5f96:03a5  mov eax, dword ptr fs:[si + 0x14]  [x67055]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x14u)));
    // 5f96:03aa  mov ebx, dword ptr fs:[si + 0x18]  [x67055]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x18u)));
    // 5f96:03af  mov ecx, dword ptr fs:[si + 0x1c]  [x67055]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x1cu)));
    // 5f96:03b4  mov dword ptr [0x7b], eax  [x67055]
    c.w32(c.dsb + (uint16_t)(0x7bu), c.a.e);
    // 5f96:03b8  mov dword ptr [0x7f], ebx  [x67055]
    c.w32(c.dsb + (uint16_t)(0x7fu), c.b.e);
    // 5f96:03bd  mov dword ptr [0x83], ecx  [x67055]
    c.w32(c.dsb + (uint16_t)(0x83u), c.c.e);
    // 5f96:03c2  add eax, dword ptr fs:[si + 4]  [x67055]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint16_t)(c.si.x + 0x4u)), false));
    // 5f96:03c7  add ebx, dword ptr fs:[si + 8]  [x67055]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.fsb + (uint16_t)(c.si.x + 0x8u)), false));
    // 5f96:03cc  add ecx, dword ptr fs:[si + 0xc]  [x67055]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.fsb + (uint16_t)(c.si.x + 0xcu)), false));
    // 5f96:03d1  mov edx, 0x3ff  [x67055]
    c.dx_.e = (uint32_t)(0x3ffu);
    // 5f96:03d7  and eax, edx  [x67055]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (c.dx_.e), false));
    // 5f96:03da  and ebx, edx  [x67055]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) & (c.dx_.e), false));
    // 5f96:03dd  and ecx, edx  [x67055]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) & (c.dx_.e), true));
    // 5f96:03e0  mov dword ptr fs:[si + 0x14], eax  [x67055]
    c.w32(c.fsb + (uint16_t)(c.si.x + 0x14u), c.a.e);
    // 5f96:03e5  mov dword ptr fs:[si + 0x18], ebx  [x67055]
    c.w32(c.fsb + (uint16_t)(c.si.x + 0x18u), c.b.e);
    // 5f96:03ea  mov dword ptr fs:[si + 0x1c], ecx  [x67055]
    c.w32(c.fsb + (uint16_t)(c.si.x + 0x1cu), c.c.e);
    // 5f96:03ef  dec di  [x67055]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
    // 5f96:03f0  jne 0x3a5  [x67055]
    if (!c.zf) goto L5fd05;
L5fd52:
    if (c.tracing) c.traceAt(0x5fd52);
    // 5f96:03f2  push cs  [x1520]
    c.push16(c.cs);
    // 5f96:03f3  call 0x155  [x1520]
    c.push16(0x3f6u); code_5(c, 0x5fab5u); if (c.ip != 0x3f6u) c.badReturn(0x5fd53);
L5fd56:
    if (c.tracing) c.traceAt(0x5fd56);
    // 5f96:03f6  lfs si, ptr [0x4b]  [x1520]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4bu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4bu) + 2); c.si.x = (uint16_t)(t0); c.loadFs(t1); }
    // 5f96:03fb  movzx esi, si  [x1520]
    c.si.e = (uint32_t)(c.si.x);
    // 5f96:03ff  mov eax, dword ptr fs:[esi]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e)));
    // 5f96:0404  shl eax, 4  [x1520]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 5f96:0408  mov word ptr [0x47], ax  [x1520]
    c.w16(c.dsb + (uint16_t)(0x47u), c.a.x);
    // 5f96:040b  add esi, 0x48  [x1520]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x48u, false));
    // 5f96:040f  add word ptr [0x47], si  [x1520]
    c.w16(c.dsb + (uint16_t)(0x47u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x47u)), c.si.x, true));
    // 5f96:0413  les di, ptr [0x4f]  [x1520]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4fu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4fu) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5f96:0417  jmp 0x4bc  [x1520]
    goto L5fe1c;
L5fd7a:
    if (c.tracing) c.traceAt(0x5fd7a);
    // 5f96:041a  mov ebx, dword ptr fs:[si]  [x404320]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x)));
    // 5f96:041e  mov ecx, dword ptr fs:[si + 4]  [x404320]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x4u)));
    // 5f96:0423  mov edi, dword ptr fs:[si + 8]  [x404320]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x8u)));
    // 5f96:0428  imul eax, ebx, 0xfffffff9  [x404320]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x5fd8b))));
    // 5f96:042f  imul ebp, ecx, 0xfffffff9  [x404320]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x5fd92))));
    // 5f96:0436  add eax, ebp  [x404320]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5f96:0439  imul ebp, edi, 0x1ff  [x404320]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x5fd9c))));
    // 5f96:0440  add eax, ebp  [x404320]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5f96:0443  mov dword ptr es:[si + 8], eax  [x404320]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x8u), c.a.e);
    // 5f96:0448  add eax, 0x59d80  [x404320]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x59d80u, false));
    // 5f96:044e  mov dword ptr [0x9b], eax  [x404320]
    c.w32(c.dsb + (uint16_t)(0x9bu), c.a.e);
    // 5f96:0452  imul ebp, ebx, 0x1ffb8  [x404320]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x5fdb5))));
    // 5f96:0459  imul eax, ecx, 0xfb8  [x404320]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x5fdbc))));
    // 5f96:0460  add ebp, eax  [x404320]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 5f96:0463  imul eax, edi, 0x648  [x404320]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x5fdc6))));
    // 5f96:046a  add eax, ebp  [x404320]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5f96:046d  cdq   [x404320]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5f96:046f  idiv dword ptr [0x9b]  [x404320]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x9bu)))) { c.d32 = false; c.intr(0, 0x46fu); }   // #DE: int 0, then again
    // 5f96:0474  add eax, dword ptr fs:[0x34]  [x404320]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint16_t)(0x34u)), false));
    // 5f96:047a  mov dword ptr es:[si], eax  [x404320]
    c.w32(c.esb + (uint16_t)(c.si.x), c.a.e);
    // 5f96:047e  imul ebp, ebx, 0xca0  [x404320]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x5fde1))));
    // 5f96:0485  imul eax, ecx, 0xfffe66a0  [x404320]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x5fde8))));
    // 5f96:048c  add ebp, eax  [x404320]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 5f96:048f  imul eax, edi, 0xfffffafa  [x404320]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x5fdf2))));
    // 5f96:0496  add eax, ebp  [x404320]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5f96:0499  add eax, dword ptr [0xb2]  [x404320]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xb2u)), false));
    // 5f96:049e  cdq   [x404320]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5f96:04a0  idiv dword ptr [0x9b]  [x404320]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x9bu)))) { c.d32 = false; c.intr(0, 0x4a0u); }   // #DE: int 0, then again
    // 5f96:04a5  add eax, 0x64  [x404320]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x64u, false));
    // 5f96:04a9  mov dword ptr es:[si + 4], eax  [x404320]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x4u), c.a.e);
    // 5f96:04ae  add si, 0x10  [x404320]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, false));
    // 5f96:04b1  cmp si, word ptr [0x47]  [x404320]
    c.sub<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x47u)), true);
    // 5f96:04b5  jb 0x41a  [x404320]
    if (c.cf) goto L5fd7a;
L5fe19:
    if (c.tracing) c.traceAt(0x5fe19);
    // 5f96:04b9  jmp 0x53d  [x1520]
    goto L5fe9d;
L5fe1c:
    if (c.tracing) c.traceAt(0x5fe1c);
    // 5f96:04bc  mov eax, dword ptr [0x57]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x57u)));
    // 5f96:04c0  mov dword ptr cs:[0x455], eax  [x1520]
    c.w32(c.csb + (uint16_t)(0x455u), c.a.e);
    // 5f96:04c5  mov eax, dword ptr [0x5b]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5bu)));
    // 5f96:04c9  mov dword ptr cs:[0x45c], eax  [x1520]
    c.w32(c.csb + (uint16_t)(0x45cu), c.a.e);
    // 5f96:04ce  mov eax, dword ptr [0x5f]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5fu)));
    // 5f96:04d2  mov dword ptr cs:[0x466], eax  [x1520]
    c.w32(c.csb + (uint16_t)(0x466u), c.a.e);
    // 5f96:04d7  mov eax, dword ptr [0x63]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x63u)));
    // 5f96:04db  shl eax, 3  [x1520]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x3u) & 31), false));
    // 5f96:04df  cdq   [x1520]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5f96:04e1  mov ecx, 0xa  [x1520]
    c.c.e = (uint32_t)(0xau);
    // 5f96:04e7  idiv ecx  [x1520]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x4e7u); }   // #DE: int 0, then again
    // 5f96:04ea  mov dword ptr cs:[0x481], eax  [x1520]
    c.w32(c.csb + (uint16_t)(0x481u), c.a.e);
    // 5f96:04ef  mov eax, dword ptr [0x67]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x67u)));
    // 5f96:04f3  shl eax, 3  [x1520]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x3u) & 31), false));
    // 5f96:04f7  cdq   [x1520]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5f96:04f9  mov ecx, 0xa  [x1520]
    c.c.e = (uint32_t)(0xau);
    // 5f96:04ff  idiv ecx  [x1520]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x4ffu); }   // #DE: int 0, then again
    // 5f96:0502  mov dword ptr cs:[0x488], eax  [x1520]
    c.w32(c.csb + (uint16_t)(0x488u), c.a.e);
    // 5f96:0507  mov eax, dword ptr [0x6b]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6bu)));
    // 5f96:050b  shl eax, 3  [x1520]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x3u) & 31), false));
    // 5f96:050f  cdq   [x1520]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5f96:0511  mov ecx, 0xa  [x1520]
    c.c.e = (uint32_t)(0xau);
    // 5f96:0517  idiv ecx  [x1520]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x517u); }   // #DE: int 0, then again
    // 5f96:051a  mov dword ptr cs:[0x492], eax  [x1520]
    c.w32(c.csb + (uint16_t)(0x492u), c.a.e);
    // 5f96:051f  mov eax, dword ptr [0x6f]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6fu)));
    // 5f96:0523  mov dword ptr cs:[0x42b], eax  [x1520]
    c.w32(c.csb + (uint16_t)(0x42bu), c.a.e);
    // 5f96:0528  mov eax, dword ptr [0x73]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x73u)));
    // 5f96:052c  mov dword ptr cs:[0x432], eax  [x1520]
    c.w32(c.csb + (uint16_t)(0x432u), c.a.e);
    // 5f96:0531  mov eax, dword ptr [0x77]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x77u)));
    // 5f96:0535  mov dword ptr cs:[0x43c], eax  [x1520]
    c.w32(c.csb + (uint16_t)(0x43cu), c.a.e);
    // 5f96:053a  jmp 0x41a  [x1520]
    goto L5fd7a;
L5fe9d:
    if (c.tracing) c.traceAt(0x5fe9d);
    // 5f96:053d  retf   [x1520]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5feb3:
    if (c.tracing) c.traceAt(0x5feb3);
    // 5f96:0553  mov edx, dword ptr [0x9f]  [x88114]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x9fu)));
    // 5f96:0558  mov eax, dword ptr fs:[edx + 4]  [x88114]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5f96:055e  imul eax, eax, 0x140  [x88114]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x140u));
    // 5f96:0565  mov dword ptr [0x24], eax  [x88114]
    c.w32(c.dsb + (uint16_t)(0x24u), c.a.e);
L5fec9:
    if (c.tracing) c.traceAt(0x5fec9);
    // 5f96:0569  mov edx, dword ptr [0xa3]  [x89563]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa3u)));
    // 5f96:056e  mov esi, dword ptr fs:[edx]  [x89563]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5f96:0573  mov edi, dword ptr fs:[edx + 4]  [x89563]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5f96:0579  sub edx, 8  [x89563]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, 0x8u, false));
    // 5f96:057d  mov dword ptr [0xa3], edx  [x89563]
    c.w32(c.dsb + (uint16_t)(0xa3u), c.dx_.e);
    // 5f96:0582  cmp edx, dword ptr [0x3f]  [x89563]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x3fu)), true);
    // 5f96:0587  jge 0x593  [x89563]
    if ((c.sf == c.of)) goto L5fef3;
L5fee9:
    if (c.tracing) c.traceAt(0x5fee9);
    // 5f96:0589  mov edx, dword ptr [0x43]  [x26746]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x43u)));
    // 5f96:058e  mov dword ptr [0xa3], edx  [x26746]
    c.w32(c.dsb + (uint16_t)(0xa3u), c.dx_.e);
L5fef3:
    if (c.tracing) c.traceAt(0x5fef3);
    // 5f96:0593  mov eax, dword ptr fs:[edx]  [x89563]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5f96:0598  mov ebx, dword ptr fs:[edx + 4]  [x89563]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5f96:059e  mov edx, ebx  [x89563]
    c.dx_.e = (uint32_t)(c.b.e);
    // 5f96:05a1  sub edx, edi  [x89563]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 5f96:05a4  je 0x569  [x89563]
    if (c.zf) goto L5fec9;
L5ff06:
    if (c.tracing) c.traceAt(0x5ff06);
    // 5f96:05a6  mov dword ptr [0x18], edx  [x88114]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 5f96:05ab  mov ecx, ebx  [x88114]
    c.c.e = (uint32_t)(c.b.e);
    // 5f96:05ae  sub ecx, edi  [x88114]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5f96:05b1  sub eax, esi  [x88114]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5f96:05b4  shl eax, 0x10  [x88114]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5f96:05b8  cdq   [x88114]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5f96:05ba  idiv ecx  [x88114]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x5bau); }   // #DE: int 0, then again
    // 5f96:05bd  mov dword ptr cs:[0x68d], eax  [x88114]
    c.w32(c.csb + (uint16_t)(0x68du), c.a.e);
    // 5f96:05c2  shl esi, 0x10  [x88114]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 5f96:05c6  mov dword ptr [0x10], esi  [x88114]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L5ff2b:
    if (c.tracing) c.traceAt(0x5ff2b);
    // 5f96:05cb  mov edx, dword ptr [0x9f]  [x93997]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x9fu)));
    // 5f96:05d0  mov esi, dword ptr fs:[edx]  [x93997]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5f96:05d5  mov edi, dword ptr fs:[edx + 4]  [x93997]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5f96:05db  add edx, 8  [x93997]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 5f96:05df  mov dword ptr [0x9f], edx  [x93997]
    c.w32(c.dsb + (uint16_t)(0x9fu), c.dx_.e);
    // 5f96:05e4  cmp edx, dword ptr [0x43]  [x93997]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x43u)), true);
    // 5f96:05e9  jle 0x5f5  [x93997]
    if ((c.zf || c.sf != c.of)) goto L5ff55;
L5ff4b:
    if (c.tracing) c.traceAt(0x5ff4b);
    // 5f96:05eb  mov edx, dword ptr [0x3f]  [x23184]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x3fu)));
    // 5f96:05f0  mov dword ptr [0x9f], edx  [x23184]
    c.w32(c.dsb + (uint16_t)(0x9fu), c.dx_.e);
L5ff55:
    if (c.tracing) c.traceAt(0x5ff55);
    // 5f96:05f5  mov eax, dword ptr fs:[edx]  [x93997]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5f96:05fa  mov ebx, dword ptr fs:[edx + 4]  [x93997]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5f96:0600  mov edx, ebx  [x93997]
    c.dx_.e = (uint32_t)(c.b.e);
    // 5f96:0603  sub edx, edi  [x93997]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 5f96:0606  je 0x5cb  [x93997]
    if (c.zf) goto L5ff2b;
L5ff68:
    if (c.tracing) c.traceAt(0x5ff68);
    // 5f96:0608  mov dword ptr [0x1c], edx  [x88114]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 5f96:060d  mov ecx, ebx  [x88114]
    c.c.e = (uint32_t)(c.b.e);
    // 5f96:0610  sub ecx, edi  [x88114]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5f96:0613  sub eax, esi  [x88114]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5f96:0616  shl eax, 0x10  [x88114]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5f96:061a  cdq   [x88114]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5f96:061c  idiv ecx  [x88114]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x61cu); }   // #DE: int 0, then again
    // 5f96:061f  mov dword ptr cs:[0x696], eax  [x88114]
    c.w32(c.csb + (uint16_t)(0x696u), c.a.e);
    // 5f96:0624  shl esi, 0x10  [x88114]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 5f96:0628  mov dword ptr [0x14], esi  [x88114]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L5ff8d:
    if (c.tracing) c.traceAt(0x5ff8d);
    // 5f96:062d  cmp dword ptr [0x24], 0  [x922919]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x24u)), 0x0u, true);
    // 5f96:0633  jl 0x67f  [x922919]
    if ((c.sf != c.of)) goto L5ffdf;
L5ff95:
    if (c.tracing) c.traceAt(0x5ff95);
    // 5f96:0635  mov eax, dword ptr [0x10]  [x889373]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x10u)));
    // 5f96:0639  mov edx, dword ptr [0x14]  [x889373]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x14u)));
    // 5f96:063e  sar edx, 0x10  [x889373]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 5f96:0642  sar eax, 0x10  [x889373]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5f96:0646  mov di, ax  [x889373]
    c.di.x = (uint16_t)(c.a.x);
    // 5f96:0648  mov cx, dx  [x889373]
    c.c.x = (uint16_t)(c.dx_.x);
    // 5f96:064a  sub cx, di  [x889373]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
    // 5f96:064c  js 0x791  [x889373]
    if (c.sf) goto L600f1;
L5ffb0:
    if (c.tracing) c.traceAt(0x5ffb0);
    // 5f96:0650  add edi, dword ptr [0x24]  [x888545]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x24u)), false));
    // 5f96:0655  mov eax, dword ptr [4]  [x888545]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4u)));
    // 5f96:0659  cmp cx, 4  [x888545]
    c.sub<16>(c.c.x, 0x4u, true);
    // 5f96:065c  jbe 0x670  [x888545]
    if ((c.cf || c.zf)) goto L5ffd0;
L5ffbe:
    if (c.tracing) c.traceAt(0x5ffbe);
    // 5f96:065e  mov si, cx  [x463167]
    c.si.x = (uint16_t)(c.c.x);
    // 5f96:0660  mov cx, di  [x463167]
    c.c.x = (uint16_t)(c.di.x);
    // 5f96:0662  and cx, 3  [x463167]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x3u), false));
    // 5f96:0665  sub cx, 4  [x463167]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, 0x4u, false));
    // 5f96:0668  neg cx  [x463167]
    c.c.x = (uint16_t)(c.neg<16>(c.c.x, false));
    // 5f96:066a  sub si, cx  [x463167]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.c.x, true));
L5ffcc:
    if (c.tracing) c.traceAt(0x5ffcc);
    // 5f96:066c  rep stosb byte ptr es:[di], al  [x1626205]
    c.stos<8, false>(1);
L5ffce:
    if (c.tracing) c.traceAt(0x5ffce);
    // 5f96:066e  mov cx, si  [x463167]
    c.c.x = (uint16_t)(c.si.x);
L5ffd0:
    if (c.tracing) c.traceAt(0x5ffd0);
    // 5f96:0670  mov si, cx  [x888545]
    c.si.x = (uint16_t)(c.c.x);
    // 5f96:0672  shr cx, 2  [x888545]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x2u) & 31), true));
L5ffd5:
    if (c.tracing) c.traceAt(0x5ffd5);
    // 5f96:0675  rep stosd dword ptr es:[di], eax  [x1685098]
    c.stos<32, false>(1);
L5ffd8:
    if (c.tracing) c.traceAt(0x5ffd8);
    // 5f96:0678  mov cx, si  [x888545]
    c.c.x = (uint16_t)(c.si.x);
    // 5f96:067a  and cx, 3  [x888545]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x3u), true));
L5ffdd:
    if (c.tracing) c.traceAt(0x5ffdd);
    // 5f96:067d  rep stosb byte ptr es:[di], al  [x2052929]
    c.stos<8, false>(1);
L5ffdf:
    if (c.tracing) c.traceAt(0x5ffdf);
    // 5f96:067f  add dword ptr [0x24], 0x140  [x922091]
    c.w32(c.dsb + (uint16_t)(0x24u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x24u)), 0x140u, false));
    // 5f96:0688  add dword ptr [0x10], 0x60000  [x922091]
    c.w32(c.dsb + (uint16_t)(0x10u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x10u)), (c.r32(0x5ffed)), false));
    // 5f96:0691  add dword ptr [0x14], 0xd0000  [x922091]
    c.w32(c.dsb + (uint16_t)(0x14u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x14u)), (c.r32(0x5fff6)), true));
    // 5f96:069a  dec dword ptr [0x18]  [x922091]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x18u)), true));
    // 5f96:069f  jne 0x710  [x922091]
    if (!c.zf) goto L60070;
L60001:
    if (c.tracing) c.traceAt(0x60001);
    // 5f96:06a1  mov eax, dword ptr [0x9f]  [x154886]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x9fu)));
    // 5f96:06a5  cmp eax, dword ptr [0xa3]  [x154886]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xa3u)), true);
    // 5f96:06aa  je 0x791  [x154886]
    if (c.zf) goto L600f1;
L6000e:
    if (c.tracing) c.traceAt(0x6000e);
    // 5f96:06ae  mov edx, dword ptr [0xa3]  [x86175]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa3u)));
    // 5f96:06b3  mov esi, dword ptr fs:[edx]  [x86175]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5f96:06b8  mov edi, dword ptr fs:[edx + 4]  [x86175]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5f96:06be  sub edx, 8  [x86175]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, 0x8u, false));
    // 5f96:06c2  mov dword ptr [0xa3], edx  [x86175]
    c.w32(c.dsb + (uint16_t)(0xa3u), c.dx_.e);
    // 5f96:06c7  cmp edx, dword ptr [0x3f]  [x86175]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x3fu)), true);
    // 5f96:06cc  jge 0x6d8  [x86175]
    if ((c.sf == c.of)) goto L60038;
L6002e:
    if (c.tracing) c.traceAt(0x6002e);
    // 5f96:06ce  mov edx, dword ptr [0x43]  [x19951]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x43u)));
    // 5f96:06d3  mov dword ptr [0xa3], edx  [x19951]
    c.w32(c.dsb + (uint16_t)(0xa3u), c.dx_.e);
L60038:
    if (c.tracing) c.traceAt(0x60038);
    // 5f96:06d8  mov eax, dword ptr fs:[edx]  [x86175]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5f96:06dd  mov ebx, dword ptr fs:[edx + 4]  [x86175]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5f96:06e3  mov edx, ebx  [x86175]
    c.dx_.e = (uint32_t)(c.b.e);
    // 5f96:06e6  sub edx, edi  [x86175]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 5f96:06e9  je 0x6ae  [x86175]
    if (c.zf) goto L6000e;
L6004b:
    if (c.tracing) c.traceAt(0x6004b);
    // 5f96:06eb  mov dword ptr [0x18], edx  [x79258]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 5f96:06f0  mov ecx, ebx  [x79258]
    c.c.e = (uint32_t)(c.b.e);
    // 5f96:06f3  sub ecx, edi  [x79258]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5f96:06f6  sub eax, esi  [x79258]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5f96:06f9  shl eax, 0x10  [x79258]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5f96:06fd  cdq   [x79258]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5f96:06ff  idiv ecx  [x79258]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x6ffu); }   // #DE: int 0, then again
    // 5f96:0702  mov dword ptr cs:[0x68d], eax  [x79258]
    c.w32(c.csb + (uint16_t)(0x68du), c.a.e);
    // 5f96:0707  shl esi, 0x10  [x79258]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 5f96:070b  mov dword ptr [0x10], esi  [x79258]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L60070:
    if (c.tracing) c.traceAt(0x60070);
    // 5f96:0710  dec dword ptr [0x1c]  [x846463]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x1cu)), true));
    // 5f96:0715  jne 0x784  [x846463]
    if (!c.zf) goto L600e4;
L60077:
    if (c.tracing) c.traceAt(0x60077);
    // 5f96:0717  mov eax, dword ptr [0x9f]  [x79249]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x9fu)));
    // 5f96:071b  cmp eax, dword ptr [0xa3]  [x79249]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xa3u)), true);
    // 5f96:0720  je 0x791  [x79249]
    if (c.zf) goto L600f1;
L60082:
    if (c.tracing) c.traceAt(0x60082);
    // 5f96:0722  mov edx, dword ptr [0x9f]  [x86166]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x9fu)));
    // 5f96:0727  mov esi, dword ptr fs:[edx]  [x86166]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5f96:072c  mov edi, dword ptr fs:[edx + 4]  [x86166]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5f96:0732  add edx, 8  [x86166]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 5f96:0736  mov dword ptr [0x9f], edx  [x86166]
    c.w32(c.dsb + (uint16_t)(0x9fu), c.dx_.e);
    // 5f96:073b  cmp edx, dword ptr [0x43]  [x86166]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x43u)), true);
    // 5f96:0740  jle 0x74c  [x86166]
    if ((c.zf || c.sf != c.of)) goto L600ac;
L600a2:
    if (c.tracing) c.traceAt(0x600a2);
    // 5f96:0742  mov edx, dword ptr [0x3f]  [x22721]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x3fu)));
    // 5f96:0747  mov dword ptr [0x9f], edx  [x22721]
    c.w32(c.dsb + (uint16_t)(0x9fu), c.dx_.e);
L600ac:
    if (c.tracing) c.traceAt(0x600ac);
    // 5f96:074c  mov eax, dword ptr fs:[edx]  [x86166]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5f96:0751  mov ebx, dword ptr fs:[edx + 4]  [x86166]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5f96:0757  mov edx, ebx  [x86166]
    c.dx_.e = (uint32_t)(c.b.e);
    // 5f96:075a  sub edx, edi  [x86166]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 5f96:075d  je 0x722  [x86166]
    if (c.zf) goto L60082;
L600bf:
    if (c.tracing) c.traceAt(0x600bf);
    // 5f96:075f  mov dword ptr [0x1c], edx  [x79249]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 5f96:0764  mov ecx, ebx  [x79249]
    c.c.e = (uint32_t)(c.b.e);
    // 5f96:0767  sub ecx, edi  [x79249]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5f96:076a  sub eax, esi  [x79249]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5f96:076d  shl eax, 0x10  [x79249]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5f96:0771  cdq   [x79249]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5f96:0773  idiv ecx  [x79249]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x773u); }   // #DE: int 0, then again
    // 5f96:0776  mov dword ptr cs:[0x696], eax  [x79249]
    c.w32(c.csb + (uint16_t)(0x696u), c.a.e);
    // 5f96:077b  shl esi, 0x10  [x79249]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 5f96:077f  mov dword ptr [0x14], esi  [x79249]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L600e4:
    if (c.tracing) c.traceAt(0x600e4);
    // 5f96:0784  mov eax, dword ptr [0x28]  [x846463]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x28u)));
    // 5f96:0788  cmp dword ptr [0x24], eax  [x846463]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x24u)), c.a.e, true);
    // 5f96:078d  jl 0x62d  [x846463]
    if ((c.sf != c.of)) goto L5ff8d;
L600f1:
    if (c.tracing) c.traceAt(0x600f1);
    // 5f96:0791  retf   [x88114]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L600f2:
    if (c.tracing) c.traceAt(0x600f2);
    // 5f96:0792  push ds  [x1528]
    c.push16(c.ds);
    // 5f96:0793  mov ax, 0xa000  [x1528]
    c.a.x = (uint16_t)(0xa000u);
    // 5f96:0796  mov es, ax  [x1528]
    c.loadEs(c.a.x);
    // 5f96:0798  cmp byte ptr [0xba], 0  [x1528]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xbau)), 0x0u, true);
    // 5f96:079d  jne 0x7e6  [x1528]
    if (!c.zf) goto L60146;
L600ff:
    if (c.tracing) c.traceAt(0x600ff);
    // 5f96:079f  mov di, 0x18  [x764]
    c.di.x = (uint16_t)(0x18u);
    // 5f96:07a2  mov ax, 0x4f59  [x764]
    c.a.x = (uint16_t)(0x4f59u);
    // 5f96:07a5  mov ds, ax  [x764]
    c.loadDs(c.a.x);
    // 5f96:07a7  mov si, 0x18  [x764]
    c.si.x = (uint16_t)(0x18u);
    // 5f96:07aa  mov bl, 0xc7  [x764]
    c.b.l = (uint8_t)(0xc7u);
    // 5f96:07ac  cld   [x764]
    c.df = false;
L6010d:
    if (c.tracing) c.traceAt(0x6010d);
    // 5f96:07ad  mov cx, 0x1c  [x152036]
    c.c.x = (uint16_t)(0x1cu);
L60110:
    if (c.tracing) c.traceAt(0x60110);
    // 5f96:07b0  rep movsd dword ptr es:[di], dword ptr [si]  [x4409044]
    c.ip = 0x7b3u; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L60113:
    if (c.tracing) c.traceAt(0x60113);
    // 5f96:07b3  add di, 0xd0  [x152036]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xd0u, false));
    // 5f96:07b7  add si, 0xd0  [x152036]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xd0u, true));
    // 5f96:07bb  dec bl  [x152036]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
    // 5f96:07bd  jne 0x7ad  [x152036]
    if (!c.zf) goto L6010d;
L6011f:
    if (c.tracing) c.traceAt(0x6011f);
    // 5f96:07bf  pop ds  [x764]
    c.loadDs((uint16_t)c.pop16());
    // 5f96:07c0  mov ax, 0x4f59  [x764]
    c.a.x = (uint16_t)(0x4f59u);
    // 5f96:07c3  mov es, ax  [x764]
    c.loadEs(c.a.x);
    // 5f96:07c5  mov eax, 0  [x764]
    c.a.e = (uint32_t)(0x0u);
    // 5f96:07cb  mov di, 0x18  [x764]
    c.di.x = (uint16_t)(0x18u);
    // 5f96:07ce  mov bl, 0xc7  [x764]
    c.b.l = (uint8_t)(0xc7u);
    // 5f96:07d0  cld   [x764]
    c.df = false;
L60131:
    if (c.tracing) c.traceAt(0x60131);
    // 5f96:07d1  mov cx, 0x1c  [x152036]
    c.c.x = (uint16_t)(0x1cu);
L60134:
    if (c.tracing) c.traceAt(0x60134);
    // 5f96:07d4  rep stosd dword ptr es:[di], eax  [x4409044]
    c.stos<32, false>(1);
L60137:
    if (c.tracing) c.traceAt(0x60137);
    // 5f96:07d7  add di, 0xd0  [x152036]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xd0u, true));
    // 5f96:07db  dec bl  [x152036]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
    // 5f96:07dd  jne 0x7d1  [x152036]
    if (!c.zf) goto L60131;
L6013f:
    if (c.tracing) c.traceAt(0x6013f);
    // 5f96:07df  lcall 0x31fa, 0  [x764]
    c.push16(c.cs); c.push16(0x7e4u); c.loadCs(0x31fau); c.callLinear(c.csb + 0x0u);
L60144:
    if (c.tracing) c.traceAt(0x60144);
    // 5f96:07e4  jmp 0x82b  [x764]
    goto L6018b;
L60146:
    if (c.tracing) c.traceAt(0x60146);
    // 5f96:07e6  mov di, 0xb4  [x764]
    c.di.x = (uint16_t)(0xb4u);
    // 5f96:07e9  mov ax, 0x4f59  [x764]
    c.a.x = (uint16_t)(0x4f59u);
    // 5f96:07ec  mov ds, ax  [x764]
    c.loadDs(c.a.x);
    // 5f96:07ee  mov si, 0x18  [x764]
    c.si.x = (uint16_t)(0x18u);
    // 5f96:07f1  mov bl, 0xc7  [x764]
    c.b.l = (uint8_t)(0xc7u);
    // 5f96:07f3  cld   [x764]
    c.df = false;
L60154:
    if (c.tracing) c.traceAt(0x60154);
    // 5f96:07f4  mov cx, 0x1c  [x152036]
    c.c.x = (uint16_t)(0x1cu);
L60157:
    if (c.tracing) c.traceAt(0x60157);
    // 5f96:07f7  rep movsd dword ptr es:[di], dword ptr [si]  [x4409044]
    c.ip = 0x7fau; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L6015a:
    if (c.tracing) c.traceAt(0x6015a);
    // 5f96:07fa  add di, 0xd0  [x152036]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xd0u, false));
    // 5f96:07fe  add si, 0xd0  [x152036]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xd0u, true));
    // 5f96:0802  dec bl  [x152036]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
    // 5f96:0804  jne 0x7f4  [x152036]
    if (!c.zf) goto L60154;
L60166:
    if (c.tracing) c.traceAt(0x60166);
    // 5f96:0806  pop ds  [x764]
    c.loadDs((uint16_t)c.pop16());
    // 5f96:0807  mov ax, 0x4f59  [x764]
    c.a.x = (uint16_t)(0x4f59u);
    // 5f96:080a  mov es, ax  [x764]
    c.loadEs(c.a.x);
    // 5f96:080c  mov eax, 0  [x764]
    c.a.e = (uint32_t)(0x0u);
    // 5f96:0812  mov di, 0x18  [x764]
    c.di.x = (uint16_t)(0x18u);
    // 5f96:0815  mov bl, 0xc7  [x764]
    c.b.l = (uint8_t)(0xc7u);
    // 5f96:0817  cld   [x764]
    c.df = false;
L60178:
    if (c.tracing) c.traceAt(0x60178);
    // 5f96:0818  mov cx, 0x1c  [x152036]
    c.c.x = (uint16_t)(0x1cu);
L6017b:
    if (c.tracing) c.traceAt(0x6017b);
    // 5f96:081b  rep stosd dword ptr es:[di], eax  [x4409044]
    c.stos<32, false>(1);
L6017e:
    if (c.tracing) c.traceAt(0x6017e);
    // 5f96:081e  add di, 0xd0  [x152036]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xd0u, true));
    // 5f96:0822  dec bl  [x152036]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
    // 5f96:0824  jne 0x818  [x152036]
    if (!c.zf) goto L60178;
L60186:
    if (c.tracing) c.traceAt(0x60186);
    // 5f96:0826  lcall 0x31fa, 0x601  [x764]
    c.push16(c.cs); c.push16(0x82bu); c.loadCs(0x31fau); c.callLinear(c.csb + 0x601u);
L6018b:
    if (c.tracing) c.traceAt(0x6018b);
    // 5f96:082b  retf   [x1528]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6018c:
    if (c.tracing) c.traceAt(0x6018c);
    // 5f96:082c  mov ax, 0x3fb9  [x1]
    c.a.x = (uint16_t)(0x3fb9u);
    // 5f96:082f  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 5f96:0831  xor edi, edi  [x1]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
    // 5f96:0834  mov cx, 0x7d0  [x1]
    c.c.x = (uint16_t)(0x7d0u);
L60197:
    if (c.tracing) c.traceAt(0x60197);
    // 5f96:0837  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 5f96:083a  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 5f96:083b  mov ax, 0xf  [x2000]
    c.a.x = (uint16_t)(0xfu);
    // 5f96:083e  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 5f96:083f  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 5f96:0842  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 5f96:0843  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 5f96:0846  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 5f96:0847  loop 0x837  [x2000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L60197;
L601a9:
    if (c.tracing) c.traceAt(0x601a9);
    // 5f96:0849  mov cx, 0x140  [x1]
    c.c.x = (uint16_t)(0x140u);
    // 5f96:084c  mov dl, 0xf  [x1]
    c.dx_.l = (uint8_t)(0xfu);
    // 5f96:084e  mov bp, 0  [x1]
    c.bp.x = (uint16_t)(0x0u);
L601b1:
    if (c.tracing) c.traceAt(0x601b1);
    // 5f96:0851  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 5f96:0853  shr ax, 2  [x320]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x2u) & 31), false));
    // 5f96:0856  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 5f96:0857  push cx  [x320]
    c.push16(c.c.x);
    // 5f96:0858  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 5f96:085a  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 5f96:085d  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 5f96:085f  shl ah, cl  [x320]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), false));
    // 5f96:0861  mov bh, ah  [x320]
    c.b.h = (uint8_t)(c.a.h);
    // 5f96:0863  xor ax, ax  [x320]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 5f96:0865  mov al, bh  [x320]
    c.a.l = (uint8_t)(c.b.h);
    // 5f96:0867  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 5f96:0868  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 5f96:0869  push cx  [x320]
    c.push16(c.c.x);
    // 5f96:086a  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 5f96:086c  not cx  [x320]
    c.c.x = (uint16_t)(~(c.c.x));
    // 5f96:086e  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 5f96:0871  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 5f96:0873  shr ah, cl  [x320]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 5f96:0875  mov al, ah  [x320]
    c.a.l = (uint8_t)(c.a.h);
    // 5f96:0877  xor ah, ah  [x320]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 5f96:0879  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 5f96:087a  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 5f96:087c  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 5f96:087d  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 5f96:087e  add dl, dl  [x320]
    c.dx_.l = (uint8_t)(c.add<8>(c.dx_.l, c.dx_.l, false));
    // 5f96:0880  cmp dl, 0x10  [x320]
    c.sub<8>(c.dx_.l, 0x10u, true);
    // 5f96:0883  jb 0x887  [x320]
    if (c.cf) goto L601e7;
L601e5:
    if (c.tracing) c.traceAt(0x601e5);
    // 5f96:0885  mov dl, 0xf  [x320]
    c.dx_.l = (uint8_t)(0xfu);
L601e7:
    if (c.tracing) c.traceAt(0x601e7);
    // 5f96:0887  inc bp  [x320]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
    // 5f96:0888  loop 0x851  [x320]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L601b1;
L601ea:
    if (c.tracing) c.traceAt(0x601ea);
    // 5f96:088a  mov cx, 0x690  [x1]
    c.c.x = (uint16_t)(0x690u);
L601ed:
    if (c.tracing) c.traceAt(0x601ed);
    // 5f96:088d  mov ax, 0x4f  [x1680]
    c.a.x = (uint16_t)(0x4fu);
    // 5f96:0890  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 5f96:0891  mov ax, 0  [x1680]
    c.a.x = (uint16_t)(0x0u);
    // 5f96:0894  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 5f96:0895  mov ax, 0xf  [x1680]
    c.a.x = (uint16_t)(0xfu);
    // 5f96:0898  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 5f96:0899  mov ax, 0xffff  [x1680]
    c.a.x = (uint16_t)(0xffffu);
    // 5f96:089c  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 5f96:089d  loop 0x88d  [x1680]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L601ed;
L601ff:
    if (c.tracing) c.traceAt(0x601ff);
    // 5f96:089f  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L60222:
    if (c.tracing) c.traceAt(0x60222);
    // 5f96:08c2  les bx, ptr [0x4b]  [x1520]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4bu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4bu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5f96:08c6  mov eax, dword ptr es:[bx + 0x44]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0x44u)));
    // 5f96:08cb  mov byte ptr [0xad], 0  [x1520]
    c.w8(c.dsb + (uint16_t)(0xadu), 0x0u);
    // 5f96:08d0  cmp eax, 0  [x1520]
    c.sub<32>(c.a.e, 0x0u, true);
    // 5f96:08d4  je 0x8db  [x1520]
    if (c.zf) goto L6023b;
L60236:
    if (c.tracing) c.traceAt(0x60236);
    // 5f96:08d6  mov byte ptr [0xad], 1  [x1520]
    c.w8(c.dsb + (uint16_t)(0xadu), 0x1u);
L6023b:
    if (c.tracing) c.traceAt(0x6023b);
    // 5f96:08db  mov ebx, dword ptr [0]  [x1520]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 5f96:08e0  mov eax, dword ptr es:[bx - 4]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffffcu)));
    // 5f96:08e5  cmp eax, 0  [x1520]
    c.sub<32>(c.a.e, 0x0u, true);
    // 5f96:08e9  je 0x9e2  [x1520]
    if (c.zf) goto L60342;
    c.notTranslated(0x6024d, "fall-through");
L60342:
    if (c.tracing) c.traceAt(0x60342);
    // 5f96:09e2  mov dword ptr [8], 0  [x1520]
    c.w32(c.dsb + (uint16_t)(0x8u), 0x0u);
    // 5f96:09eb  les bx, ptr [0x4b]  [x1520]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4bu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4bu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5f96:09ef  mov ebx, dword ptr [0]  [x1520]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 5f96:09f4  mov eax, dword ptr es:[bx - 8]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffff8u)));
    // 5f96:09f9  mov dword ptr [0xc], eax  [x1520]
    c.w32(c.dsb + (uint16_t)(0xcu), c.a.e);
L6035d:
    if (c.tracing) c.traceAt(0x6035d);
    // 5f96:09fd  xor ebx, ebx  [x437760]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 5f96:0a00  xor ebp, ebp  [x437760]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 5f96:0a03  xor edx, edx  [x437760]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 5f96:0a06  les bx, ptr [0x4b]  [x437760]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4bu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4bu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5f96:0a0a  lfs bp, ptr [0x4f]  [x437760]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4fu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4fu) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 5f96:0a0f  mov ax, 0x5f06  [x437760]
    c.a.x = (uint16_t)(0x5f06u);
    // 5f96:0a12  mov gs, ax  [x437760]
    c.loadGs(c.a.x);
    // 5f96:0a14  mov dx, 0  [x437760]
    c.dx_.x = (uint16_t)(0x0u);
    // 5f96:0a17  mov ebx, dword ptr [0]  [x437760]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 5f96:0a1c  mov bx, word ptr es:[bx]  [x437760]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 5f96:0a1f  mov ecx, dword ptr es:[ebx + 0x14]  [x437760]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x14u)));
    // 5f96:0a25  mov dword ptr [4], ecx  [x437760]
    c.w32(c.dsb + (uint16_t)(0x4u), c.c.e);
    // 5f96:0a2a  mov ecx, dword ptr es:[ebx]  [x437760]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5f96:0a2f  add ebx, 0x18  [x437760]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 5f96:0a33  mov dword ptr gs:[edx], ecx  [x437760]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.c.e);
    // 5f96:0a38  add edx, 4  [x437760]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x4u, true));
L6039c:
    if (c.tracing) c.traceAt(0x6039c);
    // 5f96:0a3c  mov ebp, dword ptr es:[ebx]  [x1678080]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5f96:0a41  add ebp, ebp  [x1678080]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5f96:0a44  mov eax, dword ptr fs:[ebp*8 + 0x48]  [x1678080]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x48u)));
    // 5f96:0a4e  mov dword ptr gs:[edx], eax  [x1678080]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.a.e);
    // 5f96:0a53  mov eax, dword ptr fs:[ebp*8 + 0x4c]  [x1678080]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x4cu)));
    // 5f96:0a5d  mov dword ptr gs:[edx + 4], eax  [x1678080]
    c.w32(c.gsb + (uint32_t)(c.dx_.e + 0x4u), c.a.e);
    // 5f96:0a63  add edx, 8  [x1678080]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 5f96:0a67  add ebx, 4  [x1678080]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 5f96:0a6b  loop 0xa3c  [x1678080]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6039c;
L603cd:
    if (c.tracing) c.traceAt(0x603cd);
    // 5f96:0a6d  mov eax, dword ptr gs:[0xc]  [x437760]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint16_t)(0xcu)));
    // 5f96:0a72  sub eax, dword ptr gs:[4]  [x437760]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.gsb + (uint16_t)(0x4u)), false));
    // 5f96:0a78  mov ecx, dword ptr gs:[0x18]  [x437760]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint16_t)(0x18u)));
    // 5f96:0a7e  sub ecx, dword ptr gs:[0x10]  [x437760]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.gsb + (uint16_t)(0x10u)), false));
    // 5f96:0a84  imul ecx  [x437760]
    c.imul32(c.c.e);
    // 5f96:0a87  mov edi, eax  [x437760]
    c.di.e = (uint32_t)(c.a.e);
    // 5f96:0a8a  mov eax, dword ptr gs:[0x14]  [x437760]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint16_t)(0x14u)));
    // 5f96:0a8f  sub eax, dword ptr gs:[0xc]  [x437760]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.gsb + (uint16_t)(0xcu)), false));
    // 5f96:0a95  mov ecx, dword ptr gs:[0x10]  [x437760]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint16_t)(0x10u)));
    // 5f96:0a9b  sub ecx, dword ptr gs:[8]  [x437760]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.gsb + (uint16_t)(0x8u)), false));
    // 5f96:0aa1  imul ecx  [x437760]
    c.imul32(c.c.e);
    // 5f96:0aa4  cmp edi, eax  [x437760]
    c.sub<32>(c.di.e, c.a.e, true);
    // 5f96:0aa7  jl 0xbdc  [x437760]
    if ((c.sf != c.of)) goto L6053c;
L6040b:
    if (c.tracing) c.traceAt(0x6040b);
    // 5f96:0aab  je 0xbdc  [x179774]
    if (c.zf) goto L6053c;
L6040f:
    if (c.tracing) c.traceAt(0x6040f);
    // 5f96:0aaf  mov di, 0  [x173915]
    c.di.x = (uint16_t)(0x0u);
    // 5f96:0ab2  movzx edi, di  [x173915]
    c.di.e = (uint32_t)(c.di.x);
    // 5f96:0ab6  mov ecx, dword ptr gs:[edi]  [x173915]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 5f96:0abb  lea eax, [edi + 4]  [x173915]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 5f96:0ac0  mov dword ptr [0x3f], eax  [x173915]
    c.w32(c.dsb + (uint16_t)(0x3fu), c.a.e);
    // 5f96:0ac4  lea ebx, [ecx - 1]  [x173915]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 5f96:0ac9  lea eax, [eax + ebx*8]  [x173915]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 5f96:0ace  mov dword ptr [0x43], eax  [x173915]
    c.w32(c.dsb + (uint16_t)(0x43u), c.a.e);
    // 5f96:0ad2  dec ecx  [x173915]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 5f96:0ad4  add edi, 8  [x173915]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, true));
    // 5f96:0ad8  mov eax, dword ptr gs:[edi]  [x173915]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 5f96:0add  mov ebx, edi  [x173915]
    c.b.e = (uint32_t)(c.di.e);
    // 5f96:0ae0  mov ebp, eax  [x173915]
    c.bp.e = (uint32_t)(c.a.e);
L60443:
    if (c.tracing) c.traceAt(0x60443);
    // 5f96:0ae3  add edi, 8  [x496172]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 5f96:0ae7  mov edx, dword ptr gs:[edi]  [x496172]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 5f96:0aec  cmp ebp, edx  [x496172]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 5f96:0aef  jle 0xaf7  [x496172]
    if ((c.zf || c.sf != c.of)) goto L60457;
L60451:
    if (c.tracing) c.traceAt(0x60451);
    // 5f96:0af1  mov ebp, edx  [x182248]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 5f96:0af4  mov ebx, edi  [x182248]
    c.b.e = (uint32_t)(c.di.e);
L60457:
    if (c.tracing) c.traceAt(0x60457);
    // 5f96:0af7  cmp eax, edx  [x496172]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 5f96:0afa  jge 0xaff  [x496172]
    if ((c.sf == c.of)) goto L6045f;
L6045c:
    if (c.tracing) c.traceAt(0x6045c);
    // 5f96:0afc  mov eax, edx  [x172788]
    c.a.e = (uint32_t)(c.dx_.e);
L6045f:
    if (c.tracing) c.traceAt(0x6045f);
    // 5f96:0aff  loop 0xae3  [x496172]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L60443;
L60461:
    if (c.tracing) c.traceAt(0x60461);
    // 5f96:0b01  mov ecx, ebp  [x173915]
    c.c.e = (uint32_t)(c.bp.e);
    // 5f96:0b04  sub ebx, 4  [x173915]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, 0x4u, false));
    // 5f96:0b08  cmp ecx, 0xc7  [x173915]
    c.sub<32>(c.c.e, 0xc7u, true);
    // 5f96:0b0f  jg 0xbdc  [x173915]
    if ((!c.zf && c.sf == c.of)) goto L6053c;
L60473:
    if (c.tracing) c.traceAt(0x60473);
    // 5f96:0b13  cmp eax, ecx  [x148515]
    c.sub<32>(c.a.e, c.c.e, true);
    // 5f96:0b16  je 0xbdc  [x148515]
    if (c.zf) goto L6053c;
L6047a:
    if (c.tracing) c.traceAt(0x6047a);
    // 5f96:0b1a  cmp ax, 0  [x148515]
    c.sub<16>(c.a.x, 0x0u, true);
    // 5f96:0b1d  jl 0xbdc  [x148515]
    if ((c.sf != c.of)) goto L6053c;
L60481:
    if (c.tracing) c.traceAt(0x60481);
    // 5f96:0b21  imul eax, eax, 0x140  [x88114]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x140u));
    // 5f96:0b28  cmp eax, 0xf8c0  [x88114]
    c.sub<32>(c.a.e, 0xf8c0u, true);
    // 5f96:0b2e  jle 0xb36  [x88114]
    if ((c.zf || c.sf != c.of)) goto L60496;
L60490:
    if (c.tracing) c.traceAt(0x60490);
    // 5f96:0b30  mov eax, 0xf8c0  [x4826]
    c.a.e = (uint32_t)(0xf8c0u);
L60496:
    if (c.tracing) c.traceAt(0x60496);
    // 5f96:0b36  mov dword ptr [0x28], eax  [x88114]
    c.w32(c.dsb + (uint16_t)(0x28u), c.a.e);
    // 5f96:0b3a  mov dword ptr [0x9f], ebx  [x88114]
    c.w32(c.dsb + (uint16_t)(0x9fu), c.b.e);
    // 5f96:0b3f  mov dword ptr [0xa3], ebx  [x88114]
    c.w32(c.dsb + (uint16_t)(0xa3u), c.b.e);
    // 5f96:0b44  cmp byte ptr [0xad], 1  [x88114]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xadu)), 0x1u, true);
    // 5f96:0b49  jne 0xbaf  [x88114]
    if (!c.zf) { t = 0x6050fu; goto dispatch; }
L604ab:
    if (c.tracing) c.traceAt(0x604ab);
    // 5f96:0b4b  mov ebx, dword ptr [0]  [x88114]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 5f96:0b50  mov bx, word ptr es:[bx]  [x88114]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 5f96:0b53  movzx esi, bx  [x88114]
    c.si.e = (uint32_t)(c.b.x);
    // 5f96:0b57  add esi, 4  [x88114]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x4u, false));
    // 5f96:0b5b  mov ebx, dword ptr es:[esi]  [x88114]
    c.b.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.si.e)));
    // 5f96:0b60  mov ecx, dword ptr es:[esi + 4]  [x88114]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.si.e + 0x4u)));
    // 5f96:0b66  mov edi, dword ptr es:[esi + 8]  [x88114]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.si.e + 0x8u)));
    // 5f96:0b6c  imul eax, ebx, 0x21  [x88114]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x604cf))));
    // 5f96:0b73  imul ebp, ecx, 0xfffffe11  [x88114]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x604d6))));
    // 5f96:0b7a  add eax, ebp  [x88114]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5f96:0b7d  imul ebp, edi, 0x81  [x88114]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x604e0))));
    // 5f96:0b84  add eax, ebp  [x88114]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5f96:0b87  neg eax  [x88114]
    c.a.e = (uint32_t)(c.neg<32>(c.a.e, true));
    // 5f96:0b8a  jns 0xb8f  [x88114]
    if (!c.sf) goto L604ef;
L604ec:
    if (c.tracing) c.traceAt(0x604ec);
    // 5f96:0b8c  xor eax, eax  [x4510]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), true));
L604ef:
    if (c.tracing) c.traceAt(0x604ef);
    // 5f96:0b8f  sar eax, 7  [x88114]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x7u) & 31), false));
    // 5f96:0b93  cmp eax, 0x7f  [x88114]
    c.sub<32>(c.a.e, 0x7fu, true);
    // 5f96:0b97  jle 0xb9f  [x88114]
    if ((c.zf || c.sf != c.of)) goto L604ff;
L604f9:
    if (c.tracing) c.traceAt(0x604f9);
    // 5f96:0b99  mov eax, 0x7f  [x887]
    c.a.e = (uint32_t)(0x7fu);
L604ff:
    if (c.tracing) c.traceAt(0x604ff);
    // 5f96:0b9f  mov ah, al  [x88114]
    c.a.h = (uint8_t)(c.a.l);
    // 5f96:0ba1  mov cx, ax  [x88114]
    c.c.x = (uint16_t)(c.a.x);
    // 5f96:0ba3  shl eax, 0x10  [x88114]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), true));
    // 5f96:0ba7  mov ax, cx  [x88114]
    c.a.x = (uint16_t)(c.c.x);
    // 5f96:0ba9  mov dword ptr [4], eax  [x88114]
    c.w32(c.dsb + (uint16_t)(0x4u), c.a.e);
    // 5f96:0bad  jmp 0xbc1  [x88114]
    goto L60521;
L60521:
    if (c.tracing) c.traceAt(0x60521);
    // 5f96:0bc1  mov ax, 0x5f06  [x88114]
    c.a.x = (uint16_t)(0x5f06u);
    // 5f96:0bc4  mov fs, ax  [x88114]
    c.loadFs(c.a.x);
    // 5f96:0bc6  mov cx, 0x3fb9  [x88114]
    c.c.x = (uint16_t)(0x3fb9u);
    // 5f96:0bc9  mov gs, cx  [x88114]
    c.loadGs(c.c.x);
    // 5f96:0bcb  mov ax, word ptr [0xab]  [x88114]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xabu)));
    // 5f96:0bce  not ax  [x88114]
    c.a.x = (uint16_t)(~(c.a.x));
    // 5f96:0bd0  and ax, 0x600  [x88114]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), true));
    // 5f96:0bd3  mov ax, 0x4f59  [x88114]
    c.a.x = (uint16_t)(0x4f59u);
    // 5f96:0bd6  mov es, ax  [x88114]
    c.loadEs(c.a.x);
    // 5f96:0bd8  push cs  [x88114]
    c.push16(c.cs);
    // 5f96:0bd9  call 0x553  [x88114]
    c.push16(0xbdcu); code_5(c, 0x5feb3u); if (c.ip != 0xbdcu) c.badReturn(0x60539);
L6053c:
    if (c.tracing) c.traceAt(0x6053c);
    // 5f96:0bdc  add dword ptr [0], 4  [x437760]
    c.w32(c.dsb + (uint16_t)(0u), c.add<32>(c.r32(c.dsb + (uint16_t)(0u)), 0x4u, false));
    // 5f96:0be2  inc dword ptr [8]  [x437760]
    c.w32(c.dsb + (uint16_t)(0x8u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x8u)), false));
    // 5f96:0be7  mov eax, dword ptr [0xc]  [x437760]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xcu)));
    // 5f96:0beb  cmp dword ptr [8], eax  [x437760]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x8u)), c.a.e, true);
    // 5f96:0bf0  jne 0x9fd  [x437760]
    if (!c.zf) goto L6035d;
L60554:
    if (c.tracing) c.traceAt(0x60554);
    // 5f96:0bf4  retf   [x1520]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L60555:
    if (c.tracing) c.traceAt(0x60555);
    // 5f96:0bf5  mov eax, dword ptr [0x6f]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6fu)));
    // 5f96:0bf9  mov dword ptr cs:[0xb6f], eax  [x1520]
    c.w32(c.csb + (uint16_t)(0xb6fu), c.a.e);
    // 5f96:0bfe  mov eax, dword ptr [0x73]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x73u)));
    // 5f96:0c02  mov dword ptr cs:[0xb76], eax  [x1520]
    c.w32(c.csb + (uint16_t)(0xb76u), c.a.e);
    // 5f96:0c07  mov eax, dword ptr [0x77]  [x1520]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x77u)));
    // 5f96:0c0b  mov dword ptr cs:[0xb80], eax  [x1520]
    c.w32(c.csb + (uint16_t)(0xb80u), c.a.e);
    // 5f96:0c10  retf   [x1520]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L60571:
    if (c.tracing) c.traceAt(0x60571);
    // 5f96:0c11  push ds  [x7]
    c.push16(c.ds);
    // 5f96:0c12  mov ds, ax  [x7]
    c.loadDs(c.a.x);
    // 5f96:0c14  mov dx, 0x3c7  [x7]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 5f96:0c17  mov al, 1  [x7]
    c.a.l = (uint8_t)(0x1u);
    // 5f96:0c19  out dx, al  [x7]
    c.ip = 0xc1au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5f96:0c1a  inc dx  [x7]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 5f96:0c1b  xor al, al  [x7]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 5f96:0c1d  out dx, al  [x7]
    c.ip = 0xc1eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5f96:0c1e  inc dx  [x7]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 5f96:0c1f  cld   [x7]
    c.df = false;
    // 5f96:0c20  mov cx, 0x300  [x7]
    c.c.x = (uint16_t)(0x300u);
L60583:
    if (c.tracing) c.traceAt(0x60583);
    // 5f96:0c23  rep outsb dx, byte ptr [si]  [x5383]
    c.ip = 0xc25u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L60585:
    if (c.tracing) c.traceAt(0x60585);
    // 5f96:0c25  pop ds  [x7]
    c.loadDs((uint16_t)c.pop16());
    // 5f96:0c26  retf   [x7]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6059d:
    if (c.tracing) c.traceAt(0x6059d);
    // 5f96:0c3d  push cs  [x1140]
    c.push16(c.cs);
    // 5f96:0c3e  call 0x792  [x1140]
    c.push16(0xc41u); code_5(c, 0x600f2u); if (c.ip != 0xc41u) c.badReturn(0x6059e);
L605a1:
    if (c.tracing) c.traceAt(0x605a1);
    // 5f96:0c41  mov ax, 0x2daf  [x1140]
    c.a.x = (uint16_t)(0x2dafu);
    // 5f96:0c44  mov es, ax  [x1140]
    c.loadEs(c.a.x);
    // 5f96:0c46  mov bx, 0  [x1140]
    c.b.x = (uint16_t)(0x0u);
    // 5f96:0c49  mov si, 0x4b  [x1140]
    c.si.x = (uint16_t)(0x4bu);
    // 5f96:0c4c  mov word ptr [si], bx  [x1140]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 5f96:0c4e  mov word ptr [si + 2], ax  [x1140]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 5f96:0c51  mov ax, 0x10f0  [x1140]
    c.a.x = (uint16_t)(0x10f0u);
    // 5f96:0c54  movzx eax, ax  [x1140]
    c.a.e = (uint32_t)(c.a.x);
    // 5f96:0c58  mov dword ptr [0], eax  [x1140]
    c.w32(c.dsb + (uint16_t)(0u), c.a.e);
    // 5f96:0c5c  push cs  [x1140]
    c.push16(c.cs);
    // 5f96:0c5d  call 0x39c  [x1140]
    c.push16(0xc60u); code_5(c, 0x5fcfcu); if (c.ip != 0xc60u) c.badReturn(0x605bd);
L605c0:
    if (c.tracing) c.traceAt(0x605c0);
    // 5f96:0c60  push cs  [x1140]
    c.push16(c.cs);
    // 5f96:0c61  call 0xbf5  [x1140]
    c.push16(0xc64u); code_5(c, 0x60555u); if (c.ip != 0xc64u) c.badReturn(0x605c1);
L605c4:
    if (c.tracing) c.traceAt(0x605c4);
    // 5f96:0c64  push cs  [x1140]
    c.push16(c.cs);
    // 5f96:0c65  call 0x8c2  [x1140]
    c.push16(0xc68u); code_5(c, 0x60222u); if (c.ip != 0xc68u) c.badReturn(0x605c5);
L605c8:
    if (c.tracing) c.traceAt(0x605c8);
    // 5f96:0c68  mov bx, 0xe  [x1140]
    c.b.x = (uint16_t)(0xeu);
    // 5f96:0c6b  int 0xff  [x1140]
    c.ip = 0xc6du; c.d32 = false; c.intr(0xff, 0xc6du);
L605cd:
    if (c.tracing) c.traceAt(0x605cd);
    // 5f96:0c6d  mov word ptr [0x3d], ax  [x1140]
    c.w16(c.dsb + (uint16_t)(0x3du), c.a.x);
    // 5f96:0c70  mov cx, word ptr [0x3d]  [x1140]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x3du)));
L605d4:
    if (c.tracing) c.traceAt(0x605d4);
    // 5f96:0c74  add dword ptr [0xb2], 0x60000  [x1140]
    c.w32(c.dsb + (uint16_t)(0xb2u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xb2u)), 0x60000u, true));
    // 5f96:0c7d  loop 0xc74  [x1140]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L605d4;
L605df:
    if (c.tracing) c.traceAt(0x605df);
    // 5f96:0c7f  mov ax, word ptr [0x3d]  [x1140]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x3du)));
    // 5f96:0c82  sub word ptr [0xbb], ax  [x1140]
    c.w16(c.dsb + (uint16_t)(0xbbu), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xbbu)), c.a.x, true));
    // 5f96:0c86  js 0xc8a  [x1140]
    if (c.sf) goto L605ea;
L605e8:
    if (c.tracing) c.traceAt(0x605e8);
    // 5f96:0c88  jne 0xc3d  [x1140]
    if (!c.zf) goto L6059d;
L605ea:
    if (c.tracing) c.traceAt(0x605ea);
    // 5f96:0c8a  retf   [x3]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L605eb:
    if (c.tracing) c.traceAt(0x605eb);
    // 5f96:0c8b  push cs  [x380]
    c.push16(c.cs);
    // 5f96:0c8c  call 0x792  [x380]
    c.push16(0xc8fu); code_5(c, 0x600f2u); if (c.ip != 0xc8fu) c.badReturn(0x605ec);
L605ef:
    if (c.tracing) c.traceAt(0x605ef);
    // 5f96:0c8f  mov ax, 0x2daf  [x380]
    c.a.x = (uint16_t)(0x2dafu);
    // 5f96:0c92  mov es, ax  [x380]
    c.loadEs(c.a.x);
    // 5f96:0c94  mov bx, 0  [x380]
    c.b.x = (uint16_t)(0x0u);
    // 5f96:0c97  mov si, 0x4b  [x380]
    c.si.x = (uint16_t)(0x4bu);
    // 5f96:0c9a  mov word ptr [si], bx  [x380]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 5f96:0c9c  mov word ptr [si + 2], ax  [x380]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 5f96:0c9f  mov ax, 0x10f0  [x380]
    c.a.x = (uint16_t)(0x10f0u);
    // 5f96:0ca2  movzx eax, ax  [x380]
    c.a.e = (uint32_t)(c.a.x);
    // 5f96:0ca6  mov dword ptr [0], eax  [x380]
    c.w32(c.dsb + (uint16_t)(0u), c.a.e);
    // 5f96:0caa  push cs  [x380]
    c.push16(c.cs);
    // 5f96:0cab  call 0x39c  [x380]
    c.push16(0xcaeu); code_5(c, 0x5fcfcu); if (c.ip != 0xcaeu) c.badReturn(0x6060b);
L6060e:
    if (c.tracing) c.traceAt(0x6060e);
    // 5f96:0cae  push cs  [x380]
    c.push16(c.cs);
    // 5f96:0caf  call 0xbf5  [x380]
    c.push16(0xcb2u); code_5(c, 0x60555u); if (c.ip != 0xcb2u) c.badReturn(0x6060f);
L60612:
    if (c.tracing) c.traceAt(0x60612);
    // 5f96:0cb2  push cs  [x380]
    c.push16(c.cs);
    // 5f96:0cb3  call 0x8c2  [x380]
    c.push16(0xcb6u); code_5(c, 0x60222u); if (c.ip != 0xcb6u) c.badReturn(0x60613);
L60616:
    if (c.tracing) c.traceAt(0x60616);
    // 5f96:0cb6  mov bx, 0xe  [x380]
    c.b.x = (uint16_t)(0xeu);
    // 5f96:0cb9  int 0xff  [x380]
    c.ip = 0xcbbu; c.d32 = false; c.intr(0xff, 0xcbbu);
L6061b:
    if (c.tracing) c.traceAt(0x6061b);
    // 5f96:0cbb  mov word ptr [0x3d], ax  [x380]
    c.w16(c.dsb + (uint16_t)(0x3du), c.a.x);
    // 5f96:0cbe  mov cx, word ptr [0x3d]  [x380]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x3du)));
L60622:
    if (c.tracing) c.traceAt(0x60622);
    // 5f96:0cc2  add dword ptr [0xb2], 0x60000  [x380]
    c.w32(c.dsb + (uint16_t)(0xb2u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xb2u)), 0x60000u, true));
    // 5f96:0ccb  loop 0xcc2  [x380]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L60622;
L6062d:
    if (c.tracing) c.traceAt(0x6062d);
    // 5f96:0ccd  mov ax, word ptr [0x3d]  [x380]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x3du)));
    // 5f96:0cd0  sub word ptr [0xbb], ax  [x380]
    c.w16(c.dsb + (uint16_t)(0xbbu), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xbbu)), c.a.x, true));
    // 5f96:0cd4  js 0xcd8  [x380]
    if (c.sf) goto L60638;
L60636:
    if (c.tracing) c.traceAt(0x60636);
    // 5f96:0cd6  jne 0xc8b  [x380]
    if (!c.zf) goto L605eb;
L60638:
    if (c.tracing) c.traceAt(0x60638);
    // 5f96:0cd8  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L60639:
    if (c.tracing) c.traceAt(0x60639);
    // 5f96:0cd9  push ds  [x4]
    c.push16(c.ds);
    // 5f96:0cda  mov ds, ax  [x4]
    c.loadDs(c.a.x);
    // 5f96:0cdc  xor ch, ch  [x4]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), true));
    // 5f96:0cde  mov dx, 0xfa00  [x4]
    c.dx_.x = (uint16_t)(0xfa00u);
    // 5f96:0ce1  cld   [x4]
    c.df = false;
L60642:
    if (c.tracing) c.traceAt(0x60642);
    // 5f96:0ce2  lodsw ax, word ptr [si]  [x22668]
    c.ip = 0xce3u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 5f96:0ce3  mov cl, al  [x22668]
    c.c.l = (uint8_t)(c.a.l);
    // 5f96:0ce5  mov al, ah  [x22668]
    c.a.l = (uint8_t)(c.a.h);
L60647:
    if (c.tracing) c.traceAt(0x60647);
    // 5f96:0ce7  rep stosb byte ptr es:[di], al  [x279680]
    c.stos<8, false>(1);
L60649:
    if (c.tracing) c.traceAt(0x60649);
    // 5f96:0ce9  cmp di, dx  [x22668]
    c.sub<16>(c.di.x, c.dx_.x, true);
    // 5f96:0ceb  jb 0xce2  [x22668]
    if (c.cf) goto L60642;
L6064d:
    if (c.tracing) c.traceAt(0x6064d);
    // 5f96:0ced  pop ds  [x4]
    c.loadDs((uint16_t)c.pop16());
    // 5f96:0cee  retf   [x4]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6064f:
    if (c.tracing) c.traceAt(0x6064f);
    // 5f96:0cef  mov ax, 0x5f86  [x1]
    c.a.x = (uint16_t)(0x5f86u);
    // 5f96:0cf2  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 5f96:0cf4  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 5f96:0cf6  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 5f96:0cfa  shl eax, 4  [x1]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 5f96:0cfe  push eax  [x1]
    c.push32(c.a.e);
    // 5f96:0d00  add eax, dword ptr [0xbd]  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xbdu)), true));
    // 5f96:0d05  int 0xfc  [x1]
    c.ip = 0xd07u; c.d32 = false; c.intr(0xfc, 0xd07u);
L60667:
    if (c.tracing) c.traceAt(0x60667);
    // 5f96:0d07  mov dword ptr [0xe1], ebx  [x1]
    c.w32(c.dsb + (uint16_t)(0xe1u), c.b.e);
    // 5f96:0d0c  mov dword ptr [0xe5], ebx  [x1]
    c.w32(c.dsb + (uint16_t)(0xe5u), c.b.e);
    // 5f96:0d11  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 5f96:0d13  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 5f96:0d17  shl eax, 4  [x1]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 5f96:0d1b  sub dword ptr [0xe5], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0xe5u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0xe5u)), c.a.e, true));
    // 5f96:0d20  mov ax, 0x24f1  [x1]
    c.a.x = (uint16_t)(0x24f1u);
    // 5f96:0d23  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 5f96:0d25  mov eax, dword ptr [0xe5]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xe5u)));
    // 5f96:0d29  mov dword ptr fs:[0], eax  [x1]
    c.w32(c.fsb + (uint16_t)(0u), c.a.e);
    // 5f96:0d2e  mov edi, dword ptr [0xe1]  [x1]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xe1u)));
    // 5f96:0d33  mov dx, 0xd4  [x1]
    c.dx_.x = (uint16_t)(0xd4u);
    // 5f96:0d36  int 0xfd  [x1]
    c.ip = 0xd38u; c.d32 = false; c.intr(0xfd, 0xd38u);
L60698:
    if (c.tracing) c.traceAt(0x60698);
    // 5f96:0d38  mov edi, dword ptr [0xe1]  [x1]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xe1u)));
    // 5f96:0d3d  add edi, 0xd9ee2  [x1]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0xd9ee2u, true));
    // 5f96:0d44  mov dx, 0xc1  [x1]
    c.dx_.x = (uint16_t)(0xc1u);
    // 5f96:0d47  int 0xfd  [x1]
    c.ip = 0xd49u; c.d32 = false; c.intr(0xfd, 0xd49u);
L606a9:
    if (c.tracing) c.traceAt(0x606a9);
    // 5f96:0d49  mov ax, 0x252e  [x1]
    c.a.x = (uint16_t)(0x252eu);
    // 5f96:0d4c  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 5f96:0d4e  mov eax, dword ptr [0xe5]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xe5u)));
    // 5f96:0d52  add eax, 0xd9ee2  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0xd9ee2u, false));
    // 5f96:0d58  mov dword ptr fs:[0], eax  [x1]
    c.w32(c.fsb + (uint16_t)(0u), c.a.e);
    // 5f96:0d5d  mov edi, dword ptr [0xe1]  [x1]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xe1u)));
    // 5f96:0d62  add edi, 0x132ea0  [x1]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x132ea0u, true));
    // 5f96:0d69  mov dx, 0xca  [x1]
    c.dx_.x = (uint16_t)(0xcau);
    // 5f96:0d6c  int 0xfd  [x1]
    c.ip = 0xd6eu; c.d32 = false; c.intr(0xfd, 0xd6eu);
L606ce:
    if (c.tracing) c.traceAt(0x606ce);
    // 5f96:0d6e  mov ax, 0x2569  [x1]
    c.a.x = (uint16_t)(0x2569u);
    // 5f96:0d71  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 5f96:0d73  mov eax, dword ptr [0xe5]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xe5u)));
    // 5f96:0d77  add eax, 0x132ea0  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x132ea0u, true));
    // 5f96:0d7d  mov dword ptr fs:[0], eax  [x1]
    c.w32(c.fsb + (uint16_t)(0u), c.a.e);
    // 5f96:0d82  mov bx, 0xa  [x1]
    c.b.x = (uint16_t)(0xau);
    // 5f96:0d85  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 5f96:0d88  int 0xff  [x1]
    c.ip = 0xd8au; c.d32 = false; c.intr(0xff, 0xd8au);
L606ea:
    if (c.tracing) c.traceAt(0x606ea);
    // 5f96:0d8a  mov ax, 0x13  [x1]
    c.a.x = (uint16_t)(0x13u);
    // 5f96:0d8d  int 0x10  [x1]
    c.ip = 0xd8fu; c.d32 = false; c.intr(0x10, 0xd8fu);
L606ef:
    if (c.tracing) c.traceAt(0x606ef);
    // 5f96:0d8f  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0d90  call 0x82c  [x1]
    c.push16(0xd93u); code_5(c, 0x6018cu); if (c.ip != 0xd93u) c.badReturn(0x606f0);
L606f3:
    if (c.tracing) c.traceAt(0x606f3);
    // 5f96:0d93  mov ax, 0x3dc5  [x1]
    c.a.x = (uint16_t)(0x3dc5u);
    // 5f96:0d96  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 5f96:0d99  mov si, 0x4f  [x1]
    c.si.x = (uint16_t)(0x4fu);
    // 5f96:0d9c  mov word ptr [si], bx  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 5f96:0d9e  mov word ptr [si + 2], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 5f96:0da1  mov bx, 4  [x1]
    c.b.x = (uint16_t)(0x4u);
    // 5f96:0da4  int 0xff  [x1]
    c.ip = 0xda6u; c.d32 = false; c.intr(0xff, 0xda6u);
L60706:
    if (c.tracing) c.traceAt(0x60706);
    // 5f96:0da6  mov bx, 0xe  [x344]
    c.b.x = (uint16_t)(0xeu);
    // 5f96:0da9  int 0xff  [x344]
    c.ip = 0xdabu; c.d32 = false; c.intr(0xff, 0xdabu);
L6070b:
    if (c.tracing) c.traceAt(0x6070b);
    // 5f96:0dab  mov bx, 0  [x344]
    c.b.x = (uint16_t)(0x0u);
    // 5f96:0dae  int 0xff  [x344]
    c.ip = 0xdb0u; c.d32 = false; c.intr(0xff, 0xdb0u);
L60710:
    if (c.tracing) c.traceAt(0x60710);
    // 5f96:0db0  cmp ah, 1  [x344]
    c.sub<8>(c.a.h, 0x1u, true);
    // 5f96:0db3  jle 0xda6  [x344]
    if ((c.zf || c.sf != c.of)) goto L60706;
L60715:
    if (c.tracing) c.traceAt(0x60715);
    // 5f96:0db5  mov bx, 0xe  [x1]
    c.b.x = (uint16_t)(0xeu);
    // 5f96:0db8  int 0xff  [x1]
    c.ip = 0xdbau; c.d32 = false; c.intr(0xff, 0xdbau);
L6071a:
    if (c.tracing) c.traceAt(0x6071a);
    // 5f96:0dba  mov ax, 0x4f59  [x1]
    c.a.x = (uint16_t)(0x4f59u);
    // 5f96:0dbd  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 5f96:0dbf  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 5f96:0dc1  mov ax, 0x32b2  [x1]
    c.a.x = (uint16_t)(0x32b2u);
    // 5f96:0dc4  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 5f96:0dc6  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0dc7  call 0xcd9  [x1]
    c.push16(0xdcau); code_5(c, 0x60639u); if (c.ip != 0xdcau) c.badReturn(0x60727);
L6072a:
    if (c.tracing) c.traceAt(0x6072a);
    // 5f96:0dca  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0dcb  call 0x147  [x1]
    c.push16(0xdceu); code_5(c, 0x5faa7u); if (c.ip != 0xdceu) c.badReturn(0x6072b);
L6072e:
    if (c.tracing) c.traceAt(0x6072e);
    // 5f96:0dce  mov ax, 0x31ca  [x1]
    c.a.x = (uint16_t)(0x31cau);
    // 5f96:0dd1  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 5f96:0dd4  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0dd5  call 0xc11  [x1]
    c.push16(0xdd8u); code_5(c, 0x60571u); if (c.ip != 0xdd8u) c.badReturn(0x60735);
L60738:
    if (c.tracing) c.traceAt(0x60738);
    // 5f96:0dd8  push ds  [x1]
    c.push16(c.ds);
    // 5f96:0dd9  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 5f96:0ddc  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 5f96:0dde  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 5f96:0de0  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 5f96:0de2  mov ax, 0x4f59  [x1]
    c.a.x = (uint16_t)(0x4f59u);
    // 5f96:0de5  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 5f96:0de7  mov cx, 0x3e80  [x1]
    c.c.x = (uint16_t)(0x3e80u);
    // 5f96:0dea  cld   [x1]
    c.df = false;
L6074b:
    if (c.tracing) c.traceAt(0x6074b);
    // 5f96:0deb  rep movsd dword ptr es:[di], dword ptr [si]  [x16001]
    c.ip = 0xdeeu; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L6074e:
    if (c.tracing) c.traceAt(0x6074e);
    // 5f96:0dee  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 5f96:0def  mov dword ptr [0xb2], 0xfaba0000  [x1]
    c.w32(c.dsb + (uint16_t)(0xb2u), 0xfaba0000u);
    // 5f96:0df8  mov byte ptr [0xba], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0xbau), 0x0u);
    // 5f96:0dfd  mov word ptr [0xbb], 0x17c  [x1]
    c.w16(c.dsb + (uint16_t)(0xbbu), 0x17cu);
    // 5f96:0e03  mov bx, 0xe  [x1]
    c.b.x = (uint16_t)(0xeu);
    // 5f96:0e06  int 0xff  [x1]
    c.ip = 0xe08u; c.d32 = false; c.intr(0xff, 0xe08u);
L60768:
    if (c.tracing) c.traceAt(0x60768);
    // 5f96:0e08  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e09  call 0x792  [x1]
    c.push16(0xe0cu); code_5(c, 0x600f2u); if (c.ip != 0xe0cu) c.badReturn(0x60769);
L6076c:
    if (c.tracing) c.traceAt(0x6076c);
    // 5f96:0e0c  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e0d  call 0x792  [x1]
    c.push16(0xe10u); code_5(c, 0x600f2u); if (c.ip != 0xe10u) c.badReturn(0x6076d);
L60770:
    if (c.tracing) c.traceAt(0x60770);
    // 5f96:0e10  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e11  call 0x14e  [x1]
    c.push16(0xe14u); code_5(c, 0x5faaeu); if (c.ip != 0xe14u) c.badReturn(0x60771);
L60774:
    if (c.tracing) c.traceAt(0x60774);
    // 5f96:0e14  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e15  call 0xc8b  [x1]
    c.push16(0xe18u); code_5(c, 0x605ebu); if (c.ip != 0xe18u) c.badReturn(0x60775);
L60778:
    if (c.tracing) c.traceAt(0x60778);
    // 5f96:0e18  mov ax, 0x252e  [x1]
    c.a.x = (uint16_t)(0x252eu);
    // 5f96:0e1b  mov word ptr [0xf7], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0xf7u), c.a.x);
    // 5f96:0e1e  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e1f  call 0xed  [x1]
    c.push16(0xe22u); code_5(c, 0x5fa4du); if (c.ip != 0xe22u) c.badReturn(0x6077f);
L60782:
    if (c.tracing) c.traceAt(0x60782);
    // 5f96:0e22  mov ax, 0x4f59  [x1]
    c.a.x = (uint16_t)(0x4f59u);
    // 5f96:0e25  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 5f96:0e27  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 5f96:0e29  mov ax, 0x35d7  [x1]
    c.a.x = (uint16_t)(0x35d7u);
    // 5f96:0e2c  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 5f96:0e2e  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e2f  call 0xcd9  [x1]
    c.push16(0xe32u); code_5(c, 0x60639u); if (c.ip != 0xe32u) c.badReturn(0x6078f);
L60792:
    if (c.tracing) c.traceAt(0x60792);
    // 5f96:0e32  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e33  call 0x147  [x1]
    c.push16(0xe36u); code_5(c, 0x5faa7u); if (c.ip != 0xe36u) c.badReturn(0x60793);
L60796:
    if (c.tracing) c.traceAt(0x60796);
    // 5f96:0e36  mov ax, 0x31ca  [x1]
    c.a.x = (uint16_t)(0x31cau);
    // 5f96:0e39  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 5f96:0e3c  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e3d  call 0xc11  [x1]
    c.push16(0xe40u); code_5(c, 0x60571u); if (c.ip != 0xe40u) c.badReturn(0x6079d);
L607a0:
    if (c.tracing) c.traceAt(0x607a0);
    // 5f96:0e40  push ds  [x1]
    c.push16(c.ds);
    // 5f96:0e41  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 5f96:0e44  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 5f96:0e46  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 5f96:0e48  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 5f96:0e4a  mov ax, 0x4f59  [x1]
    c.a.x = (uint16_t)(0x4f59u);
    // 5f96:0e4d  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 5f96:0e4f  mov cx, 0x3e80  [x1]
    c.c.x = (uint16_t)(0x3e80u);
    // 5f96:0e52  cld   [x1]
    c.df = false;
L607b3:
    if (c.tracing) c.traceAt(0x607b3);
    // 5f96:0e53  rep movsd dword ptr es:[di], dword ptr [si]  [x16001]
    c.ip = 0xe56u; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L607b6:
    if (c.tracing) c.traceAt(0x607b6);
    // 5f96:0e56  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 5f96:0e57  mov dword ptr [0xb2], 0xfaba0000  [x1]
    c.w32(c.dsb + (uint16_t)(0xb2u), 0xfaba0000u);
    // 5f96:0e60  mov byte ptr [0xba], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0xbau), 0x1u);
    // 5f96:0e65  mov word ptr [0xbb], 0x17c  [x1]
    c.w16(c.dsb + (uint16_t)(0xbbu), 0x17cu);
    // 5f96:0e6b  mov bx, 0xe  [x1]
    c.b.x = (uint16_t)(0xeu);
    // 5f96:0e6e  int 0xff  [x1]
    c.ip = 0xe70u; c.d32 = false; c.intr(0xff, 0xe70u);
L607d0:
    if (c.tracing) c.traceAt(0x607d0);
    // 5f96:0e70  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e71  call 0x792  [x1]
    c.push16(0xe74u); code_5(c, 0x600f2u); if (c.ip != 0xe74u) c.badReturn(0x607d1);
L607d4:
    if (c.tracing) c.traceAt(0x607d4);
    // 5f96:0e74  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e75  call 0x792  [x1]
    c.push16(0xe78u); code_5(c, 0x600f2u); if (c.ip != 0xe78u) c.badReturn(0x607d5);
L607d8:
    if (c.tracing) c.traceAt(0x607d8);
    // 5f96:0e78  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e79  call 0x14e  [x1]
    c.push16(0xe7cu); code_5(c, 0x5faaeu); if (c.ip != 0xe7cu) c.badReturn(0x607d9);
L607dc:
    if (c.tracing) c.traceAt(0x607dc);
    // 5f96:0e7c  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e7d  call 0xc3d  [x1]
    c.push16(0xe80u); code_5(c, 0x6059du); if (c.ip != 0xe80u) c.badReturn(0x607dd);
L607e0:
    if (c.tracing) c.traceAt(0x607e0);
    // 5f96:0e80  mov ax, 0x2569  [x1]
    c.a.x = (uint16_t)(0x2569u);
    // 5f96:0e83  mov word ptr [0xf7], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0xf7u), c.a.x);
    // 5f96:0e86  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e87  call 0xed  [x1]
    c.push16(0xe8au); code_5(c, 0x5fa4du); if (c.ip != 0xe8au) c.badReturn(0x607e7);
L607ea:
    if (c.tracing) c.traceAt(0x607ea);
    // 5f96:0e8a  mov ax, 0x4f59  [x1]
    c.a.x = (uint16_t)(0x4f59u);
    // 5f96:0e8d  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 5f96:0e8f  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 5f96:0e91  mov ax, 0x389b  [x1]
    c.a.x = (uint16_t)(0x389bu);
    // 5f96:0e94  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 5f96:0e96  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e97  call 0xcd9  [x1]
    c.push16(0xe9au); code_5(c, 0x60639u); if (c.ip != 0xe9au) c.badReturn(0x607f7);
L607fa:
    if (c.tracing) c.traceAt(0x607fa);
    // 5f96:0e9a  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0e9b  call 0x147  [x1]
    c.push16(0xe9eu); code_5(c, 0x5faa7u); if (c.ip != 0xe9eu) c.badReturn(0x607fb);
L607fe:
    if (c.tracing) c.traceAt(0x607fe);
    // 5f96:0e9e  mov ax, 0x31ca  [x1]
    c.a.x = (uint16_t)(0x31cau);
    // 5f96:0ea1  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 5f96:0ea4  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0ea5  call 0xc11  [x1]
    c.push16(0xea8u); code_5(c, 0x60571u); if (c.ip != 0xea8u) c.badReturn(0x60805);
L60808:
    if (c.tracing) c.traceAt(0x60808);
    // 5f96:0ea8  push ds  [x1]
    c.push16(c.ds);
    // 5f96:0ea9  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 5f96:0eac  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 5f96:0eae  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 5f96:0eb0  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 5f96:0eb2  mov ax, 0x4f59  [x1]
    c.a.x = (uint16_t)(0x4f59u);
    // 5f96:0eb5  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 5f96:0eb7  mov cx, 0x3e80  [x1]
    c.c.x = (uint16_t)(0x3e80u);
    // 5f96:0eba  cld   [x1]
    c.df = false;
L6081b:
    if (c.tracing) c.traceAt(0x6081b);
    // 5f96:0ebb  rep movsd dword ptr es:[di], dword ptr [si]  [x16001]
    c.ip = 0xebeu; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L6081e:
    if (c.tracing) c.traceAt(0x6081e);
    // 5f96:0ebe  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 5f96:0ebf  mov dword ptr [0xb2], 0xfaba0000  [x1]
    c.w32(c.dsb + (uint16_t)(0xb2u), 0xfaba0000u);
    // 5f96:0ec8  mov byte ptr [0xba], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0xbau), 0x0u);
    // 5f96:0ecd  mov word ptr [0xbb], 0x17c  [x1]
    c.w16(c.dsb + (uint16_t)(0xbbu), 0x17cu);
    // 5f96:0ed3  mov bx, 0xe  [x1]
    c.b.x = (uint16_t)(0xeu);
    // 5f96:0ed6  int 0xff  [x1]
    c.ip = 0xed8u; c.d32 = false; c.intr(0xff, 0xed8u);
L60838:
    if (c.tracing) c.traceAt(0x60838);
    // 5f96:0ed8  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0ed9  call 0x792  [x1]
    c.push16(0xedcu); code_5(c, 0x600f2u); if (c.ip != 0xedcu) c.badReturn(0x60839);
L6083c:
    if (c.tracing) c.traceAt(0x6083c);
    // 5f96:0edc  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0edd  call 0x792  [x1]
    c.push16(0xee0u); code_5(c, 0x600f2u); if (c.ip != 0xee0u) c.badReturn(0x6083d);
L60840:
    if (c.tracing) c.traceAt(0x60840);
    // 5f96:0ee0  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0ee1  call 0x14e  [x1]
    c.push16(0xee4u); code_5(c, 0x5faaeu); if (c.ip != 0xee4u) c.badReturn(0x60841);
L60844:
    if (c.tracing) c.traceAt(0x60844);
    // 5f96:0ee4  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0ee5  call 0xc3d  [x1]
    c.push16(0xee8u); code_5(c, 0x6059du); if (c.ip != 0xee8u) c.badReturn(0x60845);
L60848:
    if (c.tracing) c.traceAt(0x60848);
    // 5f96:0ee8  mov ax, 0x24f1  [x1]
    c.a.x = (uint16_t)(0x24f1u);
    // 5f96:0eeb  mov word ptr [0xf7], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0xf7u), c.a.x);
    // 5f96:0eee  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0eef  call 0xed  [x1]
    c.push16(0xef2u); code_5(c, 0x5fa4du); if (c.ip != 0xef2u) c.badReturn(0x6084f);
L60852:
    if (c.tracing) c.traceAt(0x60852);
    // 5f96:0ef2  mov ax, 0x4f59  [x1]
    c.a.x = (uint16_t)(0x4f59u);
    // 5f96:0ef5  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 5f96:0ef7  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 5f96:0ef9  mov ax, 0x3b4a  [x1]
    c.a.x = (uint16_t)(0x3b4au);
    // 5f96:0efc  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 5f96:0efe  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0eff  call 0xcd9  [x1]
    c.push16(0xf02u); code_5(c, 0x60639u); if (c.ip != 0xf02u) c.badReturn(0x6085f);
L60862:
    if (c.tracing) c.traceAt(0x60862);
    // 5f96:0f02  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0f03  call 0x147  [x1]
    c.push16(0xf06u); code_5(c, 0x5faa7u); if (c.ip != 0xf06u) c.badReturn(0x60863);
L60866:
    if (c.tracing) c.traceAt(0x60866);
    // 5f96:0f06  mov ax, 0x31ca  [x1]
    c.a.x = (uint16_t)(0x31cau);
    // 5f96:0f09  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 5f96:0f0c  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0f0d  call 0xc11  [x1]
    c.push16(0xf10u); code_5(c, 0x60571u); if (c.ip != 0xf10u) c.badReturn(0x6086d);
L60870:
    if (c.tracing) c.traceAt(0x60870);
    // 5f96:0f10  push ds  [x1]
    c.push16(c.ds);
    // 5f96:0f11  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 5f96:0f14  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 5f96:0f16  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 5f96:0f18  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 5f96:0f1a  mov ax, 0x4f59  [x1]
    c.a.x = (uint16_t)(0x4f59u);
    // 5f96:0f1d  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 5f96:0f1f  mov cx, 0x3e80  [x1]
    c.c.x = (uint16_t)(0x3e80u);
    // 5f96:0f22  cld   [x1]
    c.df = false;
L60883:
    if (c.tracing) c.traceAt(0x60883);
    // 5f96:0f23  rep movsd dword ptr es:[di], dword ptr [si]  [x16001]
    c.ip = 0xf26u; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L60886:
    if (c.tracing) c.traceAt(0x60886);
    // 5f96:0f26  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 5f96:0f27  mov dword ptr [0xb2], 0xfaba0000  [x1]
    c.w32(c.dsb + (uint16_t)(0xb2u), 0xfaba0000u);
    // 5f96:0f30  mov byte ptr [0xba], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0xbau), 0x1u);
    // 5f96:0f35  mov word ptr [0xbb], 0x17c  [x1]
    c.w16(c.dsb + (uint16_t)(0xbbu), 0x17cu);
    // 5f96:0f3b  mov bx, 0xe  [x1]
    c.b.x = (uint16_t)(0xeu);
    // 5f96:0f3e  int 0xff  [x1]
    c.ip = 0xf40u; c.d32 = false; c.intr(0xff, 0xf40u);
L608a0:
    if (c.tracing) c.traceAt(0x608a0);
    // 5f96:0f40  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0f41  call 0x792  [x1]
    c.push16(0xf44u); code_5(c, 0x600f2u); if (c.ip != 0xf44u) c.badReturn(0x608a1);
L608a4:
    if (c.tracing) c.traceAt(0x608a4);
    // 5f96:0f44  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0f45  call 0x792  [x1]
    c.push16(0xf48u); code_5(c, 0x600f2u); if (c.ip != 0xf48u) c.badReturn(0x608a5);
L608a8:
    if (c.tracing) c.traceAt(0x608a8);
    // 5f96:0f48  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0f49  call 0x14e  [x1]
    c.push16(0xf4cu); code_5(c, 0x5faaeu); if (c.ip != 0xf4cu) c.badReturn(0x608a9);
L608ac:
    if (c.tracing) c.traceAt(0x608ac);
    // 5f96:0f4c  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0f4d  call 0xc3d  [x1]
    c.push16(0xf50u); code_5(c, 0x6059du); if (c.ip != 0xf50u) c.badReturn(0x608ad);
L608b0:
    if (c.tracing) c.traceAt(0x608b0);
    // 5f96:0f50  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0f51  call 0x147  [x1]
    c.push16(0xf54u); code_5(c, 0x5faa7u); if (c.ip != 0xf54u) c.badReturn(0x608b1);
L608b4:
    if (c.tracing) c.traceAt(0x608b4);
    // 5f96:0f54  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 5f96:0f57  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 5f96:0f59  mov di, 0  [x1]
    c.di.x = (uint16_t)(0x0u);
    // 5f96:0f5c  mov cx, 0x3e80  [x1]
    c.c.x = (uint16_t)(0x3e80u);
    // 5f96:0f5f  mov eax, 0  [x1]
    c.a.e = (uint32_t)(0x0u);
    // 5f96:0f65  cld   [x1]
    c.df = false;
L608c6:
    if (c.tracing) c.traceAt(0x608c6);
    // 5f96:0f66  rep stosd dword ptr es:[di], eax  [x16001]
    c.stos<32, false>(1);
L608c9:
    if (c.tracing) c.traceAt(0x608c9);
    // 5f96:0f69  push cs  [x1]
    c.push16(c.cs);
    // 5f96:0f6a  call 0x14e  [x1]
    c.push16(0xf6du); code_5(c, 0x5faaeu); if (c.ip != 0xf6du) c.badReturn(0x608ca);
L608cd:
    if (c.tracing) c.traceAt(0x608cd);
    // 5f96:0f6d  mov ah, 0x4c  [x1]
    c.a.h = (uint8_t)(0x4cu);
    // 5f96:0f6f  int 0x21  [x1]
    c.ip = 0xf71u; c.d32 = false; c.intr(0x21, 0xf71u);
    c.notTranslated(0x608d1, "fall-through");
}

static Register reg05(5, {0x31fa0, 0x32450, 0x325a1, 0x32a51, 0x5f960, 0x5f973, 0x5f980, 0x5f989, 0x5f990, 0x5f992, 0x5f996, 0x5f998, 0x5f99c, 0x5f9a5, 0x5f9a7, 0x5f9a9, 0x5f9b3, 0x5f9b4, 0x5f9f6, 0x5fa03, 0x5fa13, 0x5fa15, 0x5fa1e, 0x5fa22, 0x5fa24, 0x5fa2d, 0x5fa2f, 0x5fa31, 0x5fa33, 0x5fa3b, 0x5fa3c, 0x5fa41, 0x5fa48, 0x5fa4a, 0x5fa4c, 0x5fa4d, 0x5fa51, 0x5fa60, 0x5fa85, 0x5fa89, 0x5fa8e, 0x5fa92, 0x5fa96, 0x5faa6, 0x5faa7, 0x5faae, 0x5fab5, 0x5fcfc, 0x5fd05, 0x5fd52, 0x5fd56, 0x5fd7a, 0x5fe19, 0x5fe1c, 0x5fe9d, 0x5feb3, 0x5fec9, 0x5fee9, 0x5fef3, 0x5ff06, 0x5ff2b, 0x5ff4b, 0x5ff55, 0x5ff68, 0x5ff8d, 0x5ff95, 0x5ffb0, 0x5ffbe, 0x5ffcc, 0x5ffce, 0x5ffd0, 0x5ffd5, 0x5ffd8, 0x5ffdd, 0x5ffdf, 0x60001, 0x6000e, 0x6002e, 0x60038, 0x6004b, 0x60070, 0x60077, 0x60082, 0x600a2, 0x600ac, 0x600bf, 0x600e4, 0x600f1, 0x600f2, 0x600ff, 0x6010d, 0x60110, 0x60113, 0x6011f, 0x60131, 0x60134, 0x60137, 0x6013f, 0x60144, 0x60146, 0x60154, 0x60157, 0x6015a, 0x60166, 0x60178, 0x6017b, 0x6017e, 0x60186, 0x6018b, 0x6018c, 0x60197, 0x601a9, 0x601b1, 0x601e5, 0x601e7, 0x601ea, 0x601ed, 0x601ff, 0x60222, 0x60236, 0x6023b, 0x60342, 0x6035d, 0x6039c, 0x603cd, 0x6040b, 0x6040f, 0x60443, 0x60451, 0x60457, 0x6045c, 0x6045f, 0x60461, 0x60473, 0x6047a, 0x60481, 0x60490, 0x60496, 0x604ab, 0x604ec, 0x604ef, 0x604f9, 0x604ff, 0x60521, 0x6053c, 0x60554, 0x60555, 0x60571, 0x60583, 0x60585, 0x6059d, 0x605a1, 0x605c0, 0x605c4, 0x605c8, 0x605cd, 0x605d4, 0x605df, 0x605e8, 0x605ea, 0x605eb, 0x605ef, 0x6060e, 0x60612, 0x60616, 0x6061b, 0x60622, 0x6062d, 0x60636, 0x60638, 0x60639, 0x60642, 0x60647, 0x60649, 0x6064d, 0x6064f, 0x60667, 0x60698, 0x606a9, 0x606ce, 0x606ea, 0x606ef, 0x606f3, 0x60706, 0x6070b, 0x60710, 0x60715, 0x6071a, 0x6072a, 0x6072e, 0x60738, 0x6074b, 0x6074e, 0x60768, 0x6076c, 0x60770, 0x60774, 0x60778, 0x60782, 0x60792, 0x60796, 0x607a0, 0x607b3, 0x607b6, 0x607d0, 0x607d4, 0x607d8, 0x607dc, 0x607e0, 0x607ea, 0x607fa, 0x607fe, 0x60808, 0x6081b, 0x6081e, 0x60838, 0x6083c, 0x60840, 0x60844, 0x60848, 0x60852, 0x60862, 0x60866, 0x60870, 0x60883, 0x60886, 0x608a0, 0x608a4, 0x608a8, 0x608ac, 0x608b0, 0x608b4, 0x608c6, 0x608c9, 0x608cd}, code_5);

}  // namespace angel
