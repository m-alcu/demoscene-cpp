// Program 1, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_1(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x45fe: goto L045fe;
    case 0x4604: goto L04604;
    case 0x4607: goto L04607;
    case 0x460e: goto L0460e;
    case 0x4621: goto L04621;
    case 0x4626: goto L04626;
    case 0x462d: goto L0462d;
    case 0x4630: goto L04630;
    case 0x4639: goto L04639;
    case 0x463f: goto L0463f;
    case 0x465f: goto L0465f;
    case 0x4674: goto L04674;
    case 0x467a: goto L0467a;
    case 0x4689: goto L04689;
    case 0x469e: goto L0469e;
    case 0x46a0: goto L046a0;
    case 0x46af: goto L046af;
    case 0x46bd: goto L046bd;
    case 0x46c3: goto L046c3;
    case 0x46c6: goto L046c6;
    case 0x46ca: goto L046ca;
    case 0x46d0: goto L046d0;
    case 0x46d4: goto L046d4;
    case 0x46d6: goto L046d6;
    case 0x46e5: goto L046e5;
    case 0x471e: goto L0471e;
    case 0x4720: goto L04720;
    case 0x4729: goto L04729;
    case 0x472f: goto L0472f;
    case 0x473d: goto L0473d;
    case 0x4750: goto L04750;
    case 0x4756: goto L04756;
    case 0x4766: goto L04766;
    case 0x476c: goto L0476c;
    case 0x476f: goto L0476f;
    case 0x4773: goto L04773;
    case 0x4779: goto L04779;
    case 0x477d: goto L0477d;
    case 0x477f: goto L0477f;
    case 0x478e: goto L0478e;
    case 0x47a1: goto L047a1;
    case 0x47a7: goto L047a7;
    case 0x47e9: goto L047e9;
    case 0x47eb: goto L047eb;
    case 0x47f4: goto L047f4;
    case 0x47fa: goto L047fa;
    case 0x4807: goto L04807;
    case 0x4813: goto L04813;
    case 0x4817: goto L04817;
    case 0x481e: goto L0481e;
    case 0x4820: goto L04820;
    case 0x4824: goto L04824;
    case 0x4826: goto L04826;
    case 0x486d: goto L0486d;
    case 0x4873: goto L04873;
    case 0x4876: goto L04876;
    case 0x4879: goto L04879;
    case 0x4886: goto L04886;
    case 0x4899: goto L04899;
    case 0x48d1: goto L048d1;
    case 0x48dc: goto L048dc;
    case 0x48f3: goto L048f3;
    case 0x490a: goto L0490a;
    case 0x490d: goto L0490d;
    case 0x4955: goto L04955;
    case 0x4965: goto L04965;
    case 0x4968: goto L04968;
    case 0x4973: goto L04973;
    case 0x4990: goto L04990;
    case 0x4994: goto L04994;
    case 0x49a7: goto L049a7;
    case 0x49bd: goto L049bd;
    case 0x49cf: goto L049cf;
    case 0x49da: goto L049da;
    case 0x49e0: goto L049e0;
    case 0x49ec: goto L049ec;
    case 0x49f4: goto L049f4;
    case 0x49fa: goto L049fa;
    case 0x4a08: goto L04a08;
    case 0x4a39: goto L04a39;
    case 0x4a4f: goto L04a4f;
    case 0x4a5c: goto L04a5c;
    case 0x4a60: goto L04a60;
    case 0x4a63: goto L04a63;
    case 0x4a6c: goto L04a6c;
    case 0x4a77: goto L04a77;
    case 0x4a7a: goto L04a7a;
    case 0x4a7e: goto L04a7e;
    case 0x4a81: goto L04a81;
    case 0x4a8f: goto L04a8f;
    case 0x4a9a: goto L04a9a;
    case 0x4aad: goto L04aad;
    case 0x4ab2: goto L04ab2;
    case 0x4ab4: goto L04ab4;
    case 0x4aba: goto L04aba;
    case 0x4ac7: goto L04ac7;
    case 0x4ae1: goto L04ae1;
    case 0x4ae5: goto L04ae5;
    case 0x4aea: goto L04aea;
    case 0x4b0d: goto L04b0d;
    case 0x4b56: goto L04b56;
    case 0x4b5b: goto L04b5b;
    case 0x4b5f: goto L04b5f;
    case 0x4b61: goto L04b61;
    case 0x4b66: goto L04b66;
    case 0x4b6e: goto L04b6e;
    case 0x4b79: goto L04b79;
    case 0x4b7c: goto L04b7c;
    case 0x4b8c: goto L04b8c;
    case 0x4b92: goto L04b92;
    case 0x4ba3: goto L04ba3;
    case 0x4ba7: goto L04ba7;
    case 0x4bb5: goto L04bb5;
    case 0x4bbb: goto L04bbb;
    case 0x4bc1: goto L04bc1;
    case 0x4bc3: goto L04bc3;
    case 0x4bcb: goto L04bcb;
    case 0x4bcd: goto L04bcd;
    case 0x4c07: goto L04c07;
    case 0x4c0b: goto L04c0b;
    case 0x4c26: goto L04c26;
    case 0x4c2e: goto L04c2e;
    case 0x4c3d: goto L04c3d;
    case 0x4c4b: goto L04c4b;
    case 0x4c53: goto L04c53;
    case 0x4c59: goto L04c59;
    case 0x4c5c: goto L04c5c;
    case 0x4c93: goto L04c93;
    case 0x4ce8: goto L04ce8;
    case 0x4d45: goto L04d45;
    case 0x4d4f: goto L04d4f;
    case 0x4d7f: goto L04d7f;
    case 0x4d85: goto L04d85;
    case 0x4d88: goto L04d88;
    case 0x4e22: goto L04e22;
    case 0x4e57: goto L04e57;
    case 0x4e75: goto L04e75;
    case 0x4e8f: goto L04e8f;
    case 0x4e93: goto L04e93;
    case 0x4eb6: goto L04eb6;
    case 0x4ec7: goto L04ec7;
    case 0x4ece: goto L04ece;
    case 0x4edc: goto L04edc;
    case 0x4ef4: goto L04ef4;
    case 0x4f04: goto L04f04;
    case 0x4f85: goto L04f85;
    case 0x4f96: goto L04f96;
    case 0x4fb2: goto L04fb2;
    case 0x4fbb: goto L04fbb;
    case 0x4fbd: goto L04fbd;
    case 0x4fbf: goto L04fbf;
    case 0x4fc5: goto L04fc5;
    case 0x4fc7: goto L04fc7;
    case 0x4fc9: goto L04fc9;
    case 0x4fcd: goto L04fcd;
    case 0x4fcf: goto L04fcf;
    case 0x4fd1: goto L04fd1;
    case 0x4fe1: goto L04fe1;
    case 0x4fe2: goto L04fe2;
    case 0x4fe6: goto L04fe6;
    case 0x4fe7: goto L04fe7;
    case 0x4feb: goto L04feb;
    case 0x4fed: goto L04fed;
    case 0x4fee: goto L04fee;
    case 0x4ff2: goto L04ff2;
    case 0x4ff8: goto L04ff8;
    case 0x4ffa: goto L04ffa;
    case 0x4ffc: goto L04ffc;
    case 0x5000: goto L05000;
    case 0x5002: goto L05002;
    case 0x5004: goto L05004;
    case 0x500a: goto L0500a;
    case 0x500c: goto L0500c;
    case 0x500e: goto L0500e;
    case 0x5016: goto L05016;
    case 0x5017: goto L05017;
    case 0x501b: goto L0501b;
    case 0x5021: goto L05021;
    case 0x5034: goto L05034;
    case 0x5039: goto L05039;
    case 0x503f: goto L0503f;
    case 0x5041: goto L05041;
    case 0x5043: goto L05043;
    case 0x5049: goto L05049;
    case 0x504b: goto L0504b;
    case 0x504d: goto L0504d;
    case 0x5053: goto L05053;
    case 0x5055: goto L05055;
    case 0x5057: goto L05057;
    case 0x505d: goto L0505d;
    case 0x505f: goto L0505f;
    case 0x5061: goto L05061;
    case 0x5068: goto L05068;
    case 0x506a: goto L0506a;
    case 0x506c: goto L0506c;
    case 0x5072: goto L05072;
    case 0x5074: goto L05074;
    case 0x5076: goto L05076;
    case 0x507b: goto L0507b;
    case 0x5086: goto L05086;
    case 0x5089: goto L05089;
    case 0x5092: goto L05092;
    case 0x509f: goto L0509f;
    case 0x50a2: goto L050a2;
    case 0x50aa: goto L050aa;
    case 0x50bb: goto L050bb;
    case 0x50d4: goto L050d4;
    case 0x50d5: goto L050d5;
    case 0x50d8: goto L050d8;
    case 0x50e5: goto L050e5;
    case 0x50e8: goto L050e8;
    case 0x50fb: goto L050fb;
    case 0x5102: goto L05102;
    case 0x5122: goto L05122;
    case 0x5126: goto L05126;
    case 0x5157: goto L05157;
    case 0x5166: goto L05166;
    case 0x5171: goto L05171;
    case 0x5175: goto L05175;
    case 0x5181: goto L05181;
    case 0x51a5: goto L051a5;
    case 0x51cf: goto L051cf;
    case 0x51d8: goto L051d8;
    case 0x51e3: goto L051e3;
    case 0x51e7: goto L051e7;
    case 0x5238: goto L05238;
    case 0x5246: goto L05246;
    case 0x5250: goto L05250;
    case 0x5258: goto L05258;
    case 0x525f: goto L0525f;
    case 0x5261: goto L05261;
    case 0x5264: goto L05264;
    case 0x5283: goto L05283;
    case 0x5286: goto L05286;
    case 0x528e: goto L0528e;
    case 0x5297: goto L05297;
    case 0x52a1: goto L052a1;
    case 0x52a8: goto L052a8;
    case 0x52b3: goto L052b3;
    case 0x52b6: goto L052b6;
    case 0x52c0: goto L052c0;
    case 0x52de: goto L052de;
    case 0x52f5: goto L052f5;
    case 0x5306: goto L05306;
    case 0x532f: goto L0532f;
    case 0x5332: goto L05332;
    case 0x5337: goto L05337;
    case 0x533a: goto L0533a;
    case 0x5340: goto L05340;
    case 0x5352: goto L05352;
    case 0x537e: goto L0537e;
    case 0x53af: goto L053af;
    case 0x53b3: goto L053b3;
    case 0x53be: goto L053be;
    case 0x53c7: goto L053c7;
    case 0x53d6: goto L053d6;
    case 0x53d9: goto L053d9;
    case 0x53ee: goto L053ee;
    case 0x541c: goto L0541c;
    case 0x5420: goto L05420;
    case 0x5446: goto L05446;
    case 0x5449: goto L05449;
    case 0x5469: goto L05469;
    case 0x546e: goto L0546e;
    case 0x5478: goto L05478;
    case 0x547b: goto L0547b;
    case 0x547c: goto L0547c;
    case 0x547f: goto L0547f;
    case 0x5480: goto L05480;
    case 0x5481: goto L05481;
    case 0x5482: goto L05482;
    case 0x549b: goto L0549b;
    case 0x549d: goto L0549d;
    case 0x54c6: goto L054c6;
    case 0x54c7: goto L054c7;
    case 0x54ce: goto L054ce;
    case 0x54d7: goto L054d7;
    case 0x54da: goto L054da;
    case 0x54db: goto L054db;
    case 0x54df: goto L054df;
    case 0x54e4: goto L054e4;
    case 0x54f0: goto L054f0;
    case 0x5516: goto L05516;
    case 0x5517: goto L05517;
    case 0x552d: goto L0552d;
    case 0x5530: goto L05530;
    case 0x553f: goto L0553f;
    case 0x5541: goto L05541;
    case 0x5557: goto L05557;
    case 0x5560: goto L05560;
    case 0x556f: goto L0556f;
    case 0x5573: goto L05573;
    case 0x557c: goto L0557c;
    case 0x558a: goto L0558a;
    case 0x5591: goto L05591;
    case 0x5592: goto L05592;
    case 0x5598: goto L05598;
    case 0x559a: goto L0559a;
    case 0x559c: goto L0559c;
    case 0x55a2: goto L055a2;
    case 0x55a4: goto L055a4;
    case 0x55a6: goto L055a6;
    case 0x55aa: goto L055aa;
    case 0x55ac: goto L055ac;
    case 0x55ae: goto L055ae;
    case 0x55bc: goto L055bc;
    case 0x55bd: goto L055bd;
    case 0x55c1: goto L055c1;
    case 0x55c2: goto L055c2;
    case 0x55c9: goto L055c9;
    case 0x21de0: goto L21de0;
    case 0x21de7: goto L21de7;
    case 0x21de9: goto L21de9;
    case 0x21deb: goto L21deb;
    case 0x21df1: goto L21df1;
    case 0x21df3: goto L21df3;
    case 0x21df5: goto L21df5;
    case 0x21df8: goto L21df8;
    case 0x21df9: goto L21df9;
    case 0x21dfd: goto L21dfd;
    case 0x21dfe: goto L21dfe;
    case 0x21e02: goto L21e02;
    case 0x21e08: goto L21e08;
    case 0x21e0a: goto L21e0a;
    case 0x21e0c: goto L21e0c;
    case 0x21e0d: goto L21e0d;
    case 0x21e11: goto L21e11;
    case 0x21e12: goto L21e12;
    case 0x21e16: goto L21e16;
    case 0x21e1c: goto L21e1c;
    case 0x21e1e: goto L21e1e;
    case 0x21e20: goto L21e20;
    case 0x21e24: goto L21e24;
    case 0x21e26: goto L21e26;
    case 0x21e28: goto L21e28;
    case 0x21e2e: goto L21e2e;
    case 0x21e30: goto L21e30;
    case 0x21e32: goto L21e32;
    case 0x21e35: goto L21e35;
    case 0x21e36: goto L21e36;
    case 0x21e45: goto L21e45;
    case 0x21e47: goto L21e47;
    case 0x21e49: goto L21e49;
    case 0x21e4d: goto L21e4d;
    case 0x21e4f: goto L21e4f;
    case 0x21e51: goto L21e51;
    case 0x21e56: goto L21e56;
    case 0x21e59: goto L21e59;
    case 0x21e64: goto L21e64;
    case 0x21e67: goto L21e67;
    case 0x21e97: goto L21e97;
    case 0x21e99: goto L21e99;
    case 0x21e9b: goto L21e9b;
    case 0x21eae: goto L21eae;
    case 0x21eb0: goto L21eb0;
    case 0x21eb2: goto L21eb2;
    case 0x21eb8: goto L21eb8;
    case 0x21eba: goto L21eba;
    case 0x21ebc: goto L21ebc;
    case 0x21edd: goto L21edd;
    case 0x21ee0: goto L21ee0;
    case 0x21eed: goto L21eed;
    case 0x21f08: goto L21f08;
    case 0x21f09: goto L21f09;
    case 0x21f13: goto L21f13;
    case 0x21f24: goto L21f24;
    case 0x21f26: goto L21f26;
    case 0x21f28: goto L21f28;
    case 0x21f30: goto L21f30;
    case 0x21f32: goto L21f32;
    case 0x21f38: goto L21f38;
    case 0x21f3a: goto L21f3a;
    case 0x21f47: goto L21f47;
    case 0x21f49: goto L21f49;
    case 0x21f4b: goto L21f4b;
    case 0x21f51: goto L21f51;
    case 0x21f53: goto L21f53;
    case 0x21f55: goto L21f55;
    case 0x21f5b: goto L21f5b;
    case 0x21f5d: goto L21f5d;
    case 0x21f5f: goto L21f5f;
    case 0x21f66: goto L21f66;
    case 0x21f68: goto L21f68;
    case 0x21f6a: goto L21f6a;
    case 0x21f71: goto L21f71;
    case 0x21f73: goto L21f73;
    case 0x21f75: goto L21f75;
    case 0x21f82: goto L21f82;
    case 0x21f84: goto L21f84;
    case 0x21f86: goto L21f86;
    case 0x21f8d: goto L21f8d;
    case 0x21f8f: goto L21f8f;
    case 0x21f91: goto L21f91;
    case 0x21f99: goto L21f99;
    case 0x21f9b: goto L21f9b;
    case 0x21f9d: goto L21f9d;
    case 0x21faa: goto L21faa;
    case 0x21fac: goto L21fac;
    case 0x21fae: goto L21fae;
    case 0x21fb4: goto L21fb4;
    case 0x21fb6: goto L21fb6;
    case 0x21fb8: goto L21fb8;
    case 0x21fce: goto L21fce;
    case 0x22054: goto L22054;
    case 0x22079: goto L22079;
    case 0x2209f: goto L2209f;
    case 0x220db: goto L220db;
    case 0x220f6: goto L220f6;
    case 0x220fc: goto L220fc;
    case 0x22104: goto L22104;
    default: c.callLinear(t); return;
    }
L045fe:
    if (c.tracing) c.traceAt(0x45fe);
    // 02dd:182e  dec word ptr [0xf70]  [x21209]
    c.w16(c.dsb + (uint16_t)(0xf70u), c.dec<16>(c.r16(c.dsb + (uint16_t)(0xf70u)), true));
    // 02dd:1832  jne 0x1837  [x21209]
    if (!c.zf) goto L04607;
L04604:
    if (c.tracing) c.traceAt(0x4604);
    // 02dd:1834  jmp 0x1aa9  [x5871]
    goto L04879;
L04607:
    if (c.tracing) c.traceAt(0x4607);
    // 02dd:1837  mov di, 0x169e  [x15338]
    c.di.x = (uint16_t)(0x169eu);
    // 02dd:183a  mov cx, word ptr [0xf6c]  [x15338]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6cu)));
L0460e:
    if (c.tracing) c.traceAt(0x460e);
    // 02dd:183e  mov ax, word ptr [di + 6]  [x106716]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6u)));
    // 02dd:1841  mov word ptr [di + 8], ax  [x106716]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x8u), c.a.x);
    // 02dd:1844  inc word ptr [di + 0x1e]  [x106716]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x1eu), c.inc<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x1eu)), false));
    // 02dd:1847  add word ptr [di + 0x2a], 2  [x106716]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2au), c.add<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2au)), 0x2u, false));
    // 02dd:184b  cmp word ptr [di + 0x2a], 6  [x106716]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2au)), 0x6u, true);
    // 02dd:184f  jb 0x1856  [x106716]
    if (c.cf) goto L04626;
L04621:
    if (c.tracing) c.traceAt(0x4621);
    // 02dd:1851  mov word ptr [di + 0x2a], 0  [x14240]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2au), 0x0u);
L04626:
    if (c.tracing) c.traceAt(0x4626);
    // 02dd:1856  mov ax, word ptr [di + 0x14]  [x106716]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x14u)));
    // 02dd:1859  or ax, ax  [x106716]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.a.x), true));
    // 02dd:185b  jne 0x1860  [x106716]
    if (!c.zf) goto L04630;
L0462d:
    if (c.tracing) c.traceAt(0x462d);
    // 02dd:185d  jmp 0x1a9d  [x81342]
    goto L0486d;
L04630:
    if (c.tracing) c.traceAt(0x4630);
    // 02dd:1860  mov bl, al  [x25374]
    c.b.l = (uint8_t)(c.a.l);
    // 02dd:1862  xor bh, bh  [x25374]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), false));
    // 02dd:1864  cmp bl, 0xe  [x25374]
    c.sub<8>(c.b.l, 0xeu, true);
    // 02dd:1867  je 0x186f  [x25374]
    if (c.zf) goto L0463f;
L04639:
    if (c.tracing) c.traceAt(0x4639);
    // 02dd:1869  shl bx, 1  [x22140]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02dd:186b  jmp word ptr [bx + 0x2175]  [x22140]
    t = c.csb + (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x2175u))); goto dispatch;
L0463f:
    if (c.tracing) c.traceAt(0x463f);
    // 02dd:186f  mov bl, ah  [x3234]
    c.b.l = (uint8_t)(c.a.h);
    // 02dd:1871  and ah, 0xf  [x3234]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xfu), false));
    // 02dd:1874  shr bl, 4  [x3234]
    c.b.l = (uint8_t)(c.shr<8>(c.b.l, (int)((0x4u) & 31), false));
    // 02dd:1877  shl bx, 1  [x3234]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02dd:1879  jmp word ptr [bx + 0x2195]  [x3234]
    t = c.csb + (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x2195u))); goto dispatch;
L0465f:
    if (c.tracing) c.traceAt(0x465f);
    // 02dd:188f  mov al, ah  [x496]
    c.a.l = (uint8_t)(c.a.h);
    // 02dd:1891  xor ah, ah  [x496]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 02dd:1893  mov bp, word ptr [di + 0xa]  [x496]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)));
    // 02dd:1896  mov bp, word ptr ds:[bp + 0x8fe]  [x496]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x8feu)));
    // 02dd:189b  mov bx, word ptr [di + 0x12]  [x496]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)));
    // 02dd:189e  sub bx, ax  [x496]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, true));
    // 02dd:18a0  jae 0x18a4  [x496]
    if (!c.cf) goto L04674;
    c.notTranslated(0x4672, "fall-through");
L04674:
    if (c.tracing) c.traceAt(0x4674);
    // 02dd:18a4  cmp bx, bp  [x496]
    c.sub<16>(c.b.x, c.bp.x, true);
    // 02dd:18a6  jae 0x18aa  [x496]
    if (!c.cf) goto L0467a;
    c.notTranslated(0x4678, "fall-through");
L0467a:
    if (c.tracing) c.traceAt(0x467a);
    // 02dd:18aa  mov word ptr [di + 0x12], bx  [x496]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.b.x);
    // 02dd:18ad  shl bx, 1  [x496]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02dd:18af  mov ax, word ptr [bx + 0xf78]  [x496]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf78u)));
    // 02dd:18b3  mov word ptr [di + 4], ax  [x496]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.a.x);
    // 02dd:18b6  jmp 0x1a9d  [x496]
    goto L0486d;
L04689:
    if (c.tracing) c.traceAt(0x4689);
    // 02dd:18b9  mov al, ah  [x1335]
    c.a.l = (uint8_t)(c.a.h);
    // 02dd:18bb  xor ah, ah  [x1335]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 02dd:18bd  mov bp, word ptr [di + 0xa]  [x1335]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)));
    // 02dd:18c0  mov bp, word ptr ds:[bp + 0x8b8]  [x1335]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x8b8u)));
    // 02dd:18c5  mov bx, word ptr [di + 0x12]  [x1335]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)));
    // 02dd:18c8  add bx, ax  [x1335]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 02dd:18ca  cmp bx, bp  [x1335]
    c.sub<16>(c.b.x, c.bp.x, true);
    // 02dd:18cc  jbe 0x18d0  [x1335]
    if ((c.cf || c.zf)) goto L046a0;
L0469e:
    if (c.tracing) c.traceAt(0x469e);
    // 02dd:18ce  mov bx, bp  [x126]
    c.b.x = (uint16_t)(c.bp.x);
L046a0:
    if (c.tracing) c.traceAt(0x46a0);
    // 02dd:18d0  mov word ptr [di + 0x12], bx  [x1335]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.b.x);
    // 02dd:18d3  shl bx, 1  [x1335]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02dd:18d5  mov ax, word ptr [bx + 0xf78]  [x1335]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf78u)));
    // 02dd:18d9  mov word ptr [di + 4], ax  [x1335]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.a.x);
    // 02dd:18dc  jmp 0x1a9d  [x1335]
    goto L0486d;
L046af:
    if (c.tracing) c.traceAt(0x46af);
    // 02dd:18df  xchg al, ah  [x1294]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.a.h); c.a.h = (uint8_t)(t0); }
    // 02dd:18e1  xor ah, ah  [x1294]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 02dd:18e3  mov dx, word ptr [di + 0x1a]  [x1294]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x1au)));
    // 02dd:18e6  mov bx, word ptr [di + 0x12]  [x1294]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)));
    // 02dd:18e9  cmp bx, dx  [x1294]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02dd:18eb  jae 0x18f6  [x1294]
    if (!c.cf) goto L046c6;
L046bd:
    if (c.tracing) c.traceAt(0x46bd);
    // 02dd:18ed  add bx, ax  [x360]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 02dd:18ef  cmp bx, dx  [x360]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02dd:18f1  jbe 0x18f6  [x360]
    if ((c.cf || c.zf)) goto L046c6;
L046c3:
    if (c.tracing) c.traceAt(0x46c3);
    // 02dd:18f3  mov word ptr [di + 0x12], dx  [x253]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.dx_.x);
L046c6:
    if (c.tracing) c.traceAt(0x46c6);
    // 02dd:18f6  cmp bx, dx  [x1294]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02dd:18f8  jbe 0x1906  [x1294]
    if ((c.cf || c.zf)) goto L046d6;
L046ca:
    if (c.tracing) c.traceAt(0x46ca);
    // 02dd:18fa  sub bx, ax  [x745]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, true));
    // 02dd:18fc  jae 0x1900  [x745]
    if (!c.cf) goto L046d0;
    c.notTranslated(0x46ce, "fall-through");
L046d0:
    if (c.tracing) c.traceAt(0x46d0);
    // 02dd:1900  cmp bx, dx  [x745]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02dd:1902  jae 0x1906  [x745]
    if (!c.cf) goto L046d6;
L046d4:
    if (c.tracing) c.traceAt(0x46d4);
    // 02dd:1904  mov bx, dx  [x634]
    c.b.x = (uint16_t)(c.dx_.x);
L046d6:
    if (c.tracing) c.traceAt(0x46d6);
    // 02dd:1906  mov word ptr [di + 0x12], bx  [x1294]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.b.x);
    // 02dd:1909  shl bx, 1  [x1294]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02dd:190b  mov ax, word ptr [bx + 0xf78]  [x1294]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf78u)));
    // 02dd:190f  mov word ptr [di + 4], ax  [x1294]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.a.x);
    // 02dd:1912  jmp 0x1a9d  [x1294]
    goto L0486d;
L046e5:
    if (c.tracing) c.traceAt(0x46e5);
    // 02dd:1915  mov bp, word ptr [di + 0xa]  [x798]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)));
    // 02dd:1918  mov si, word ptr ds:[bp + 0x8b8]  [x798]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x8b8u)));
    // 02dd:191d  mov bp, word ptr ds:[bp + 0x8fe]  [x798]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x8feu)));
    // 02dd:1922  mov dl, ah  [x798]
    c.dx_.l = (uint8_t)(c.a.h);
    // 02dd:1924  and ah, 0xf0  [x798]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xf0u), false));
    // 02dd:1927  shr ah, 2  [x798]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)((0x2u) & 31), false));
    // 02dd:192a  and dl, 0xf  [x798]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) & (0xfu), false));
    // 02dd:192d  mov bl, byte ptr [di + 0x16]  [x798]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x16u)));
    // 02dd:1930  add bl, ah  [x798]
    c.b.l = (uint8_t)(c.add<8>(c.b.l, c.a.h, false));
    // 02dd:1932  mov byte ptr [di + 0x16], bl  [x798]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x16u), c.b.l);
    // 02dd:1935  shr bl, 2  [x798]
    c.b.l = (uint8_t)(c.shr<8>(c.b.l, (int)((0x2u) & 31), false));
    // 02dd:1938  and bx, 0x1f  [x798]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x1fu), false));
    // 02dd:193b  mov al, byte ptr [bx + 0x50e]  [x798]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x50eu)));
    // 02dd:193f  mul dl  [x798]
    c.mul8(c.dx_.l);
    // 02dd:1941  rol ax, 1  [x798]
    c.a.x = (uint16_t)(c.rol<16>(c.a.x, (int)((0x1u) & 31), false));
    // 02dd:1943  xchg al, ah  [x798]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.a.h); c.a.h = (uint8_t)(t0); }
    // 02dd:1945  and ah, 1  [x798]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0x1u), false));
    // 02dd:1948  test byte ptr [di + 0x16], 0x80  [x798]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x + 0x16u))) & (0x80u), true);
    // 02dd:194c  jne 0x1950  [x798]
    if (!c.zf) goto L04720;
L0471e:
    if (c.tracing) c.traceAt(0x471e);
    // 02dd:194e  neg ax  [x798]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
L04720:
    if (c.tracing) c.traceAt(0x4720);
    // 02dd:1950  add ax, word ptr [di + 0x12]  [x798]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)), false));
    // 02dd:1953  cmp ax, bp  [x798]
    c.sub<16>(c.a.x, c.bp.x, true);
    // 02dd:1955  jae 0x1959  [x798]
    if (!c.cf) goto L04729;
    c.notTranslated(0x4727, "fall-through");
L04729:
    if (c.tracing) c.traceAt(0x4729);
    // 02dd:1959  cmp ax, si  [x798]
    c.sub<16>(c.a.x, c.si.x, true);
    // 02dd:195b  jbe 0x195f  [x798]
    if ((c.cf || c.zf)) goto L0472f;
    c.notTranslated(0x472d, "fall-through");
L0472f:
    if (c.tracing) c.traceAt(0x472f);
    // 02dd:195f  shl ax, 1  [x798]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), true));
    // 02dd:1961  mov bx, ax  [x798]
    c.b.x = (uint16_t)(c.a.x);
    // 02dd:1963  mov ax, word ptr [bx + 0xf78]  [x798]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf78u)));
    // 02dd:1967  mov word ptr [di + 4], ax  [x798]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.a.x);
    // 02dd:196a  jmp 0x1a9d  [x798]
    goto L0486d;
L0473d:
    if (c.tracing) c.traceAt(0x473d);
    // 02dd:196d  mov al, ah  [x18]
    c.a.l = (uint8_t)(c.a.h);
    // 02dd:196f  and ah, 0xf  [x18]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xfu), false));
    // 02dd:1972  shr al, 4  [x18]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x4u) & 31), false));
    // 02dd:1975  sub ah, al  [x18]
    c.a.h = (uint8_t)(c.sub<8>(c.a.h, c.a.l, false));
    // 02dd:1977  mov al, byte ptr [di + 6]  [x18]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x6u)));
    // 02dd:197a  sub al, ah  [x18]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.a.h, true));
    // 02dd:197c  jns 0x1980  [x18]
    if (!c.sf) goto L04750;
    c.notTranslated(0x474e, "fall-through");
L04750:
    if (c.tracing) c.traceAt(0x4750);
    // 02dd:1980  cmp al, 0x40  [x18]
    c.sub<8>(c.a.l, 0x40u, true);
    // 02dd:1982  jb 0x1986  [x18]
    if (c.cf) goto L04756;
    c.notTranslated(0x4754, "fall-through");
L04756:
    if (c.tracing) c.traceAt(0x4756);
    // 02dd:1986  mov byte ptr [di + 6], al  [x18]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x6u), c.a.l);
    // 02dd:1989  mov ax, word ptr [di + 0x1c]  [x18]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x1cu)));
    // 02dd:198c  mov dx, word ptr [di + 0x1a]  [x18]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x1au)));
    // 02dd:198f  mov bx, word ptr [di + 0x12]  [x18]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)));
    // 02dd:1992  cmp bx, dx  [x18]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02dd:1994  jae 0x199f  [x18]
    if (!c.cf) goto L0476f;
L04766:
    if (c.tracing) c.traceAt(0x4766);
    // 02dd:1996  add bx, ax  [x1]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 02dd:1998  cmp bx, dx  [x1]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02dd:199a  jbe 0x199f  [x1]
    if ((c.cf || c.zf)) goto L0476f;
L0476c:
    if (c.tracing) c.traceAt(0x476c);
    // 02dd:199c  mov word ptr [di + 0x12], dx  [x1]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.dx_.x);
L0476f:
    if (c.tracing) c.traceAt(0x476f);
    // 02dd:199f  cmp bx, dx  [x18]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02dd:19a1  jbe 0x19af  [x18]
    if ((c.cf || c.zf)) goto L0477f;
L04773:
    if (c.tracing) c.traceAt(0x4773);
    // 02dd:19a3  sub bx, ax  [x4]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, true));
    // 02dd:19a5  jae 0x19a9  [x4]
    if (!c.cf) goto L04779;
    c.notTranslated(0x4777, "fall-through");
L04779:
    if (c.tracing) c.traceAt(0x4779);
    // 02dd:19a9  cmp bx, dx  [x4]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02dd:19ab  jae 0x19af  [x4]
    if (!c.cf) goto L0477f;
L0477d:
    if (c.tracing) c.traceAt(0x477d);
    // 02dd:19ad  mov bx, dx  [x2]
    c.b.x = (uint16_t)(c.dx_.x);
L0477f:
    if (c.tracing) c.traceAt(0x477f);
    // 02dd:19af  mov word ptr [di + 0x12], bx  [x18]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.b.x);
    // 02dd:19b2  shl bx, 1  [x18]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02dd:19b4  mov ax, word ptr [bx + 0xf78]  [x18]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf78u)));
    // 02dd:19b8  mov word ptr [di + 4], ax  [x18]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.a.x);
    // 02dd:19bb  jmp 0x1a9d  [x18]
    goto L0486d;
L0478e:
    if (c.tracing) c.traceAt(0x478e);
    // 02dd:19be  mov al, ah  [x30]
    c.a.l = (uint8_t)(c.a.h);
    // 02dd:19c0  and ah, 0xf  [x30]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xfu), false));
    // 02dd:19c3  shr al, 4  [x30]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x4u) & 31), false));
    // 02dd:19c6  sub ah, al  [x30]
    c.a.h = (uint8_t)(c.sub<8>(c.a.h, c.a.l, false));
    // 02dd:19c8  mov al, byte ptr [di + 6]  [x30]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x6u)));
    // 02dd:19cb  sub al, ah  [x30]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.a.h, true));
    // 02dd:19cd  jns 0x19d1  [x30]
    if (!c.sf) goto L047a1;
    c.notTranslated(0x479f, "fall-through");
L047a1:
    if (c.tracing) c.traceAt(0x47a1);
    // 02dd:19d1  cmp al, 0x40  [x30]
    c.sub<8>(c.a.l, 0x40u, true);
    // 02dd:19d3  jb 0x19d7  [x30]
    if (c.cf) goto L047a7;
    c.notTranslated(0x47a5, "fall-through");
L047a7:
    if (c.tracing) c.traceAt(0x47a7);
    // 02dd:19d7  mov byte ptr [di + 6], al  [x30]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x6u), c.a.l);
    // 02dd:19da  mov bp, word ptr [di + 0xa]  [x30]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)));
    // 02dd:19dd  mov si, word ptr ds:[bp + 0x8b8]  [x30]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x8b8u)));
    // 02dd:19e2  mov bp, word ptr ds:[bp + 0x8fe]  [x30]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x8feu)));
    // 02dd:19e7  mov ah, byte ptr [di + 0x18]  [x30]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x18u)));
    // 02dd:19ea  or ah, byte ptr [di + 0x19]  [x30]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (c.r8(c.dsb + (uint16_t)(c.di.x + 0x19u))), false));
    // 02dd:19ed  mov dl, ah  [x30]
    c.dx_.l = (uint8_t)(c.a.h);
    // 02dd:19ef  and ah, 0xf0  [x30]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xf0u), false));
    // 02dd:19f2  shr ah, 2  [x30]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)((0x2u) & 31), false));
    // 02dd:19f5  and dl, 0xf  [x30]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) & (0xfu), false));
    // 02dd:19f8  mov bl, byte ptr [di + 0x16]  [x30]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x16u)));
    // 02dd:19fb  add bl, ah  [x30]
    c.b.l = (uint8_t)(c.add<8>(c.b.l, c.a.h, false));
    // 02dd:19fd  mov byte ptr [di + 0x16], bl  [x30]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x16u), c.b.l);
    // 02dd:1a00  shr bl, 2  [x30]
    c.b.l = (uint8_t)(c.shr<8>(c.b.l, (int)((0x2u) & 31), false));
    // 02dd:1a03  and bx, 0x1f  [x30]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x1fu), false));
    // 02dd:1a06  mov al, byte ptr [bx + 0x50e]  [x30]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x50eu)));
    // 02dd:1a0a  mul dl  [x30]
    c.mul8(c.dx_.l);
    // 02dd:1a0c  rol ax, 1  [x30]
    c.a.x = (uint16_t)(c.rol<16>(c.a.x, (int)((0x1u) & 31), false));
    // 02dd:1a0e  xchg al, ah  [x30]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.a.h); c.a.h = (uint8_t)(t0); }
    // 02dd:1a10  and ah, 1  [x30]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0x1u), false));
    // 02dd:1a13  test byte ptr [di + 0x16], 0x80  [x30]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x + 0x16u))) & (0x80u), true);
    // 02dd:1a17  jne 0x1a1b  [x30]
    if (!c.zf) goto L047eb;
L047e9:
    if (c.tracing) c.traceAt(0x47e9);
    // 02dd:1a19  neg ax  [x30]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
L047eb:
    if (c.tracing) c.traceAt(0x47eb);
    // 02dd:1a1b  add ax, word ptr [di + 0x12]  [x30]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)), false));
    // 02dd:1a1e  cmp ax, bp  [x30]
    c.sub<16>(c.a.x, c.bp.x, true);
    // 02dd:1a20  jae 0x1a24  [x30]
    if (!c.cf) goto L047f4;
    c.notTranslated(0x47f2, "fall-through");
L047f4:
    if (c.tracing) c.traceAt(0x47f4);
    // 02dd:1a24  cmp ax, si  [x30]
    c.sub<16>(c.a.x, c.si.x, true);
    // 02dd:1a26  jbe 0x1a2a  [x30]
    if ((c.cf || c.zf)) goto L047fa;
    c.notTranslated(0x47f8, "fall-through");
L047fa:
    if (c.tracing) c.traceAt(0x47fa);
    // 02dd:1a2a  shl ax, 1  [x30]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), true));
    // 02dd:1a2c  mov bx, ax  [x30]
    c.b.x = (uint16_t)(c.a.x);
    // 02dd:1a2e  mov ax, word ptr [bx + 0xf78]  [x30]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf78u)));
    // 02dd:1a32  mov word ptr [di + 4], ax  [x30]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.a.x);
    // 02dd:1a35  jmp 0x1a9d  [x30]
    goto L0486d;
L04807:
    if (c.tracing) c.traceAt(0x4807);
    // 02dd:1a37  mov al, ah  [x8307]
    c.a.l = (uint8_t)(c.a.h);
    // 02dd:1a39  and ah, 0xf  [x8307]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xfu), false));
    // 02dd:1a3c  shr al, 4  [x8307]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x4u) & 31), false));
    // 02dd:1a3f  or al, al  [x8307]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.l), true));
    // 02dd:1a41  je 0x1a47  [x8307]
    if (c.zf) goto L04817;
L04813:
    if (c.tracing) c.traceAt(0x4813);
    // 02dd:1a43  neg al  [x674]
    c.a.l = (uint8_t)(c.neg<8>(c.a.l, true));
    // 02dd:1a45  mov ah, al  [x674]
    c.a.h = (uint8_t)(c.a.l);
L04817:
    if (c.tracing) c.traceAt(0x4817);
    // 02dd:1a47  mov al, byte ptr [di + 6]  [x8307]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x6u)));
    // 02dd:1a4a  sub al, ah  [x8307]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.a.h, true));
    // 02dd:1a4c  jns 0x1a50  [x8307]
    if (!c.sf) goto L04820;
L0481e:
    if (c.tracing) c.traceAt(0x481e);
    // 02dd:1a4e  xor al, al  [x844]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L04820:
    if (c.tracing) c.traceAt(0x4820);
    // 02dd:1a50  cmp al, 0x40  [x8307]
    c.sub<8>(c.a.l, 0x40u, true);
    // 02dd:1a52  jb 0x1a56  [x8307]
    if (c.cf) goto L04826;
L04824:
    if (c.tracing) c.traceAt(0x4824);
    // 02dd:1a54  mov al, 0x3f  [x61]
    c.a.l = (uint8_t)(0x3fu);
L04826:
    if (c.tracing) c.traceAt(0x4826);
    // 02dd:1a56  mov byte ptr [di + 6], al  [x8307]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x6u), c.a.l);
    // 02dd:1a59  jmp 0x1a9d  [x8307]
    goto L0486d;
L0486d:
    if (c.tracing) c.traceAt(0x486d);
    // 02dd:1a9d  add di, 0x32  [x106716]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x32u, true));
    // 02dd:1aa0  dec cx  [x106716]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 02dd:1aa1  je 0x1aa6  [x106716]
    if (c.zf) goto L04876;
L04873:
    if (c.tracing) c.traceAt(0x4873);
    // 02dd:1aa3  jmp 0x183e  [x91378]
    goto L0460e;
L04876:
    if (c.tracing) c.traceAt(0x4876);
    // 02dd:1aa6  jmp 0x1dc2  [x15338]
    goto L04b92;
L04879:
    if (c.tracing) c.traceAt(0x4879);
    // 02dd:1aa9  mov ax, word ptr [0xf6e]  [x5871]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6eu)));
    // 02dd:1aac  mov word ptr [0xf70], ax  [x5871]
    c.w16(c.dsb + (uint16_t)(0xf70u), c.a.x);
    // 02dd:1aaf  cmp word ptr [0xf72], 0x40  [x5871]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xf72u)), 0x40u, true);
    // 02dd:1ab4  jb 0x1b01  [x5871]
    if (c.cf) goto L048d1;
L04886:
    if (c.tracing) c.traceAt(0x4886);
    // 02dd:1ab6  mov ax, word ptr [0xf74]  [x98]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf74u)));
    // 02dd:1ab9  cmp al, byte ptr [0x48d]  [x98]
    c.sub<8>(c.a.l, c.r8(c.dsb + (uint16_t)(0x48du)), true);
    // 02dd:1abd  jb 0x1ac9  [x98]
    if (c.cf) goto L04899;
    c.notTranslated(0x488f, "fall-through");
L04899:
    if (c.tracing) c.traceAt(0x4899);
    // 02dd:1ac9  mov bx, word ptr [0xf74]  [x98]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf74u)));
    // 02dd:1acd  xor ah, ah  [x98]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 02dd:1acf  mov al, byte ptr [bx + 0x48e]  [x98]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x48eu)));
    // 02dd:1ad3  mov dx, word ptr [0xf6c]  [x98]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6cu)));
    // 02dd:1ad7  shl dx, 8  [x98]
    c.dx_.x = (uint16_t)(c.shl<16>(c.dx_.x, (int)((0x8u) & 31), false));
    // 02dd:1ada  mul dx  [x98]
    c.mul16(c.dx_.x);
    // 02dd:1adc  shl dx, 0xc  [x98]
    c.dx_.x = (uint16_t)(c.shl<16>(c.dx_.x, (int)((0xcu) & 31), false));
    // 02dd:1adf  add dx, word ptr [0x1696]  [x98]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x1696u)), false));
    // 02dd:1ae3  mov word ptr [0x1692], dx  [x98]
    c.w16(c.dsb + (uint16_t)(0x1692u), c.dx_.x);
    // 02dd:1ae7  mov word ptr [0x1690], ax  [x98]
    c.w16(c.dsb + (uint16_t)(0x1690u), c.a.x);
    // 02dd:1aea  mov ax, word ptr [0x1698]  [x98]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1698u)));
    // 02dd:1aed  mov word ptr [0xf72], ax  [x98]
    c.w16(c.dsb + (uint16_t)(0xf72u), c.a.x);
    // 02dd:1af0  shl ax, 4  [x98]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x4u) & 31), false));
    // 02dd:1af3  add word ptr [0x1690], ax  [x98]
    c.w16(c.dsb + (uint16_t)(0x1690u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x1690u)), c.a.x, true));
    // 02dd:1af7  mov word ptr [0x1698], 0  [x98]
    c.w16(c.dsb + (uint16_t)(0x1698u), 0x0u);
    // 02dd:1afd  inc word ptr [0xf74]  [x98]
    c.w16(c.dsb + (uint16_t)(0xf74u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xf74u)), true));
L048d1:
    if (c.tracing) c.traceAt(0x48d1);
    // 02dd:1b01  les si, ptr [0x1690]  [x5871]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x1690u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x1690u) + 2); c.si.x = (uint16_t)(t0); c.loadEs(t1); }
    // 02dd:1b05  mov di, 0x169e  [x5871]
    c.di.x = (uint16_t)(0x169eu);
    // 02dd:1b08  mov cx, word ptr [0xf6c]  [x5871]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6cu)));
L048dc:
    if (c.tracing) c.traceAt(0x48dc);
    // 02dd:1b0c  mov ax, word ptr [di + 6]  [x42528]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6u)));
    // 02dd:1b0f  mov word ptr [di + 8], ax  [x42528]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x8u), c.a.x);
    // 02dd:1b12  mov bh, byte ptr es:[si]  [x42528]
    c.b.h = (uint8_t)(c.r8(c.esb + (uint16_t)(c.si.x)));
    // 02dd:1b15  mov bl, byte ptr es:[si + 2]  [x42528]
    c.b.l = (uint8_t)(c.r8(c.esb + (uint16_t)(c.si.x + 0x2u)));
    // 02dd:1b19  and bh, 0xf0  [x42528]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) & (0xf0u), false));
    // 02dd:1b1c  shr bl, 4  [x42528]
    c.b.l = (uint8_t)(c.shr<8>(c.b.l, (int)((0x4u) & 31), false));
    // 02dd:1b1f  add bl, bh  [x42528]
    c.b.l = (uint8_t)(c.add<8>(c.b.l, c.b.h, true));
    // 02dd:1b21  je 0x1b98  [x42528]
    if (c.zf) goto L04968;
L048f3:
    if (c.tracing) c.traceAt(0x48f3);
    // 02dd:1b23  mov bh, byte ptr [di + 0x20]  [x4489]
    c.b.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x20u)));
    // 02dd:1b26  mov byte ptr [di + 0x22], bh  [x4489]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x22u), c.b.h);
    // 02dd:1b29  mov byte ptr [di + 0x20], bl  [x4489]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x20u), c.b.l);
    // 02dd:1b2c  xor bh, bh  [x4489]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), false));
    // 02dd:1b2e  dec bx  [x4489]
    c.b.x = (uint16_t)(c.dec<16>(c.b.x, false));
    // 02dd:1b2f  shl bx, 1  [x4489]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), false));
    // 02dd:1b31  mov ax, word ptr [bx + 0xe72]  [x4489]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xe72u)));
    // 02dd:1b35  cmp ax, 0x40  [x4489]
    c.sub<16>(c.a.x, 0x40u, true);
    // 02dd:1b38  jb 0x1b3d  [x4489]
    if (c.cf) goto L0490d;
L0490a:
    if (c.tracing) c.traceAt(0x490a);
    // 02dd:1b3a  mov ax, 0x3f  [x1864]
    c.a.x = (uint16_t)(0x3fu);
L0490d:
    if (c.tracing) c.traceAt(0x490d);
    // 02dd:1b3d  mov word ptr [di + 6], ax  [x4489]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x6u), c.a.x);
    // 02dd:1b40  mov word ptr [di + 0x2c], 1  [x4489]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2cu), 0x1u);
    // 02dd:1b45  shl bx, 1  [x4489]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), false));
    // 02dd:1b47  mov ax, word ptr [bx + 0xdb8]  [x4489]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xdb8u)));
    // 02dd:1b4b  mov word ptr [di], ax  [x4489]
    c.w16(c.dsb + (uint16_t)(c.di.x), c.a.x);
    // 02dd:1b4d  mov ax, word ptr [bx + 0xdba]  [x4489]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xdbau)));
    // 02dd:1b51  mov word ptr [di + 2], ax  [x4489]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2u), c.a.x);
    // 02dd:1b54  shr bx, 1  [x4489]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x1u) & 31), false));
    // 02dd:1b56  mov ax, word ptr [bx + 0xeb0]  [x4489]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xeb0u)));
    // 02dd:1b5a  shl ax, 3  [x4489]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x3u) & 31), false));
    // 02dd:1b5d  mov word ptr [di + 0xa], ax  [x4489]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xau), c.a.x);
    // 02dd:1b60  shl ax, 3  [x4489]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x3u) & 31), false));
    // 02dd:1b63  add word ptr [di + 0xa], ax  [x4489]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xau), c.add<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)), c.a.x, false));
    // 02dd:1b66  mov word ptr [di + 0x2e], 0  [x4489]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2eu), 0x0u);
    // 02dd:1b6b  mov ax, word ptr [bx + 0xe34]  [x4489]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xe34u)));
    // 02dd:1b6f  mov word ptr [di + 0x10], ax  [x4489]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x10u), c.a.x);
    // 02dd:1b72  mov ax, word ptr [bx + 0xeee]  [x4489]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xeeeu)));
    // 02dd:1b76  mov word ptr [di + 0xc], ax  [x4489]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xcu), c.a.x);
    // 02dd:1b79  mov ax, word ptr [bx + 0xf2c]  [x4489]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf2cu)));
    // 02dd:1b7d  mov word ptr [di + 0xe], ax  [x4489]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xeu), c.a.x);
    // 02dd:1b80  cmp ax, 2  [x4489]
    c.sub<16>(c.a.x, 0x2u, true);
    // 02dd:1b83  jbe 0x1b98  [x4489]
    if ((c.cf || c.zf)) goto L04968;
L04955:
    if (c.tracing) c.traceAt(0x4955);
    // 02dd:1b85  mov word ptr [di + 0x2e], 8  [x3002]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2eu), 0x8u);
    // 02dd:1b8a  mov ax, word ptr [di + 0xc]  [x3002]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xcu)));
    // 02dd:1b8d  add ax, word ptr [di + 0xe]  [x3002]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xeu)), false));
    // 02dd:1b90  cmp ax, word ptr [di + 0x10]  [x3002]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), true);
    // 02dd:1b93  ja 0x1b98  [x3002]
    if ((!c.cf && !c.zf)) goto L04968;
L04965:
    if (c.tracing) c.traceAt(0x4965);
    // 02dd:1b95  mov word ptr [di + 0x10], ax  [x3002]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x10u), c.a.x);
L04968:
    if (c.tracing) c.traceAt(0x4968);
    // 02dd:1b98  mov bx, word ptr es:[si]  [x42528]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 02dd:1b9b  xchg bl, bh  [x42528]
    { const uint32_t t0 = c.b.l; c.b.l = (uint8_t)(c.b.h); c.b.h = (uint8_t)(t0); }
    // 02dd:1b9d  and bx, 0xfff  [x42528]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0xfffu), true));
    // 02dd:1ba1  je 0x1bed  [x42528]
    if (c.zf) goto L049bd;
L04973:
    if (c.tracing) c.traceAt(0x4973);
    // 02dd:1ba3  mov bl, byte ptr [bx + 0x52e]  [x5953]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x52eu)));
    // 02dd:1ba7  xor bh, bh  [x5953]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), false));
    // 02dd:1ba9  add bx, word ptr [di + 0xa]  [x5953]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)), false));
    // 02dd:1bac  mov bx, word ptr [bx + 0x8b8]  [x5953]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x8b8u)));
    // 02dd:1bb0  mov word ptr [di + 0x1a], bx  [x5953]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x1au), c.b.x);
    // 02dd:1bb3  mov ax, word ptr es:[si + 2]  [x5953]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x + 0x2u)));
    // 02dd:1bb7  and al, 0xf  [x5953]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfu), false));
    // 02dd:1bb9  and ah, 0xf0  [x5953]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xf0u), false));
    // 02dd:1bbc  cmp al, 3  [x5953]
    c.sub<8>(c.a.l, 0x3u, true);
    // 02dd:1bbe  je 0x1bed  [x5953]
    if (c.zf) goto L049bd;
L04990:
    if (c.tracing) c.traceAt(0x4990);
    // 02dd:1bc0  cmp al, 5  [x5319]
    c.sub<8>(c.a.l, 0x5u, true);
    // 02dd:1bc2  je 0x1bed  [x5319]
    if (c.zf) goto L049bd;
L04994:
    if (c.tracing) c.traceAt(0x4994);
    // 02dd:1bc4  cmp ax, 0xd00e  [x5317]
    c.sub<16>(c.a.x, 0xd00eu, true);
    // 02dd:1bc7  jne 0x1bd7  [x5317]
    if (!c.zf) goto L049a7;
    c.notTranslated(0x4999, "fall-through");
L049a7:
    if (c.tracing) c.traceAt(0x49a7);
    // 02dd:1bd7  mov word ptr [di + 0x2c], 2  [x5317]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2cu), 0x2u);
    // 02dd:1bdc  mov word ptr [di + 0x16], 0  [x5317]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x16u), 0x0u);
    // 02dd:1be1  mov word ptr [di + 0x12], bx  [x5317]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.b.x);
    // 02dd:1be4  shl bx, 1  [x5317]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02dd:1be6  mov bx, word ptr [bx + 0xf78]  [x5317]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf78u)));
    // 02dd:1bea  mov word ptr [di + 4], bx  [x5317]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.b.x);
L049bd:
    if (c.tracing) c.traceAt(0x49bd);
    // 02dd:1bed  mov word ptr [di + 0x2a], 0  [x42528]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2au), 0x0u);
    // 02dd:1bf2  mov ax, word ptr es:[si + 2]  [x42528]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x + 0x2u)));
    // 02dd:1bf6  and al, 0xf  [x42528]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfu), false));
    // 02dd:1bf8  mov word ptr [di + 0x14], ax  [x42528]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x14u), c.a.x);
    // 02dd:1bfb  cmp al, 7  [x42528]
    c.sub<8>(c.a.l, 0x7u, true);
    // 02dd:1bfd  jb 0x1c1c  [x42528]
    if (c.cf) goto L049ec;
L049cf:
    if (c.tracing) c.traceAt(0x49cf);
    // 02dd:1bff  mov bx, ax  [x8459]
    c.b.x = (uint16_t)(c.a.x);
    // 02dd:1c01  and bh, 0xf0  [x8459]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) & (0xf0u), false));
    // 02dd:1c04  cmp bx, 0xc00e  [x8459]
    c.sub<16>(c.b.x, 0xc00eu, true);
    // 02dd:1c08  je 0x1c1c  [x8459]
    if (c.zf) goto L049ec;
L049da:
    if (c.tracing) c.traceAt(0x49da);
    // 02dd:1c0a  cmp bx, 0xd00e  [x8459]
    c.sub<16>(c.b.x, 0xd00eu, true);
    // 02dd:1c0e  je 0x1c1c  [x8459]
    if (c.zf) goto L049ec;
L049e0:
    if (c.tracing) c.traceAt(0x49e0);
    // 02dd:1c10  mov bx, word ptr [di + 0x12]  [x8459]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)));
    // 02dd:1c13  shl bx, 1  [x8459]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02dd:1c15  mov bx, word ptr [bx + 0xf78]  [x8459]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf78u)));
    // 02dd:1c19  mov word ptr [di + 4], bx  [x8459]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.b.x);
L049ec:
    if (c.tracing) c.traceAt(0x49ec);
    // 02dd:1c1c  xor bh, bh  [x42528]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), false));
    // 02dd:1c1e  mov bl, al  [x42528]
    c.b.l = (uint8_t)(c.a.l);
    // 02dd:1c20  cmp al, 0xe  [x42528]
    c.sub<8>(c.a.l, 0xeu, true);
    // 02dd:1c22  je 0x1c2a  [x42528]
    if (c.zf) goto L049fa;
L049f4:
    if (c.tracing) c.traceAt(0x49f4);
    // 02dd:1c24  shl bx, 1  [x41650]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02dd:1c26  jmp word ptr [bx + 0x2135]  [x41650]
    t = c.csb + (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x2135u))); goto dispatch;
L049fa:
    if (c.tracing) c.traceAt(0x49fa);
    // 02dd:1c2a  mov bl, ah  [x878]
    c.b.l = (uint8_t)(c.a.h);
    // 02dd:1c2c  and ah, 0xf  [x878]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xfu), false));
    // 02dd:1c2f  shr bl, 4  [x878]
    c.b.l = (uint8_t)(c.shr<8>(c.b.l, (int)((0x4u) & 31), false));
    // 02dd:1c32  shl bx, 1  [x878]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02dd:1c34  jmp word ptr [bx + 0x2155]  [x878]
    t = c.csb + (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x2155u))); goto dispatch;
L04a08:
    if (c.tracing) c.traceAt(0x4a08);
    // 02dd:1c38  mov bx, word ptr [di + 0x12]  [x32336]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)));
    // 02dd:1c3b  mov bl, byte ptr [bx + 0x52e]  [x32336]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x52eu)));
    // 02dd:1c3f  xor bh, bh  [x32336]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), false));
    // 02dd:1c41  mov bp, bx  [x32336]
    c.bp.x = (uint16_t)(c.b.x);
    // 02dd:1c43  add bx, word ptr [di + 0xa]  [x32336]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)), false));
    // 02dd:1c46  mov dx, word ptr [bx + 0x8b8]  [x32336]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x8b8u)));
    // 02dd:1c4a  mov word ptr [di + 0x24], dx  [x32336]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x24u), c.dx_.x);
    // 02dd:1c4d  mov al, ah  [x32336]
    c.a.l = (uint8_t)(c.a.h);
    // 02dd:1c4f  xor ah, ah  [x32336]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 02dd:1c51  mov dx, ax  [x32336]
    c.dx_.x = (uint16_t)(c.a.x);
    // 02dd:1c53  shr dx, 4  [x32336]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x4u) & 31), false));
    // 02dd:1c56  and ax, 0xf  [x32336]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0xfu), false));
    // 02dd:1c59  shl dx, 1  [x32336]
    c.dx_.x = (uint16_t)(c.shl<16>(c.dx_.x, (int)((0x1u) & 31), false));
    // 02dd:1c5b  shl ax, 1  [x32336]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 02dd:1c5d  mov bx, bp  [x32336]
    c.b.x = (uint16_t)(c.bp.x);
    // 02dd:1c5f  add bx, dx  [x32336]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 02dd:1c61  cmp bx, 0x46  [x32336]
    c.sub<16>(c.b.x, 0x46u, true);
    // 02dd:1c64  jbe 0x1c69  [x32336]
    if ((c.cf || c.zf)) goto L04a39;
    c.notTranslated(0x4a36, "fall-through");
L04a39:
    if (c.tracing) c.traceAt(0x4a39);
    // 02dd:1c69  add bx, word ptr [di + 0xa]  [x32336]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)), false));
    // 02dd:1c6c  mov dx, word ptr [bx + 0x8b8]  [x32336]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x8b8u)));
    // 02dd:1c70  mov word ptr [di + 0x26], dx  [x32336]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x26u), c.dx_.x);
    // 02dd:1c73  mov bx, bp  [x32336]
    c.b.x = (uint16_t)(c.bp.x);
    // 02dd:1c75  add bx, ax  [x32336]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 02dd:1c77  cmp bx, 0x46  [x32336]
    c.sub<16>(c.b.x, 0x46u, true);
    // 02dd:1c7a  jbe 0x1c7f  [x32336]
    if ((c.cf || c.zf)) goto L04a4f;
    c.notTranslated(0x4a4c, "fall-through");
L04a4f:
    if (c.tracing) c.traceAt(0x4a4f);
    // 02dd:1c7f  add bx, word ptr [di + 0xa]  [x32336]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)), true));
    // 02dd:1c82  mov dx, word ptr [bx + 0x8b8]  [x32336]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x8b8u)));
    // 02dd:1c86  mov word ptr [di + 0x28], dx  [x32336]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x28u), c.dx_.x);
    // 02dd:1c89  jmp 0x1d91  [x32336]
    goto L04b61;
L04a5c:
    if (c.tracing) c.traceAt(0x4a5c);
    // 02dd:1c8c  or ah, ah  [x639]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (c.a.h), true));
    // 02dd:1c8e  jne 0x1c93  [x639]
    if (!c.zf) goto L04a63;
L04a60:
    if (c.tracing) c.traceAt(0x4a60);
    // 02dd:1c90  mov ah, byte ptr [di + 0x1c]  [x533]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x1cu)));
L04a63:
    if (c.tracing) c.traceAt(0x4a63);
    // 02dd:1c93  mov byte ptr [di + 0x1c], ah  [x639]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x1cu), c.a.h);
    // 02dd:1c96  mov byte ptr [di + 0x15], ah  [x639]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x15u), c.a.h);
    // 02dd:1c99  jmp 0x1d91  [x639]
    goto L04b61;
L04a6c:
    if (c.tracing) c.traceAt(0x4a6c);
    // 02dd:1c9c  mov al, ah  [x363]
    c.a.l = (uint8_t)(c.a.h);
    // 02dd:1c9e  and al, 0xf  [x363]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfu), false));
    // 02dd:1ca0  and ah, 0xf0  [x363]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xf0u), false));
    // 02dd:1ca3  or al, al  [x363]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.l), true));
    // 02dd:1ca5  jne 0x1caa  [x363]
    if (!c.zf) goto L04a7a;
L04a77:
    if (c.tracing) c.traceAt(0x4a77);
    // 02dd:1ca7  mov al, byte ptr [di + 0x18]  [x328]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x18u)));
L04a7a:
    if (c.tracing) c.traceAt(0x4a7a);
    // 02dd:1caa  xor ah, ah  [x363]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), true));
    // 02dd:1cac  jne 0x1cb1  [x363]
    if (!c.zf) goto L04a81;
L04a7e:
    if (c.tracing) c.traceAt(0x4a7e);
    // 02dd:1cae  mov ah, byte ptr [di + 0x19]  [x363]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x19u)));
L04a81:
    if (c.tracing) c.traceAt(0x4a81);
    // 02dd:1cb1  mov byte ptr [di + 0x18], al  [x363]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x18u), c.a.l);
    // 02dd:1cb4  mov byte ptr [di + 0x19], ah  [x363]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x19u), c.a.h);
    // 02dd:1cb7  or al, ah  [x363]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.h), true));
    // 02dd:1cb9  mov byte ptr [di + 0x15], al  [x363]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x15u), c.a.l);
    // 02dd:1cbc  jmp 0x1d91  [x363]
    goto L04b61;
L04a8f:
    if (c.tracing) c.traceAt(0x4a8f);
    // 02dd:1cbf  xor al, al  [x13]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 02dd:1cc1  cmp ax, word ptr [di + 0x10]  [x13]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), true);
    // 02dd:1cc4  jb 0x1cca  [x13]
    if (c.cf) goto L04a9a;
    c.notTranslated(0x4a96, "fall-through");
L04a9a:
    if (c.tracing) c.traceAt(0x4a9a);
    // 02dd:1cca  mov word ptr [di + 0x30], ax  [x13]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x30u), c.a.x);
    // 02dd:1ccd  jmp 0x1d91  [x13]
    goto L04b61;
L04aad:
    if (c.tracing) c.traceAt(0x4aad);
    // 02dd:1cdd  cmp ah, 0x40  [x4318]
    c.sub<8>(c.a.h, 0x40u, true);
    // 02dd:1ce0  jb 0x1ce4  [x4318]
    if (c.cf) goto L04ab4;
L04ab2:
    if (c.tracing) c.traceAt(0x4ab2);
    // 02dd:1ce2  mov ah, 0x3f  [x445]
    c.a.h = (uint8_t)(0x3fu);
L04ab4:
    if (c.tracing) c.traceAt(0x4ab4);
    // 02dd:1ce4  mov byte ptr [di + 6], ah  [x4318]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x6u), c.a.h);
    // 02dd:1ce7  jmp 0x1d91  [x4318]
    goto L04b61;
L04aba:
    if (c.tracing) c.traceAt(0x4aba);
    // 02dd:1cea  mov word ptr [0xf72], 0x3f  [x18]
    c.w16(c.dsb + (uint16_t)(0xf72u), 0x3fu);
    // 02dd:1cf0  cmp ah, 0x64  [x18]
    c.sub<8>(c.a.h, 0x64u, true);
    // 02dd:1cf3  jb 0x1cf7  [x18]
    if (c.cf) goto L04ac7;
    c.notTranslated(0x4ac5, "fall-through");
L04ac7:
    if (c.tracing) c.traceAt(0x4ac7);
    // 02dd:1cf7  mov al, ah  [x18]
    c.a.l = (uint8_t)(c.a.h);
    // 02dd:1cf9  and al, 0xf  [x18]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfu), false));
    // 02dd:1cfb  shr ah, 4  [x18]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)((0x4u) & 31), false));
    // 02dd:1cfe  shl ah, 1  [x18]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x1u) & 31), false));
    // 02dd:1d00  mov byte ptr [0x1698], al  [x18]
    c.w8(c.dsb + (uint16_t)(0x1698u), c.a.l);
    // 02dd:1d03  add byte ptr [0x1698], ah  [x18]
    c.w8(c.dsb + (uint16_t)(0x1698u), c.add<8>(c.r8(c.dsb + (uint16_t)(0x1698u)), c.a.h, false));
    // 02dd:1d07  shl ah, 2  [x18]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x2u) & 31), false));
    // 02dd:1d0a  add byte ptr [0x1698], ah  [x18]
    c.w8(c.dsb + (uint16_t)(0x1698u), c.add<8>(c.r8(c.dsb + (uint16_t)(0x1698u)), c.a.h, true));
    // 02dd:1d0e  jmp 0x1d91  [x18]
    goto L04b61;
L04ae1:
    if (c.tracing) c.traceAt(0x4ae1);
    // 02dd:1d11  or ah, ah  [x64]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (c.a.h), true));
    // 02dd:1d13  je 0x1d91  [x64]
    if (c.zf) goto L04b61;
L04ae5:
    if (c.tracing) c.traceAt(0x4ae5);
    // 02dd:1d15  cmp ah, 0x1f  [x64]
    c.sub<8>(c.a.h, 0x1fu, true);
    // 02dd:1d18  jbe 0x1d3d  [x64]
    if ((c.cf || c.zf)) goto L04b0d;
L04aea:
    if (c.tracing) c.traceAt(0x4aea);
    // 02dd:1d1a  xchg al, ah  [x2]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.a.h); c.a.h = (uint8_t)(t0); }
    // 02dd:1d1c  xor ah, ah  [x2]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 02dd:1d1e  shl ax, 1  [x2]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 02dd:1d20  mov bl, 5  [x2]
    c.b.l = (uint8_t)(0x5u);
    // 02dd:1d22  div bl  [x2]
    while (!c.div8(c.b.l)) { c.d32 = false; c.intr(0, 0x1d22u); }   // #DE: int 0, then again
    // 02dd:1d24  mov dl, al  [x2]
    c.dx_.l = (uint8_t)(c.a.l);
    // 02dd:1d26  xor dh, dh  [x2]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) ^ (c.dx_.h), false));
    // 02dd:1d28  xor ax, ax  [x2]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 02dd:1d2a  mov bx, 0x1a4  [x2]
    c.b.x = (uint16_t)(0x1a4u);
    // 02dd:1d2d  div bx  [x2]
    while (!c.div16(c.b.x)) { c.d32 = false; c.intr(0, 0x1d2du); }   // #DE: int 0, then again
    // 02dd:1d2f  mov word ptr cs:[0x2e], ax  [x2]
    c.w16(c.csb + (uint16_t)(0x2eu), c.a.x);
    // 02dd:1d33  xor ax, ax  [x2]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 02dd:1d35  div bx  [x2]
    while (!c.div16(c.b.x)) { c.d32 = false; c.intr(0, 0x1d35u); }   // #DE: int 0, then again
    // 02dd:1d37  mov word ptr cs:[0x2c], ax  [x2]
    c.w16(c.csb + (uint16_t)(0x2cu), c.a.x);
    // 02dd:1d3b  jmp 0x1d91  [x2]
    goto L04b61;
L04b0d:
    if (c.tracing) c.traceAt(0x4b0d);
    // 02dd:1d3d  mov byte ptr [0xf6e], ah  [x62]
    c.w8(c.dsb + (uint16_t)(0xf6eu), c.a.h);
    // 02dd:1d41  mov byte ptr [0xf70], ah  [x62]
    c.w8(c.dsb + (uint16_t)(0xf70u), c.a.h);
    // 02dd:1d45  jmp 0x1d91  [x62]
    goto L04b61;
L04b56:
    if (c.tracing) c.traceAt(0x4b56);
    // 02dd:1d86  sub byte ptr [di + 6], ah  [x875]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x6u), c.sub<8>(c.r8(c.dsb + (uint16_t)(c.di.x + 0x6u)), c.a.h, true));
    // 02dd:1d89  jae 0x1d8f  [x875]
    if (!c.cf) goto L04b5f;
L04b5b:
    if (c.tracing) c.traceAt(0x4b5b);
    // 02dd:1d8b  mov byte ptr [di + 6], 0  [x20]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x6u), 0x0u);
L04b5f:
    if (c.tracing) c.traceAt(0x4b5f);
    // 02dd:1d8f  jmp 0x1d91  [x875]
    goto L04b61;
L04b61:
    if (c.tracing) c.traceAt(0x4b61);
    // 02dd:1d91  add si, 4  [x42528]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 02dd:1d94  jae 0x1d9e  [x42528]
    if (!c.cf) goto L04b6e;
L04b66:
    if (c.tracing) c.traceAt(0x4b66);
    // 02dd:1d96  mov dx, es  [x1]
    c.dx_.x = (uint16_t)(c.es);
    // 02dd:1d98  add dx, 0x1000  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x1000u, true));
    // 02dd:1d9c  mov es, dx  [x1]
    c.loadEs(c.dx_.x);
L04b6e:
    if (c.tracing) c.traceAt(0x4b6e);
    // 02dd:1d9e  mov word ptr [di + 0x1e], 0  [x42528]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x1eu), 0x0u);
    // 02dd:1da3  add di, 0x32  [x42528]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x32u, true));
    // 02dd:1da6  dec cx  [x42528]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 02dd:1da7  je 0x1dac  [x42528]
    if (c.zf) goto L04b7c;
L04b79:
    if (c.tracing) c.traceAt(0x4b79);
    // 02dd:1da9  jmp 0x1b0c  [x36657]
    goto L048dc;
L04b7c:
    if (c.tracing) c.traceAt(0x4b7c);
    // 02dd:1dac  inc word ptr [0xf72]  [x5871]
    c.w16(c.dsb + (uint16_t)(0xf72u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xf72u)), false));
    // 02dd:1db0  mov ax, word ptr [0xf6c]  [x5871]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6cu)));
    // 02dd:1db3  shl ax, 2  [x5871]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x2u) & 31), false));
    // 02dd:1db6  add word ptr [0x1690], ax  [x5871]
    c.w16(c.dsb + (uint16_t)(0x1690u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x1690u)), c.a.x, true));
    // 02dd:1dba  jae 0x1dc2  [x5871]
    if (!c.cf) goto L04b92;
L04b8c:
    if (c.tracing) c.traceAt(0x4b8c);
    // 02dd:1dbc  add word ptr [0x1692], 0x1000  [x1]
    c.w16(c.dsb + (uint16_t)(0x1692u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x1692u)), 0x1000u, true));
L04b92:
    if (c.tracing) c.traceAt(0x4b92);
    // 02dd:1dc2  mov di, 0x169e  [x21209]
    c.di.x = (uint16_t)(0x169eu);
    // 02dd:1dc5  mov cx, word ptr [0xf6c]  [x21209]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6cu)));
    // 02dd:1dc9  mov dx, word ptr [0xf6a]  [x21209]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 02dd:1dcd  or dx, dx  [x21209]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) | (c.dx_.x), true));
    // 02dd:1dcf  je 0x2134  [x21209]
    if (c.zf) goto L04f04;
L04ba3:
    if (c.tracing) c.traceAt(0x4ba3);
    // 02dd:1dd3  add dx, 0x103  [x21209]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
L04ba7:
    if (c.tracing) c.traceAt(0x4ba7);
    // 02dd:1dd7  dec dx  [x149244]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:1dd8  mov al, byte ptr [0xf6c]  [x149244]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xf6cu)));
    // 02dd:1ddb  sub al, cl  [x149244]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.c.l, false));
    // 02dd:1ddd  out dx, al  [x149244]
    c.ip = 0x1ddeu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1dde  inc dx  [x149244]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1ddf  cmp word ptr [di + 0x2c], 2  [x149244]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2cu)), 0x2u, true);
    // 02dd:1de3  je 0x1dfd  [x149244]
    if (c.zf) goto L04bcd;
L04bb5:
    if (c.tracing) c.traceAt(0x4bb5);
    // 02dd:1de5  cmp word ptr [di + 0x2c], 1  [x143927]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2cu)), 0x1u, true);
    // 02dd:1de9  je 0x1df3  [x143927]
    if (c.zf) goto L04bc3;
L04bbb:
    if (c.tracing) c.traceAt(0x4bbb);
    // 02dd:1deb  cmp word ptr [di + 0x30], 0  [x143510]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), 0x0u, true);
    // 02dd:1def  jne 0x1dfd  [x143510]
    if (!c.zf) goto L04bcd;
L04bc1:
    if (c.tracing) c.traceAt(0x4bc1);
    // 02dd:1df1  jmp 0x1e56  [x143509]
    goto L04c26;
L04bc3:
    if (c.tracing) c.traceAt(0x4bc3);
    // 02dd:1df3  mov ax, word ptr [di + 0x20]  [x417]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x20u)));
    // 02dd:1df6  cmp ax, word ptr [di + 0x22]  [x417]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x22u)), true);
    // 02dd:1df9  jne 0x1dfd  [x417]
    if (!c.zf) goto L04bcd;
L04bcb:
    if (c.tracing) c.traceAt(0x4bcb);
    // 02dd:1dfb  jmp 0x1e56  [x416]
    goto L04c26;
L04bcd:
    if (c.tracing) c.traceAt(0x4bcd);
    // 02dd:1dfd  mov ax, word ptr [di + 8]  [x5319]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x8u)));
    // 02dd:1e00  mov word ptr [di + 8], 0  [x5319]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x8u), 0x0u);
    // 02dd:1e05  mov bx, word ptr [0xf76]  [x5319]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf76u)));
    // 02dd:1e09  mul bx  [x5319]
    c.mul16(c.b.x);
    // 02dd:1e0b  shr ax, 6  [x5319]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x6u) & 31), true));
    // 02dd:1e0e  adc ax, 0  [x5319]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x0u, false, c.cf));
    // 02dd:1e11  mov bx, ax  [x5319]
    c.b.x = (uint16_t)(c.a.x);
    // 02dd:1e13  shl bx, 1  [x5319]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), false));
    // 02dd:1e15  mov bx, word ptr [bx + 0xd38]  [x5319]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xd38u)));
    // 02dd:1e19  mov dx, word ptr [0xf6a]  [x5319]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 02dd:1e1d  add dx, 0x103  [x5319]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02dd:1e21  mov al, 0xd  [x5319]
    c.a.l = (uint8_t)(0xdu);
    // 02dd:1e23  out dx, al  [x5319]
    c.ip = 0x1e24u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1e24  add dx, 2  [x5319]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:1e27  mov al, 3  [x5319]
    c.a.l = (uint8_t)(0x3u);
    // 02dd:1e29  out dx, al  [x5319]
    c.ip = 0x1e2au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1e2a  sub dx, 2  [x5319]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, false));
    // 02dd:1e2d  mov bp, word ptr [0xd38]  [x5319]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd38u)));
    // 02dd:1e31  xor ah, ah  [x5319]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 02dd:1e33  cmp bx, bp  [x5319]
    c.sub<16>(c.b.x, c.bp.x, true);
    // 02dd:1e35  jb 0x1e3b  [x5319]
    if (c.cf) goto L04c0b;
L04c07:
    if (c.tracing) c.traceAt(0x4c07);
    // 02dd:1e37  mov ah, 0x40  [x5319]
    c.a.h = (uint8_t)(0x40u);
    // 02dd:1e39  xchg bp, bx  [x5319]
    { const uint32_t t0 = c.bp.x; c.bp.x = (uint16_t)(c.b.x); c.b.x = (uint16_t)(t0); }
L04c0b:
    if (c.tracing) c.traceAt(0x4c0b);
    // 02dd:1e3b  mov al, 7  [x5319]
    c.a.l = (uint8_t)(0x7u);
    // 02dd:1e3d  out dx, al  [x5319]
    c.ip = 0x1e3eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1e3e  xchg bx, ax  [x5319]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 02dd:1e3f  inc dx  [x5319]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1e40  out dx, ax  [x5319]
    c.ip = 0x1e41u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:1e41  dec dx  [x5319]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:1e42  mov al, 8  [x5319]
    c.a.l = (uint8_t)(0x8u);
    // 02dd:1e44  out dx, al  [x5319]
    c.ip = 0x1e45u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1e45  mov ax, bp  [x5319]
    c.a.x = (uint16_t)(c.bp.x);
    // 02dd:1e47  inc dx  [x5319]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1e48  out dx, ax  [x5319]
    c.ip = 0x1e49u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:1e49  dec dx  [x5319]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:1e4a  mov al, 0xd  [x5319]
    c.a.l = (uint8_t)(0xdu);
    // 02dd:1e4c  out dx, al  [x5319]
    c.ip = 0x1e4du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1e4d  mov al, bh  [x5319]
    c.a.l = (uint8_t)(c.b.h);
    // 02dd:1e4f  add dx, 2  [x5319]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:1e52  out dx, al  [x5319]
    c.ip = 0x1e53u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1e53  sub dx, 2  [x5319]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, true));
L04c26:
    if (c.tracing) c.traceAt(0x4c26);
    // 02dd:1e56  add di, 0x32  [x149244]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x32u, true));
    // 02dd:1e59  dec cx  [x149244]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 02dd:1e5a  jne 0x1dd7  [x149244]
    if (!c.zf) goto L04ba7;
L04c2e:
    if (c.tracing) c.traceAt(0x4c2e);
    // 02dd:1e5e  mov di, 0x169e  [x21209]
    c.di.x = (uint16_t)(0x169eu);
    // 02dd:1e61  mov cx, word ptr [0xf6c]  [x21209]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6cu)));
    // 02dd:1e65  mov dx, word ptr [0xf6a]  [x21209]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 02dd:1e69  add dx, 0x103  [x21209]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
L04c3d:
    if (c.tracing) c.traceAt(0x4c3d);
    // 02dd:1e6d  dec dx  [x149244]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:1e6e  mov al, byte ptr [0xf6c]  [x149244]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xf6cu)));
    // 02dd:1e71  sub al, cl  [x149244]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.c.l, false));
    // 02dd:1e73  out dx, al  [x149244]
    c.ip = 0x1e74u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1e74  inc dx  [x149244]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1e75  cmp word ptr [di + 0x2c], 2  [x149244]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2cu)), 0x2u, true);
    // 02dd:1e79  je 0x1ec3  [x149244]
    if (c.zf) goto L04c93;
L04c4b:
    if (c.tracing) c.traceAt(0x4c4b);
    // 02dd:1e7b  cmp word ptr [di + 0x2c], 1  [x143927]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2cu)), 0x1u, true);
    // 02dd:1e7f  je 0x1f75  [x143927]
    if (c.zf) goto L04d45;
L04c53:
    if (c.tracing) c.traceAt(0x4c53);
    // 02dd:1e83  cmp word ptr [di + 0x30], 0  [x143510]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), 0x0u, true);
    // 02dd:1e87  jne 0x1e8c  [x143510]
    if (!c.zf) goto L04c5c;
L04c59:
    if (c.tracing) c.traceAt(0x4c59);
    // 02dd:1e89  jmp 0x2052  [x143509]
    goto L04e22;
L04c5c:
    if (c.tracing) c.traceAt(0x4c5c);
    // 02dd:1e8c  mov al, 0xa  [x1]
    c.a.l = (uint8_t)(0xau);
    // 02dd:1e8e  out dx, al  [x1]
    c.ip = 0x1e8fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1e8f  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1e90  mov ax, word ptr [di]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:1e92  mov bp, word ptr [di + 2]  [x1]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)));
    // 02dd:1e95  add ax, word ptr [di + 0x30]  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), true));
    // 02dd:1e98  adc bp, 0  [x1]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x0u, false, c.cf));
    // 02dd:1e9b  shr ax, 7  [x1]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02dd:1e9e  shl bp, 9  [x1]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x9u) & 31), false));
    // 02dd:1ea1  or ax, bp  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.bp.x), false));
    // 02dd:1ea3  out dx, ax  [x1]
    c.ip = 0x1ea4u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:1ea4  dec dx  [x1]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:1ea5  mov al, 0xb  [x1]
    c.a.l = (uint8_t)(0xbu);
    // 02dd:1ea7  out dx, al  [x1]
    c.ip = 0x1ea8u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1ea8  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1ea9  mov ax, word ptr [di]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:1eab  add ax, word ptr [di + 0x30]  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), false));
    // 02dd:1eae  shl ax, 9  [x1]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x9u) & 31), false));
    // 02dd:1eb1  out dx, ax  [x1]
    c.ip = 0x1eb2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:1eb2  sub dx, 0x104  [x1]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x104u, false));
    // 02dd:1eb6  in al, dx  [x1]
    c.ip = 0x1eb7u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1eb7  in al, dx  [x1]
    c.ip = 0x1eb8u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1eb8  in al, dx  [x1]
    c.ip = 0x1eb9u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1eb9  in al, dx  [x1]
    c.ip = 0x1ebau; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1eba  in al, dx  [x1]
    c.ip = 0x1ebbu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1ebb  in al, dx  [x1]
    c.ip = 0x1ebcu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1ebc  add dx, 0x103  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
    // 02dd:1ec0  jmp 0x2052  [x1]
    goto L04e22;
L04c93:
    if (c.tracing) c.traceAt(0x4c93);
    // 02dd:1ec3  mov al, 0  [x5317]
    c.a.l = (uint8_t)(0x0u);
    // 02dd:1ec5  out dx, al  [x5317]
    c.ip = 0x1ec6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1ec6  add dx, 2  [x5317]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:1ec9  mov al, 3  [x5317]
    c.a.l = (uint8_t)(0x3u);
    // 02dd:1ecb  out dx, al  [x5317]
    c.ip = 0x1eccu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1ecc  sub dx, 0x105  [x5317]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x105u, false));
    // 02dd:1ed0  in al, dx  [x5317]
    c.ip = 0x1ed1u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1ed1  in al, dx  [x5317]
    c.ip = 0x1ed2u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1ed2  in al, dx  [x5317]
    c.ip = 0x1ed3u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1ed3  in al, dx  [x5317]
    c.ip = 0x1ed4u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1ed4  in al, dx  [x5317]
    c.ip = 0x1ed5u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1ed5  in al, dx  [x5317]
    c.ip = 0x1ed6u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1ed6  add dx, 0x103  [x5317]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02dd:1eda  mov al, 0xa  [x5317]
    c.a.l = (uint8_t)(0xau);
    // 02dd:1edc  out dx, al  [x5317]
    c.ip = 0x1eddu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1edd  inc dx  [x5317]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1ede  mov ax, word ptr [di]  [x5317]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:1ee0  mov bp, word ptr [di + 2]  [x5317]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)));
    // 02dd:1ee3  add ax, word ptr [di + 0x30]  [x5317]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), true));
    // 02dd:1ee6  adc bp, 0  [x5317]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x0u, false, c.cf));
    // 02dd:1ee9  shr ax, 7  [x5317]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02dd:1eec  shl bp, 9  [x5317]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x9u) & 31), false));
    // 02dd:1eef  or ax, bp  [x5317]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.bp.x), false));
    // 02dd:1ef1  out dx, ax  [x5317]
    c.ip = 0x1ef2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:1ef2  dec dx  [x5317]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:1ef3  mov al, 0xb  [x5317]
    c.a.l = (uint8_t)(0xbu);
    // 02dd:1ef5  out dx, al  [x5317]
    c.ip = 0x1ef6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1ef6  inc dx  [x5317]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1ef7  mov ax, word ptr [di]  [x5317]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:1ef9  add ax, word ptr [di + 0x30]  [x5317]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), false));
    // 02dd:1efc  shl ax, 9  [x5317]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x9u) & 31), false));
    // 02dd:1eff  out dx, ax  [x5317]
    c.ip = 0x1f00u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:1f00  sub dx, 0x104  [x5317]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x104u, false));
    // 02dd:1f04  in al, dx  [x5317]
    c.ip = 0x1f05u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1f05  in al, dx  [x5317]
    c.ip = 0x1f06u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1f06  in al, dx  [x5317]
    c.ip = 0x1f07u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1f07  in al, dx  [x5317]
    c.ip = 0x1f08u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1f08  in al, dx  [x5317]
    c.ip = 0x1f09u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1f09  in al, dx  [x5317]
    c.ip = 0x1f0au; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1f0a  add dx, 0x103  [x5317]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02dd:1f0e  mov ax, word ptr [di + 0x22]  [x5317]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x22u)));
    // 02dd:1f11  cmp ax, word ptr [di + 0x20]  [x5317]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x20u)), true);
    // 02dd:1f14  je 0x2052  [x5317]
    if (c.zf) goto L04e22;
L04ce8:
    if (c.tracing) c.traceAt(0x4ce8);
    // 02dd:1f18  mov al, 4  [x1613]
    c.a.l = (uint8_t)(0x4u);
    // 02dd:1f1a  out dx, al  [x1613]
    c.ip = 0x1f1bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1f1b  inc dx  [x1613]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1f1c  mov ax, word ptr [di]  [x1613]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:1f1e  mov bp, word ptr [di + 2]  [x1613]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)));
    // 02dd:1f21  add ax, word ptr [di + 0x10]  [x1613]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), true));
    // 02dd:1f24  adc bp, 0  [x1613]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x0u, false, c.cf));
    // 02dd:1f27  shr ax, 7  [x1613]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02dd:1f2a  shl bp, 9  [x1613]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x9u) & 31), false));
    // 02dd:1f2d  or ax, bp  [x1613]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.bp.x), false));
    // 02dd:1f2f  out dx, ax  [x1613]
    c.ip = 0x1f30u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:1f30  dec dx  [x1613]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:1f31  mov al, 5  [x1613]
    c.a.l = (uint8_t)(0x5u);
    // 02dd:1f33  out dx, al  [x1613]
    c.ip = 0x1f34u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1f34  inc dx  [x1613]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1f35  mov ax, word ptr [di]  [x1613]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:1f37  add ax, word ptr [di + 0x10]  [x1613]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), false));
    // 02dd:1f3a  shl ax, 9  [x1613]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x9u) & 31), false));
    // 02dd:1f3d  out dx, ax  [x1613]
    c.ip = 0x1f3eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:1f3e  dec dx  [x1613]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:1f3f  mov al, 2  [x1613]
    c.a.l = (uint8_t)(0x2u);
    // 02dd:1f41  out dx, al  [x1613]
    c.ip = 0x1f42u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1f42  inc dx  [x1613]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1f43  mov ax, word ptr [di]  [x1613]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:1f45  mov bp, word ptr [di + 2]  [x1613]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)));
    // 02dd:1f48  add ax, word ptr [di + 0xc]  [x1613]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xcu)), true));
    // 02dd:1f4b  adc bp, 0  [x1613]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x0u, false, c.cf));
    // 02dd:1f4e  shr ax, 7  [x1613]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02dd:1f51  shl bp, 9  [x1613]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x9u) & 31), false));
    // 02dd:1f54  or ax, bp  [x1613]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.bp.x), false));
    // 02dd:1f56  out dx, ax  [x1613]
    c.ip = 0x1f57u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:1f57  dec dx  [x1613]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:1f58  mov al, 3  [x1613]
    c.a.l = (uint8_t)(0x3u);
    // 02dd:1f5a  out dx, al  [x1613]
    c.ip = 0x1f5bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1f5b  inc dx  [x1613]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1f5c  mov ax, word ptr [di]  [x1613]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:1f5e  add ax, word ptr [di + 0xc]  [x1613]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xcu)), false));
    // 02dd:1f61  shl ax, 9  [x1613]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x9u) & 31), false));
    // 02dd:1f64  out dx, ax  [x1613]
    c.ip = 0x1f65u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:1f65  dec dx  [x1613]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:1f66  mov al, 0  [x1613]
    c.a.l = (uint8_t)(0x0u);
    // 02dd:1f68  out dx, al  [x1613]
    c.ip = 0x1f69u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1f69  add dx, 2  [x1613]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:1f6c  mov al, 3  [x1613]
    c.a.l = (uint8_t)(0x3u);
    // 02dd:1f6e  out dx, al  [x1613]
    c.ip = 0x1f6fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1f6f  sub dx, 2  [x1613]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, true));
    // 02dd:1f72  jmp 0x2052  [x1613]
    goto L04e22;
L04d45:
    if (c.tracing) c.traceAt(0x4d45);
    // 02dd:1f75  mov ax, word ptr [di + 0x22]  [x417]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x22u)));
    // 02dd:1f78  cmp ax, word ptr [di + 0x20]  [x417]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x20u)), true);
    // 02dd:1f7b  je 0x2052  [x417]
    if (c.zf) goto L04e22;
L04d4f:
    if (c.tracing) c.traceAt(0x4d4f);
    // 02dd:1f7f  mov al, 0x8a  [x1]
    c.a.l = (uint8_t)(0x8au);
    // 02dd:1f81  out dx, al  [x1]
    c.ip = 0x1f82u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1f82  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1f83  in ax, dx  [x1]
    c.ip = 0x1f84u; c.d32 = false; c.a.x = c.in16(c.dx_.x);
    // 02dd:1f84  mov bx, ax  [x1]
    c.b.x = (uint16_t)(c.a.x);
    // 02dd:1f86  dec dx  [x1]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:1f87  mov al, 0x8b  [x1]
    c.a.l = (uint8_t)(0x8bu);
    // 02dd:1f89  out dx, al  [x1]
    c.ip = 0x1f8au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1f8a  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1f8b  in ax, dx  [x1]
    c.ip = 0x1f8cu; c.d32 = false; c.a.x = c.in16(c.dx_.x);
    // 02dd:1f8c  dec dx  [x1]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:1f8d  xchg bx, ax  [x1]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 02dd:1f8e  shl ax, 7  [x1]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02dd:1f91  shr bx, 9  [x1]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x9u) & 31), false));
    // 02dd:1f94  and bx, 0x7f  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x7fu), false));
    // 02dd:1f97  or ax, bx  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.b.x), false));
    // 02dd:1f99  mov bx, word ptr [di + 0x22]  [x1]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x22u)));
    // 02dd:1f9c  dec bx  [x1]
    c.b.x = (uint16_t)(c.dec<16>(c.b.x, false));
    // 02dd:1f9d  shl bx, 2  [x1]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x2u) & 31), false));
    // 02dd:1fa0  sub ax, word ptr [bx + 0xdb8]  [x1]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.b.x + 0xdb8u)), false));
    // 02dd:1fa4  mov bx, ax  [x1]
    c.b.x = (uint16_t)(c.a.x);
    // 02dd:1fa6  cmp bx, word ptr [di + 0x10]  [x1]
    c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), true);
    // 02dd:1fa9  jb 0x1faf  [x1]
    if (c.cf) goto L04d7f;
    c.notTranslated(0x4d7b, "fall-through");
L04d7f:
    if (c.tracing) c.traceAt(0x4d7f);
    // 02dd:1faf  cmp word ptr [di + 0x30], 0  [x1]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), 0x0u, true);
    // 02dd:1fb3  jne 0x1fb8  [x1]
    if (!c.zf) goto L04d88;
L04d85:
    if (c.tracing) c.traceAt(0x4d85);
    // 02dd:1fb5  mov word ptr [di + 0x30], bx  [x1]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x30u), c.b.x);
L04d88:
    if (c.tracing) c.traceAt(0x4d88);
    // 02dd:1fb8  mov al, 0xa  [x1]
    c.a.l = (uint8_t)(0xau);
    // 02dd:1fba  out dx, al  [x1]
    c.ip = 0x1fbbu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1fbb  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1fbc  mov ax, word ptr [di]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:1fbe  mov bp, word ptr [di + 2]  [x1]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)));
    // 02dd:1fc1  add ax, word ptr [di + 0x30]  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), true));
    // 02dd:1fc4  adc bp, 0  [x1]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x0u, false, c.cf));
    // 02dd:1fc7  shr ax, 7  [x1]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02dd:1fca  shl bp, 9  [x1]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x9u) & 31), false));
    // 02dd:1fcd  or ax, bp  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.bp.x), false));
    // 02dd:1fcf  out dx, ax  [x1]
    c.ip = 0x1fd0u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:1fd0  dec dx  [x1]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:1fd1  mov al, 0xb  [x1]
    c.a.l = (uint8_t)(0xbu);
    // 02dd:1fd3  out dx, al  [x1]
    c.ip = 0x1fd4u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1fd4  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1fd5  mov ax, word ptr [di]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:1fd7  add ax, word ptr [di + 0x30]  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), false));
    // 02dd:1fda  shl ax, 9  [x1]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x9u) & 31), false));
    // 02dd:1fdd  out dx, ax  [x1]
    c.ip = 0x1fdeu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:1fde  sub dx, 0x104  [x1]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x104u, false));
    // 02dd:1fe2  in al, dx  [x1]
    c.ip = 0x1fe3u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1fe3  in al, dx  [x1]
    c.ip = 0x1fe4u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1fe4  in al, dx  [x1]
    c.ip = 0x1fe5u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1fe5  in al, dx  [x1]
    c.ip = 0x1fe6u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1fe6  in al, dx  [x1]
    c.ip = 0x1fe7u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1fe7  in al, dx  [x1]
    c.ip = 0x1fe8u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:1fe8  add dx, 0x103  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02dd:1fec  mov al, 4  [x1]
    c.a.l = (uint8_t)(0x4u);
    // 02dd:1fee  out dx, al  [x1]
    c.ip = 0x1fefu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:1fef  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:1ff0  mov ax, word ptr [di]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:1ff2  mov bp, word ptr [di + 2]  [x1]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)));
    // 02dd:1ff5  add ax, word ptr [di + 0x10]  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), true));
    // 02dd:1ff8  adc bp, 0  [x1]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x0u, false, c.cf));
    // 02dd:1ffb  shr ax, 7  [x1]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02dd:1ffe  shl bp, 9  [x1]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x9u) & 31), false));
    // 02dd:2001  or ax, bp  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.bp.x), false));
    // 02dd:2003  out dx, ax  [x1]
    c.ip = 0x2004u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:2004  dec dx  [x1]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:2005  mov al, 5  [x1]
    c.a.l = (uint8_t)(0x5u);
    // 02dd:2007  out dx, al  [x1]
    c.ip = 0x2008u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2008  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:2009  mov ax, word ptr [di]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:200b  add ax, word ptr [di + 0x10]  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), false));
    // 02dd:200e  shl ax, 9  [x1]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x9u) & 31), false));
    // 02dd:2011  out dx, ax  [x1]
    c.ip = 0x2012u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:2012  dec dx  [x1]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:2013  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 02dd:2015  out dx, al  [x1]
    c.ip = 0x2016u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2016  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:2017  mov ax, word ptr [di]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:2019  mov bp, word ptr [di + 2]  [x1]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)));
    // 02dd:201c  add ax, word ptr [di + 0xc]  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xcu)), true));
    // 02dd:201f  adc bp, 0  [x1]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x0u, false, c.cf));
    // 02dd:2022  shr ax, 7  [x1]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02dd:2025  shl bp, 9  [x1]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x9u) & 31), false));
    // 02dd:2028  or ax, bp  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.bp.x), false));
    // 02dd:202a  out dx, ax  [x1]
    c.ip = 0x202bu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:202b  dec dx  [x1]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:202c  mov al, 3  [x1]
    c.a.l = (uint8_t)(0x3u);
    // 02dd:202e  out dx, al  [x1]
    c.ip = 0x202fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:202f  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:2030  mov ax, word ptr [di]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:2032  add ax, word ptr [di + 0xc]  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xcu)), false));
    // 02dd:2035  shl ax, 9  [x1]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x9u) & 31), false));
    // 02dd:2038  out dx, ax  [x1]
    c.ip = 0x2039u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:2039  dec dx  [x1]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:203a  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 02dd:203c  out dx, al  [x1]
    c.ip = 0x203du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:203d  add dx, 2  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:2040  mov al, byte ptr [di + 0x2e]  [x1]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x2eu)));
    // 02dd:2043  out dx, al  [x1]
    c.ip = 0x2044u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2044  sub dx, 0x105  [x1]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x105u, false));
    // 02dd:2048  in al, dx  [x1]
    c.ip = 0x2049u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:2049  in al, dx  [x1]
    c.ip = 0x204au; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:204a  in al, dx  [x1]
    c.ip = 0x204bu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:204b  in al, dx  [x1]
    c.ip = 0x204cu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:204c  in al, dx  [x1]
    c.ip = 0x204du; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:204d  in al, dx  [x1]
    c.ip = 0x204eu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:204e  add dx, 0x103  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
L04e22:
    if (c.tracing) c.traceAt(0x4e22);
    // 02dd:2052  mov ax, word ptr [di + 6]  [x149244]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6u)));
    // 02dd:2055  mov bp, word ptr [0xf76]  [x149244]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf76u)));
    // 02dd:2059  mov bx, bp  [x149244]
    c.b.x = (uint16_t)(c.bp.x);
    // 02dd:205b  mul bp  [x149244]
    c.mul16(c.bp.x);
    // 02dd:205d  shr ax, 6  [x149244]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x6u) & 31), true));
    // 02dd:2060  adc ax, 0  [x149244]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x0u, false, c.cf));
    // 02dd:2063  shl ax, 1  [x149244]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 02dd:2065  mov bp, ax  [x149244]
    c.bp.x = (uint16_t)(c.a.x);
    // 02dd:2067  mov bp, word ptr ds:[bp + 0xd38]  [x149244]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xd38u)));
    // 02dd:206c  mov ax, word ptr [di + 8]  [x149244]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x8u)));
    // 02dd:206f  mul bx  [x149244]
    c.mul16(c.b.x);
    // 02dd:2071  shr ax, 6  [x149244]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x6u) & 31), true));
    // 02dd:2074  adc ax, 0  [x149244]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x0u, false, c.cf));
    // 02dd:2077  shl ax, 1  [x149244]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 02dd:2079  mov bx, ax  [x149244]
    c.b.x = (uint16_t)(c.a.x);
    // 02dd:207b  mov bx, word ptr [bx + 0xd38]  [x149244]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xd38u)));
    // 02dd:207f  mov dx, bp  [x149244]
    c.dx_.x = (uint16_t)(c.bp.x);
    // 02dd:2081  mov dl, bh  [x149244]
    c.dx_.l = (uint8_t)(c.b.h);
    // 02dd:2083  cmp dl, dh  [x149244]
    c.sub<8>(c.dx_.l, c.dx_.h, true);
    // 02dd:2085  jne 0x20a5  [x149244]
    if (!c.zf) goto L04e75;
L04e57:
    if (c.tracing) c.traceAt(0x4e57);
    // 02dd:2087  mov dx, word ptr [0xf6a]  [x134469]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 02dd:208b  add dx, 0x103  [x134469]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02dd:208f  mov al, 0xd  [x134469]
    c.a.l = (uint8_t)(0xdu);
    // 02dd:2091  out dx, al  [x134469]
    c.ip = 0x2092u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2092  add dx, 2  [x134469]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:2095  mov al, 3  [x134469]
    c.a.l = (uint8_t)(0x3u);
    // 02dd:2097  out dx, al  [x134469]
    c.ip = 0x2098u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2098  sub dx, 2  [x134469]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, true));
    // 02dd:209b  mov al, 9  [x134469]
    c.a.l = (uint8_t)(0x9u);
    // 02dd:209d  out dx, al  [x134469]
    c.ip = 0x209eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:209e  mov ax, bp  [x134469]
    c.a.x = (uint16_t)(c.bp.x);
    // 02dd:20a0  inc dx  [x134469]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:20a1  out dx, ax  [x134469]
    c.ip = 0x20a2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:20a2  dec dx  [x134469]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, true));
    // 02dd:20a3  jmp 0x20e6  [x134469]
    goto L04eb6;
L04e75:
    if (c.tracing) c.traceAt(0x4e75);
    // 02dd:20a5  mov dx, word ptr [0xf6a]  [x14775]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 02dd:20a9  add dx, 0x103  [x14775]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02dd:20ad  mov al, 0xd  [x14775]
    c.a.l = (uint8_t)(0xdu);
    // 02dd:20af  out dx, al  [x14775]
    c.ip = 0x20b0u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:20b0  add dx, 2  [x14775]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:20b3  mov al, 3  [x14775]
    c.a.l = (uint8_t)(0x3u);
    // 02dd:20b5  out dx, al  [x14775]
    c.ip = 0x20b6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:20b6  sub dx, 2  [x14775]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, false));
    // 02dd:20b9  xor ah, ah  [x14775]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 02dd:20bb  cmp bx, bp  [x14775]
    c.sub<16>(c.b.x, c.bp.x, true);
    // 02dd:20bd  jb 0x20c3  [x14775]
    if (c.cf) goto L04e93;
L04e8f:
    if (c.tracing) c.traceAt(0x4e8f);
    // 02dd:20bf  mov ah, 0x40  [x7941]
    c.a.h = (uint8_t)(0x40u);
    // 02dd:20c1  xchg bp, bx  [x7941]
    { const uint32_t t0 = c.bp.x; c.bp.x = (uint16_t)(c.b.x); c.b.x = (uint16_t)(t0); }
L04e93:
    if (c.tracing) c.traceAt(0x4e93);
    // 02dd:20c3  mov dx, word ptr [0xf6a]  [x14775]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 02dd:20c7  add dx, 0x103  [x14775]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02dd:20cb  mov al, 7  [x14775]
    c.a.l = (uint8_t)(0x7u);
    // 02dd:20cd  out dx, al  [x14775]
    c.ip = 0x20ceu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:20ce  xchg bx, ax  [x14775]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 02dd:20cf  inc dx  [x14775]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:20d0  out dx, ax  [x14775]
    c.ip = 0x20d1u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:20d1  dec dx  [x14775]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:20d2  mov al, 8  [x14775]
    c.a.l = (uint8_t)(0x8u);
    // 02dd:20d4  out dx, al  [x14775]
    c.ip = 0x20d5u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:20d5  mov ax, bp  [x14775]
    c.a.x = (uint16_t)(c.bp.x);
    // 02dd:20d7  inc dx  [x14775]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:20d8  out dx, ax  [x14775]
    c.ip = 0x20d9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:20d9  dec dx  [x14775]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:20da  mov al, 0xd  [x14775]
    c.a.l = (uint8_t)(0xdu);
    // 02dd:20dc  out dx, al  [x14775]
    c.ip = 0x20ddu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:20dd  mov al, bh  [x14775]
    c.a.l = (uint8_t)(c.b.h);
    // 02dd:20df  add dx, 2  [x14775]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:20e2  out dx, al  [x14775]
    c.ip = 0x20e3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:20e3  sub dx, 2  [x14775]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, true));
L04eb6:
    if (c.tracing) c.traceAt(0x4eb6);
    // 02dd:20e6  mov al, 1  [x149244]
    c.a.l = (uint8_t)(0x1u);
    // 02dd:20e8  out dx, al  [x149244]
    c.ip = 0x20e9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:20e9  inc dx  [x149244]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:20ea  mov ax, word ptr [di + 4]  [x149244]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x4u)));
    // 02dd:20ed  out dx, ax  [x149244]
    c.ip = 0x20eeu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:20ee  dec dx  [x149244]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:20ef  add di, 0x32  [x149244]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x32u, true));
    // 02dd:20f2  dec cx  [x149244]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 02dd:20f3  jne 0x1e6d  [x149244]
    if (!c.zf) goto L04c3d;
L04ec7:
    if (c.tracing) c.traceAt(0x4ec7);
    // 02dd:20f7  mov di, 0x169e  [x21209]
    c.di.x = (uint16_t)(0x169eu);
    // 02dd:20fa  mov cx, word ptr [0xf6c]  [x21209]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6cu)));
L04ece:
    if (c.tracing) c.traceAt(0x4ece);
    // 02dd:20fe  dec dx  [x149244]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:20ff  mov al, byte ptr [0xf6c]  [x149244]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xf6cu)));
    // 02dd:2102  sub al, cl  [x149244]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.c.l, false));
    // 02dd:2104  out dx, al  [x149244]
    c.ip = 0x2105u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2105  inc dx  [x149244]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:2106  cmp word ptr [di + 0x2c], 2  [x149244]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2cu)), 0x2u, true);
    // 02dd:210a  jne 0x2124  [x149244]
    if (!c.zf) goto L04ef4;
L04edc:
    if (c.tracing) c.traceAt(0x4edc);
    // 02dd:210c  mov al, 0  [x5317]
    c.a.l = (uint8_t)(0x0u);
    // 02dd:210e  out dx, al  [x5317]
    c.ip = 0x210fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:210f  add dx, 2  [x5317]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:2112  mov al, byte ptr [di + 0x2e]  [x5317]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x2eu)));
    // 02dd:2115  out dx, al  [x5317]
    c.ip = 0x2116u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2116  sub dx, 0x105  [x5317]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x105u, false));
    // 02dd:211a  in al, dx  [x5317]
    c.ip = 0x211bu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:211b  in al, dx  [x5317]
    c.ip = 0x211cu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:211c  in al, dx  [x5317]
    c.ip = 0x211du; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:211d  in al, dx  [x5317]
    c.ip = 0x211eu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:211e  in al, dx  [x5317]
    c.ip = 0x211fu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:211f  in al, dx  [x5317]
    c.ip = 0x2120u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:2120  add dx, 0x103  [x5317]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
L04ef4:
    if (c.tracing) c.traceAt(0x4ef4);
    // 02dd:2124  mov word ptr [di + 0x2c], 0  [x149244]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2cu), 0x0u);
    // 02dd:2129  mov word ptr [di + 0x30], 0  [x149244]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x30u), 0x0u);
    // 02dd:212e  add di, 0x32  [x149244]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x32u, true));
    // 02dd:2131  dec cx  [x149244]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 02dd:2132  jne 0x20fe  [x149244]
    if (!c.zf) goto L04ece;
L04f04:
    if (c.tracing) c.traceAt(0x4f04);
    // 02dd:2134  ret   [x21209]
    c.ip = c.pop16(); return;
L04f85:
    if (c.tracing) c.traceAt(0x4f85);
    // 02dd:21b5  pushal   [x174137]
    { const uint32_t t0 = c.sp.e; c.push32(c.a.e); c.push32(c.c.e); c.push32(c.dx_.e); c.push32(c.b.e); c.push32(t0); c.push32(c.bp.e); c.push32(c.si.e); c.push32(c.di.e); }
    // 02dd:21b7  push ds  [x174137]
    c.push16(c.ds);
    // 02dd:21b8  push es  [x174137]
    c.push16(c.es);
    // 02dd:21b9  mov ax, cs  [x174137]
    c.a.x = (uint16_t)(c.cs);
    // 02dd:21bb  mov ds, ax  [x174137]
    c.loadDs(c.a.x);
    // 02dd:21bd  dec word ptr cs:[0x34]  [x174137]
    c.w16(c.csb + (uint16_t)(0x34u), c.dec<16>(c.r16(c.csb + (uint16_t)(0x34u)), true));
    // 02dd:21c2  jne 0x22ab  [x174137]
    if (!c.zf) goto L0507b;
L04f96:
    if (c.tracing) c.traceAt(0x4f96);
    // 02dd:21c6  mov ax, word ptr [0x2a]  [x26352]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2au)));
    // 02dd:21c9  mov word ptr [0x34], ax  [x26352]
    c.w16(c.dsb + (uint16_t)(0x34u), c.a.x);
    // 02dd:21cc  mov ax, word ptr [0x24]  [x26352]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x24u)));
    // 02dd:21cf  add ax, word ptr [0x22]  [x26352]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x22u)), false));
    // 02dd:21d3  mov word ptr [0x22], 0  [x26352]
    c.w16(c.dsb + (uint16_t)(0x22u), 0x0u);
    // 02dd:21d9  cmp ax, word ptr [0x26]  [x26352]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x26u)), true);
    // 02dd:21dd  ja 0x21e2  [x26352]
    if ((!c.cf && !c.zf)) goto L04fb2;
    c.notTranslated(0x4faf, "fall-through");
L04fb2:
    if (c.tracing) c.traceAt(0x4fb2);
    // 02dd:21e2  mov word ptr [0x24], ax  [x26352]
    c.w16(c.dsb + (uint16_t)(0x24u), c.a.x);
    // 02dd:21e5  mov al, 0x36  [x26352]
    c.a.l = (uint8_t)(0x36u);
    // 02dd:21e7  out 0x43, al  [x26352]
    c.ip = 0x21e9u; c.d32 = false; c.out8(0x43, c.a.l);
    // 02dd:21e9  jmp 0x21eb  [x26352]
    goto L04fbb;
L04fbb:
    if (c.tracing) c.traceAt(0x4fbb);
    // 02dd:21eb  jmp 0x21ed  [x26352]
    goto L04fbd;
L04fbd:
    if (c.tracing) c.traceAt(0x4fbd);
    // 02dd:21ed  jmp 0x21ef  [x26352]
    goto L04fbf;
L04fbf:
    if (c.tracing) c.traceAt(0x4fbf);
    // 02dd:21ef  xor al, al  [x26352]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 02dd:21f1  out 0x40, al  [x26352]
    c.ip = 0x21f3u; c.d32 = false; c.out8(0x40, c.a.l);
    // 02dd:21f3  jmp 0x21f5  [x26352]
    goto L04fc5;
L04fc5:
    if (c.tracing) c.traceAt(0x4fc5);
    // 02dd:21f5  jmp 0x21f7  [x26352]
    goto L04fc7;
L04fc7:
    if (c.tracing) c.traceAt(0x4fc7);
    // 02dd:21f7  jmp 0x21f9  [x26352]
    goto L04fc9;
L04fc9:
    if (c.tracing) c.traceAt(0x4fc9);
    // 02dd:21f9  out 0x40, al  [x26352]
    c.ip = 0x21fbu; c.d32 = false; c.out8(0x40, c.a.l);
    // 02dd:21fb  jmp 0x21fd  [x26352]
    goto L04fcd;
L04fcd:
    if (c.tracing) c.traceAt(0x4fcd);
    // 02dd:21fd  jmp 0x21ff  [x26352]
    goto L04fcf;
L04fcf:
    if (c.tracing) c.traceAt(0x4fcf);
    // 02dd:21ff  jmp 0x2201  [x26352]
    goto L04fd1;
L04fd1:
    if (c.tracing) c.traceAt(0x4fd1);
    // 02dd:2201  mov dx, 0x3da  [x26352]
    c.dx_.x = (uint16_t)(0x3dau);
    // 02dd:2204  cmp word ptr [0x28], 0  [x26352]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x28u)), 0x0u, true);
    // 02dd:2209  mov word ptr [0x28], 0  [x26352]
    c.w16(c.dsb + (uint16_t)(0x28u), 0x0u);
    // 02dd:220f  je 0x221d  [x26352]
    if (c.zf) goto L04fed;
L04fe1:
    if (c.tracing) c.traceAt(0x4fe1);
    // 02dd:2211  in al, dx  [x346]
    c.ip = 0x2212u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L04fe2:
    if (c.tracing) c.traceAt(0x4fe2);
    // 02dd:2212  test al, 8  [x352]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 02dd:2214  jne 0x2211  [x352]
    if (!c.zf) goto L04fe1;
L04fe6:
    if (c.tracing) c.traceAt(0x4fe6);
    // 02dd:2216  in al, dx  [x668]
    c.ip = 0x2217u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L04fe7:
    if (c.tracing) c.traceAt(0x4fe7);
    // 02dd:2217  test al, 8  [x1005]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 02dd:2219  je 0x2216  [x1005]
    if (c.zf) goto L04fe6;
L04feb:
    if (c.tracing) c.traceAt(0x4feb);
    // 02dd:221b  jmp 0x2269  [x337]
    goto L05039;
L04fed:
    if (c.tracing) c.traceAt(0x4fed);
    // 02dd:221d  in al, dx  [x26015]
    c.ip = 0x221eu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L04fee:
    if (c.tracing) c.traceAt(0x4fee);
    // 02dd:221e  test al, 8  [x26016]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 02dd:2220  jne 0x2264  [x26016]
    if (!c.zf) goto L05034;
L04ff2:
    if (c.tracing) c.traceAt(0x4ff2);
    // 02dd:2222  mov al, 0x80  [x65450]
    c.a.l = (uint8_t)(0x80u);
    // 02dd:2224  out 0x43, al  [x65450]
    c.ip = 0x2226u; c.d32 = false; c.out8(0x43, c.a.l);
    // 02dd:2226  jmp 0x2228  [x65450]
    goto L04ff8;
L04ff8:
    if (c.tracing) c.traceAt(0x4ff8);
    // 02dd:2228  jmp 0x222a  [x65450]
    goto L04ffa;
L04ffa:
    if (c.tracing) c.traceAt(0x4ffa);
    // 02dd:222a  jmp 0x222c  [x65450]
    goto L04ffc;
L04ffc:
    if (c.tracing) c.traceAt(0x4ffc);
    // 02dd:222c  in al, 0x42  [x65450]
    c.ip = 0x222eu; c.d32 = false; c.a.l = c.in8(0x42);
    // 02dd:222e  jmp 0x2230  [x65450]
    goto L05000;
L05000:
    if (c.tracing) c.traceAt(0x5000);
    // 02dd:2230  jmp 0x2232  [x65450]
    goto L05002;
L05002:
    if (c.tracing) c.traceAt(0x5002);
    // 02dd:2232  jmp 0x2234  [x65450]
    goto L05004;
L05004:
    if (c.tracing) c.traceAt(0x5004);
    // 02dd:2234  mov ah, al  [x65450]
    c.a.h = (uint8_t)(c.a.l);
    // 02dd:2236  in al, 0x42  [x65450]
    c.ip = 0x2238u; c.d32 = false; c.a.l = c.in8(0x42);
    // 02dd:2238  jmp 0x223a  [x65450]
    goto L0500a;
L0500a:
    if (c.tracing) c.traceAt(0x500a);
    // 02dd:223a  jmp 0x223c  [x65450]
    goto L0500c;
L0500c:
    if (c.tracing) c.traceAt(0x500c);
    // 02dd:223c  jmp 0x223e  [x65450]
    goto L0500e;
L0500e:
    if (c.tracing) c.traceAt(0x500e);
    // 02dd:223e  xchg ah, al  [x65450]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 02dd:2240  cmp ax, word ptr [0x20]  [x65450]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x20u)), true);
    // 02dd:2244  jb 0x2251  [x65450]
    if (c.cf) goto L05021;
L05016:
    if (c.tracing) c.traceAt(0x5016);
    // 02dd:2246  in al, dx  [x65125]
    c.ip = 0x2247u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L05017:
    if (c.tracing) c.traceAt(0x5017);
    // 02dd:2247  test al, 8  [x86982]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 02dd:2249  je 0x2222  [x86982]
    if (c.zf) goto L04ff2;
L0501b:
    if (c.tracing) c.traceAt(0x501b);
    // 02dd:224b  inc word ptr [0x24]  [x21857]
    c.w16(c.dsb + (uint16_t)(0x24u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x24u)), true));
    // 02dd:224f  jmp 0x2269  [x21857]
    goto L05039;
L05021:
    if (c.tracing) c.traceAt(0x5021);
    // 02dd:2251  sub word ptr [0x24], 0x64  [x325]
    c.w16(c.dsb + (uint16_t)(0x24u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x24u)), 0x64u, true));
    // 02dd:2256  mov word ptr [0x22], 0x50  [x325]
    c.w16(c.dsb + (uint16_t)(0x22u), 0x50u);
    // 02dd:225c  mov word ptr [0x28], 1  [x325]
    c.w16(c.dsb + (uint16_t)(0x28u), 0x1u);
    // 02dd:2262  jmp 0x2269  [x325]
    goto L05039;
L05034:
    if (c.tracing) c.traceAt(0x5034);
    // 02dd:2264  sub word ptr [0x24], 4  [x3833]
    c.w16(c.dsb + (uint16_t)(0x24u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x24u)), 0x4u, true));
L05039:
    if (c.tracing) c.traceAt(0x5039);
    // 02dd:2269  mov al, 0xb6  [x26352]
    c.a.l = (uint8_t)(0xb6u);
    // 02dd:226b  out 0x43, al  [x26352]
    c.ip = 0x226du; c.d32 = false; c.out8(0x43, c.a.l);
    // 02dd:226d  jmp 0x226f  [x26352]
    goto L0503f;
L0503f:
    if (c.tracing) c.traceAt(0x503f);
    // 02dd:226f  jmp 0x2271  [x26352]
    goto L05041;
L05041:
    if (c.tracing) c.traceAt(0x5041);
    // 02dd:2271  jmp 0x2273  [x26352]
    goto L05043;
L05043:
    if (c.tracing) c.traceAt(0x5043);
    // 02dd:2273  xor al, al  [x26352]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 02dd:2275  out 0x42, al  [x26352]
    c.ip = 0x2277u; c.d32 = false; c.out8(0x42, c.a.l);
    // 02dd:2277  jmp 0x2279  [x26352]
    goto L05049;
L05049:
    if (c.tracing) c.traceAt(0x5049);
    // 02dd:2279  jmp 0x227b  [x26352]
    goto L0504b;
L0504b:
    if (c.tracing) c.traceAt(0x504b);
    // 02dd:227b  jmp 0x227d  [x26352]
    goto L0504d;
L0504d:
    if (c.tracing) c.traceAt(0x504d);
    // 02dd:227d  xor al, al  [x26352]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 02dd:227f  out 0x42, al  [x26352]
    c.ip = 0x2281u; c.d32 = false; c.out8(0x42, c.a.l);
    // 02dd:2281  jmp 0x2283  [x26352]
    goto L05053;
L05053:
    if (c.tracing) c.traceAt(0x5053);
    // 02dd:2283  jmp 0x2285  [x26352]
    goto L05055;
L05055:
    if (c.tracing) c.traceAt(0x5055);
    // 02dd:2285  jmp 0x2287  [x26352]
    goto L05057;
L05057:
    if (c.tracing) c.traceAt(0x5057);
    // 02dd:2287  mov al, 0x36  [x26352]
    c.a.l = (uint8_t)(0x36u);
    // 02dd:2289  out 0x43, al  [x26352]
    c.ip = 0x228bu; c.d32 = false; c.out8(0x43, c.a.l);
    // 02dd:228b  jmp 0x228d  [x26352]
    goto L0505d;
L0505d:
    if (c.tracing) c.traceAt(0x505d);
    // 02dd:228d  jmp 0x228f  [x26352]
    goto L0505f;
L0505f:
    if (c.tracing) c.traceAt(0x505f);
    // 02dd:228f  jmp 0x2291  [x26352]
    goto L05061;
L05061:
    if (c.tracing) c.traceAt(0x5061);
    // 02dd:2291  mov ax, word ptr [0x24]  [x26352]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x24u)));
    // 02dd:2294  out 0x40, al  [x26352]
    c.ip = 0x2296u; c.d32 = false; c.out8(0x40, c.a.l);
    // 02dd:2296  jmp 0x2298  [x26352]
    goto L05068;
L05068:
    if (c.tracing) c.traceAt(0x5068);
    // 02dd:2298  jmp 0x229a  [x26352]
    goto L0506a;
L0506a:
    if (c.tracing) c.traceAt(0x506a);
    // 02dd:229a  jmp 0x229c  [x26352]
    goto L0506c;
L0506c:
    if (c.tracing) c.traceAt(0x506c);
    // 02dd:229c  mov al, ah  [x26352]
    c.a.l = (uint8_t)(c.a.h);
    // 02dd:229e  out 0x40, al  [x26352]
    c.ip = 0x22a0u; c.d32 = false; c.out8(0x40, c.a.l);
    // 02dd:22a0  jmp 0x22a2  [x26352]
    goto L05072;
L05072:
    if (c.tracing) c.traceAt(0x5072);
    // 02dd:22a2  jmp 0x22a4  [x26352]
    goto L05074;
L05074:
    if (c.tracing) c.traceAt(0x5074);
    // 02dd:22a4  jmp 0x22a6  [x26352]
    goto L05076;
L05076:
    if (c.tracing) c.traceAt(0x5076);
    // 02dd:22a6  inc word ptr cs:[0x3a]  [x26352]
    c.w16(c.csb + (uint16_t)(0x3au), c.inc<16>(c.r16(c.csb + (uint16_t)(0x3au)), true));
L0507b:
    if (c.tracing) c.traceAt(0x507b);
    // 02dd:22ab  mov eax, dword ptr [0x2c]  [x174137]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x2cu)));
    // 02dd:22af  add dword ptr [0x30], eax  [x174137]
    c.w32(c.dsb + (uint16_t)(0x30u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x30u)), c.a.e, true));
    // 02dd:22b4  jae 0x22b9  [x174137]
    if (!c.cf) goto L05089;
L05086:
    if (c.tracing) c.traceAt(0x5086);
    // 02dd:22b6  call 0x182e  [x21209]
    c.push16(0x22b9u); code_1(c, 0x45feu); if (c.ip != 0x22b9u) c.badReturn(0x5086);
L05089:
    if (c.tracing) c.traceAt(0x5089);
    // 02dd:22b9  mov al, 0x20  [x174137]
    c.a.l = (uint8_t)(0x20u);
    // 02dd:22bb  out 0x20, al  [x174137]
    c.ip = 0x22bdu; c.d32 = false; c.out8(0x20, c.a.l);
    // 02dd:22bd  pop es  [x174137]
    c.loadEs((uint16_t)c.pop16());
    // 02dd:22be  pop ds  [x174137]
    c.loadDs((uint16_t)c.pop16());
    // 02dd:22bf  popal   [x174137]
    c.di.e = c.pop32(); c.si.e = c.pop32(); c.bp.e = c.pop32(); c.pop32(); c.b.e = c.pop32(); c.dx_.e = c.pop32(); c.c.e = c.pop32(); c.a.e = c.pop32();
    // 02dd:22c1  iret   [x174137]
    c.iret(); return;
L05092:
    if (c.tracing) c.traceAt(0x5092);
    // 02dd:22c2  pushaw   [x3]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 02dd:22c3  push ds  [x3]
    c.push16(c.ds);
    // 02dd:22c4  push es  [x3]
    c.push16(c.es);
    // 02dd:22c5  cli   [x3]
    c.m.cli();
    // 02dd:22c6  mov dx, word ptr cs:[0xf6a]  [x3]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf6au)));
    // 02dd:22cb  or dx, dx  [x3]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) | (c.dx_.x), true));
    // 02dd:22cd  je 0x22d2  [x3]
    if (c.zf) goto L050a2;
L0509f:
    if (c.tracing) c.traceAt(0x509f);
    // 02dd:22cf  mov al, 1  [x3]
    c.a.l = (uint8_t)(0x1u);
    // 02dd:22d1  out dx, al  [x3]
    c.ip = 0x22d2u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
L050a2:
    if (c.tracing) c.traceAt(0x50a2);
    // 02dd:22d2  mov di, 0x169e  [x3]
    c.di.x = (uint16_t)(0x169eu);
    // 02dd:22d5  mov cx, word ptr cs:[0xf6c]  [x3]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf6cu)));
L050aa:
    if (c.tracing) c.traceAt(0x50aa);
    // 02dd:22da  mov word ptr cs:[di + 4], 0  [x20]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x4u), 0x0u);
    // 02dd:22e0  mov word ptr cs:[di + 6], 0  [x20]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x6u), 0x0u);
    // 02dd:22e6  add di, 0x32  [x20]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x32u, true));
    // 02dd:22e9  loop 0x22da  [x20]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L050aa;
L050bb:
    if (c.tracing) c.traceAt(0x50bb);
    // 02dd:22eb  mov dword ptr cs:[0x2c], 0x1e79e79e  [x3]
    c.w32(c.csb + (uint16_t)(0x2cu), 0x1e79e79eu);
    // 02dd:22f5  mov word ptr cs:[0x30], 0  [x3]
    c.w16(c.csb + (uint16_t)(0x30u), 0x0u);
    // 02dd:22fc  mov word ptr cs:[0x32], 0  [x3]
    c.w16(c.csb + (uint16_t)(0x32u), 0x0u);
    // 02dd:2303  sti   [x3]
    c.ip = 0x2304u; c.d32 = false; c.m.sti();
L050d4:
    if (c.tracing) c.traceAt(0x50d4);
    // 02dd:2304  pop es  [x3]
    c.loadEs((uint16_t)c.pop16());
L050d5:
    if (c.tracing) c.traceAt(0x50d5);
    // 02dd:2305  pop ds  [x3]
    c.loadDs((uint16_t)c.pop16());
    // 02dd:2306  popaw   [x3]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 02dd:2307  ret   [x3]
    c.ip = c.pop16(); return;
L050d8:
    if (c.tracing) c.traceAt(0x50d8);
    // 02dd:2308  pushaw   [x3]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 02dd:2309  push ds  [x3]
    c.push16(c.ds);
    // 02dd:230a  push es  [x3]
    c.push16(c.es);
    // 02dd:230b  cli   [x3]
    c.m.cli();
    // 02dd:230c  mov dx, word ptr cs:[0xf6a]  [x3]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf6au)));
    // 02dd:2311  or dx, dx  [x3]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) | (c.dx_.x), true));
    // 02dd:2313  je 0x2318  [x3]
    if (c.zf) goto L050e8;
L050e5:
    if (c.tracing) c.traceAt(0x50e5);
    // 02dd:2315  mov al, 3  [x3]
    c.a.l = (uint8_t)(0x3u);
    // 02dd:2317  out dx, al  [x3]
    c.ip = 0x2318u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
L050e8:
    if (c.tracing) c.traceAt(0x50e8);
    // 02dd:2318  mov dword ptr cs:[0x2c], 0  [x3]
    c.w32(c.csb + (uint16_t)(0x2cu), 0x0u);
    // 02dd:2322  mov dx, word ptr cs:[0xf6a]  [x3]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf6au)));
    // 02dd:2327  or dx, dx  [x3]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) | (c.dx_.x), true));
    // 02dd:2329  je 0x2352  [x3]
    if (c.zf) goto L05122;
L050fb:
    if (c.tracing) c.traceAt(0x50fb);
    // 02dd:232b  add dx, 0x102  [x3]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x102u, true));
    // 02dd:232f  mov cx, 0x14  [x3]
    c.c.x = (uint16_t)(0x14u);
L05102:
    if (c.tracing) c.traceAt(0x5102);
    // 02dd:2332  mov al, cl  [x60]
    c.a.l = (uint8_t)(c.c.l);
    // 02dd:2334  dec al  [x60]
    c.a.l = (uint8_t)(c.dec<8>(c.a.l, false));
    // 02dd:2336  out dx, al  [x60]
    c.ip = 0x2337u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2337  inc dx  [x60]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:2338  mov al, 0  [x60]
    c.a.l = (uint8_t)(0x0u);
    // 02dd:233a  out dx, al  [x60]
    c.ip = 0x233bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:233b  add dx, 2  [x60]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:233e  mov al, 3  [x60]
    c.a.l = (uint8_t)(0x3u);
    // 02dd:2340  out dx, al  [x60]
    c.ip = 0x2341u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2341  sub dx, 2  [x60]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, false));
    // 02dd:2344  mov al, 0xd  [x60]
    c.a.l = (uint8_t)(0xdu);
    // 02dd:2346  out dx, al  [x60]
    c.ip = 0x2347u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2347  add dx, 2  [x60]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:234a  mov al, 3  [x60]
    c.a.l = (uint8_t)(0x3u);
    // 02dd:234c  out dx, al  [x60]
    c.ip = 0x234du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:234d  sub dx, 3  [x60]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x3u, true));
    // 02dd:2350  loop 0x2332  [x60]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L05102;
L05122:
    if (c.tracing) c.traceAt(0x5122);
    // 02dd:2352  pop es  [x3]
    c.loadEs((uint16_t)c.pop16());
    // 02dd:2353  pop ds  [x3]
    c.loadDs((uint16_t)c.pop16());
    // 02dd:2354  popaw   [x3]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 02dd:2355  ret   [x3]
    c.ip = c.pop16(); return;
L05126:
    if (c.tracing) c.traceAt(0x5126);
    // 02dd:2356  pushaw   [x3]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 02dd:2357  push ds  [x3]
    c.push16(c.ds);
    // 02dd:2358  push es  [x3]
    c.push16(c.es);
    // 02dd:2359  mov word ptr cs:[0xf72], 0x40  [x3]
    c.w16(c.csb + (uint16_t)(0xf72u), 0x40u);
    // 02dd:2360  mov word ptr cs:[0xf74], 0  [x3]
    c.w16(c.csb + (uint16_t)(0xf74u), 0x0u);
    // 02dd:2367  mov word ptr cs:[0xf6e], 6  [x3]
    c.w16(c.csb + (uint16_t)(0xf6eu), 0x6u);
    // 02dd:236e  mov word ptr cs:[0xf70], 1  [x3]
    c.w16(c.csb + (uint16_t)(0xf70u), 0x1u);
    // 02dd:2375  mov word ptr cs:[0xf76], 0x40  [x3]
    c.w16(c.csb + (uint16_t)(0xf76u), 0x40u);
    // 02dd:237c  mov cx, 0x43c  [x3]
    c.c.x = (uint16_t)(0x43cu);
    // 02dd:237f  mov dx, 0x51  [x3]
    c.dx_.x = (uint16_t)(0x51u);
    // 02dd:2382  push cs  [x3]
    c.push16(c.cs);
    // 02dd:2383  pop ds  [x3]
    c.loadDs((uint16_t)c.pop16());
    // 02dd:2384  call 0x2650  [x3]
    c.push16(0x2387u); code_1(c, 0x5420u); if (c.ip != 0x2387u) c.badReturn(0x5154);
L05157:
    if (c.tracing) c.traceAt(0x5157);
    // 02dd:2387  mov word ptr cs:[0xf6c], 4  [x3]
    c.w16(c.csb + (uint16_t)(0xf6cu), 0x4u);
    // 02dd:238e  mov bp, 0x489  [x3]
    c.bp.x = (uint16_t)(0x489u);
    // 02dd:2391  xor bx, bx  [x3]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 02dd:2393  mov cx, 4  [x3]
    c.c.x = (uint16_t)(0x4u);
L05166:
    if (c.tracing) c.traceAt(0x5166);
    // 02dd:2396  mov al, byte ptr cs:[bp]  [x6]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.bp.x)));
    // 02dd:239a  cmp al, byte ptr cs:[bx + 0x3c]  [x6]
    c.sub<8>(c.a.l, c.r8(c.csb + (uint16_t)(c.b.x + 0x3cu)), true);
    // 02dd:239f  jne 0x23b1  [x6]
    if (!c.zf) goto L05181;
L05171:
    if (c.tracing) c.traceAt(0x5171);
    // 02dd:23a1  inc bp  [x4]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, false));
    // 02dd:23a2  inc bx  [x4]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 02dd:23a3  loop 0x2396  [x4]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L05166;
L05175:
    if (c.tracing) c.traceAt(0x5175);
    // 02dd:23a5  mov si, 0x409  [x1]
    c.si.x = (uint16_t)(0x409u);
    // 02dd:23a8  mov byte ptr cs:[0x50], 1  [x1]
    c.w8(c.csb + (uint16_t)(0x50u), 0x1u);
    // 02dd:23ae  jmp 0x2468  [x1]
    goto L05238;
L05181:
    if (c.tracing) c.traceAt(0x5181);
    // 02dd:23b1  mov bp, 0x489  [x2]
    c.bp.x = (uint16_t)(0x489u);
    // 02dd:23b4  mov bx, 4  [x2]
    c.b.x = (uint16_t)(0x4u);
    // 02dd:23b7  mov cx, 4  [x2]
    c.c.x = (uint16_t)(0x4u);
    // 02dd:23ba  mov al, byte ptr cs:[bp]  [x2]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.bp.x)));
    // 02dd:23be  cmp al, byte ptr cs:[bx + 0x3c]  [x2]
    c.sub<8>(c.a.l, c.r8(c.csb + (uint16_t)(c.b.x + 0x3cu)), true);
    // 02dd:23c3  jne 0x23d5  [x2]
    if (!c.zf) goto L051a5;
    c.notTranslated(0x5195, "fall-through");
L051a5:
    if (c.tracing) c.traceAt(0x51a5);
    // 02dd:23d5  mov bp, 0x489  [x2]
    c.bp.x = (uint16_t)(0x489u);
    // 02dd:23d8  mov bx, 8  [x2]
    c.b.x = (uint16_t)(0x8u);
    // 02dd:23db  mov cx, 4  [x2]
    c.c.x = (uint16_t)(0x4u);
    // 02dd:23de  mov al, byte ptr cs:[bp]  [x2]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.bp.x)));
    // 02dd:23e2  cmp al, byte ptr cs:[bx + 0x3c]  [x2]
    c.sub<8>(c.a.l, c.r8(c.csb + (uint16_t)(c.b.x + 0x3cu)), true);
    // 02dd:23e7  jne 0x23ff  [x2]
    if (!c.zf) goto L051cf;
    c.notTranslated(0x51b9, "fall-through");
L051cf:
    if (c.tracing) c.traceAt(0x51cf);
    // 02dd:23ff  mov bp, 0x489  [x2]
    c.bp.x = (uint16_t)(0x489u);
    // 02dd:2402  mov bx, 0xc  [x2]
    c.b.x = (uint16_t)(0xcu);
    // 02dd:2405  mov cx, 4  [x2]
    c.c.x = (uint16_t)(0x4u);
L051d8:
    if (c.tracing) c.traceAt(0x51d8);
    // 02dd:2408  mov al, byte ptr cs:[bp]  [x8]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.bp.x)));
    // 02dd:240c  cmp al, byte ptr cs:[bx + 0x3c]  [x8]
    c.sub<8>(c.a.l, c.r8(c.csb + (uint16_t)(c.b.x + 0x3cu)), true);
    // 02dd:2411  jne 0x2429  [x8]
    if (!c.zf) { t = 0x51f9u; goto dispatch; }
L051e3:
    if (c.tracing) c.traceAt(0x51e3);
    // 02dd:2413  inc bp  [x8]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, false));
    // 02dd:2414  inc bx  [x8]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 02dd:2415  loop 0x2408  [x8]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L051d8;
L051e7:
    if (c.tracing) c.traceAt(0x51e7);
    // 02dd:2417  mov word ptr cs:[0xf6c], 8  [x2]
    c.w16(c.csb + (uint16_t)(0xf6cu), 0x8u);
    // 02dd:241e  mov si, 0x409  [x2]
    c.si.x = (uint16_t)(0x409u);
    // 02dd:2421  mov byte ptr cs:[0x50], 1  [x2]
    c.w8(c.csb + (uint16_t)(0x50u), 0x1u);
    // 02dd:2427  jmp 0x2468  [x2]
    goto L05238;
L05238:
    if (c.tracing) c.traceAt(0x5238);
    // 02dd:2468  mov ax, word ptr cs:[si - 2]  [x3]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0xfffffffeu)));
    // 02dd:246c  mov word ptr cs:[0x48d], ax  [x3]
    c.w16(c.csb + (uint16_t)(0x48du), c.a.x);
    // 02dd:2470  mov di, 0x48e  [x3]
    c.di.x = (uint16_t)(0x48eu);
    // 02dd:2473  mov cx, 0x80  [x3]
    c.c.x = (uint16_t)(0x80u);
L05246:
    if (c.tracing) c.traceAt(0x5246);
    // 02dd:2476  mov al, byte ptr cs:[si]  [x384]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 02dd:2479  mov byte ptr cs:[di], al  [x384]
    c.w8(c.csb + (uint16_t)(c.di.x), c.a.l);
    // 02dd:247c  inc si  [x384]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 02dd:247d  inc di  [x384]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 02dd:247e  loop 0x2476  [x384]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L05246;
L05250:
    if (c.tracing) c.traceAt(0x5250);
    // 02dd:2480  mov si, 0x48e  [x3]
    c.si.x = (uint16_t)(0x48eu);
    // 02dd:2483  mov cx, 0x80  [x3]
    c.c.x = (uint16_t)(0x80u);
    // 02dd:2486  xor ax, ax  [x3]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L05258:
    if (c.tracing) c.traceAt(0x5258);
    // 02dd:2488  mov al, byte ptr cs:[si]  [x384]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 02dd:248b  cmp al, ah  [x384]
    c.sub<8>(c.a.l, c.a.h, true);
    // 02dd:248d  jb 0x2491  [x384]
    if (c.cf) goto L05261;
L0525f:
    if (c.tracing) c.traceAt(0x525f);
    // 02dd:248f  xchg al, ah  [x59]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.a.h); c.a.h = (uint8_t)(t0); }
L05261:
    if (c.tracing) c.traceAt(0x5261);
    // 02dd:2491  inc si  [x384]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 02dd:2492  loop 0x2488  [x384]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L05258;
L05264:
    if (c.tracing) c.traceAt(0x5264);
    // 02dd:2494  inc ah  [x3]
    c.a.h = (uint8_t)(c.inc<8>(c.a.h, false));
    // 02dd:2496  xor al, al  [x3]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 02dd:2498  mov bx, word ptr cs:[0xf6c]  [x3]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf6cu)));
    // 02dd:249d  mul bx  [x3]
    c.mul16(c.b.x);
    // 02dd:249f  mov si, dx  [x3]
    c.si.x = (uint16_t)(c.dx_.x);
    // 02dd:24a1  mov di, ax  [x3]
    c.di.x = (uint16_t)(c.a.x);
    // 02dd:24a3  mov bx, 0x10  [x3]
    c.b.x = (uint16_t)(0x10u);
    // 02dd:24a6  div bx  [x3]
    while (!c.div16(c.b.x)) { c.d32 = false; c.intr(0, 0x24a6u); }   // #DE: int 0, then again
    // 02dd:24a8  mov bx, ax  [x3]
    c.b.x = (uint16_t)(c.a.x);
    // 02dd:24aa  mov ax, 0x55e  [x3]
    c.a.x = (uint16_t)(0x55eu);
    // 02dd:24ad  mov word ptr cs:[0x1696], ax  [x3]
    c.w16(c.csb + (uint16_t)(0x1696u), c.a.x);
    // 02dd:24b1  mov ds, ax  [x3]
    c.loadDs(c.a.x);
L05283:
    if (c.tracing) c.traceAt(0x5283);
    // 02dd:24b3  dec si  [x4]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 02dd:24b4  js 0x24d1  [x4]
    if (c.sf) goto L052a1;
L05286:
    if (c.tracing) c.traceAt(0x5286);
    // 02dd:24b6  xor dx, dx  [x1]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), true));
    // 02dd:24b8  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
    // 02dd:24bb  call 0x2650  [x1]
    c.push16(0x24beu); code_1(c, 0x5420u); if (c.ip != 0x24beu) c.badReturn(0x528b);
L0528e:
    if (c.tracing) c.traceAt(0x528e);
    // 02dd:24be  mov dx, 0x8000  [x1]
    c.dx_.x = (uint16_t)(0x8000u);
    // 02dd:24c1  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
    // 02dd:24c4  call 0x2650  [x1]
    c.push16(0x24c7u); code_1(c, 0x5420u); if (c.ip != 0x24c7u) c.badReturn(0x5294);
L05297:
    if (c.tracing) c.traceAt(0x5297);
    // 02dd:24c7  mov dx, ds  [x1]
    c.dx_.x = (uint16_t)(c.ds);
    // 02dd:24c9  add dx, 0x1000  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x1000u, true));
    // 02dd:24cd  mov ds, dx  [x1]
    c.loadDs(c.dx_.x);
    // 02dd:24cf  jmp 0x24b3  [x1]
    goto L05283;
L052a1:
    if (c.tracing) c.traceAt(0x52a1);
    // 02dd:24d1  mov cx, di  [x3]
    c.c.x = (uint16_t)(c.di.x);
    // 02dd:24d3  xor dx, dx  [x3]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), true));
    // 02dd:24d5  call 0x2650  [x3]
    c.push16(0x24d8u); code_1(c, 0x5420u); if (c.ip != 0x24d8u) c.badReturn(0x52a5);
L052a8:
    if (c.tracing) c.traceAt(0x52a8);
    // 02dd:24d8  mov cx, 0xf  [x3]
    c.c.x = (uint16_t)(0xfu);
    // 02dd:24db  cmp byte ptr cs:[0x50], 1  [x3]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x50u)), 0x1u, true);
    // 02dd:24e1  jne 0x24e6  [x3]
    if (!c.zf) goto L052b6;
L052b3:
    if (c.tracing) c.traceAt(0x52b3);
    // 02dd:24e3  mov cx, 0x1f  [x3]
    c.c.x = (uint16_t)(0x1fu);
L052b6:
    if (c.tracing) c.traceAt(0x52b6);
    // 02dd:24e6  mov ax, word ptr cs:[0xf6a]  [x3]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf6au)));
    // 02dd:24ea  or ax, ax  [x3]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.a.x), true));
    // 02dd:24ec  je 0x264c  [x3]
    if (c.zf) goto L0541c;
L052c0:
    if (c.tracing) c.traceAt(0x52c0);
    // 02dd:24f0  mov bx, 0x1000  [x3]
    c.b.x = (uint16_t)(0x1000u);
    // 02dd:24f3  mov ax, word ptr cs:[8]  [x3]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x8u)));
    // 02dd:24f7  mov word ptr cs:[0x1694], ax  [x3]
    c.w16(c.csb + (uint16_t)(0x1694u), c.a.x);
    // 02dd:24fb  mov word ptr cs:[0x169a], 0  [x3]
    c.w16(c.csb + (uint16_t)(0x169au), 0x0u);
    // 02dd:2502  mov word ptr cs:[0x169c], 0  [x3]
    c.w16(c.csb + (uint16_t)(0x169cu), 0x0u);
    // 02dd:2509  mov si, 0x7b  [x3]
    c.si.x = (uint16_t)(0x7bu);
    // 02dd:250c  xor bp, bp  [x3]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
L052de:
    if (c.tracing) c.traceAt(0x52de);
    // 02dd:250e  push cx  [x93]
    c.push16(c.c.x);
    // 02dd:250f  mov word ptr cs:[bp + 0xe34], 0  [x93]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xe34u), 0x0u);
    // 02dd:2516  mov cx, word ptr cs:[si]  [x93]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x)));
    // 02dd:2519  add si, 2  [x93]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 02dd:251c  xchg cl, ch  [x93]
    { const uint32_t t0 = c.c.l; c.c.l = (uint8_t)(c.c.h); c.c.h = (uint8_t)(t0); }
    // 02dd:251e  cmp cx, 2  [x93]
    c.sub<16>(c.c.x, 0x2u, true);
    // 02dd:2521  jbe 0x25ae  [x93]
    if ((c.cf || c.zf)) goto L0537e;
L052f5:
    if (c.tracing) c.traceAt(0x52f5);
    // 02dd:2525  shl cx, 1  [x59]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x1u) & 31), false));
    // 02dd:2527  mov word ptr cs:[bp + 0xe34], cx  [x59]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xe34u), c.c.x);
    // 02dd:252c  mov ds, word ptr cs:[0x1694]  [x59]
    c.loadDs(c.r16(c.csb + (uint16_t)(0x1694u)));
    // 02dd:2531  xor dx, dx  [x59]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), true));
    // 02dd:2533  call 0x2650  [x59]
    c.push16(0x2536u); code_1(c, 0x5420u); if (c.ip != 0x2536u) c.badReturn(0x5303);
L05306:
    if (c.tracing) c.traceAt(0x5306);
    // 02dd:2536  push bp  [x59]
    c.push16(c.bp.x);
    // 02dd:2537  mov cx, word ptr cs:[bp + 0xe34]  [x59]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0xe34u)));
    // 02dd:253c  shl bp, 1  [x59]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x1u) & 31), false));
    // 02dd:253e  mov di, word ptr cs:[0x169a]  [x59]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x169au)));
    // 02dd:2543  mov bl, byte ptr cs:[0x169c]  [x59]
    c.b.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0x169cu)));
    // 02dd:2548  mov word ptr cs:[bp + 0xdb8], di  [x59]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xdb8u), c.di.x);
    // 02dd:254d  mov byte ptr cs:[bp + 0xdba], bl  [x59]
    c.w8(c.csb + (uint16_t)(c.bp.x + 0xdbau), c.b.l);
    // 02dd:2552  mov bp, di  [x59]
    c.bp.x = (uint16_t)(c.di.x);
    // 02dd:2554  xor di, di  [x59]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 02dd:2556  mov dx, word ptr cs:[0xf6a]  [x59]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf6au)));
    // 02dd:255b  add dx, 0x103  [x59]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
L0532f:
    if (c.tracing) c.traceAt(0x532f);
    // 02dd:255f  mov al, 0x43  [x924600]
    c.a.l = (uint8_t)(0x43u);
    // 02dd:2561  out dx, al  [x924600]
    c.ip = 0x2562u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
L05332:
    if (c.tracing) c.traceAt(0x5332);
    // 02dd:2562  inc dx  [x924601]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:2563  mov ax, bp  [x924601]
    c.a.x = (uint16_t)(c.bp.x);
    // 02dd:2565  out dx, ax  [x924601]
    c.ip = 0x2566u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:2566  dec dx  [x924601]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, true));
L05337:
    if (c.tracing) c.traceAt(0x5337);
    // 02dd:2567  mov al, 0x44  [x924602]
    c.a.l = (uint8_t)(0x44u);
    // 02dd:2569  out dx, al  [x924602]
    c.ip = 0x256au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
L0533a:
    if (c.tracing) c.traceAt(0x533a);
    // 02dd:256a  add dx, 2  [x924603]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, true));
    // 02dd:256d  mov al, bl  [x924603]
    c.a.l = (uint8_t)(c.b.l);
    // 02dd:256f  out dx, al  [x924603]
    c.ip = 0x2570u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
L05340:
    if (c.tracing) c.traceAt(0x5340);
    // 02dd:2570  add dx, 2  [x924604]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:2573  mov al, byte ptr [di]  [x924604]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:2575  out dx, al  [x924604]
    c.ip = 0x2576u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2576  sub dx, 4  [x924604]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x4u, false));
    // 02dd:2579  inc di  [x924604]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 02dd:257a  add bp, 1  [x924604]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x1u, true));
    // 02dd:257d  adc bl, 0  [x924604]
    c.b.l = (uint8_t)(c.add<8>(c.b.l, 0x0u, true, c.cf));
    // 02dd:2580  loop 0x255f  [x924604]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L0532f;
L05352:
    if (c.tracing) c.traceAt(0x5352);
    // 02dd:2582  dec di  [x59]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, false));
    // 02dd:2583  mov al, 0x43  [x59]
    c.a.l = (uint8_t)(0x43u);
    // 02dd:2585  out dx, al  [x59]
    c.ip = 0x2586u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2586  inc dx  [x59]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02dd:2587  mov ax, bp  [x59]
    c.a.x = (uint16_t)(c.bp.x);
    // 02dd:2589  out dx, ax  [x59]
    c.ip = 0x258au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:258a  dec dx  [x59]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02dd:258b  mov al, 0x44  [x59]
    c.a.l = (uint8_t)(0x44u);
    // 02dd:258d  out dx, al  [x59]
    c.ip = 0x258eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:258e  add dx, 2  [x59]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:2591  mov al, bl  [x59]
    c.a.l = (uint8_t)(c.b.l);
    // 02dd:2593  out dx, al  [x59]
    c.ip = 0x2594u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2594  add dx, 2  [x59]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02dd:2597  mov al, byte ptr [di]  [x59]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 02dd:2599  out dx, al  [x59]
    c.ip = 0x259au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:259a  sub dx, 4  [x59]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x4u, false));
    // 02dd:259d  add bp, 1  [x59]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x1u, true));
    // 02dd:25a0  adc bl, 0  [x59]
    c.b.l = (uint8_t)(c.add<8>(c.b.l, 0x0u, true, c.cf));
    // 02dd:25a3  mov word ptr cs:[0x169a], bp  [x59]
    c.w16(c.csb + (uint16_t)(0x169au), c.bp.x);
    // 02dd:25a8  mov byte ptr cs:[0x169c], bl  [x59]
    c.w8(c.csb + (uint16_t)(0x169cu), c.b.l);
    // 02dd:25ad  pop bp  [x59]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
L0537e:
    if (c.tracing) c.traceAt(0x537e);
    // 02dd:25ae  xor ah, ah  [x93]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 02dd:25b0  mov al, byte ptr cs:[si]  [x93]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 02dd:25b3  inc si  [x93]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 02dd:25b4  mov word ptr cs:[bp + 0xeb0], ax  [x93]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xeb0u), c.a.x);
    // 02dd:25b9  mov al, byte ptr cs:[si]  [x93]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 02dd:25bc  inc si  [x93]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 02dd:25bd  mov byte ptr cs:[bp + 0xe72], al  [x93]
    c.w8(c.csb + (uint16_t)(c.bp.x + 0xe72u), c.a.l);
    // 02dd:25c2  mov dx, word ptr cs:[bp + 0xe34]  [x93]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0xe34u)));
    // 02dd:25c7  mov ax, word ptr cs:[si]  [x93]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x)));
    // 02dd:25ca  add si, 2  [x93]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 02dd:25cd  xchg al, ah  [x93]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.a.h); c.a.h = (uint8_t)(t0); }
    // 02dd:25cf  mov cx, word ptr cs:[si]  [x93]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x)));
    // 02dd:25d2  add si, 2  [x93]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 02dd:25d5  xchg cl, ch  [x93]
    { const uint32_t t0 = c.c.l; c.c.l = (uint8_t)(c.c.h); c.c.h = (uint8_t)(t0); }
    // 02dd:25d7  cmp byte ptr cs:[0x50], 1  [x93]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x50u)), 0x1u, true);
    // 02dd:25dd  jne 0x25e3  [x93]
    if (!c.zf) goto L053b3;
L053af:
    if (c.tracing) c.traceAt(0x53af);
    // 02dd:25df  shl ax, 1  [x93]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 02dd:25e1  shl cx, 1  [x93]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x1u) & 31), false));
L053b3:
    if (c.tracing) c.traceAt(0x53b3);
    // 02dd:25e3  mov word ptr cs:[bp + 0xf2c], cx  [x93]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xf2cu), c.c.x);
    // 02dd:25e8  add cx, ax  [x93]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.a.x, false));
    // 02dd:25ea  cmp cx, dx  [x93]
    c.sub<16>(c.c.x, c.dx_.x, true);
    // 02dd:25ec  jbe 0x25f7  [x93]
    if ((c.cf || c.zf)) goto L053c7;
L053be:
    if (c.tracing) c.traceAt(0x53be);
    // 02dd:25ee  mov cx, dx  [x17]
    c.c.x = (uint16_t)(c.dx_.x);
    // 02dd:25f0  sub cx, ax  [x17]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.a.x, true));
    // 02dd:25f2  mov word ptr cs:[bp + 0xf2c], cx  [x17]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xf2cu), c.c.x);
L053c7:
    if (c.tracing) c.traceAt(0x53c7);
    // 02dd:25f7  mov word ptr cs:[bp + 0xeee], ax  [x93]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xeeeu), c.a.x);
    // 02dd:25fc  add si, 0x16  [x93]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x16u, false));
    // 02dd:25ff  add bp, 2  [x93]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, true));
    // 02dd:2602  pop cx  [x93]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 02dd:2603  dec cx  [x93]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 02dd:2604  je 0x2609  [x93]
    if (c.zf) goto L053d9;
L053d6:
    if (c.tracing) c.traceAt(0x53d6);
    // 02dd:2606  jmp 0x250e  [x90]
    goto L052de;
L053d9:
    if (c.tracing) c.traceAt(0x53d9);
    // 02dd:2609  mov es, word ptr cs:[0x1694]  [x3]
    c.loadEs(c.r16(c.csb + (uint16_t)(0x1694u)));
    // 02dd:260e  clc   [x3]
    c.cf = false;
    // 02dd:260f  mov cx, word ptr cs:[0xf6c]  [x3]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf6cu)));
    // 02dd:2614  mov bx, cx  [x3]
    c.b.x = (uint16_t)(c.c.x);
    // 02dd:2616  shr bx, 1  [x3]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x1u) & 31), false));
    // 02dd:2618  sub bx, 2  [x3]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0x2u, false));
    // 02dd:261b  shl bx, 4  [x3]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x4u) & 31), true));
L053ee:
    if (c.tracing) c.traceAt(0x53ee);
    // 02dd:261e  mov dx, word ptr cs:[0xf6a]  [x20]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf6au)));
    // 02dd:2623  add dx, 0x102  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x102u, false));
    // 02dd:2627  mov al, byte ptr cs:[0xf6c]  [x20]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0xf6cu)));
    // 02dd:262b  sub al, cl  [x20]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.c.l, false));
    // 02dd:262d  out dx, al  [x20]
    c.ip = 0x262eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:262e  mov dx, word ptr cs:[0xf6a]  [x20]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf6au)));
    // 02dd:2633  add dx, 0x103  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02dd:2637  mov al, 0xc  [x20]
    c.a.l = (uint8_t)(0xcu);
    // 02dd:2639  out dx, al  [x20]
    c.ip = 0x263au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:263a  mov dx, word ptr cs:[0xf6a]  [x20]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf6au)));
    // 02dd:263f  add dx, 0x105  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x105u, true));
    // 02dd:2643  mov al, byte ptr cs:[bx + 0x887]  [x20]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.b.x + 0x887u)));
    // 02dd:2648  out dx, al  [x20]
    c.ip = 0x2649u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2649  inc bx  [x20]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 02dd:264a  loop 0x261e  [x20]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L053ee;
L0541c:
    if (c.tracing) c.traceAt(0x541c);
    // 02dd:264c  pop es  [x3]
    c.loadEs((uint16_t)c.pop16());
    // 02dd:264d  pop ds  [x3]
    c.loadDs((uint16_t)c.pop16());
    // 02dd:264e  popaw   [x3]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 02dd:264f  ret   [x3]
    c.ip = c.pop16(); return;
L05420:
    if (c.tracing) c.traceAt(0x5420);
    // 02dd:2650  pushal   [x67]
    { const uint32_t t0 = c.sp.e; c.push32(c.a.e); c.push32(c.c.e); c.push32(c.dx_.e); c.push32(c.b.e); c.push32(t0); c.push32(c.bp.e); c.push32(c.si.e); c.push32(c.di.e); }
    // 02dd:2652  push ds  [x67]
    c.push16(c.ds);
    // 02dd:2653  push es  [x67]
    c.push16(c.es);
    // 02dd:2654  mov ax, ds  [x67]
    c.a.x = (uint16_t)(c.ds);
    // 02dd:2656  mov es, ax  [x67]
    c.loadEs(c.a.x);
    // 02dd:2658  movzx edi, dx  [x67]
    c.di.e = (uint32_t)(c.dx_.x);
    // 02dd:265c  movzx ecx, cx  [x67]
    c.c.e = (uint32_t)(c.c.x);
    // 02dd:2660  xor ax, ax  [x67]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 02dd:2662  mov ds, ax  [x67]
    c.loadDs(c.a.x);
    // 02dd:2664  mov esi, dword ptr cs:[0]  [x67]
    c.si.e = (uint32_t)(c.r32(c.csb + (uint16_t)(0u)));
    // 02dd:266a  add esi, dword ptr cs:[4]  [x67]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.r32(c.csb + (uint16_t)(0x4u)), false));
    // 02dd:2670  add dword ptr cs:[0], ecx  [x67]
    c.w32(c.csb + (uint16_t)(0u), c.add<32>(c.r32(c.csb + (uint16_t)(0u)), c.c.e, true));
L05446:
    if (c.tracing) c.traceAt(0x5446);
    // 02dd:2676  rep movsb byte ptr es:[edi], byte ptr [esi]  [x1100975]
    c.ip = 0x2679u; c.d32 = false; c.movs<8, true>(c.dsb, 1);
L05449:
    if (c.tracing) c.traceAt(0x5449);
    // 02dd:2679  pop es  [x67]
    c.loadEs((uint16_t)c.pop16());
    // 02dd:267a  pop ds  [x67]
    c.loadDs((uint16_t)c.pop16());
    // 02dd:267b  popal   [x67]
    c.di.e = c.pop32(); c.si.e = c.pop32(); c.bp.e = c.pop32(); c.pop32(); c.b.e = c.pop32(); c.dx_.e = c.pop32(); c.c.e = c.pop32(); c.a.e = c.pop32();
    // 02dd:267d  ret   [x67]
    c.ip = c.pop16(); return;
L05469:
    if (c.tracing) c.traceAt(0x5469);
    // 02dd:2699  jmp word ptr cs:[bx + 0x2689]  [x27892]
    t = c.csb + (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x2689u))); goto dispatch;
L0546e:
    if (c.tracing) c.traceAt(0x546e);
    // 02dd:269e  mov ah, byte ptr cs:[0xf74]  [x1452]
    c.a.h = (uint8_t)(c.r8(c.csb + (uint16_t)(0xf74u)));
    // 02dd:26a3  mov al, byte ptr cs:[0xf72]  [x1452]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0xf72u)));
    // 02dd:26a7  iret   [x1452]
    c.iret(); return;
L05478:
    if (c.tracing) c.traceAt(0x5478);
    // 02dd:26a8  call 0x2308  [x3]
    c.push16(0x26abu); code_1(c, 0x50d8u); if (c.ip != 0x26abu) c.badReturn(0x5478);
L0547b:
    if (c.tracing) c.traceAt(0x547b);
    // 02dd:26ab  iret   [x3]
    c.iret(); return;
L0547c:
    if (c.tracing) c.traceAt(0x547c);
    // 02dd:26ac  call 0x22c2  [x3]
    c.push16(0x26afu); code_1(c, 0x5092u); if (c.ip != 0x26afu) c.badReturn(0x547c);
L0547f:
    if (c.tracing) c.traceAt(0x547f);
    // 02dd:26af  iret   [x3]
    c.iret(); return;
L05480:
    if (c.tracing) c.traceAt(0x5480);
    // 02dd:26b0  sti   [x3]
    c.ip = 0x26b1u; c.d32 = false; c.m.sti();
L05481:
    if (c.tracing) c.traceAt(0x5481);
    // 02dd:26b1  push ds  [x3]
    c.push16(c.ds);
L05482:
    if (c.tracing) c.traceAt(0x5482);
    // 02dd:26b2  push cs  [x3]
    c.push16(c.cs);
    // 02dd:26b3  pop ds  [x3]
    c.loadDs((uint16_t)c.pop16());
    // 02dd:26b4  mov dword ptr cs:[4], eax  [x3]
    c.w32(c.csb + (uint16_t)(0x4u), c.a.e);
    // 02dd:26b9  mov word ptr cs:[8], cx  [x3]
    c.w16(c.csb + (uint16_t)(0x8u), c.c.x);
    // 02dd:26be  xor ax, ax  [x3]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 02dd:26c0  mov word ptr cs:[0], ax  [x3]
    c.w16(c.csb + (uint16_t)(0u), c.a.x);
    // 02dd:26c4  mov word ptr cs:[2], ax  [x3]
    c.w16(c.csb + (uint16_t)(0x2u), c.a.x);
    // 02dd:26c8  call 0x2356  [x3]
    c.push16(0x26cbu); code_1(c, 0x5126u); if (c.ip != 0x26cbu) c.badReturn(0x5498);
L0549b:
    if (c.tracing) c.traceAt(0x549b);
    // 02dd:26cb  pop ds  [x3]
    c.loadDs((uint16_t)c.pop16());
    // 02dd:26cc  iret   [x3]
    c.iret(); return;
L0549d:
    if (c.tracing) c.traceAt(0x549d);
    // 02dd:26cd  mov byte ptr cs:[0xf76], al  [x512]
    c.w8(c.csb + (uint16_t)(0xf76u), c.a.l);
    // 02dd:26d1  iret   [x512]
    c.iret(); return;
L054c6:
    if (c.tracing) c.traceAt(0x54c6);
    // 02dd:26f6  sti   [x12]
    c.ip = 0x26f7u; c.d32 = false; c.m.sti();
L054c7:
    if (c.tracing) c.traceAt(0x54c7);
    // 02dd:26f7  mov word ptr cs:[0x34], 0  [x12]
    c.w16(c.csb + (uint16_t)(0x34u), 0x0u);
L054ce:
    if (c.tracing) c.traceAt(0x54ce);
    // 02dd:26fe  mov bx, ax  [x12]
    c.b.x = (uint16_t)(c.a.x);
    // 02dd:2700  mov ax, word ptr cs:[bx + 0x26d2]  [x12]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x26d2u)));
    // 02dd:2705  int 0x10  [x12]
    c.ip = 0x2707u; c.d32 = false; c.intr(0x10, 0x2707u);
L054d7:
    if (c.tracing) c.traceAt(0x54d7);
    // 02dd:2707  mov dx, 0x3da  [x12]
    c.dx_.x = (uint16_t)(0x3dau);
L054da:
    if (c.tracing) c.traceAt(0x54da);
    // 02dd:270a  in al, dx  [x30]
    c.ip = 0x270bu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L054db:
    if (c.tracing) c.traceAt(0x54db);
    // 02dd:270b  test al, 8  [x40]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 02dd:270d  jne 0x270a  [x40]
    if (!c.zf) goto L054da;
L054df:
    if (c.tracing) c.traceAt(0x54df);
    // 02dd:270f  in al, dx  [x12]
    c.ip = 0x2710u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02dd:2710  test al, 8  [x12]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 02dd:2712  jne 0x270f  [x12]
    if (!c.zf) goto L054df;
L054e4:
    if (c.tracing) c.traceAt(0x54e4);
    // 02dd:2714  mov word ptr cs:[0x28], 1  [x12]
    c.w16(c.csb + (uint16_t)(0x28u), 0x1u);
    // 02dd:271b  call word ptr cs:[bx + 0x26ea]  [x12]
    c.push16(0x2720u); code_1(c, c.csb + (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x26eau)))); if (c.ip != 0x2720u) c.badReturn(0x54eb);
L054f0:
    if (c.tracing) c.traceAt(0x54f0);
    // 02dd:2720  mov ax, word ptr cs:[bx + 0x26de]  [x12]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x26deu)));
    // 02dd:2725  mov word ptr cs:[0x2a], ax  [x12]
    c.w16(c.csb + (uint16_t)(0x2au), c.a.x);
    // 02dd:2729  dec ax  [x12]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, false));
    // 02dd:272a  push ax  [x12]
    c.push16(c.a.x);
    // 02dd:272b  add ax, ax  [x12]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.a.x, true));
    // 02dd:272d  mov bx, ax  [x12]
    c.b.x = (uint16_t)(c.a.x);
    // 02dd:272f  mov ax, word ptr cs:[bx + 0x2c]  [x12]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x2cu)));
    // 02dd:2734  mov word ptr cs:[0x20], ax  [x12]
    c.w16(c.csb + (uint16_t)(0x20u), c.a.x);
    // 02dd:2738  pop ax  [x12]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 02dd:2739  dec ax  [x12]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, true));
    // 02dd:273a  mov word ptr cs:[0x3a], 0  [x12]
    c.w16(c.csb + (uint16_t)(0x3au), 0x0u);
    // 02dd:2741  mov word ptr cs:[0x34], ax  [x12]
    c.w16(c.csb + (uint16_t)(0x34u), c.a.x);
    // 02dd:2745  iret   [x12]
    c.iret(); return;
L05516:
    if (c.tracing) c.traceAt(0x5516);
    // 02dd:2746  ret   [x4]
    c.ip = c.pop16(); return;
L05517:
    if (c.tracing) c.traceAt(0x5517);
    // 02dd:2747  push cx  [x8]
    c.push16(c.c.x);
    // 02dd:2748  mov dx, 0x3c4  [x8]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 02dd:274b  mov ax, 0x604  [x8]
    c.a.x = (uint16_t)(0x604u);
    // 02dd:274e  out dx, ax  [x8]
    c.ip = 0x274fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:274f  mov ax, 0xa000  [x8]
    c.a.x = (uint16_t)(0xa000u);
    // 02dd:2752  push es  [x8]
    c.push16(c.es);
    // 02dd:2753  mov es, ax  [x8]
    c.loadEs(c.a.x);
    // 02dd:2755  xor di, di  [x8]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 02dd:2757  xor eax, eax  [x8]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), true));
    // 02dd:275a  mov cx, 0x4000  [x8]
    c.c.x = (uint16_t)(0x4000u);
L0552d:
    if (c.tracing) c.traceAt(0x552d);
    // 02dd:275d  rep stosd dword ptr es:[di], eax  [x131080]
    c.stos<32, false>(1);
L05530:
    if (c.tracing) c.traceAt(0x5530);
    // 02dd:2760  pop es  [x8]
    c.loadEs((uint16_t)c.pop16());
    // 02dd:2761  mov dx, 0x3c2  [x8]
    c.dx_.x = (uint16_t)(0x3c2u);
    // 02dd:2764  mov al, 0xe3  [x8]
    c.a.l = (uint8_t)(0xe3u);
    // 02dd:2766  out dx, al  [x8]
    c.ip = 0x2767u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02dd:2767  mov dx, 0x3d4  [x8]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 02dd:276a  pop cx  [x8]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 02dd:276b  cld   [x8]
    c.df = false;
    // 02dd:276c  push ds  [x8]
    c.push16(c.ds);
    // 02dd:276d  push cs  [x8]
    c.push16(c.cs);
    // 02dd:276e  pop ds  [x8]
    c.loadDs((uint16_t)c.pop16());
L0553f:
    if (c.tracing) c.traceAt(0x553f);
    // 02dd:276f  rep outsw dx, word ptr [si]  [x79]
    c.ip = 0x2771u; c.d32 = false; c.outs<16, false>(c.dsb, 1);
L05541:
    if (c.tracing) c.traceAt(0x5541);
    // 02dd:2771  pop ds  [x8]
    c.loadDs((uint16_t)c.pop16());
    // 02dd:2772  ret   [x8]
    c.ip = c.pop16(); return;
L05557:
    if (c.tracing) c.traceAt(0x5557);
    // 02dd:2787  mov si, 0x2773  [x5]
    c.si.x = (uint16_t)(0x2773u);
    // 02dd:278a  mov cx, 0xa  [x5]
    c.c.x = (uint16_t)(0xau);
    // 02dd:278d  call 0x2747  [x5]
    c.push16(0x2790u); code_1(c, 0x5517u); if (c.ip != 0x2790u) c.badReturn(0x555d);
L05560:
    if (c.tracing) c.traceAt(0x5560);
    // 02dd:2790  ret   [x5]
    c.ip = c.pop16(); return;
L0556f:
    if (c.tracing) c.traceAt(0x556f);
    // 02dd:279f  xor bx, bx  [x3]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 02dd:27a1  int 0xfb  [x3]
    c.ip = 0x27a3u; c.d32 = false; c.intr(0xfb, 0x27a3u);
L05573:
    if (c.tracing) c.traceAt(0x5573);
    // 02dd:27a3  mov si, 0x2791  [x3]
    c.si.x = (uint16_t)(0x2791u);
    // 02dd:27a6  mov cx, 7  [x3]
    c.c.x = (uint16_t)(0x7u);
    // 02dd:27a9  call 0x2747  [x3]
    c.push16(0x27acu); code_1(c, 0x5517u); if (c.ip != 0x27acu) c.badReturn(0x5579);
L0557c:
    if (c.tracing) c.traceAt(0x557c);
    // 02dd:27ac  mov dx, 0x3c4  [x3]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 02dd:27af  mov ax, 0xe04  [x3]
    c.a.x = (uint16_t)(0xe04u);
    // 02dd:27b2  out dx, ax  [x3]
    c.ip = 0x27b3u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02dd:27b3  xor ax, ax  [x3]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 02dd:27b5  mov bx, 2  [x3]
    c.b.x = (uint16_t)(0x2u);
    // 02dd:27b8  int 0xfb  [x3]
    c.ip = 0x27bau; c.d32 = false; c.intr(0xfb, 0x27bau);
L0558a:
    if (c.tracing) c.traceAt(0x558a);
    // 02dd:27ba  xor ax, ax  [x3]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 02dd:27bc  mov bx, 4  [x3]
    c.b.x = (uint16_t)(0x4u);
    // 02dd:27bf  int 0xfb  [x3]
    c.ip = 0x27c1u; c.d32 = false; c.intr(0xfb, 0x27c1u);
L05591:
    if (c.tracing) c.traceAt(0x5591);
    // 02dd:27c1  ret   [x3]
    c.ip = c.pop16(); return;
L05592:
    if (c.tracing) c.traceAt(0x5592);
    // 02dd:27c2  mov al, 0x36  [x1]
    c.a.l = (uint8_t)(0x36u);
    // 02dd:27c4  out 0x43, al  [x1]
    c.ip = 0x27c6u; c.d32 = false; c.out8(0x43, c.a.l);
    // 02dd:27c6  jmp 0x27c8  [x1]
    goto L05598;
L05598:
    if (c.tracing) c.traceAt(0x5598);
    // 02dd:27c8  jmp 0x27ca  [x1]
    goto L0559a;
L0559a:
    if (c.tracing) c.traceAt(0x559a);
    // 02dd:27ca  jmp 0x27cc  [x1]
    goto L0559c;
L0559c:
    if (c.tracing) c.traceAt(0x559c);
    // 02dd:27cc  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 02dd:27ce  out 0x40, al  [x1]
    c.ip = 0x27d0u; c.d32 = false; c.out8(0x40, c.a.l);
    // 02dd:27d0  jmp 0x27d2  [x1]
    goto L055a2;
L055a2:
    if (c.tracing) c.traceAt(0x55a2);
    // 02dd:27d2  jmp 0x27d4  [x1]
    goto L055a4;
L055a4:
    if (c.tracing) c.traceAt(0x55a4);
    // 02dd:27d4  jmp 0x27d6  [x1]
    goto L055a6;
L055a6:
    if (c.tracing) c.traceAt(0x55a6);
    // 02dd:27d6  out 0x40, al  [x1]
    c.ip = 0x27d8u; c.d32 = false; c.out8(0x40, c.a.l);
    // 02dd:27d8  jmp 0x27da  [x1]
    goto L055aa;
L055aa:
    if (c.tracing) c.traceAt(0x55aa);
    // 02dd:27da  jmp 0x27dc  [x1]
    goto L055ac;
L055ac:
    if (c.tracing) c.traceAt(0x55ac);
    // 02dd:27dc  jmp 0x27de  [x1]
    goto L055ae;
L055ae:
    if (c.tracing) c.traceAt(0x55ae);
    // 02dd:27de  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 02dd:27e0  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 02dd:27e2  mov eax, dword ptr cs:[0x1c]  [x1]
    c.a.e = (uint32_t)(c.r32(c.csb + (uint16_t)(0x1cu)));
    // 02dd:27e7  mov dword ptr [0x20], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x20u), c.a.e);
    // 02dd:27eb  iret   [x1]
    c.iret(); return;
L055bc:
    if (c.tracing) c.traceAt(0x55bc);
    // 02dd:27ec  sti   [x25906]
    c.ip = 0x27edu; c.d32 = false; c.m.sti();
L055bd:
    if (c.tracing) c.traceAt(0x55bd);
    // 02dd:27ed  mov ax, word ptr cs:[0x3a]  [x25906]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x3au)));
L055c1:
    if (c.tracing) c.traceAt(0x55c1);
    // 02dd:27f1  inc ax  [x25906]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L055c2:
    if (c.tracing) c.traceAt(0x55c2);
    // 02dd:27f2  cmp ax, word ptr cs:[0x3a]  [x342034]
    c.ip = 0x27f2u; c.d32 = false; c.m.spinWait();      // (the player's tick wait: on to the next interrupt)
    c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x3au)), true);
    // 02dd:27f7  ja 0x27f2  [x342034]
    if ((!c.cf && !c.zf)) goto L055c2;
L055c9:
    if (c.tracing) c.traceAt(0x55c9);
    // 02dd:27f9  mov word ptr cs:[0x3a], 0  [x25906]
    c.w16(c.csb + (uint16_t)(0x3au), 0x0u);
    // 02dd:2800  iret   [x25906]
    c.iret(); return;
L21de0:
    if (c.tracing) c.traceAt(0x21de0);
    // 21de:0000  cli   [x2]
    c.m.cli();
    // 21de:0001  mov al, 0xb6  [x2]
    c.a.l = (uint8_t)(0xb6u);
    // 21de:0003  out 0x43, al  [x2]
    c.ip = 0x5u; c.d32 = false; c.out8(0x43, c.a.l);
    // 21de:0005  jmp 7  [x2]
    goto L21de7;
L21de7:
    if (c.tracing) c.traceAt(0x21de7);
    // 21de:0007  jmp 9  [x2]
    goto L21de9;
L21de9:
    if (c.tracing) c.traceAt(0x21de9);
    // 21de:0009  jmp 0xb  [x2]
    goto L21deb;
L21deb:
    if (c.tracing) c.traceAt(0x21deb);
    // 21de:000b  xor al, al  [x2]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 21de:000d  out 0x42, al  [x2]
    c.ip = 0xfu; c.d32 = false; c.out8(0x42, c.a.l);
    // 21de:000f  jmp 0x11  [x2]
    goto L21df1;
L21df1:
    if (c.tracing) c.traceAt(0x21df1);
    // 21de:0011  jmp 0x13  [x2]
    goto L21df3;
L21df3:
    if (c.tracing) c.traceAt(0x21df3);
    // 21de:0013  jmp 0x15  [x2]
    goto L21df5;
L21df5:
    if (c.tracing) c.traceAt(0x21df5);
    // 21de:0015  mov dx, 0x3da  [x2]
    c.dx_.x = (uint16_t)(0x3dau);
L21df8:
    if (c.tracing) c.traceAt(0x21df8);
    // 21de:0018  in al, dx  [x7]
    c.ip = 0x19u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L21df9:
    if (c.tracing) c.traceAt(0x21df9);
    // 21de:0019  test al, 8  [x9]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 21de:001b  jne 0x18  [x9]
    if (!c.zf) goto L21df8;
L21dfd:
    if (c.tracing) c.traceAt(0x21dfd);
    // 21de:001d  in al, dx  [x6]
    c.ip = 0x1eu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L21dfe:
    if (c.tracing) c.traceAt(0x21dfe);
    // 21de:001e  test al, 8  [x8]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 21de:0020  je 0x1d  [x8]
    if (c.zf) goto L21dfd;
L21e02:
    if (c.tracing) c.traceAt(0x21e02);
    // 21de:0022  xor al, al  [x2]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 21de:0024  out 0x42, al  [x2]
    c.ip = 0x26u; c.d32 = false; c.out8(0x42, c.a.l);
    // 21de:0026  jmp 0x28  [x2]
    goto L21e08;
L21e08:
    if (c.tracing) c.traceAt(0x21e08);
    // 21de:0028  jmp 0x2a  [x2]
    goto L21e0a;
L21e0a:
    if (c.tracing) c.traceAt(0x21e0a);
    // 21de:002a  jmp 0x2c  [x2]
    goto L21e0c;
L21e0c:
    if (c.tracing) c.traceAt(0x21e0c);
    // 21de:002c  in al, dx  [x6]
    c.ip = 0x2du; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L21e0d:
    if (c.tracing) c.traceAt(0x21e0d);
    // 21de:002d  test al, 8  [x8]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 21de:002f  jne 0x2c  [x8]
    if (!c.zf) goto L21e0c;
L21e11:
    if (c.tracing) c.traceAt(0x21e11);
    // 21de:0031  in al, dx  [x6]
    c.ip = 0x32u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L21e12:
    if (c.tracing) c.traceAt(0x21e12);
    // 21de:0032  test al, 8  [x8]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 21de:0034  je 0x31  [x8]
    if (c.zf) goto L21e11;
L21e16:
    if (c.tracing) c.traceAt(0x21e16);
    // 21de:0036  mov al, 0x80  [x2]
    c.a.l = (uint8_t)(0x80u);
    // 21de:0038  out 0x43, al  [x2]
    c.ip = 0x3au; c.d32 = false; c.out8(0x43, c.a.l);
    // 21de:003a  jmp 0x3c  [x2]
    goto L21e1c;
L21e1c:
    if (c.tracing) c.traceAt(0x21e1c);
    // 21de:003c  jmp 0x3e  [x2]
    goto L21e1e;
L21e1e:
    if (c.tracing) c.traceAt(0x21e1e);
    // 21de:003e  jmp 0x40  [x2]
    goto L21e20;
L21e20:
    if (c.tracing) c.traceAt(0x21e20);
    // 21de:0040  in al, 0x42  [x2]
    c.ip = 0x42u; c.d32 = false; c.a.l = c.in8(0x42);
    // 21de:0042  jmp 0x44  [x2]
    goto L21e24;
L21e24:
    if (c.tracing) c.traceAt(0x21e24);
    // 21de:0044  jmp 0x46  [x2]
    goto L21e26;
L21e26:
    if (c.tracing) c.traceAt(0x21e26);
    // 21de:0046  jmp 0x48  [x2]
    goto L21e28;
L21e28:
    if (c.tracing) c.traceAt(0x21e28);
    // 21de:0048  mov ah, al  [x2]
    c.a.h = (uint8_t)(c.a.l);
    // 21de:004a  in al, 0x42  [x2]
    c.ip = 0x4cu; c.d32 = false; c.a.l = c.in8(0x42);
    // 21de:004c  jmp 0x4e  [x2]
    goto L21e2e;
L21e2e:
    if (c.tracing) c.traceAt(0x21e2e);
    // 21de:004e  jmp 0x50  [x2]
    goto L21e30;
L21e30:
    if (c.tracing) c.traceAt(0x21e30);
    // 21de:0050  jmp 0x52  [x2]
    goto L21e32;
L21e32:
    if (c.tracing) c.traceAt(0x21e32);
    // 21de:0052  xchg ah, al  [x2]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 21de:0054  sti   [x2]
    c.ip = 0x55u; c.d32 = false; c.m.sti();
L21e35:
    if (c.tracing) c.traceAt(0x21e35);
    // 21de:0055  ret   [x3]
    c.ip = c.pop16(); return;
L21e36:
    if (c.tracing) c.traceAt(0x21e36);
    // 21de:0056  mov ax, 0x2dd  [x1]
    c.a.x = (uint16_t)(0x2ddu);
    // 21de:0059  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 21de:005b  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 21de:005d  in al, 0x61  [x1]
    c.ip = 0x5fu; c.d32 = false; c.a.l = c.in8(0x61);
    // 21de:005f  and al, 0xfc  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), false));
    // 21de:0061  or al, 1  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), true));
    // 21de:0063  jmp 0x65  [x1]
    goto L21e45;
L21e45:
    if (c.tracing) c.traceAt(0x21e45);
    // 21de:0065  jmp 0x67  [x1]
    goto L21e47;
L21e47:
    if (c.tracing) c.traceAt(0x21e47);
    // 21de:0067  jmp 0x69  [x1]
    goto L21e49;
L21e49:
    if (c.tracing) c.traceAt(0x21e49);
    // 21de:0069  out 0x61, al  [x1]
    c.ip = 0x6bu; c.d32 = false; c.out8(0x61, c.a.l);
    // 21de:006b  jmp 0x6d  [x1]
    goto L21e4d;
L21e4d:
    if (c.tracing) c.traceAt(0x21e4d);
    // 21de:006d  jmp 0x6f  [x1]
    goto L21e4f;
L21e4f:
    if (c.tracing) c.traceAt(0x21e4f);
    // 21de:006f  jmp 0x71  [x1]
    goto L21e51;
L21e51:
    if (c.tracing) c.traceAt(0x21e51);
    // 21de:0071  mov ax, 0x13  [x1]
    c.a.x = (uint16_t)(0x13u);
    // 21de:0074  int 0x10  [x1]
    c.ip = 0x76u; c.d32 = false; c.intr(0x10, 0x76u);
L21e56:
    if (c.tracing) c.traceAt(0x21e56);
    // 21de:0076  call 0  [x1]
    c.push16(0x79u); code_1(c, 0x21de0u); if (c.ip != 0x79u) c.badReturn(0x21e56);
L21e59:
    if (c.tracing) c.traceAt(0x21e59);
    // 21de:0079  sub ax, 0x12f  [x1]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x12fu, true));
    // 21de:007c  mov word ptr [0x36], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x36u), c.a.x);
    // 21de:007f  mov ax, 0x12  [x1]
    c.a.x = (uint16_t)(0x12u);
    // 21de:0082  int 0x10  [x1]
    c.ip = 0x84u; c.d32 = false; c.intr(0x10, 0x84u);
L21e64:
    if (c.tracing) c.traceAt(0x21e64);
    // 21de:0084  call 0  [x1]
    c.push16(0x87u); code_1(c, 0x21de0u); if (c.ip != 0x87u) c.badReturn(0x21e64);
L21e67:
    if (c.tracing) c.traceAt(0x21e67);
    // 21de:0087  sub ax, 0x12f  [x1]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x12fu, false));
    // 21de:008a  mov word ptr [0x38], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x38u), c.a.x);
    // 21de:008d  cli   [x1]
    c.m.cli();
    // 21de:008e  mov word ptr [0x20], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x20u), c.a.x);
    // 21de:0091  add ax, 0x12f  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x12fu, false));
    // 21de:0094  neg ax  [x1]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 21de:0096  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 21de:009a  imul eax, eax, 0x1249  [x1]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x1249u));
    // 21de:00a1  shr eax, 0x10  [x1]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), false));
    // 21de:00a5  sub ax, 0x14  [x1]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x14u, false));
    // 21de:00a8  mov word ptr [0x24], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x24u), c.a.x);
    // 21de:00ab  sub ax, 0x96  [x1]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x96u, true));
    // 21de:00ae  mov word ptr [0x26], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x26u), c.a.x);
    // 21de:00b1  mov al, 0x36  [x1]
    c.a.l = (uint8_t)(0x36u);
    // 21de:00b3  out 0x43, al  [x1]
    c.ip = 0xb5u; c.d32 = false; c.out8(0x43, c.a.l);
    // 21de:00b5  jmp 0xb7  [x1]
    goto L21e97;
L21e97:
    if (c.tracing) c.traceAt(0x21e97);
    // 21de:00b7  jmp 0xb9  [x1]
    goto L21e99;
L21e99:
    if (c.tracing) c.traceAt(0x21e99);
    // 21de:00b9  jmp 0xbb  [x1]
    goto L21e9b;
L21e9b:
    if (c.tracing) c.traceAt(0x21e9b);
    // 21de:00bb  mov word ptr [0x28], 1  [x1]
    c.w16(c.dsb + (uint16_t)(0x28u), 0x1u);
    // 21de:00c1  mov word ptr [0x2a], 7  [x1]
    c.w16(c.dsb + (uint16_t)(0x2au), 0x7u);
    // 21de:00c7  mov ax, 0xb18  [x1]
    c.a.x = (uint16_t)(0xb18u);
    // 21de:00ca  out 0x40, al  [x1]
    c.ip = 0xccu; c.d32 = false; c.out8(0x40, c.a.l);
    // 21de:00cc  jmp 0xce  [x1]
    goto L21eae;
L21eae:
    if (c.tracing) c.traceAt(0x21eae);
    // 21de:00ce  jmp 0xd0  [x1]
    goto L21eb0;
L21eb0:
    if (c.tracing) c.traceAt(0x21eb0);
    // 21de:00d0  jmp 0xd2  [x1]
    goto L21eb2;
L21eb2:
    if (c.tracing) c.traceAt(0x21eb2);
    // 21de:00d2  mov al, ah  [x1]
    c.a.l = (uint8_t)(c.a.h);
    // 21de:00d4  out 0x40, al  [x1]
    c.ip = 0xd6u; c.d32 = false; c.out8(0x40, c.a.l);
    // 21de:00d6  jmp 0xd8  [x1]
    goto L21eb8;
L21eb8:
    if (c.tracing) c.traceAt(0x21eb8);
    // 21de:00d8  jmp 0xda  [x1]
    goto L21eba;
L21eba:
    if (c.tracing) c.traceAt(0x21eba);
    // 21de:00da  jmp 0xdc  [x1]
    goto L21ebc;
L21ebc:
    if (c.tracing) c.traceAt(0x21ebc);
    // 21de:00dc  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 21de:00de  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 21de:00e0  mov bx, word ptr es:[0x20]  [x1]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x20u)));
    // 21de:00e5  mov ax, word ptr es:[0x22]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x22u)));
    // 21de:00e9  mov word ptr [0x1c], bx  [x1]
    c.w16(c.dsb + (uint16_t)(0x1cu), c.b.x);
    // 21de:00ed  mov word ptr [0x1e], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x1eu), c.a.x);
    // 21de:00f0  mov word ptr es:[0x20], 0x21b5  [x1]
    c.w16(c.esb + (uint16_t)(0x20u), 0x21b5u);
    // 21de:00f7  mov word ptr es:[0x22], ds  [x1]
    c.w16(c.esb + (uint16_t)(0x22u), c.ds);
    // 21de:00fc  sti   [x1]
    c.ip = 0xfdu; c.d32 = false; c.m.sti();
L21edd:
    if (c.tracing) c.traceAt(0x21edd);
    // 21de:00fd  mov ax, 0x2dd  [x1]
    c.a.x = (uint16_t)(0x2ddu);
L21ee0:
    if (c.tracing) c.traceAt(0x21ee0);
    // 21de:0100  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 21de:0102  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 21de:0104  mov si, 0xd8  [x1]
    c.si.x = (uint16_t)(0xd8u);
    // 21de:0107  mov bp, 0x6c  [x1]
    c.bp.x = (uint16_t)(0x6cu);
    // 21de:010a  mov cx, 0x321  [x1]
    c.c.x = (uint16_t)(0x321u);
L21eed:
    if (c.tracing) c.traceAt(0x21eed);
    // 21de:010d  mov dx, 0x36  [x801]
    c.dx_.x = (uint16_t)(0x36u);
    // 21de:0110  mov ax, 0x9de4  [x801]
    c.a.x = (uint16_t)(0x9de4u);
    // 21de:0113  div bp  [x801]
    while (!c.div16(c.bp.x)) { c.d32 = false; c.intr(0, 0x113u); }   // #DE: int 0, then again
    // 21de:0115  mov dx, 0x64  [x801]
    c.dx_.x = (uint16_t)(0x64u);
    // 21de:0118  mul dx  [x801]
    c.mul16(c.dx_.x);
    // 21de:011a  mov bx, 0xbd6  [x801]
    c.b.x = (uint16_t)(0xbd6u);
    // 21de:011d  div bx  [x801]
    while (!c.div16(c.b.x)) { c.d32 = false; c.intr(0, 0x11du); }   // #DE: int 0, then again
    // 21de:011f  shr bx, 1  [x801]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x1u) & 31), true));
    // 21de:0121  adc bx, 0  [x801]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x0u, false, c.cf));
    // 21de:0124  cmp dx, bx  [x801]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 21de:0126  jb 0x129  [x801]
    if (c.cf) goto L21f09;
L21f08:
    if (c.tracing) c.traceAt(0x21f08);
    // 21de:0128  inc ax  [x400]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L21f09:
    if (c.tracing) c.traceAt(0x21f09);
    // 21de:0129  mov word ptr [si + 0xf78], ax  [x801]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xf78u), c.a.x);
    // 21de:012d  inc bp  [x801]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, false));
    // 21de:012e  add si, 2  [x801]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 21de:0131  loop 0x10d  [x801]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L21eed;
L21f13:
    if (c.tracing) c.traceAt(0x21f13);
    // 21de:0133  mov si, 0xc  [x1]
    c.si.x = (uint16_t)(0xcu);
    // 21de:0136  push si  [x1]
    c.push16(c.si.x);
    // 21de:0137  mov al, 0x4c  [x1]
    c.a.l = (uint8_t)(0x4cu);
    // 21de:0139  mov dx, word ptr [0xf6a]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:013d  add dx, 0x103  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
    // 21de:0141  out dx, al  [x1]
    c.ip = 0x142u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0142  jmp 0x144  [x1]
    goto L21f24;
L21f24:
    if (c.tracing) c.traceAt(0x21f24);
    // 21de:0144  jmp 0x146  [x1]
    goto L21f26;
L21f26:
    if (c.tracing) c.traceAt(0x21f26);
    // 21de:0146  jmp 0x148  [x1]
    goto L21f28;
L21f28:
    if (c.tracing) c.traceAt(0x21f28);
    // 21de:0148  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 21de:014a  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 21de:014b  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 21de:014c  out dx, al  [x1]
    c.ip = 0x14du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:014d  mov cx, 0x3e8  [x1]
    c.c.x = (uint16_t)(0x3e8u);
L21f30:
    if (c.tracing) c.traceAt(0x21f30);
    // 21de:0150  loop 0x150  [x1000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L21f30;
L21f32:
    if (c.tracing) c.traceAt(0x21f32);
    // 21de:0152  inc al  [x1]
    c.a.l = (uint8_t)(c.inc<8>(c.a.l, true));
    // 21de:0154  out dx, al  [x1]
    c.ip = 0x155u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0155  mov cx, 0x3e8  [x1]
    c.c.x = (uint16_t)(0x3e8u);
L21f38:
    if (c.tracing) c.traceAt(0x21f38);
    // 21de:0158  loop 0x158  [x1000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L21f38;
L21f3a:
    if (c.tracing) c.traceAt(0x21f3a);
    // 21de:015a  mov al, 0x43  [x1]
    c.a.l = (uint8_t)(0x43u);
    // 21de:015c  mov dx, word ptr [0xf6a]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:0160  add dx, 0x103  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
    // 21de:0164  out dx, al  [x1]
    c.ip = 0x165u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0165  jmp 0x167  [x1]
    goto L21f47;
L21f47:
    if (c.tracing) c.traceAt(0x21f47);
    // 21de:0167  jmp 0x169  [x1]
    goto L21f49;
L21f49:
    if (c.tracing) c.traceAt(0x21f49);
    // 21de:0169  jmp 0x16b  [x1]
    goto L21f4b;
L21f4b:
    if (c.tracing) c.traceAt(0x21f4b);
    // 21de:016b  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 21de:016d  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 21de:016e  out dx, ax  [x1]
    c.ip = 0x16fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 21de:016f  jmp 0x171  [x1]
    goto L21f51;
L21f51:
    if (c.tracing) c.traceAt(0x21f51);
    // 21de:0171  jmp 0x173  [x1]
    goto L21f53;
L21f53:
    if (c.tracing) c.traceAt(0x21f53);
    // 21de:0173  jmp 0x175  [x1]
    goto L21f55;
L21f55:
    if (c.tracing) c.traceAt(0x21f55);
    // 21de:0175  mov al, 0x44  [x1]
    c.a.l = (uint8_t)(0x44u);
    // 21de:0177  dec dx  [x1]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, true));
    // 21de:0178  out dx, al  [x1]
    c.ip = 0x179u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0179  jmp 0x17b  [x1]
    goto L21f5b;
L21f5b:
    if (c.tracing) c.traceAt(0x21f5b);
    // 21de:017b  jmp 0x17d  [x1]
    goto L21f5d;
L21f5d:
    if (c.tracing) c.traceAt(0x21f5d);
    // 21de:017d  jmp 0x17f  [x1]
    goto L21f5f;
L21f5f:
    if (c.tracing) c.traceAt(0x21f5f);
    // 21de:017f  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 21de:0181  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 21de:0182  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 21de:0183  out dx, al  [x1]
    c.ip = 0x184u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0184  jmp 0x186  [x1]
    goto L21f66;
L21f66:
    if (c.tracing) c.traceAt(0x21f66);
    // 21de:0186  jmp 0x188  [x1]
    goto L21f68;
L21f68:
    if (c.tracing) c.traceAt(0x21f68);
    // 21de:0188  jmp 0x18a  [x1]
    goto L21f6a;
L21f6a:
    if (c.tracing) c.traceAt(0x21f6a);
    // 21de:018a  mov al, 0xaa  [x1]
    c.a.l = (uint8_t)(0xaau);
    // 21de:018c  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 21de:018d  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 21de:018e  out dx, al  [x1]
    c.ip = 0x18fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:018f  jmp 0x191  [x1]
    goto L21f71;
L21f71:
    if (c.tracing) c.traceAt(0x21f71);
    // 21de:0191  jmp 0x193  [x1]
    goto L21f73;
L21f73:
    if (c.tracing) c.traceAt(0x21f73);
    // 21de:0193  jmp 0x195  [x1]
    goto L21f75;
L21f75:
    if (c.tracing) c.traceAt(0x21f75);
    // 21de:0195  mov al, 0x43  [x1]
    c.a.l = (uint8_t)(0x43u);
    // 21de:0197  mov dx, word ptr [0xf6a]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:019b  add dx, 0x103  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
    // 21de:019f  out dx, al  [x1]
    c.ip = 0x1a0u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:01a0  jmp 0x1a2  [x1]
    goto L21f82;
L21f82:
    if (c.tracing) c.traceAt(0x21f82);
    // 21de:01a2  jmp 0x1a4  [x1]
    goto L21f84;
L21f84:
    if (c.tracing) c.traceAt(0x21f84);
    // 21de:01a4  jmp 0x1a6  [x1]
    goto L21f86;
L21f86:
    if (c.tracing) c.traceAt(0x21f86);
    // 21de:01a6  mov ax, 1  [x1]
    c.a.x = (uint16_t)(0x1u);
    // 21de:01a9  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 21de:01aa  out dx, ax  [x1]
    c.ip = 0x1abu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 21de:01ab  jmp 0x1ad  [x1]
    goto L21f8d;
L21f8d:
    if (c.tracing) c.traceAt(0x21f8d);
    // 21de:01ad  jmp 0x1af  [x1]
    goto L21f8f;
L21f8f:
    if (c.tracing) c.traceAt(0x21f8f);
    // 21de:01af  jmp 0x1b1  [x1]
    goto L21f91;
L21f91:
    if (c.tracing) c.traceAt(0x21f91);
    // 21de:01b1  mov al, 0x55  [x1]
    c.a.l = (uint8_t)(0x55u);
    // 21de:01b3  add dx, 3  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x3u, true));
    // 21de:01b6  out dx, al  [x1]
    c.ip = 0x1b7u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:01b7  jmp 0x1b9  [x1]
    goto L21f99;
L21f99:
    if (c.tracing) c.traceAt(0x21f99);
    // 21de:01b9  jmp 0x1bb  [x1]
    goto L21f9b;
L21f9b:
    if (c.tracing) c.traceAt(0x21f9b);
    // 21de:01bb  jmp 0x1bd  [x1]
    goto L21f9d;
L21f9d:
    if (c.tracing) c.traceAt(0x21f9d);
    // 21de:01bd  mov al, 0x43  [x1]
    c.a.l = (uint8_t)(0x43u);
    // 21de:01bf  mov dx, word ptr [0xf6a]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:01c3  add dx, 0x103  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
    // 21de:01c7  out dx, al  [x1]
    c.ip = 0x1c8u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:01c8  jmp 0x1ca  [x1]
    goto L21faa;
L21faa:
    if (c.tracing) c.traceAt(0x21faa);
    // 21de:01ca  jmp 0x1cc  [x1]
    goto L21fac;
L21fac:
    if (c.tracing) c.traceAt(0x21fac);
    // 21de:01cc  jmp 0x1ce  [x1]
    goto L21fae;
L21fae:
    if (c.tracing) c.traceAt(0x21fae);
    // 21de:01ce  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 21de:01d0  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 21de:01d1  out dx, ax  [x1]
    c.ip = 0x1d2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 21de:01d2  jmp 0x1d4  [x1]
    goto L21fb4;
L21fb4:
    if (c.tracing) c.traceAt(0x21fb4);
    // 21de:01d4  jmp 0x1d6  [x1]
    goto L21fb6;
L21fb6:
    if (c.tracing) c.traceAt(0x21fb6);
    // 21de:01d6  jmp 0x1d8  [x1]
    goto L21fb8;
L21fb8:
    if (c.tracing) c.traceAt(0x21fb8);
    // 21de:01d8  add dx, 3  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x3u, false));
    // 21de:01db  in al, dx  [x1]
    c.ip = 0x1dcu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:01dc  pop si  [x1]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 21de:01dd  cmp al, 0xaa  [x1]
    c.sub<8>(c.a.l, 0xaau, true);
    // 21de:01df  je 0x1ee  [x1]
    if (c.zf) goto L21fce;
    c.notTranslated(0x21fc1, "fall-through");
L21fce:
    if (c.tracing) c.traceAt(0x21fce);
    // 21de:01ee  mov bx, word ptr [0xf6a]  [x1]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:01f2  mov cx, bx  [x1]
    c.c.x = (uint16_t)(c.b.x);
    // 21de:01f4  add bx, 0x103  [x1]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x103u, false));
    // 21de:01f8  add cx, 0x105  [x1]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, 0x105u, false));
    // 21de:01fc  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 21de:01fe  mov al, 0x4c  [x1]
    c.a.l = (uint8_t)(0x4cu);
    // 21de:0200  out dx, al  [x1]
    c.ip = 0x201u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0201  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 21de:0203  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 21de:0205  out dx, al  [x1]
    c.ip = 0x206u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0206  mov dx, word ptr [0xf6a]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:020a  in al, dx  [x1]
    c.ip = 0x20bu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:020b  in al, dx  [x1]
    c.ip = 0x20cu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:020c  in al, dx  [x1]
    c.ip = 0x20du; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:020d  in al, dx  [x1]
    c.ip = 0x20eu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:020e  in al, dx  [x1]
    c.ip = 0x20fu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:020f  in al, dx  [x1]
    c.ip = 0x210u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:0210  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 21de:0212  mov al, 0x4c  [x1]
    c.a.l = (uint8_t)(0x4cu);
    // 21de:0214  out dx, al  [x1]
    c.ip = 0x215u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0215  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 21de:0217  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 21de:0219  out dx, al  [x1]
    c.ip = 0x21au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:021a  mov dx, word ptr [0xf6a]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:021e  in al, dx  [x1]
    c.ip = 0x21fu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:021f  in al, dx  [x1]
    c.ip = 0x220u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:0220  in al, dx  [x1]
    c.ip = 0x221u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:0221  in al, dx  [x1]
    c.ip = 0x222u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:0222  in al, dx  [x1]
    c.ip = 0x223u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:0223  in al, dx  [x1]
    c.ip = 0x224u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:0224  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 21de:0226  mov al, 0x41  [x1]
    c.a.l = (uint8_t)(0x41u);
    // 21de:0228  out dx, al  [x1]
    c.ip = 0x229u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0229  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 21de:022b  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 21de:022d  out dx, al  [x1]
    c.ip = 0x22eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:022e  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 21de:0230  mov al, 0x45  [x1]
    c.a.l = (uint8_t)(0x45u);
    // 21de:0232  out dx, al  [x1]
    c.ip = 0x233u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0233  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 21de:0235  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 21de:0237  out dx, al  [x1]
    c.ip = 0x238u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0238  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 21de:023a  mov al, 0x49  [x1]
    c.a.l = (uint8_t)(0x49u);
    // 21de:023c  out dx, al  [x1]
    c.ip = 0x23du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:023d  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 21de:023f  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 21de:0241  out dx, al  [x1]
    c.ip = 0x242u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0242  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 21de:0244  mov al, 0xe  [x1]
    c.a.l = (uint8_t)(0xeu);
    // 21de:0246  out dx, al  [x1]
    c.ip = 0x247u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0247  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 21de:0249  mov al, 0x14  [x1]
    c.a.l = (uint8_t)(0x14u);
    // 21de:024b  dec al  [x1]
    c.a.l = (uint8_t)(c.dec<8>(c.a.l, false));
    // 21de:024d  or al, 0xc0  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0xc0u), false));
    // 21de:024f  out dx, al  [x1]
    c.ip = 0x250u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0250  mov dx, word ptr [0xf6a]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:0254  add dx, 6  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x6u, true));
    // 21de:0257  in al, dx  [x1]
    c.ip = 0x258u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:0258  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 21de:025a  mov al, 0x41  [x1]
    c.a.l = (uint8_t)(0x41u);
    // 21de:025c  out dx, al  [x1]
    c.ip = 0x25du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:025d  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 21de:025f  in al, dx  [x1]
    c.ip = 0x260u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:0260  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 21de:0262  mov al, 0x49  [x1]
    c.a.l = (uint8_t)(0x49u);
    // 21de:0264  out dx, al  [x1]
    c.ip = 0x265u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0265  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 21de:0267  in al, dx  [x1]
    c.ip = 0x268u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:0268  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 21de:026a  mov al, 0x8f  [x1]
    c.a.l = (uint8_t)(0x8fu);
    // 21de:026c  out dx, al  [x1]
    c.ip = 0x26du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:026d  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 21de:026f  in al, dx  [x1]
    c.ip = 0x270u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:0270  push cx  [x1]
    c.push16(c.c.x);
    // 21de:0271  mov cx, 0x20  [x1]
    c.c.x = (uint16_t)(0x20u);
L22054:
    if (c.tracing) c.traceAt(0x22054);
    // 21de:0274  mov dx, word ptr [0xf6a]  [x32]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:0278  add dx, 0x102  [x32]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x102u, false));
    // 21de:027c  mov al, cl  [x32]
    c.a.l = (uint8_t)(c.c.l);
    // 21de:027e  dec al  [x32]
    c.a.l = (uint8_t)(c.dec<8>(c.a.l, false));
    // 21de:0280  out dx, al  [x32]
    c.ip = 0x281u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0281  inc dx  [x32]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 21de:0282  xor al, al  [x32]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 21de:0284  out dx, al  [x32]
    c.ip = 0x285u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0285  add dx, 2  [x32]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 21de:0288  mov al, 3  [x32]
    c.a.l = (uint8_t)(0x3u);
    // 21de:028a  out dx, al  [x32]
    c.ip = 0x28bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:028b  sub dx, 2  [x32]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, false));
    // 21de:028e  mov al, 0xd  [x32]
    c.a.l = (uint8_t)(0xdu);
    // 21de:0290  out dx, al  [x32]
    c.ip = 0x291u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0291  add dx, 2  [x32]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, true));
    // 21de:0294  mov al, 3  [x32]
    c.a.l = (uint8_t)(0x3u);
    // 21de:0296  out dx, al  [x32]
    c.ip = 0x297u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0297  loop 0x274  [x32]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L22054;
L22079:
    if (c.tracing) c.traceAt(0x22079);
    // 21de:0299  pop cx  [x1]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 21de:029a  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 21de:029c  mov al, 0x41  [x1]
    c.a.l = (uint8_t)(0x41u);
    // 21de:029e  out dx, al  [x1]
    c.ip = 0x29fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:029f  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 21de:02a1  in al, dx  [x1]
    c.ip = 0x2a2u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:02a2  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 21de:02a4  mov al, 0x49  [x1]
    c.a.l = (uint8_t)(0x49u);
    // 21de:02a6  out dx, al  [x1]
    c.ip = 0x2a7u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:02a7  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 21de:02a9  in al, dx  [x1]
    c.ip = 0x2aau; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:02aa  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 21de:02ac  mov al, 0x8f  [x1]
    c.a.l = (uint8_t)(0x8fu);
    // 21de:02ae  out dx, al  [x1]
    c.ip = 0x2afu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:02af  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 21de:02b1  in al, dx  [x1]
    c.ip = 0x2b2u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 21de:02b2  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 21de:02b4  mov al, 0x4c  [x1]
    c.a.l = (uint8_t)(0x4cu);
    // 21de:02b6  out dx, al  [x1]
    c.ip = 0x2b7u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:02b7  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 21de:02b9  mov al, 7  [x1]
    c.a.l = (uint8_t)(0x7u);
    // 21de:02bb  out dx, al  [x1]
    c.ip = 0x2bcu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:02bc  mov cx, 0x14  [x1]
    c.c.x = (uint16_t)(0x14u);
L2209f:
    if (c.tracing) c.traceAt(0x2209f);
    // 21de:02bf  mov dx, word ptr [0xf6a]  [x20]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:02c3  add dx, 0x102  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x102u, false));
    // 21de:02c7  mov al, 0x14  [x20]
    c.a.l = (uint8_t)(0x14u);
    // 21de:02c9  sub al, cl  [x20]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.c.l, false));
    // 21de:02cb  out dx, al  [x20]
    c.ip = 0x2ccu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:02cc  mov dx, word ptr [0xf6a]  [x20]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:02d0  add dx, 0x103  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 21de:02d4  mov al, 6  [x20]
    c.a.l = (uint8_t)(0x6u);
    // 21de:02d6  out dx, al  [x20]
    c.ip = 0x2d7u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:02d7  mov al, 0x3f  [x20]
    c.a.l = (uint8_t)(0x3fu);
    // 21de:02d9  mov dx, word ptr [0xf6a]  [x20]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:02dd  add dx, 0x105  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x105u, false));
    // 21de:02e1  out dx, al  [x20]
    c.ip = 0x2e2u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:02e2  mov dx, word ptr [0xf6a]  [x20]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:02e6  add dx, 0x103  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 21de:02ea  mov al, 9  [x20]
    c.a.l = (uint8_t)(0x9u);
    // 21de:02ec  out dx, al  [x20]
    c.ip = 0x2edu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:02ed  mov ax, word ptr [0xd38]  [x20]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd38u)));
    // 21de:02f0  mov dx, word ptr [0xf6a]  [x20]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:02f4  add dx, 0x104  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x104u, true));
    // 21de:02f8  out dx, ax  [x20]
    c.ip = 0x2f9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 21de:02f9  loop 0x2bf  [x20]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L2209f;
L220db:
    if (c.tracing) c.traceAt(0x220db);
    // 21de:02fb  mov dx, word ptr [0xf6a]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf6au)));
    // 21de:02ff  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 21de:0301  out dx, al  [x1]
    c.ip = 0x302u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 21de:0302  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 21de:0304  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 21de:0306  mov word ptr es:[0x3fc], 0x2699  [x1]
    c.w16(c.esb + (uint16_t)(0x3fcu), 0x2699u);
    // 21de:030d  mov word ptr es:[0x3fe], ds  [x1]
    c.w16(c.esb + (uint16_t)(0x3feu), c.ds);
    // 21de:0312  mov bl, 3  [x1]
    c.b.l = (uint8_t)(0x3u);
    // 21de:0314  xor cx, cx  [x1]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), true));
L220f6:
    if (c.tracing) c.traceAt(0x220f6);
    // 21de:0316  in al, 0x64  [x3]
    c.ip = 0x318u; c.d32 = false; c.a.l = c.in8(0x64);
    // 21de:0318  test al, 2  [x3]
    c.logic<8>((c.a.l) & (0x2u), true);
    // 21de:031a  loopne 0x316  [x3]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x && !c.zf) goto L220f6;
L220fc:
    if (c.tracing) c.traceAt(0x220fc);
    // 21de:031c  mov al, 0xad  [x3]
    c.a.l = (uint8_t)(0xadu);
    // 21de:031e  out 0x64, al  [x3]
    c.ip = 0x320u; c.d32 = false; c.out8(0x64, c.a.l);
    // 21de:0320  dec bl  [x3]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
    // 21de:0322  jne 0x316  [x3]
    if (!c.zf) goto L220f6;
L22104:
    if (c.tracing) c.traceAt(0x22104);
    // 21de:0324  mov ax, 0x3100  [x1]
    c.a.x = (uint16_t)(0x3100u);
    // 21de:0327  mov dx, 0x1f11  [x1]
    c.dx_.x = (uint16_t)(0x1f11u);
    // 21de:032a  int 0x21  [x1]
    c.ip = 0x32cu; c.d32 = false; c.intr(0x21, 0x32cu);
    c.notTranslated(0x2210c, "fall-through");
}

static Register reg01(1, {0x45fe, 0x4604, 0x4607, 0x460e, 0x4621, 0x4626, 0x462d, 0x4630, 0x4639, 0x463f, 0x465f, 0x4674, 0x467a, 0x4689, 0x469e, 0x46a0, 0x46af, 0x46bd, 0x46c3, 0x46c6, 0x46ca, 0x46d0, 0x46d4, 0x46d6, 0x46e5, 0x471e, 0x4720, 0x4729, 0x472f, 0x473d, 0x4750, 0x4756, 0x4766, 0x476c, 0x476f, 0x4773, 0x4779, 0x477d, 0x477f, 0x478e, 0x47a1, 0x47a7, 0x47e9, 0x47eb, 0x47f4, 0x47fa, 0x4807, 0x4813, 0x4817, 0x481e, 0x4820, 0x4824, 0x4826, 0x486d, 0x4873, 0x4876, 0x4879, 0x4886, 0x4899, 0x48d1, 0x48dc, 0x48f3, 0x490a, 0x490d, 0x4955, 0x4965, 0x4968, 0x4973, 0x4990, 0x4994, 0x49a7, 0x49bd, 0x49cf, 0x49da, 0x49e0, 0x49ec, 0x49f4, 0x49fa, 0x4a08, 0x4a39, 0x4a4f, 0x4a5c, 0x4a60, 0x4a63, 0x4a6c, 0x4a77, 0x4a7a, 0x4a7e, 0x4a81, 0x4a8f, 0x4a9a, 0x4aad, 0x4ab2, 0x4ab4, 0x4aba, 0x4ac7, 0x4ae1, 0x4ae5, 0x4aea, 0x4b0d, 0x4b56, 0x4b5b, 0x4b5f, 0x4b61, 0x4b66, 0x4b6e, 0x4b79, 0x4b7c, 0x4b8c, 0x4b92, 0x4ba3, 0x4ba7, 0x4bb5, 0x4bbb, 0x4bc1, 0x4bc3, 0x4bcb, 0x4bcd, 0x4c07, 0x4c0b, 0x4c26, 0x4c2e, 0x4c3d, 0x4c4b, 0x4c53, 0x4c59, 0x4c5c, 0x4c93, 0x4ce8, 0x4d45, 0x4d4f, 0x4d7f, 0x4d85, 0x4d88, 0x4e22, 0x4e57, 0x4e75, 0x4e8f, 0x4e93, 0x4eb6, 0x4ec7, 0x4ece, 0x4edc, 0x4ef4, 0x4f04, 0x4f85, 0x4f96, 0x4fb2, 0x4fbb, 0x4fbd, 0x4fbf, 0x4fc5, 0x4fc7, 0x4fc9, 0x4fcd, 0x4fcf, 0x4fd1, 0x4fe1, 0x4fe2, 0x4fe6, 0x4fe7, 0x4feb, 0x4fed, 0x4fee, 0x4ff2, 0x4ff8, 0x4ffa, 0x4ffc, 0x5000, 0x5002, 0x5004, 0x500a, 0x500c, 0x500e, 0x5016, 0x5017, 0x501b, 0x5021, 0x5034, 0x5039, 0x503f, 0x5041, 0x5043, 0x5049, 0x504b, 0x504d, 0x5053, 0x5055, 0x5057, 0x505d, 0x505f, 0x5061, 0x5068, 0x506a, 0x506c, 0x5072, 0x5074, 0x5076, 0x507b, 0x5086, 0x5089, 0x5092, 0x509f, 0x50a2, 0x50aa, 0x50bb, 0x50d4, 0x50d5, 0x50d8, 0x50e5, 0x50e8, 0x50fb, 0x5102, 0x5122, 0x5126, 0x5157, 0x5166, 0x5171, 0x5175, 0x5181, 0x51a5, 0x51cf, 0x51d8, 0x51e3, 0x51e7, 0x5238, 0x5246, 0x5250, 0x5258, 0x525f, 0x5261, 0x5264, 0x5283, 0x5286, 0x528e, 0x5297, 0x52a1, 0x52a8, 0x52b3, 0x52b6, 0x52c0, 0x52de, 0x52f5, 0x5306, 0x532f, 0x5332, 0x5337, 0x533a, 0x5340, 0x5352, 0x537e, 0x53af, 0x53b3, 0x53be, 0x53c7, 0x53d6, 0x53d9, 0x53ee, 0x541c, 0x5420, 0x5446, 0x5449, 0x5469, 0x546e, 0x5478, 0x547b, 0x547c, 0x547f, 0x5480, 0x5481, 0x5482, 0x549b, 0x549d, 0x54c6, 0x54c7, 0x54ce, 0x54d7, 0x54da, 0x54db, 0x54df, 0x54e4, 0x54f0, 0x5516, 0x5517, 0x552d, 0x5530, 0x553f, 0x5541, 0x5557, 0x5560, 0x556f, 0x5573, 0x557c, 0x558a, 0x5591, 0x5592, 0x5598, 0x559a, 0x559c, 0x55a2, 0x55a4, 0x55a6, 0x55aa, 0x55ac, 0x55ae, 0x55bc, 0x55bd, 0x55c1, 0x55c2, 0x55c9, 0x21de0, 0x21de7, 0x21de9, 0x21deb, 0x21df1, 0x21df3, 0x21df5, 0x21df8, 0x21df9, 0x21dfd, 0x21dfe, 0x21e02, 0x21e08, 0x21e0a, 0x21e0c, 0x21e0d, 0x21e11, 0x21e12, 0x21e16, 0x21e1c, 0x21e1e, 0x21e20, 0x21e24, 0x21e26, 0x21e28, 0x21e2e, 0x21e30, 0x21e32, 0x21e35, 0x21e36, 0x21e45, 0x21e47, 0x21e49, 0x21e4d, 0x21e4f, 0x21e51, 0x21e56, 0x21e59, 0x21e64, 0x21e67, 0x21e97, 0x21e99, 0x21e9b, 0x21eae, 0x21eb0, 0x21eb2, 0x21eb8, 0x21eba, 0x21ebc, 0x21edd, 0x21ee0, 0x21eed, 0x21f08, 0x21f09, 0x21f13, 0x21f24, 0x21f26, 0x21f28, 0x21f30, 0x21f32, 0x21f38, 0x21f3a, 0x21f47, 0x21f49, 0x21f4b, 0x21f51, 0x21f53, 0x21f55, 0x21f5b, 0x21f5d, 0x21f5f, 0x21f66, 0x21f68, 0x21f6a, 0x21f71, 0x21f73, 0x21f75, 0x21f82, 0x21f84, 0x21f86, 0x21f8d, 0x21f8f, 0x21f91, 0x21f99, 0x21f9b, 0x21f9d, 0x21faa, 0x21fac, 0x21fae, 0x21fb4, 0x21fb6, 0x21fb8, 0x21fce, 0x22054, 0x22079, 0x2209f, 0x220db, 0x220f6, 0x220fc, 0x22104}, code_1);

}  // namespace angel
