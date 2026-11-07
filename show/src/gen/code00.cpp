// SHOW.EXE, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_0(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x2816: goto L02816;
    case 0x2821: goto L02821;
    case 0x2827: goto L02827;
    case 0x282a: goto L0282a;
    case 0x2832: goto L02832;
    case 0x2839: goto L02839;
    case 0x2842: goto L02842;
    case 0x286b: goto L0286b;
    case 0x286e: goto L0286e;
    case 0x2890: goto L02890;
    case 0x2898: goto L02898;
    case 0x289d: goto L0289d;
    case 0x28a9: goto L028a9;
    case 0x28b1: goto L028b1;
    case 0x28c2: goto L028c2;
    case 0x28d2: goto L028d2;
    case 0x28e7: goto L028e7;
    case 0x28ea: goto L028ea;
    case 0x28ed: goto L028ed;
    case 0x28ef: goto L028ef;
    case 0x28f2: goto L028f2;
    case 0x28f8: goto L028f8;
    case 0x2908: goto L02908;
    case 0x290c: goto L0290c;
    case 0x293f: goto L0293f;
    case 0x2946: goto L02946;
    case 0x294d: goto L0294d;
    case 0x2954: goto L02954;
    case 0x295e: goto L0295e;
    case 0x2961: goto L02961;
    case 0x2973: goto L02973;
    case 0x2984: goto L02984;
    case 0x2988: goto L02988;
    case 0x299a: goto L0299a;
    case 0x29a6: goto L029a6;
    case 0x29b6: goto L029b6;
    case 0x29de: goto L029de;
    case 0x29e2: goto L029e2;
    case 0x29fc: goto L029fc;
    case 0x2a12: goto L02a12;
    case 0x2a13: goto L02a13;
    case 0x2a3a: goto L02a3a;
    case 0x2a3b: goto L02a3b;
    case 0x2a41: goto L02a41;
    case 0x2a44: goto L02a44;
    case 0x2a46: goto L02a46;
    case 0x2a54: goto L02a54;
    case 0x2a55: goto L02a55;
    case 0x2a69: goto L02a69;
    case 0x2a6c: goto L02a6c;
    case 0x2a84: goto L02a84;
    case 0x2a8d: goto L02a8d;
    case 0x2a93: goto L02a93;
    case 0x2a9a: goto L02a9a;
    case 0x2aab: goto L02aab;
    case 0x2aad: goto L02aad;
    case 0x2aaf: goto L02aaf;
    case 0x2acf: goto L02acf;
    case 0x2af1: goto L02af1;
    case 0x2ba0: goto L02ba0;
    case 0x2ba8: goto L02ba8;
    case 0x2bba: goto L02bba;
    case 0x2bca: goto L02bca;
    case 0x2bde: goto L02bde;
    case 0x2be8: goto L02be8;
    case 0x2c04: goto L02c04;
    case 0x2c0c: goto L02c0c;
    case 0x2c0d: goto L02c0d;
    case 0x2c13: goto L02c13;
    case 0x2c19: goto L02c19;
    case 0x2c21: goto L02c21;
    case 0x2c26: goto L02c26;
    case 0x2c2c: goto L02c2c;
    case 0x2c36: goto L02c36;
    case 0x2c3a: goto L02c3a;
    case 0x2c3e: goto L02c3e;
    case 0x2c40: goto L02c40;
    case 0x2c42: goto L02c42;
    case 0x2c4b: goto L02c4b;
    case 0x2c51: goto L02c51;
    case 0x2c57: goto L02c57;
    case 0x2c5f: goto L02c5f;
    case 0x2c64: goto L02c64;
    case 0x2c6a: goto L02c6a;
    case 0x2c74: goto L02c74;
    case 0x2c78: goto L02c78;
    case 0x2c7c: goto L02c7c;
    case 0x2c7e: goto L02c7e;
    case 0x2c80: goto L02c80;
    case 0x2c88: goto L02c88;
    case 0x2c8c: goto L02c8c;
    case 0x2c98: goto L02c98;
    case 0x2ca1: goto L02ca1;
    case 0x2cb7: goto L02cb7;
    case 0x2cbb: goto L02cbb;
    case 0x2cbe: goto L02cbe;
    case 0x2cc6: goto L02cc6;
    case 0x2ce0: goto L02ce0;
    case 0x2ceb: goto L02ceb;
    case 0x2cf0: goto L02cf0;
    case 0x2cf5: goto L02cf5;
    case 0x2cf8: goto L02cf8;
    case 0x2d01: goto L02d01;
    case 0x2d06: goto L02d06;
    case 0x2d0d: goto L02d0d;
    case 0x4558: goto L04558;
    case 0x4565: goto L04565;
    case 0x456a: goto L0456a;
    case 0x4587: goto L04587;
    case 0x458a: goto L0458a;
    case 0x4591: goto L04591;
    case 0x4598: goto L04598;
    case 0x459b: goto L0459b;
    case 0x459e: goto L0459e;
    case 0x45ad: goto L045ad;
    case 0x45bb: goto L045bb;
    case 0x45c1: goto L045c1;
    case 0x45c7: goto L045c7;
    case 0x45c9: goto L045c9;
    case 0x45d1: goto L045d1;
    case 0x45d3: goto L045d3;
    case 0x460d: goto L0460d;
    case 0x4611: goto L04611;
    case 0x462c: goto L0462c;
    case 0x4632: goto L04632;
    case 0x4635: goto L04635;
    case 0x4638: goto L04638;
    case 0x464d: goto L0464d;
    case 0x465b: goto L0465b;
    case 0x4661: goto L04661;
    case 0x4664: goto L04664;
    case 0x466a: goto L0466a;
    case 0x46a5: goto L046a5;
    case 0x46f8: goto L046f8;
    case 0x46fb: goto L046fb;
    case 0x4758: goto L04758;
    case 0x4760: goto L04760;
    case 0x4763: goto L04763;
    case 0x4793: goto L04793;
    case 0x4799: goto L04799;
    case 0x479c: goto L0479c;
    case 0x4836: goto L04836;
    case 0x483e: goto L0483e;
    case 0x4841: goto L04841;
    case 0x4858: goto L04858;
    case 0x488f: goto L0488f;
    case 0x48ad: goto L048ad;
    case 0x48c7: goto L048c7;
    case 0x48cb: goto L048cb;
    case 0x48ee: goto L048ee;
    case 0x4901: goto L04901;
    case 0x4904: goto L04904;
    case 0x490b: goto L0490b;
    case 0x4919: goto L04919;
    case 0x4931: goto L04931;
    case 0x4941: goto L04941;
    case 0x4944: goto L04944;
    case 0x4950: goto L04950;
    case 0x4953: goto L04953;
    case 0x495a: goto L0495a;
    case 0x496d: goto L0496d;
    case 0x4972: goto L04972;
    case 0x497a: goto L0497a;
    case 0x497d: goto L0497d;
    case 0x4986: goto L04986;
    case 0x498c: goto L0498c;
    case 0x49ac: goto L049ac;
    case 0x49c1: goto L049c1;
    case 0x49c7: goto L049c7;
    case 0x49d6: goto L049d6;
    case 0x49ed: goto L049ed;
    case 0x49fc: goto L049fc;
    case 0x4a0a: goto L04a0a;
    case 0x4a10: goto L04a10;
    case 0x4a13: goto L04a13;
    case 0x4a17: goto L04a17;
    case 0x4a1b: goto L04a1b;
    case 0x4a1d: goto L04a1d;
    case 0x4a21: goto L04a21;
    case 0x4a23: goto L04a23;
    case 0x4a32: goto L04a32;
    case 0x4a6b: goto L04a6b;
    case 0x4a6d: goto L04a6d;
    case 0x4a76: goto L04a76;
    case 0x4a7c: goto L04a7c;
    case 0x4a8a: goto L04a8a;
    case 0x4a9d: goto L04a9d;
    case 0x4aa3: goto L04aa3;
    case 0x4ab3: goto L04ab3;
    case 0x4ab9: goto L04ab9;
    case 0x4abc: goto L04abc;
    case 0x4ac0: goto L04ac0;
    case 0x4ac7: goto L04ac7;
    case 0x4acb: goto L04acb;
    case 0x4acd: goto L04acd;
    case 0x4b55: goto L04b55;
    case 0x4b61: goto L04b61;
    case 0x4b65: goto L04b65;
    case 0x4b6c: goto L04b6c;
    case 0x4b6e: goto L04b6e;
    case 0x4b72: goto L04b72;
    case 0x4b74: goto L04b74;
    case 0x4b79: goto L04b79;
    case 0x4b7e: goto L04b7e;
    case 0x4b88: goto L04b88;
    case 0x4b9b: goto L04b9b;
    case 0x4bb9: goto L04bb9;
    case 0x4bbb: goto L04bbb;
    case 0x4bc1: goto L04bc1;
    case 0x4bc4: goto L04bc4;
    case 0x4bc7: goto L04bc7;
    case 0x4bd4: goto L04bd4;
    case 0x4bed: goto L04bed;
    case 0x4c2d: goto L04c2d;
    case 0x4c3e: goto L04c3e;
    case 0x4c5a: goto L04c5a;
    case 0x4c79: goto L04c79;
    case 0x4c7c: goto L04c7c;
    case 0x4cc4: goto L04cc4;
    case 0x4cd4: goto L04cd4;
    case 0x4cd7: goto L04cd7;
    case 0x4ce2: goto L04ce2;
    case 0x4cff: goto L04cff;
    case 0x4d03: goto L04d03;
    case 0x4d05: goto L04d05;
    case 0x4d17: goto L04d17;
    case 0x4d1d: goto L04d1d;
    case 0x4d20: goto L04d20;
    case 0x4d25: goto L04d25;
    case 0x4d2d: goto L04d2d;
    case 0x4d34: goto L04d34;
    case 0x4d4a: goto L04d4a;
    case 0x4d5c: goto L04d5c;
    case 0x4d67: goto L04d67;
    case 0x4d6d: goto L04d6d;
    case 0x4d79: goto L04d79;
    case 0x4d82: goto L04d82;
    case 0x4d88: goto L04d88;
    case 0x4d96: goto L04d96;
    case 0x4dc7: goto L04dc7;
    case 0x4ddd: goto L04ddd;
    case 0x4dea: goto L04dea;
    case 0x4def: goto L04def;
    case 0x4df2: goto L04df2;
    case 0x4dfb: goto L04dfb;
    case 0x4e06: goto L04e06;
    case 0x4e09: goto L04e09;
    case 0x4e0e: goto L04e0e;
    case 0x4e11: goto L04e11;
    case 0x4e1f: goto L04e1f;
    case 0x4e2a: goto L04e2a;
    case 0x4e30: goto L04e30;
    case 0x4e3d: goto L04e3d;
    case 0x4e44: goto L04e44;
    case 0x4e4a: goto L04e4a;
    case 0x4e57: goto L04e57;
    case 0x4e71: goto L04e71;
    case 0x4e79: goto L04e79;
    case 0x4ea3: goto L04ea3;
    case 0x4ef7: goto L04ef7;
    case 0x4f04: goto L04f04;
    case 0x4f0f: goto L04f0f;
    case 0x4f12: goto L04f12;
    case 0x4f23: goto L04f23;
    case 0x4f28: goto L04f28;
    case 0x4f2e: goto L04f2e;
    case 0x4f34: goto L04f34;
    case 0x4f3a: goto L04f3a;
    case 0x4f50: goto L04f50;
    case 0x4f56: goto L04f56;
    case 0x4f64: goto L04f64;
    case 0x4fe8: goto L04fe8;
    case 0x4ffb: goto L04ffb;
    case 0x500c: goto L0500c;
    case 0x5082: goto L05082;
    case 0x5083: goto L05083;
    case 0x5086: goto L05086;
    case 0x50b8: goto L050b8;
    case 0x50bd: goto L050bd;
    case 0x50c4: goto L050c4;
    case 0x50e4: goto L050e4;
    case 0x50e8: goto L050e8;
    case 0x510d: goto L0510d;
    case 0x511d: goto L0511d;
    case 0x5138: goto L05138;
    case 0x5139: goto L05139;
    case 0x5144: goto L05144;
    case 0x51ce: goto L051ce;
    case 0x51f4: goto L051f4;
    case 0x521a: goto L0521a;
    case 0x525c: goto L0525c;
    case 0x5260: goto L05260;
    case 0x526a: goto L0526a;
    case 0x526d: goto L0526d;
    case 0x5270: goto L05270;
    case 0x5278: goto L05278;
    case 0x527b: goto L0527b;
    case 0x5283: goto L05283;
    case 0x5286: goto L05286;
    case 0x5287: goto L05287;
    case 0x529c: goto L0529c;
    case 0x52ac: goto L052ac;
    case 0x52b7: goto L052b7;
    case 0x52bb: goto L052bb;
    case 0x5394: goto L05394;
    case 0x53a2: goto L053a2;
    case 0x53ac: goto L053ac;
    case 0x53b5: goto L053b5;
    case 0x53bc: goto L053bc;
    case 0x53be: goto L053be;
    case 0x53c1: goto L053c1;
    case 0x53da: goto L053da;
    case 0x53e7: goto L053e7;
    case 0x540c: goto L0540c;
    case 0x5414: goto L05414;
    case 0x541f: goto L0541f;
    case 0x5422: goto L05422;
    case 0x5428: goto L05428;
    case 0x5440: goto L05440;
    case 0x5455: goto L05455;
    case 0x5458: goto L05458;
    case 0x546a: goto L0546a;
    case 0x5494: goto L05494;
    case 0x54b7: goto L054b7;
    case 0x54e3: goto L054e3;
    case 0x5514: goto L05514;
    case 0x5518: goto L05518;
    case 0x552c: goto L0552c;
    case 0x553b: goto L0553b;
    case 0x553e: goto L0553e;
    case 0x5546: goto L05546;
    case 0x555d: goto L0555d;
    case 0x558b: goto L0558b;
    case 0x558f: goto L0558f;
    case 0x5595: goto L05595;
    case 0x5597: goto L05597;
    case 0x559e: goto L0559e;
    case 0x55a1: goto L055a1;
    case 0x55b0: goto L055b0;
    case 0x55b6: goto L055b6;
    case 0x55c0: goto L055c0;
    case 0x55d2: goto L055d2;
    case 0x55e2: goto L055e2;
    case 0x55e8: goto L055e8;
    case 0x55f4: goto L055f4;
    default: c.callLinear(t); return;
    }
L02816:
    if (c.tracing) c.traceAt(0x2816);
    // 013d:1446  push es  [x1]
    c.push16(c.es);
    // 013d:1447  mov ax, word ptr es:[0x2c]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x2cu)));
    // 013d:144b  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 013d:144d  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 013d:144f  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L02821:
    if (c.tracing) c.traceAt(0x2821);
    // 013d:1451  cmp word ptr es:[si], 1  [x55]
    c.sub<16>(c.r16(c.esb + (uint16_t)(c.si.x)), 0x1u, true);
    // 013d:1455  je 0x145a  [x55]
    if (c.zf) goto L0282a;
L02827:
    if (c.tracing) c.traceAt(0x2827);
    // 013d:1457  inc si  [x54]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 013d:1458  jmp 0x1451  [x54]
    goto L02821;
L0282a:
    if (c.tracing) c.traceAt(0x282a);
    // 013d:145a  add si, 2  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 013d:145d  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 013d:145f  mov cx, 0x100  [x1]
    c.c.x = (uint16_t)(0x100u);
L02832:
    if (c.tracing) c.traceAt(0x2832);
    // 013d:1462  mov al, byte ptr es:[si]  [x8]
    c.a.l = (uint8_t)(c.r8(c.esb + (uint16_t)(c.si.x)));
    // 013d:1465  cmp al, 0x2e  [x8]
    c.sub<8>(c.a.l, 0x2eu, true);
    // 013d:1467  je 0x1472  [x8]
    if (c.zf) goto L02842;
L02839:
    if (c.tracing) c.traceAt(0x2839);
    // 013d:1469  mov byte ptr cs:[di + 0x44d], al  [x7]
    c.w8(c.csb + (uint16_t)(c.di.x + 0x44du), c.a.l);
    // 013d:146e  inc si  [x7]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 013d:146f  inc di  [x7]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 013d:1470  loop 0x1462  [x7]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L02832;
L02842:
    if (c.tracing) c.traceAt(0x2842);
    // 013d:1472  mov byte ptr cs:[di + 0x44d], 0x2e  [x1]
    c.w8(c.csb + (uint16_t)(c.di.x + 0x44du), 0x2eu);
    // 013d:1478  mov byte ptr cs:[di + 0x44e], 0x45  [x1]
    c.w8(c.csb + (uint16_t)(c.di.x + 0x44eu), 0x45u);
    // 013d:147e  mov byte ptr cs:[di + 0x44f], 0x58  [x1]
    c.w8(c.csb + (uint16_t)(c.di.x + 0x44fu), 0x58u);
    // 013d:1484  mov byte ptr cs:[di + 0x450], 0x45  [x1]
    c.w8(c.csb + (uint16_t)(c.di.x + 0x450u), 0x45u);
    // 013d:148a  mov byte ptr cs:[di + 0x451], 0  [x1]
    c.w8(c.csb + (uint16_t)(c.di.x + 0x451u), 0x0u);
    // 013d:1490  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 013d:1491  push cs  [x1]
    c.push16(c.cs);
    // 013d:1492  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 013d:1493  mov ax, 0x4a00  [x1]
    c.a.x = (uint16_t)(0x4a00u);
    // 013d:1496  mov bx, 0x753  [x1]
    c.b.x = (uint16_t)(0x753u);
    // 013d:1499  int 0x21  [x1]
    c.ip = 0x149bu; c.d32 = false; c.intr(0x21, 0x149bu);
L0286b:
    if (c.tracing) c.traceAt(0x286b);
    // 013d:149b  call 0x166b  [x1]
    c.push16(0x149eu); code_0(c, 0x2a3bu); if (c.ip != 0x149eu) c.badReturn(0x286b);
L0286e:
    if (c.tracing) c.traceAt(0x286e);
    // 013d:149e  jae 0x14c0  [x1]
    if (!c.cf) goto L02890;
    c.notTranslated(0x2870, "fall-through");
L02890:
    if (c.tracing) c.traceAt(0x2890);
    // 013d:14c0  mov ax, word ptr [0x626]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x626u)));
    // 013d:14c3  lcall 0x2d2, 0x23ed  [x1]
    c.push16(c.cs); c.push16(0x14c8u); c.loadCs(0x2d2u); c.callLinear(c.csb + 0x23edu);
L02898:
    if (c.tracing) c.traceAt(0x2898);
    // 013d:14c8  lcall 0x2d2, 0x23c8  [x1]
    c.push16(c.cs); c.push16(0x14cdu); c.loadCs(0x2d2u); c.callLinear(c.csb + 0x23c8u);
L0289d:
    if (c.tracing) c.traceAt(0x289d);
    // 013d:14cd  mov dx, cs  [x1]
    c.dx_.x = (uint16_t)(c.cs);
    // 013d:14cf  mov ds, dx  [x1]
    c.loadDs(c.dx_.x);
    // 013d:14d1  mov dx, 0x44d  [x1]
    c.dx_.x = (uint16_t)(0x44du);
    // 013d:14d4  lcall 0x2d2, 0x254d  [x1]
    c.push16(c.cs); c.push16(0x14d9u); c.loadCs(0x2d2u); c.callLinear(c.csb + 0x254du);
L028a9:
    if (c.tracing) c.traceAt(0x28a9);
    // 013d:14d9  mov bx, 0x79e0  [x1]
    c.b.x = (uint16_t)(0x79e0u);
    // 013d:14dc  mov ax, 0x4800  [x1]
    c.a.x = (uint16_t)(0x4800u);
    // 013d:14df  int 0x21  [x1]
    c.ip = 0x14e1u; c.d32 = false; c.intr(0x21, 0x14e1u);
L028b1:
    if (c.tracing) c.traceAt(0x28b1);
    // 013d:14e1  mov word ptr [0x54d], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x54du), c.a.x);
    // 013d:14e4  jae 0x14f2  [x1]
    if (!c.cf) goto L028c2;
    c.notTranslated(0x28b6, "fall-through");
L028c2:
    if (c.tracing) c.traceAt(0x28c2);
    // 013d:14f2  add ax, 0xff  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xffu, false));
    // 013d:14f5  and ax, 0xff00  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0xff00u), true));
    // 013d:14f8  inc ax  [x1]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
    // 013d:14f9  mov word ptr [0x54f], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x54fu), c.a.x);
    // 013d:14fc  mov word ptr [0x555], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x555u), c.a.x);
    // 013d:14ff  call 0x17d0  [x1]
    c.push16(0x1502u); code_0(c, 0x2ba0u); if (c.ip != 0x1502u) c.badReturn(0x28cf);
L028d2:
    if (c.tracing) c.traceAt(0x28d2);
    // 013d:1502  mov ax, 0x22c8  [x1]
    c.a.x = (uint16_t)(0x22c8u);
    // 013d:1505  mov word ptr [0x62a], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x62au), c.a.x);
    // 013d:1508  mov ax, 0x2d2  [x1]
    c.a.x = (uint16_t)(0x2d2u);
    // 013d:150b  mov word ptr [0x62c], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x62cu), c.a.x);
    // 013d:150e  mov ax, 0x2fd4  [x1]
    c.a.x = (uint16_t)(0x2fd4u);
    // 013d:1511  mov word ptr [0x628], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x628u), c.a.x);
    // 013d:1514  call 0x1643  [x1]
    c.push16(0x1517u); code_0(c, 0x2a13u); if (c.ip != 0x1517u) c.badReturn(0x28e4);
L028e7:
    if (c.tracing) c.traceAt(0x28e7);
    // 013d:1517  call 0x18b8  [x1]
    c.push16(0x151au); code_0(c, 0x2c88u); if (c.ip != 0x151au) c.badReturn(0x28e7);
L028ea:
    if (c.tracing) c.traceAt(0x28ea);
    // 013d:151a  call 0x1522  [x33]
    c.push16(0x151du); code_0(c, 0x28f2u); if (c.ip != 0x151du) c.badReturn(0x28ea);
L028ed:
    if (c.tracing) c.traceAt(0x28ed);
    // 013d:151d  jae 0x151a  [x33]
    if (!c.cf) goto L028ea;
L028ef:
    if (c.tracing) c.traceAt(0x28ef);
    // 013d:151f  jmp 0x191b  [x1]
    goto L02ceb;
L028f2:
    if (c.tracing) c.traceAt(0x28f2);
    // 013d:1522  mov si, word ptr [0x557]  [x33]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x557u)));
    // 013d:1526  xor di, di  [x33]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L028f8:
    if (c.tracing) c.traceAt(0x28f8);
    // 013d:1528  lodsb al, byte ptr [si]  [x150]
    c.ip = 0x1529u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 013d:1529  mov byte ptr [di + 0x5f0], al  [x150]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x5f0u), c.a.l);
    // 013d:152d  mov byte ptr [di + 0x5fd], al  [x150]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x5fdu), c.a.l);
    // 013d:1531  inc di  [x150]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 013d:1532  cmp al, 0xff  [x150]
    c.sub<8>(c.a.l, 0xffu, true);
    // 013d:1534  je 0x1612  [x150]
    if (c.zf) goto L029e2;
L02908:
    if (c.tracing) c.traceAt(0x2908);
    // 013d:1538  cmp al, 0x2e  [x149]
    c.sub<8>(c.a.l, 0x2eu, true);
    // 013d:153a  jne 0x1528  [x149]
    if (!c.zf) goto L028f8;
L0290c:
    if (c.tracing) c.traceAt(0x290c);
    // 013d:153c  mov word ptr [0x557], si  [x32]
    c.w16(c.dsb + (uint16_t)(0x557u), c.si.x);
    // 013d:1540  mov byte ptr [di + 0x5f0], 0x44  [x32]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x5f0u), 0x44u);
    // 013d:1545  mov byte ptr [di + 0x5f1], 0x41  [x32]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x5f1u), 0x41u);
    // 013d:154a  mov byte ptr [di + 0x5f2], 0x54  [x32]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x5f2u), 0x54u);
    // 013d:154f  mov byte ptr [di + 0x5f3], 0  [x32]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x5f3u), 0x0u);
    // 013d:1554  mov byte ptr [di + 0x5fd], 0x43  [x32]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x5fdu), 0x43u);
    // 013d:1559  mov byte ptr [di + 0x5fe], 0x4f  [x32]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x5feu), 0x4fu);
    // 013d:155e  mov byte ptr [di + 0x5ff], 0x44  [x32]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x5ffu), 0x44u);
    // 013d:1563  mov byte ptr [di + 0x600], 0  [x32]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x600u), 0x0u);
    // 013d:1568  cmp word ptr [0x1917], 7  [x32]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x1917u)), 0x7u, true);
    // 013d:156d  ja 0x158e  [x32]
    if ((!c.cf && !c.zf)) goto L0295e;
L0293f:
    if (c.tracing) c.traceAt(0x293f);
    // 013d:156f  cmp byte ptr [di + 0x5ee], 0x4d  [x32]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.di.x + 0x5eeu)), 0x4du, true);
    // 013d:1574  jne 0x158e  [x32]
    if (!c.zf) goto L0295e;
L02946:
    if (c.tracing) c.traceAt(0x2946);
    // 013d:1576  cmp byte ptr [di + 0x5ed], 0x4f  [x3]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.di.x + 0x5edu)), 0x4fu, true);
    // 013d:157b  jne 0x158e  [x3]
    if (!c.zf) goto L0295e;
L0294d:
    if (c.tracing) c.traceAt(0x294d);
    // 013d:157d  cmp byte ptr [di + 0x5ec], 0x43  [x2]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.di.x + 0x5ecu)), 0x43u, true);
    // 013d:1582  jne 0x158e  [x2]
    if (!c.zf) goto L0295e;
L02954:
    if (c.tracing) c.traceAt(0x2954);
    // 013d:1584  mov byte ptr [di + 0x5ec], 0x4b  [x1]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x5ecu), 0x4bu);
    // 013d:1589  mov byte ptr [di + 0x5f9], 0x4b  [x1]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x5f9u), 0x4bu);
L0295e:
    if (c.tracing) c.traceAt(0x295e);
    // 013d:158e  call 0x183d  [x32]
    c.push16(0x1591u); code_0(c, 0x2c0du); if (c.ip != 0x1591u) c.badReturn(0x295e);
L02961:
    if (c.tracing) c.traceAt(0x2961);
    // 013d:1591  mov bx, word ptr [0x1444]  [x32]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1444u)));
    // 013d:1595  mov ah, 0x42  [x32]
    c.a.h = (uint8_t)(0x42u);
    // 013d:1597  mov al, 0  [x32]
    c.a.l = (uint8_t)(0x0u);
    // 013d:1599  mov cx, word ptr [si + 0x63a]  [x32]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x63au)));
    // 013d:159d  mov dx, word ptr [si + 0x63c]  [x32]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x63cu)));
    // 013d:15a1  int 0x21  [x32]
    c.ip = 0x15a3u; c.d32 = false; c.intr(0x21, 0x15a3u);
L02973:
    if (c.tracing) c.traceAt(0x2973);
    // 013d:15a3  mov cx, word ptr [si + 0x63e]  [x32]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x63eu)));
    // 013d:15a7  push ds  [x32]
    c.push16(c.ds);
    // 013d:15a8  mov ax, word ptr cs:[0x54f]  [x32]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x54fu)));
    // 013d:15ac  mov ds, ax  [x32]
    c.loadDs(c.a.x);
    // 013d:15ae  xor dx, dx  [x32]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), true));
    // 013d:15b0  mov ah, 0x3f  [x32]
    c.a.h = (uint8_t)(0x3fu);
    // 013d:15b2  int 0x21  [x32]
    c.ip = 0x15b4u; c.d32 = false; c.intr(0x21, 0x15b4u);
L02984:
    if (c.tracing) c.traceAt(0x2984);
    // 013d:15b4  pop ds  [x32]
    c.loadDs((uint16_t)c.pop16());
    // 013d:15b5  call 0x187b  [x32]
    c.push16(0x15b8u); code_0(c, 0x2c4bu); if (c.ip != 0x15b8u) c.badReturn(0x2985);
L02988:
    if (c.tracing) c.traceAt(0x2988);
    // 013d:15b8  mov bx, word ptr [0x1444]  [x32]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1444u)));
    // 013d:15bc  mov ah, 0x42  [x32]
    c.a.h = (uint8_t)(0x42u);
    // 013d:15be  mov al, 0  [x32]
    c.a.l = (uint8_t)(0x0u);
    // 013d:15c0  mov cx, word ptr [si + 0x63a]  [x32]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x63au)));
    // 013d:15c4  mov dx, word ptr [si + 0x63c]  [x32]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x63cu)));
    // 013d:15c8  int 0x21  [x32]
    c.ip = 0x15cau; c.d32 = false; c.intr(0x21, 0x15cau);
L0299a:
    if (c.tracing) c.traceAt(0x299a);
    // 013d:15ca  mov cx, word ptr [si + 0x63e]  [x32]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x63eu)));
    // 013d:15ce  cmp cx, 0  [x32]
    c.sub<16>(c.c.x, 0x0u, true);
    // 013d:15d1  jne 0x15d6  [x32]
    if (!c.zf) goto L029a6;
    c.notTranslated(0x29a3, "fall-through");
L029a6:
    if (c.tracing) c.traceAt(0x29a6);
    // 013d:15d6  push ds  [x32]
    c.push16(c.ds);
    // 013d:15d7  mov ax, word ptr cs:[0x54f]  [x32]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x54fu)));
    // 013d:15db  add ax, 0x1000  [x32]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1000u, false));
    // 013d:15de  mov ds, ax  [x32]
    c.loadDs(c.a.x);
    // 013d:15e0  xor dx, dx  [x32]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), true));
    // 013d:15e2  mov ah, 0x3f  [x32]
    c.a.h = (uint8_t)(0x3fu);
    // 013d:15e4  int 0x21  [x32]
    c.ip = 0x15e6u; c.d32 = false; c.intr(0x21, 0x15e6u);
L029b6:
    if (c.tracing) c.traceAt(0x29b6);
    // 013d:15e6  mov al, byte ptr [0xfffe]  [x32]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xfffeu)));
    // 013d:15e9  mov byte ptr [0xffff], al  [x32]
    c.w8(c.dsb + (uint16_t)(0xffffu), c.a.l);
    // 013d:15ec  pop ds  [x32]
    c.loadDs((uint16_t)c.pop16());
    // 013d:15ed  push ds  [x32]
    c.push16(c.ds);
    // 013d:15ee  pushaw   [x32]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 013d:15ef  mov cx, cs  [x32]
    c.c.x = (uint16_t)(c.cs);
    // 013d:15f1  mov dx, word ptr [0x628]  [x32]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x628u)));
    // 013d:15f5  mov bp, word ptr [0x62c]  [x32]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x62cu)));
    // 013d:15f9  mov bx, word ptr [0x62a]  [x32]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x62au)));
    // 013d:15fd  mov ax, word ptr cs:[0x54f]  [x32]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x54fu)));
    // 013d:1601  add ax, 0x1000  [x32]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1000u, false));
    // 013d:1604  mov ds, ax  [x32]
    c.loadDs(c.a.x);
    // 013d:1606  add ax, 0x1000  [x32]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1000u, true));
    // 013d:1609  lcall cs:[0x553]  [x32]
    c.partStart();
    { const uint32_t t0 = c.r16(c.csb + (uint16_t)(0x553u)); const uint16_t t1 = c.r16(c.csb + (uint16_t)(0x553u) + 2); c.push16(c.cs); c.push16(0x160eu); c.loadCs(t1); c.callLinear(c.csb + t0); }
L029de:
    if (c.tracing) c.traceAt(0x29de);
    // 013d:160e  popaw   [x32]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 013d:160f  pop ds  [x32]
    c.loadDs((uint16_t)c.pop16());
    // 013d:1610  clc   [x32]
    c.cf = false;
    // 013d:1611  ret   [x32]
    c.ip = c.pop16(); return;
L029e2:
    if (c.tracing) c.traceAt(0x29e2);
    // 013d:1612  stc   [x1]
    c.cf = true;
    // 013d:1613  ret   [x1]
    c.ip = c.pop16(); return;
L029fc:
    if (c.tracing) c.traceAt(0x29fc);
    // 013d:162c  cli   [x1]
    c.m.cli();
    // 013d:162d  push es  [x1]
    c.push16(c.es);
    // 013d:162e  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 013d:1630  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 013d:1632  mov ax, word ptr [0x621]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x621u)));
    // 013d:1635  mov word ptr es:[0x24], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x24u), c.a.x);
    // 013d:1639  mov ax, word ptr [0x623]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x623u)));
    // 013d:163c  mov word ptr es:[0x26], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x26u), c.a.x);
    // 013d:1640  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 013d:1641  sti   [x1]
    c.ip = 0x1642u; c.d32 = false; c.m.sti();
L02a12:
    if (c.tracing) c.traceAt(0x2a12);
    // 013d:1642  ret   [x1]
    c.ip = c.pop16(); return;
L02a13:
    if (c.tracing) c.traceAt(0x2a13);
    // 013d:1643  cli   [x1]
    c.m.cli();
    // 013d:1644  push es  [x1]
    c.push16(c.es);
    // 013d:1645  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 013d:1647  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 013d:1649  mov ax, word ptr es:[0x24]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x24u)));
    // 013d:164d  mov word ptr [0x621], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x621u), c.a.x);
    // 013d:1650  mov ax, word ptr es:[0x26]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x26u)));
    // 013d:1654  mov word ptr [0x623], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x623u), c.a.x);
    // 013d:1657  mov ax, 0x1614  [x1]
    c.a.x = (uint16_t)(0x1614u);
    // 013d:165a  mov word ptr es:[0x24], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x24u), c.a.x);
    // 013d:165e  mov ax, cs  [x1]
    c.a.x = (uint16_t)(c.cs);
    // 013d:1660  mov word ptr es:[0x26], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x26u), c.a.x);
    // 013d:1664  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 013d:1665  mov al, 0xfc  [x1]
    c.a.l = (uint8_t)(0xfcu);
    // 013d:1667  out 0x21, al  [x1]
    c.ip = 0x1669u; c.d32 = false; c.out8(0x21, c.a.l);
    // 013d:1669  sti   [x1]
    c.ip = 0x166au; c.d32 = false; c.m.sti();
L02a3a:
    if (c.tracing) c.traceAt(0x2a3a);
    // 013d:166a  ret   [x1]
    c.ip = c.pop16(); return;
L02a3b:
    if (c.tracing) c.traceAt(0x2a3b);
    // 013d:166b  mov word ptr [0x626], 0x210  [x1]
    c.w16(c.dsb + (uint16_t)(0x626u), 0x210u);
L02a41:
    if (c.tracing) c.traceAt(0x2a41);
    // 013d:1671  call 0x1685  [x2]
    c.push16(0x1674u); code_0(c, 0x2a55u); if (c.ip != 0x1674u) c.badReturn(0x2a41);
L02a44:
    if (c.tracing) c.traceAt(0x2a44);
    // 013d:1674  jae 0x1684  [x2]
    if (!c.cf) goto L02a54;
L02a46:
    if (c.tracing) c.traceAt(0x2a46);
    // 013d:1676  add word ptr [0x626], 0x10  [x1]
    c.w16(c.dsb + (uint16_t)(0x626u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x626u)), 0x10u, false));
    // 013d:167b  cmp word ptr [0x626], 0x270  [x1]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x626u)), 0x270u, true);
    // 013d:1681  jb 0x1671  [x1]
    if (c.cf) goto L02a41;
    c.notTranslated(0x2a53, "fall-through");
L02a54:
    if (c.tracing) c.traceAt(0x2a54);
    // 013d:1684  ret   [x1]
    c.ip = c.pop16(); return;
L02a55:
    if (c.tracing) c.traceAt(0x2a55);
    // 013d:1685  mov dx, word ptr [0x626]  [x2]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x626u)));
    // 013d:1689  add dx, 0x103  [x2]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 013d:168d  mov al, 0x4c  [x2]
    c.a.l = (uint8_t)(0x4cu);
    // 013d:168f  out dx, al  [x2]
    c.ip = 0x1690u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 013d:1690  add dx, 2  [x2]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, true));
    // 013d:1693  mov al, 0  [x2]
    c.a.l = (uint8_t)(0x0u);
    // 013d:1695  out dx, al  [x2]
    c.ip = 0x1696u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 013d:1696  call 0x1721  [x2]
    c.push16(0x1699u); code_0(c, 0x2af1u); if (c.ip != 0x1699u) c.badReturn(0x2a66);
L02a69:
    if (c.tracing) c.traceAt(0x2a69);
    // 013d:1699  call 0x1721  [x2]
    c.push16(0x169cu); code_0(c, 0x2af1u); if (c.ip != 0x169cu) c.badReturn(0x2a69);
L02a6c:
    if (c.tracing) c.traceAt(0x2a6c);
    // 013d:169c  sub dx, 2  [x2]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, false));
    // 013d:169f  mov al, 0x4c  [x2]
    c.a.l = (uint8_t)(0x4cu);
    // 013d:16a1  out dx, al  [x2]
    c.ip = 0x16a2u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 013d:16a2  add dx, 2  [x2]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, true));
    // 013d:16a5  mov al, 1  [x2]
    c.a.l = (uint8_t)(0x1u);
    // 013d:16a7  out dx, al  [x2]
    c.ip = 0x16a8u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 013d:16a8  mov ax, 0xaa  [x2]
    c.a.x = (uint16_t)(0xaau);
    // 013d:16ab  mov bx, 0  [x2]
    c.b.x = (uint16_t)(0x0u);
    // 013d:16ae  mov cx, 0  [x2]
    c.c.x = (uint16_t)(0x0u);
    // 013d:16b1  call 0x16ff  [x2]
    c.push16(0x16b4u); code_0(c, 0x2acfu); if (c.ip != 0x16b4u) c.badReturn(0x2a81);
L02a84:
    if (c.tracing) c.traceAt(0x2a84);
    // 013d:16b4  mov ax, 0x55  [x2]
    c.a.x = (uint16_t)(0x55u);
    // 013d:16b7  mov bx, 1  [x2]
    c.b.x = (uint16_t)(0x1u);
    // 013d:16ba  call 0x16ff  [x2]
    c.push16(0x16bdu); code_0(c, 0x2acfu); if (c.ip != 0x16bdu) c.badReturn(0x2a8a);
L02a8d:
    if (c.tracing) c.traceAt(0x2a8d);
    // 013d:16bd  mov bx, 0  [x2]
    c.b.x = (uint16_t)(0x0u);
    // 013d:16c0  call 0x16df  [x2]
    c.push16(0x16c3u); code_0(c, 0x2aafu); if (c.ip != 0x16c3u) c.badReturn(0x2a90);
L02a93:
    if (c.tracing) c.traceAt(0x2a93);
    // 013d:16c3  push ax  [x2]
    c.push16(c.a.x);
    // 013d:16c4  mov ax, 0  [x2]
    c.a.x = (uint16_t)(0x0u);
    // 013d:16c7  call 0x16ff  [x2]
    c.push16(0x16cau); code_0(c, 0x2acfu); if (c.ip != 0x16cau) c.badReturn(0x2a97);
L02a9a:
    if (c.tracing) c.traceAt(0x2a9a);
    // 013d:16ca  sub dx, 2  [x2]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, false));
    // 013d:16cd  mov al, 0x4c  [x2]
    c.a.l = (uint8_t)(0x4cu);
    // 013d:16cf  out dx, al  [x2]
    c.ip = 0x16d0u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 013d:16d0  add dx, 2  [x2]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 013d:16d3  mov al, 0  [x2]
    c.a.l = (uint8_t)(0x0u);
    // 013d:16d5  out dx, al  [x2]
    c.ip = 0x16d6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 013d:16d6  pop ax  [x2]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 013d:16d7  cmp al, 0xaa  [x2]
    c.sub<8>(c.a.l, 0xaau, true);
    // 013d:16d9  jne 0x16dd  [x2]
    if (!c.zf) goto L02aad;
L02aab:
    if (c.tracing) c.traceAt(0x2aab);
    // 013d:16db  clc   [x1]
    c.cf = false;
    // 013d:16dc  ret   [x1]
    c.ip = c.pop16(); return;
L02aad:
    if (c.tracing) c.traceAt(0x2aad);
    // 013d:16dd  stc   [x1]
    c.cf = true;
    // 013d:16de  ret   [x1]
    c.ip = c.pop16(); return;
L02aaf:
    if (c.tracing) c.traceAt(0x2aaf);
    // 013d:16df  push dx  [x2]
    c.push16(c.dx_.x);
    // 013d:16e0  mov dx, word ptr [0x626]  [x2]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x626u)));
    // 013d:16e4  add dx, 0x103  [x2]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 013d:16e8  mov al, 0x43  [x2]
    c.a.l = (uint8_t)(0x43u);
    // 013d:16ea  out dx, al  [x2]
    c.ip = 0x16ebu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 013d:16eb  inc dx  [x2]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 013d:16ec  mov ax, cx  [x2]
    c.a.x = (uint16_t)(c.c.x);
    // 013d:16ee  out dx, ax  [x2]
    c.ip = 0x16efu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 013d:16ef  dec dx  [x2]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 013d:16f0  mov al, 0x44  [x2]
    c.a.l = (uint8_t)(0x44u);
    // 013d:16f2  out dx, al  [x2]
    c.ip = 0x16f3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 013d:16f3  add dx, 2  [x2]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 013d:16f6  mov al, bl  [x2]
    c.a.l = (uint8_t)(c.b.l);
    // 013d:16f8  out dx, al  [x2]
    c.ip = 0x16f9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 013d:16f9  add dx, 2  [x2]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, true));
    // 013d:16fc  in al, dx  [x2]
    c.ip = 0x16fdu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 013d:16fd  pop dx  [x2]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 013d:16fe  ret   [x2]
    c.ip = c.pop16(); return;
L02acf:
    if (c.tracing) c.traceAt(0x2acf);
    // 013d:16ff  push dx  [x6]
    c.push16(c.dx_.x);
    // 013d:1700  push ax  [x6]
    c.push16(c.a.x);
    // 013d:1701  mov dx, word ptr [0x626]  [x6]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x626u)));
    // 013d:1705  add dx, 0x103  [x6]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 013d:1709  mov al, 0x43  [x6]
    c.a.l = (uint8_t)(0x43u);
    // 013d:170b  out dx, al  [x6]
    c.ip = 0x170cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 013d:170c  inc dx  [x6]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 013d:170d  mov ax, cx  [x6]
    c.a.x = (uint16_t)(c.c.x);
    // 013d:170f  out dx, ax  [x6]
    c.ip = 0x1710u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 013d:1710  dec dx  [x6]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 013d:1711  mov al, 0x44  [x6]
    c.a.l = (uint8_t)(0x44u);
    // 013d:1713  out dx, al  [x6]
    c.ip = 0x1714u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 013d:1714  add dx, 2  [x6]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 013d:1717  mov al, bl  [x6]
    c.a.l = (uint8_t)(c.b.l);
    // 013d:1719  out dx, al  [x6]
    c.ip = 0x171au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 013d:171a  add dx, 2  [x6]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, true));
    // 013d:171d  pop ax  [x6]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 013d:171e  out dx, al  [x6]
    c.ip = 0x171fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 013d:171f  pop dx  [x6]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 013d:1720  ret   [x6]
    c.ip = c.pop16(); return;
L02af1:
    if (c.tracing) c.traceAt(0x2af1);
    // 013d:1721  push ax  [x4]
    c.push16(c.a.x);
    // 013d:1722  push dx  [x4]
    c.push16(c.dx_.x);
    // 013d:1723  mov dx, 0x300  [x4]
    c.dx_.x = (uint16_t)(0x300u);
    // 013d:1726  in al, dx  [x4]
    c.ip = 0x1727u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 013d:1727  in al, dx  [x4]
    c.ip = 0x1728u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 013d:1728  in al, dx  [x4]
    c.ip = 0x1729u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 013d:1729  in al, dx  [x4]
    c.ip = 0x172au; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 013d:172a  in al, dx  [x4]
    c.ip = 0x172bu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 013d:172b  in al, dx  [x4]
    c.ip = 0x172cu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 013d:172c  in al, dx  [x4]
    c.ip = 0x172du; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 013d:172d  pop dx  [x4]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 013d:172e  pop ax  [x4]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 013d:172f  ret   [x4]
    c.ip = c.pop16(); return;
L02ba0:
    if (c.tracing) c.traceAt(0x2ba0);
    // 013d:17d0  mov ax, 0x3d00  [x1]
    c.a.x = (uint16_t)(0x3d00u);
    // 013d:17d3  mov dx, 0x44d  [x1]
    c.dx_.x = (uint16_t)(0x44du);
    // 013d:17d6  int 0x21  [x1]
    c.ip = 0x17d8u; c.d32 = false; c.intr(0x21, 0x17d8u);
L02ba8:
    if (c.tracing) c.traceAt(0x2ba8);
    // 013d:17d8  mov bx, ax  [x1]
    c.b.x = (uint16_t)(c.a.x);
    // 013d:17da  mov word ptr [0x1444], bx  [x1]
    c.w16(c.dsb + (uint16_t)(0x1444u), c.b.x);
    // 013d:17de  mov ah, 0x42  [x1]
    c.a.h = (uint8_t)(0x42u);
    // 013d:17e0  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 013d:17e2  mov cx, 0  [x1]
    c.c.x = (uint16_t)(0x0u);
    // 013d:17e5  mov dx, 0  [x1]
    c.dx_.x = (uint16_t)(0x0u);
    // 013d:17e8  int 0x21  [x1]
    c.ip = 0x17eau; c.d32 = false; c.intr(0x21, 0x17eau);
L02bba:
    if (c.tracing) c.traceAt(0x2bba);
    // 013d:17ea  sub ax, 0x2418  [x1]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x2418u, true));
    // 013d:17ed  sbb dx, 3  [x1]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x3u, true, c.cf));
    // 013d:17f0  mov cx, dx  [x1]
    c.c.x = (uint16_t)(c.dx_.x);
    // 013d:17f2  mov dx, ax  [x1]
    c.dx_.x = (uint16_t)(c.a.x);
    // 013d:17f4  mov ah, 0x42  [x1]
    c.a.h = (uint8_t)(0x42u);
    // 013d:17f6  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 013d:17f8  int 0x21  [x1]
    c.ip = 0x17fau; c.d32 = false; c.intr(0x21, 0x17fau);
L02bca:
    if (c.tracing) c.traceAt(0x2bca);
    // 013d:17fa  sub ax, 2  [x1]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x2u, true));
    // 013d:17fd  mov word ptr [0x1440], dx  [x1]
    c.w16(c.dsb + (uint16_t)(0x1440u), c.dx_.x);
    // 013d:1801  mov word ptr [0x1442], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x1442u), c.a.x);
    // 013d:1804  mov cx, dx  [x1]
    c.c.x = (uint16_t)(c.dx_.x);
    // 013d:1806  mov dx, ax  [x1]
    c.dx_.x = (uint16_t)(c.a.x);
    // 013d:1808  mov ah, 0x42  [x1]
    c.a.h = (uint8_t)(0x42u);
    // 013d:180a  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 013d:180c  int 0x21  [x1]
    c.ip = 0x180eu; c.d32 = false; c.intr(0x21, 0x180eu);
L02bde:
    if (c.tracing) c.traceAt(0x2bde);
    // 013d:180e  mov ah, 0x3f  [x1]
    c.a.h = (uint8_t)(0x3fu);
    // 013d:1810  mov cx, 2  [x1]
    c.c.x = (uint16_t)(0x2u);
    // 013d:1813  mov dx, 0x143e  [x1]
    c.dx_.x = (uint16_t)(0x143eu);
    // 013d:1816  int 0x21  [x1]
    c.ip = 0x1818u; c.d32 = false; c.intr(0x21, 0x1818u);
L02be8:
    if (c.tracing) c.traceAt(0x2be8);
    // 013d:1818  mov ax, word ptr [0x143e]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x143eu)));
    // 013d:181b  mov dx, 0x12  [x1]
    c.dx_.x = (uint16_t)(0x12u);
    // 013d:181e  mul dx  [x1]
    c.mul16(c.dx_.x);
    // 013d:1820  push ax  [x1]
    c.push16(c.a.x);
    // 013d:1821  mov cx, word ptr [0x1440]  [x1]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1440u)));
    // 013d:1825  mov dx, word ptr [0x1442]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1442u)));
    // 013d:1829  sub dx, ax  [x1]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.a.x, true));
    // 013d:182b  sbb cx, 0  [x1]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, 0x0u, true, c.cf));
    // 013d:182e  mov ah, 0x42  [x1]
    c.a.h = (uint8_t)(0x42u);
    // 013d:1830  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 013d:1832  int 0x21  [x1]
    c.ip = 0x1834u; c.d32 = false; c.intr(0x21, 0x1834u);
L02c04:
    if (c.tracing) c.traceAt(0x2c04);
    // 013d:1834  pop cx  [x1]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 013d:1835  mov ah, 0x3f  [x1]
    c.a.h = (uint8_t)(0x3fu);
    // 013d:1837  mov dx, 0x62e  [x1]
    c.dx_.x = (uint16_t)(0x62eu);
    // 013d:183a  int 0x21  [x1]
    c.ip = 0x183cu; c.d32 = false; c.intr(0x21, 0x183cu);
L02c0c:
    if (c.tracing) c.traceAt(0x2c0c);
    // 013d:183c  ret   [x1]
    c.ip = c.pop16(); return;
L02c0d:
    if (c.tracing) c.traceAt(0x2c0d);
    // 013d:183d  xor si, si  [x32]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 013d:183f  mov cx, word ptr [0x143e]  [x32]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x143eu)));
L02c13:
    if (c.tracing) c.traceAt(0x2c13);
    // 013d:1843  push si  [x1160]
    c.push16(c.si.x);
    // 013d:1844  mov bx, 0xc  [x1160]
    c.b.x = (uint16_t)(0xcu);
    // 013d:1847  xor di, di  [x1160]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L02c19:
    if (c.tracing) c.traceAt(0x2c19);
    // 013d:1849  mov al, byte ptr [di + 0x5fd]  [x1482]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x5fdu)));
    // 013d:184d  cmp al, 0x2e  [x1482]
    c.sub<8>(c.a.l, 0x2eu, true);
    // 013d:184f  jne 0x1856  [x1482]
    if (!c.zf) goto L02c26;
L02c21:
    if (c.tracing) c.traceAt(0x2c21);
    // 013d:1851  mov bx, di  [x34]
    c.b.x = (uint16_t)(c.di.x);
    // 013d:1853  add bx, 5  [x34]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x5u, true));
L02c26:
    if (c.tracing) c.traceAt(0x2c26);
    // 013d:1856  cmp al, 0x61  [x1482]
    c.sub<8>(c.a.l, 0x61u, true);
    // 013d:1858  jb 0x185c  [x1482]
    if (c.cf) goto L02c2c;
    c.notTranslated(0x2c2a, "fall-through");
L02c2c:
    if (c.tracing) c.traceAt(0x2c2c);
    // 013d:185c  mov ah, byte ptr [si + 0x62e]  [x1482]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x62eu)));
    // 013d:1860  inc si  [x1482]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 013d:1861  inc di  [x1482]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 013d:1862  cmp di, bx  [x1482]
    c.sub<16>(c.di.x, c.b.x, true);
    // 013d:1864  je 0x1870  [x1482]
    if (c.zf) goto L02c40;
L02c36:
    if (c.tracing) c.traceAt(0x2c36);
    // 013d:1866  cmp al, 0  [x1450]
    c.sub<8>(c.a.l, 0x0u, true);
    // 013d:1868  je 0x1870  [x1450]
    if (c.zf) goto L02c40;
L02c3a:
    if (c.tracing) c.traceAt(0x2c3a);
    // 013d:186a  cmp al, ah  [x1450]
    c.sub<8>(c.a.l, c.a.h, true);
    // 013d:186c  je 0x1849  [x1450]
    if (c.zf) goto L02c19;
L02c3e:
    if (c.tracing) c.traceAt(0x2c3e);
    // 013d:186e  jmp 0x1872  [x1128]
    goto L02c42;
L02c40:
    if (c.tracing) c.traceAt(0x2c40);
    // 013d:1870  pop si  [x32]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 013d:1871  ret   [x32]
    c.ip = c.pop16(); return;
L02c42:
    if (c.tracing) c.traceAt(0x2c42);
    // 013d:1872  pop si  [x1128]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 013d:1873  add si, 0x12  [x1128]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x12u, true));
    // 013d:1876  loop 0x1843  [x1128]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L02c13;
    c.notTranslated(0x2c48, "fall-through");
L02c4b:
    if (c.tracing) c.traceAt(0x2c4b);
    // 013d:187b  xor si, si  [x32]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 013d:187d  mov cx, word ptr [0x143e]  [x32]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x143eu)));
L02c51:
    if (c.tracing) c.traceAt(0x2c51);
    // 013d:1881  push si  [x1192]
    c.push16(c.si.x);
    // 013d:1882  mov bx, 0xc  [x1192]
    c.b.x = (uint16_t)(0xcu);
    // 013d:1885  xor di, di  [x1192]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L02c57:
    if (c.tracing) c.traceAt(0x2c57);
    // 013d:1887  mov al, byte ptr [di + 0x5f0]  [x1663]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x5f0u)));
    // 013d:188b  cmp al, 0x2e  [x1663]
    c.sub<8>(c.a.l, 0x2eu, true);
    // 013d:188d  jne 0x1894  [x1663]
    if (!c.zf) goto L02c64;
L02c5f:
    if (c.tracing) c.traceAt(0x2c5f);
    // 013d:188f  mov bx, di  [x66]
    c.b.x = (uint16_t)(c.di.x);
    // 013d:1891  add bx, 5  [x66]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x5u, true));
L02c64:
    if (c.tracing) c.traceAt(0x2c64);
    // 013d:1894  cmp al, 0x61  [x1663]
    c.sub<8>(c.a.l, 0x61u, true);
    // 013d:1896  jb 0x189a  [x1663]
    if (c.cf) goto L02c6a;
    c.notTranslated(0x2c68, "fall-through");
L02c6a:
    if (c.tracing) c.traceAt(0x2c6a);
    // 013d:189a  mov ah, byte ptr [si + 0x62e]  [x1663]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x62eu)));
    // 013d:189e  inc si  [x1663]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 013d:189f  inc di  [x1663]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 013d:18a0  cmp di, bx  [x1663]
    c.sub<16>(c.di.x, c.b.x, true);
    // 013d:18a2  je 0x18ae  [x1663]
    if (c.zf) goto L02c7e;
L02c74:
    if (c.tracing) c.traceAt(0x2c74);
    // 013d:18a4  cmp al, 0  [x1631]
    c.sub<8>(c.a.l, 0x0u, true);
    // 013d:18a6  je 0x18ae  [x1631]
    if (c.zf) goto L02c7e;
L02c78:
    if (c.tracing) c.traceAt(0x2c78);
    // 013d:18a8  cmp al, ah  [x1631]
    c.sub<8>(c.a.l, c.a.h, true);
    // 013d:18aa  je 0x1887  [x1631]
    if (c.zf) goto L02c57;
L02c7c:
    if (c.tracing) c.traceAt(0x2c7c);
    // 013d:18ac  jmp 0x18b0  [x1160]
    goto L02c80;
L02c7e:
    if (c.tracing) c.traceAt(0x2c7e);
    // 013d:18ae  pop si  [x32]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 013d:18af  ret   [x32]
    c.ip = c.pop16(); return;
L02c80:
    if (c.tracing) c.traceAt(0x2c80);
    // 013d:18b0  pop si  [x1160]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 013d:18b1  add si, 0x12  [x1160]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x12u, true));
    // 013d:18b4  loop 0x1881  [x1160]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L02c51;
    c.notTranslated(0x2c86, "fall-through");
L02c88:
    if (c.tracing) c.traceAt(0x2c88);
    // 013d:18b8  xor ah, ah  [x1]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), true));
    // 013d:18ba  int 0x1a  [x1]
    c.ip = 0x18bcu; c.d32 = false; c.intr(0x1a, 0x18bcu);
L02c8c:
    if (c.tracing) c.traceAt(0x2c8c);
    // 013d:18bc  push cx  [x1]
    c.push16(c.c.x);
    // 013d:18bd  push dx  [x1]
    c.push16(c.dx_.x);
    // 013d:18be  mov bx, 0x20  [x1]
    c.b.x = (uint16_t)(0x20u);
    // 013d:18c1  mov ax, 0xb800  [x1]
    c.a.x = (uint16_t)(0xb800u);
    // 013d:18c4  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 013d:18c6  mov ds, ax  [x1]
    c.loadDs(c.a.x);
L02c98:
    if (c.tracing) c.traceAt(0x2c98);
    // 013d:18c8  xor di, di  [x32]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 013d:18ca  mov si, di  [x32]
    c.si.x = (uint16_t)(c.di.x);
    // 013d:18cc  mov cx, 0x1000  [x32]
    c.c.x = (uint16_t)(0x1000u);
    // 013d:18cf  xor ax, ax  [x32]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L02ca1:
    if (c.tracing) c.traceAt(0x2ca1);
    // 013d:18d1  pushal   [x131072]
    { const uint32_t t0 = c.sp.e; c.push32(c.a.e); c.push32(c.c.e); c.push32(c.dx_.e); c.push32(c.b.e); c.push32(t0); c.push32(c.bp.e); c.push32(c.si.e); c.push32(c.di.e); }
    // 013d:18d3  popal   [x131072]
    c.di.e = c.pop32(); c.si.e = c.pop32(); c.bp.e = c.pop32(); c.pop32(); c.b.e = c.pop32(); c.dx_.e = c.pop32(); c.c.e = c.pop32(); c.a.e = c.pop32();
    // 013d:18d5  mov eax, 0  [x131072]
    c.a.e = (uint32_t)(0x0u);
    // 013d:18db  mul eax  [x131072]
    c.mul32(c.a.e);
    // 013d:18de  mov ax, 1  [x131072]
    c.a.x = (uint16_t)(0x1u);
    // 013d:18e1  xor dx, dx  [x131072]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 013d:18e3  div ax  [x131072]
    while (!c.div16(c.a.x)) { c.d32 = false; c.intr(0, 0x18e3u); }   // #DE: int 0, then again
    // 013d:18e5  add ax, ax  [x131072]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.a.x, true));
L02cb7:
    if (c.tracing) c.traceAt(0x2cb7);
    // 013d:18e7  shr ax, 1  [x131073]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x1u) & 31), true));
    // 013d:18e9  loop 0x18d1  [x131073]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L02ca1;
L02cbb:
    if (c.tracing) c.traceAt(0x2cbb);
    // 013d:18eb  dec bx  [x32]
    c.b.x = (uint16_t)(c.dec<16>(c.b.x, true));
    // 013d:18ec  jne 0x18c8  [x32]
    if (!c.zf) goto L02c98;
L02cbe:
    if (c.tracing) c.traceAt(0x2cbe);
    // 013d:18ee  mov ax, cs  [x1]
    c.a.x = (uint16_t)(c.cs);
    // 013d:18f0  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 013d:18f2  xor ah, ah  [x1]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), true));
    // 013d:18f4  int 0x1a  [x1]
    c.ip = 0x18f6u; c.d32 = false; c.intr(0x1a, 0x18f6u);
L02cc6:
    if (c.tracing) c.traceAt(0x2cc6);
    // 013d:18f6  mov word ptr [0x1917], dx  [x1]
    c.w16(c.dsb + (uint16_t)(0x1917u), c.dx_.x);
    // 013d:18fa  mov word ptr [0x1919], cx  [x1]
    c.w16(c.dsb + (uint16_t)(0x1919u), c.c.x);
    // 013d:18fe  pop dx  [x1]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 013d:18ff  pop cx  [x1]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 013d:1900  sub word ptr [0x1917], dx  [x1]
    c.w16(c.dsb + (uint16_t)(0x1917u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x1917u)), c.dx_.x, true));
    // 013d:1904  sbb word ptr [0x1919], cx  [x1]
    c.w16(c.dsb + (uint16_t)(0x1919u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x1919u)), c.c.x, false, c.cf));
    // 013d:1908  test word ptr [0x1919], 0xffff  [x1]
    c.logic<16>((c.r16(c.dsb + (uint16_t)(0x1919u))) & (0xffffu), true);
    // 013d:190e  jne 0x1912  [x1]
    if (!c.zf) { t = 0x2ce2u; goto dispatch; }
L02ce0:
    if (c.tracing) c.traceAt(0x2ce0);
    // 013d:1910  clc   [x1]
    c.cf = false;
    // 013d:1911  ret   [x1]
    c.ip = c.pop16(); return;
L02ceb:
    if (c.tracing) c.traceAt(0x2ceb);
    // 013d:191b  lcall 0x2d2, 0x2366  [x1]
    c.push16(c.cs); c.push16(0x1920u); c.loadCs(0x2d2u); c.callLinear(c.csb + 0x2366u);
L02cf0:
    if (c.tracing) c.traceAt(0x2cf0);
    // 013d:1920  lcall 0x2d2, 0x2540  [x1]
    c.push16(c.cs); c.push16(0x1925u); c.loadCs(0x2d2u); c.callLinear(c.csb + 0x2540u);
L02cf5:
    if (c.tracing) c.traceAt(0x2cf5);
    // 013d:1925  call 0x162c  [x1]
    c.push16(0x1928u); code_0(c, 0x29fcu); if (c.ip != 0x1928u) c.badReturn(0x2cf5);
L02cf8:
    if (c.tracing) c.traceAt(0x2cf8);
    // 013d:1928  mov es, word ptr [0x54d]  [x1]
    c.loadEs(c.r16(c.dsb + (uint16_t)(0x54du)));
    // 013d:192c  mov ax, 0x4900  [x1]
    c.a.x = (uint16_t)(0x4900u);
    // 013d:192f  int 0x21  [x1]
    c.ip = 0x1931u; c.d32 = false; c.intr(0x21, 0x1931u);
L02d01:
    if (c.tracing) c.traceAt(0x2d01);
    // 013d:1931  mov ax, 3  [x1]
    c.a.x = (uint16_t)(0x3u);
    // 013d:1934  int 0x10  [x1]
    c.ip = 0x1936u; c.d32 = false; c.intr(0x10, 0x1936u);
L02d06:
    if (c.tracing) c.traceAt(0x2d06);
    // 013d:1936  mov dx, 0  [x1]
    c.dx_.x = (uint16_t)(0x0u);
    // 013d:1939  mov ah, 9  [x1]
    c.a.h = (uint8_t)(0x9u);
    // 013d:193b  int 0x21  [x1]
    c.ip = 0x193du; c.d32 = false; c.intr(0x21, 0x193du);
L02d0d:
    if (c.tracing) c.traceAt(0x2d0d);
    // 013d:193d  mov ax, 0x4c00  [x1]
    c.a.x = (uint16_t)(0x4c00u);
    // 013d:1940  int 0x21  [x1]
    c.ip = 0x1942u; c.d32 = false; c.intr(0x21, 0x1942u);
    c.notTranslated(0x2d12, "fall-through");
L04558:
    if (c.tracing) c.traceAt(0x4558);
    // 02d2:1838  pushaw   [x527533]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 02d2:1839  push ds  [x527533]
    c.push16(c.ds);
    // 02d2:183a  push es  [x527533]
    c.push16(c.es);
    // 02d2:183b  mov ax, 0x2d2  [x527533]
    c.a.x = (uint16_t)(0x2d2u);
    // 02d2:183e  mov ds, ax  [x527533]
    c.loadDs(c.a.x);
    // 02d2:1840  mov al, 0x20  [x527533]
    c.a.l = (uint8_t)(0x20u);
    // 02d2:1842  out 0x20, al  [x527533]
    c.ip = 0x1844u; c.d32 = false; c.out8(0x20, c.a.l);
    // 02d2:1844  sti   [x527533]
    c.ip = 0x1845u; c.d32 = false; c.m.sti();
L04565:
    if (c.tracing) c.traceAt(0x4565);
    // 02d2:1845  add word ptr [0x167c], 1  [x527533]
    c.w16(c.dsb + (uint16_t)(0x167cu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x167cu)), 0x1u, true));
L0456a:
    if (c.tracing) c.traceAt(0x456a);
    // 02d2:184a  adc word ptr [0x167e], 0  [x527533]
    c.w16(c.dsb + (uint16_t)(0x167eu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x167eu)), 0x0u, false, c.cf));
    // 02d2:184f  inc word ptr [0x1682]  [x527533]
    c.w16(c.dsb + (uint16_t)(0x1682u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x1682u)), false));
    // 02d2:1853  inc word ptr [0x167a]  [x527533]
    c.w16(c.dsb + (uint16_t)(0x167au), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x167au)), false));
    // 02d2:1857  mov ax, word ptr [0x1674]  [x527533]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1674u)));
    // 02d2:185a  add word ptr [0x1678], ax  [x527533]
    c.w16(c.dsb + (uint16_t)(0x1678u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x1678u)), c.a.x, true));
    // 02d2:185e  mov ax, word ptr [0x1672]  [x527533]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1672u)));
    // 02d2:1861  adc word ptr [0x1676], ax  [x527533]
    c.w16(c.dsb + (uint16_t)(0x1676u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x1676u)), c.a.x, true, c.cf));
    // 02d2:1865  jae 0x186a  [x527533]
    if (!c.cf) goto L0458a;
L04587:
    if (c.tracing) c.traceAt(0x4587);
    // 02d2:1867  jmp 0x1c24  [x26376]
    goto L04944;
L0458a:
    if (c.tracing) c.traceAt(0x458a);
    // 02d2:186a  cmp word ptr [0x167a], 4  [x501157]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x167au)), 0x4u, true);
    // 02d2:186f  je 0x187e  [x501157]
    if (c.zf) goto L0459e;
L04591:
    if (c.tracing) c.traceAt(0x4591);
    // 02d2:1871  cmp word ptr [0x167a], 5  [x474781]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x167au)), 0x5u, true);
    // 02d2:1876  jne 0x187b  [x474781]
    if (!c.zf) goto L0459b;
L04598:
    if (c.tracing) c.traceAt(0x4598);
    // 02d2:1878  jmp 0x1918  [x26376]
    goto L04638;
L0459b:
    if (c.tracing) c.traceAt(0x459b);
    // 02d2:187b  jmp 0x2230  [x448405]
    goto L04f50;
L0459e:
    if (c.tracing) c.traceAt(0x459e);
    // 02d2:187e  mov di, 0x1688  [x26376]
    c.di.x = (uint16_t)(0x1688u);
    // 02d2:1881  mov cx, word ptr [0xf32]  [x26376]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf32u)));
    // 02d2:1885  mov dx, word ptr [0xf2e]  [x26376]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf2eu)));
    // 02d2:1889  add dx, 0x103  [x26376]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
L045ad:
    if (c.tracing) c.traceAt(0x45ad);
    // 02d2:188d  dec dx  [x105504]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:188e  mov al, byte ptr [0xf32]  [x105504]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xf32u)));
    // 02d2:1891  sub al, cl  [x105504]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.c.l, false));
    // 02d2:1893  out dx, al  [x105504]
    c.ip = 0x1894u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1894  inc dx  [x105504]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1895  cmp word ptr [di + 0x2c], 2  [x105504]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2cu)), 0x2u, true);
    // 02d2:1899  je 0x18b3  [x105504]
    if (c.zf) goto L045d3;
L045bb:
    if (c.tracing) c.traceAt(0x45bb);
    // 02d2:189b  cmp word ptr [di + 0x2c], 1  [x94639]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2cu)), 0x1u, true);
    // 02d2:189f  je 0x18a9  [x94639]
    if (c.zf) goto L045c9;
L045c1:
    if (c.tracing) c.traceAt(0x45c1);
    // 02d2:18a1  cmp word ptr [di + 0x30], 0  [x94204]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), 0x0u, true);
    // 02d2:18a5  jne 0x18b3  [x94204]
    if (!c.zf) goto L045d3;
L045c7:
    if (c.tracing) c.traceAt(0x45c7);
    // 02d2:18a7  jmp 0x190c  [x94204]
    goto L0462c;
L045c9:
    if (c.tracing) c.traceAt(0x45c9);
    // 02d2:18a9  mov ax, word ptr [di + 0x20]  [x435]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x20u)));
    // 02d2:18ac  cmp ax, word ptr [di + 0x22]  [x435]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x22u)), true);
    // 02d2:18af  jne 0x18b3  [x435]
    if (!c.zf) goto L045d3;
L045d1:
    if (c.tracing) c.traceAt(0x45d1);
    // 02d2:18b1  jmp 0x190c  [x400]
    goto L0462c;
L045d3:
    if (c.tracing) c.traceAt(0x45d3);
    // 02d2:18b3  mov ax, word ptr [di + 8]  [x10900]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x8u)));
    // 02d2:18b6  mov word ptr [di + 8], 0  [x10900]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x8u), 0x0u);
    // 02d2:18bb  mov bx, word ptr [0x1686]  [x10900]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1686u)));
    // 02d2:18bf  mul bx  [x10900]
    c.mul16(c.b.x);
    // 02d2:18c1  shr ax, 6  [x10900]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x6u) & 31), true));
    // 02d2:18c4  adc ax, 0  [x10900]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x0u, false, c.cf));
    // 02d2:18c7  mov bx, ax  [x10900]
    c.b.x = (uint16_t)(c.a.x);
    // 02d2:18c9  shl bx, 1  [x10900]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), false));
    // 02d2:18cb  mov bx, word ptr [bx + 0xcfc]  [x10900]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xcfcu)));
    // 02d2:18cf  mov dx, word ptr [0xf2e]  [x10900]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf2eu)));
    // 02d2:18d3  add dx, 0x103  [x10900]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02d2:18d7  mov al, 0xd  [x10900]
    c.a.l = (uint8_t)(0xdu);
    // 02d2:18d9  out dx, al  [x10900]
    c.ip = 0x18dau; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:18da  add dx, 2  [x10900]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:18dd  mov al, 3  [x10900]
    c.a.l = (uint8_t)(0x3u);
    // 02d2:18df  out dx, al  [x10900]
    c.ip = 0x18e0u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:18e0  sub dx, 2  [x10900]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, false));
    // 02d2:18e3  mov bp, word ptr [0xcfc]  [x10900]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xcfcu)));
    // 02d2:18e7  mov ah, 0  [x10900]
    c.a.h = (uint8_t)(0x0u);
    // 02d2:18e9  cmp bx, bp  [x10900]
    c.sub<16>(c.b.x, c.bp.x, true);
    // 02d2:18eb  jb 0x18f1  [x10900]
    if (c.cf) goto L04611;
L0460d:
    if (c.tracing) c.traceAt(0x460d);
    // 02d2:18ed  mov ah, 0x40  [x10900]
    c.a.h = (uint8_t)(0x40u);
    // 02d2:18ef  xchg bp, bx  [x10900]
    { const uint32_t t0 = c.bp.x; c.bp.x = (uint16_t)(c.b.x); c.b.x = (uint16_t)(t0); }
L04611:
    if (c.tracing) c.traceAt(0x4611);
    // 02d2:18f1  mov al, 7  [x10900]
    c.a.l = (uint8_t)(0x7u);
    // 02d2:18f3  out dx, al  [x10900]
    c.ip = 0x18f4u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:18f4  xchg bx, ax  [x10900]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 02d2:18f5  inc dx  [x10900]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:18f6  out dx, ax  [x10900]
    c.ip = 0x18f7u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:18f7  dec dx  [x10900]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:18f8  mov al, 8  [x10900]
    c.a.l = (uint8_t)(0x8u);
    // 02d2:18fa  out dx, al  [x10900]
    c.ip = 0x18fbu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:18fb  mov ax, bp  [x10900]
    c.a.x = (uint16_t)(c.bp.x);
    // 02d2:18fd  inc dx  [x10900]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:18fe  out dx, ax  [x10900]
    c.ip = 0x18ffu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:18ff  dec dx  [x10900]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1900  mov al, 0xd  [x10900]
    c.a.l = (uint8_t)(0xdu);
    // 02d2:1902  out dx, al  [x10900]
    c.ip = 0x1903u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1903  mov al, bh  [x10900]
    c.a.l = (uint8_t)(c.b.h);
    // 02d2:1905  add dx, 2  [x10900]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:1908  out dx, al  [x10900]
    c.ip = 0x1909u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1909  sub dx, 2  [x10900]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, true));
L0462c:
    if (c.tracing) c.traceAt(0x462c);
    // 02d2:190c  add di, 0x36  [x105504]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x36u, true));
    // 02d2:190f  dec cx  [x105504]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 02d2:1910  je 0x1915  [x105504]
    if (c.zf) goto L04635;
L04632:
    if (c.tracing) c.traceAt(0x4632);
    // 02d2:1912  jmp 0x188d  [x79128]
    goto L045ad;
L04635:
    if (c.tracing) c.traceAt(0x4635);
    // 02d2:1915  jmp 0x2230  [x26376]
    goto L04f50;
L04638:
    if (c.tracing) c.traceAt(0x4638);
    // 02d2:1918  mov word ptr [0x167a], 1  [x26376]
    c.w16(c.dsb + (uint16_t)(0x167au), 0x1u);
    // 02d2:191e  mov di, 0x1688  [x26376]
    c.di.x = (uint16_t)(0x1688u);
    // 02d2:1921  mov cx, word ptr [0xf32]  [x26376]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf32u)));
    // 02d2:1925  mov dx, word ptr [0xf2e]  [x26376]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf2eu)));
    // 02d2:1929  add dx, 0x103  [x26376]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
L0464d:
    if (c.tracing) c.traceAt(0x464d);
    // 02d2:192d  dec dx  [x105504]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:192e  mov al, byte ptr [0xf32]  [x105504]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xf32u)));
    // 02d2:1931  sub al, cl  [x105504]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.c.l, false));
    // 02d2:1933  out dx, al  [x105504]
    c.ip = 0x1934u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1934  inc dx  [x105504]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1935  cmp word ptr [di + 0x2c], 2  [x105504]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2cu)), 0x2u, true);
    // 02d2:1939  je 0x1985  [x105504]
    if (c.zf) goto L046a5;
L0465b:
    if (c.tracing) c.traceAt(0x465b);
    // 02d2:193b  cmp word ptr [di + 0x2c], 1  [x94639]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2cu)), 0x1u, true);
    // 02d2:193f  jne 0x1944  [x94639]
    if (!c.zf) goto L04664;
L04661:
    if (c.tracing) c.traceAt(0x4661);
    // 02d2:1941  jmp 0x1a38  [x435]
    goto L04758;
L04664:
    if (c.tracing) c.traceAt(0x4664);
    // 02d2:1944  cmp word ptr [di + 0x30], 0  [x94204]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), 0x0u, true);
    // 02d2:1948  jne 0x194d  [x94204]
    if (!c.zf) { t = 0x466du; goto dispatch; }
L0466a:
    if (c.tracing) c.traceAt(0x466a);
    // 02d2:194a  jmp 0x1b16  [x94204]
    goto L04836;
L046a5:
    if (c.tracing) c.traceAt(0x46a5);
    // 02d2:1985  mov al, 0  [x10865]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:1987  out dx, al  [x10865]
    c.ip = 0x1988u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1988  add dx, 2  [x10865]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:198b  mov al, 3  [x10865]
    c.a.l = (uint8_t)(0x3u);
    // 02d2:198d  out dx, al  [x10865]
    c.ip = 0x198eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:198e  sub dx, 0x105  [x10865]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x105u, false));
    // 02d2:1992  in al, dx  [x10865]
    c.ip = 0x1993u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1993  in al, dx  [x10865]
    c.ip = 0x1994u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1994  in al, dx  [x10865]
    c.ip = 0x1995u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1995  in al, dx  [x10865]
    c.ip = 0x1996u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1996  in al, dx  [x10865]
    c.ip = 0x1997u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1997  in al, dx  [x10865]
    c.ip = 0x1998u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1998  add dx, 0x103  [x10865]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02d2:199c  mov al, 0xa  [x10865]
    c.a.l = (uint8_t)(0xau);
    // 02d2:199e  out dx, al  [x10865]
    c.ip = 0x199fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:199f  inc dx  [x10865]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:19a0  mov ax, word ptr [di]  [x10865]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:19a2  mov bp, word ptr [di + 2]  [x10865]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)));
    // 02d2:19a5  add ax, word ptr [di + 0x30]  [x10865]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), true));
    // 02d2:19a8  adc bp, 0  [x10865]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x0u, false, c.cf));
    // 02d2:19ab  shr ax, 7  [x10865]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02d2:19ae  shl bp, 9  [x10865]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x9u) & 31), false));
    // 02d2:19b1  or ax, bp  [x10865]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.bp.x), false));
    // 02d2:19b3  out dx, ax  [x10865]
    c.ip = 0x19b4u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:19b4  dec dx  [x10865]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:19b5  mov al, 0xb  [x10865]
    c.a.l = (uint8_t)(0xbu);
    // 02d2:19b7  out dx, al  [x10865]
    c.ip = 0x19b8u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:19b8  inc dx  [x10865]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:19b9  mov ax, word ptr [di]  [x10865]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:19bb  add ax, word ptr [di + 0x30]  [x10865]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), false));
    // 02d2:19be  shl ax, 9  [x10865]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x9u) & 31), false));
    // 02d2:19c1  out dx, ax  [x10865]
    c.ip = 0x19c2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:19c2  sub dx, 0x104  [x10865]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x104u, false));
    // 02d2:19c6  in al, dx  [x10865]
    c.ip = 0x19c7u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:19c7  in al, dx  [x10865]
    c.ip = 0x19c8u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:19c8  in al, dx  [x10865]
    c.ip = 0x19c9u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:19c9  in al, dx  [x10865]
    c.ip = 0x19cau; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:19ca  in al, dx  [x10865]
    c.ip = 0x19cbu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:19cb  in al, dx  [x10865]
    c.ip = 0x19ccu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:19cc  add dx, 0x103  [x10865]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02d2:19d0  mov ax, word ptr [di + 0x22]  [x10865]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x22u)));
    // 02d2:19d3  cmp ax, word ptr [di + 0x20]  [x10865]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x20u)), true);
    // 02d2:19d6  jne 0x19db  [x10865]
    if (!c.zf) goto L046fb;
L046f8:
    if (c.tracing) c.traceAt(0x46f8);
    // 02d2:19d8  jmp 0x1b16  [x4405]
    goto L04836;
L046fb:
    if (c.tracing) c.traceAt(0x46fb);
    // 02d2:19db  mov al, 4  [x6460]
    c.a.l = (uint8_t)(0x4u);
    // 02d2:19dd  out dx, al  [x6460]
    c.ip = 0x19deu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:19de  inc dx  [x6460]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:19df  mov ax, word ptr [di]  [x6460]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:19e1  mov bp, word ptr [di + 2]  [x6460]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)));
    // 02d2:19e4  add ax, word ptr [di + 0x10]  [x6460]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), true));
    // 02d2:19e7  adc bp, 0  [x6460]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x0u, false, c.cf));
    // 02d2:19ea  shr ax, 7  [x6460]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02d2:19ed  shl bp, 9  [x6460]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x9u) & 31), false));
    // 02d2:19f0  or ax, bp  [x6460]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.bp.x), false));
    // 02d2:19f2  out dx, ax  [x6460]
    c.ip = 0x19f3u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:19f3  dec dx  [x6460]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:19f4  mov al, 5  [x6460]
    c.a.l = (uint8_t)(0x5u);
    // 02d2:19f6  out dx, al  [x6460]
    c.ip = 0x19f7u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:19f7  inc dx  [x6460]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:19f8  mov ax, word ptr [di]  [x6460]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:19fa  add ax, word ptr [di + 0x10]  [x6460]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), false));
    // 02d2:19fd  shl ax, 9  [x6460]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x9u) & 31), false));
    // 02d2:1a00  out dx, ax  [x6460]
    c.ip = 0x1a01u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:1a01  dec dx  [x6460]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1a02  mov al, 2  [x6460]
    c.a.l = (uint8_t)(0x2u);
    // 02d2:1a04  out dx, al  [x6460]
    c.ip = 0x1a05u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1a05  inc dx  [x6460]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1a06  mov ax, word ptr [di]  [x6460]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:1a08  mov bp, word ptr [di + 2]  [x6460]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)));
    // 02d2:1a0b  add ax, word ptr [di + 0xc]  [x6460]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xcu)), true));
    // 02d2:1a0e  adc bp, 0  [x6460]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x0u, false, c.cf));
    // 02d2:1a11  shr ax, 7  [x6460]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02d2:1a14  shl bp, 9  [x6460]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x9u) & 31), false));
    // 02d2:1a17  or ax, bp  [x6460]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.bp.x), false));
    // 02d2:1a19  out dx, ax  [x6460]
    c.ip = 0x1a1au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:1a1a  dec dx  [x6460]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1a1b  mov al, 3  [x6460]
    c.a.l = (uint8_t)(0x3u);
    // 02d2:1a1d  out dx, al  [x6460]
    c.ip = 0x1a1eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1a1e  inc dx  [x6460]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1a1f  mov ax, word ptr [di]  [x6460]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:1a21  add ax, word ptr [di + 0xc]  [x6460]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xcu)), false));
    // 02d2:1a24  shl ax, 9  [x6460]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x9u) & 31), false));
    // 02d2:1a27  out dx, ax  [x6460]
    c.ip = 0x1a28u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:1a28  dec dx  [x6460]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1a29  mov al, 0  [x6460]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:1a2b  out dx, al  [x6460]
    c.ip = 0x1a2cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1a2c  add dx, 2  [x6460]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:1a2f  mov al, 3  [x6460]
    c.a.l = (uint8_t)(0x3u);
    // 02d2:1a31  out dx, al  [x6460]
    c.ip = 0x1a32u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1a32  sub dx, 2  [x6460]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, true));
    // 02d2:1a35  jmp 0x1b16  [x6460]
    goto L04836;
L04758:
    if (c.tracing) c.traceAt(0x4758);
    // 02d2:1a38  mov ax, word ptr [di + 0x22]  [x435]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x22u)));
    // 02d2:1a3b  cmp ax, word ptr [di + 0x20]  [x435]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x20u)), true);
    // 02d2:1a3e  jne 0x1a43  [x435]
    if (!c.zf) goto L04763;
L04760:
    if (c.tracing) c.traceAt(0x4760);
    // 02d2:1a40  jmp 0x1b16  [x400]
    goto L04836;
L04763:
    if (c.tracing) c.traceAt(0x4763);
    // 02d2:1a43  mov al, 0x8a  [x35]
    c.a.l = (uint8_t)(0x8au);
    // 02d2:1a45  out dx, al  [x35]
    c.ip = 0x1a46u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1a46  inc dx  [x35]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1a47  in ax, dx  [x35]
    c.ip = 0x1a48u; c.d32 = false; c.a.x = c.in16(c.dx_.x);
    // 02d2:1a48  mov bx, ax  [x35]
    c.b.x = (uint16_t)(c.a.x);
    // 02d2:1a4a  dec dx  [x35]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1a4b  mov al, 0x8b  [x35]
    c.a.l = (uint8_t)(0x8bu);
    // 02d2:1a4d  out dx, al  [x35]
    c.ip = 0x1a4eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1a4e  inc dx  [x35]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1a4f  in ax, dx  [x35]
    c.ip = 0x1a50u; c.d32 = false; c.a.x = c.in16(c.dx_.x);
    // 02d2:1a50  dec dx  [x35]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1a51  xchg bx, ax  [x35]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 02d2:1a52  shl ax, 7  [x35]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02d2:1a55  shr bx, 9  [x35]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x9u) & 31), false));
    // 02d2:1a58  and bx, 0x7f  [x35]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x7fu), false));
    // 02d2:1a5b  or ax, bx  [x35]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.b.x), false));
    // 02d2:1a5d  mov bx, word ptr [di + 0x22]  [x35]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x22u)));
    // 02d2:1a60  dec bx  [x35]
    c.b.x = (uint16_t)(c.dec<16>(c.b.x, false));
    // 02d2:1a61  shl bx, 2  [x35]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x2u) & 31), false));
    // 02d2:1a64  sub ax, word ptr [bx + 0xd7c]  [x35]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.b.x + 0xd7cu)), false));
    // 02d2:1a68  mov bx, ax  [x35]
    c.b.x = (uint16_t)(c.a.x);
    // 02d2:1a6a  cmp bx, word ptr [di + 0x10]  [x35]
    c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), true);
    // 02d2:1a6d  jb 0x1a73  [x35]
    if (c.cf) goto L04793;
    c.notTranslated(0x478f, "fall-through");
L04793:
    if (c.tracing) c.traceAt(0x4793);
    // 02d2:1a73  cmp word ptr [di + 0x30], 0  [x35]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), 0x0u, true);
    // 02d2:1a77  jne 0x1a7c  [x35]
    if (!c.zf) goto L0479c;
L04799:
    if (c.tracing) c.traceAt(0x4799);
    // 02d2:1a79  mov word ptr [di + 0x30], bx  [x35]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x30u), c.b.x);
L0479c:
    if (c.tracing) c.traceAt(0x479c);
    // 02d2:1a7c  mov al, 0xa  [x35]
    c.a.l = (uint8_t)(0xau);
    // 02d2:1a7e  out dx, al  [x35]
    c.ip = 0x1a7fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1a7f  inc dx  [x35]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1a80  mov ax, word ptr [di]  [x35]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:1a82  mov bp, word ptr [di + 2]  [x35]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)));
    // 02d2:1a85  add ax, word ptr [di + 0x30]  [x35]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), true));
    // 02d2:1a88  adc bp, 0  [x35]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x0u, false, c.cf));
    // 02d2:1a8b  shr ax, 7  [x35]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02d2:1a8e  shl bp, 9  [x35]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x9u) & 31), false));
    // 02d2:1a91  or ax, bp  [x35]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.bp.x), false));
    // 02d2:1a93  out dx, ax  [x35]
    c.ip = 0x1a94u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:1a94  dec dx  [x35]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1a95  mov al, 0xb  [x35]
    c.a.l = (uint8_t)(0xbu);
    // 02d2:1a97  out dx, al  [x35]
    c.ip = 0x1a98u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1a98  inc dx  [x35]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1a99  mov ax, word ptr [di]  [x35]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:1a9b  add ax, word ptr [di + 0x30]  [x35]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x30u)), false));
    // 02d2:1a9e  shl ax, 9  [x35]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x9u) & 31), false));
    // 02d2:1aa1  out dx, ax  [x35]
    c.ip = 0x1aa2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:1aa2  sub dx, 0x104  [x35]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x104u, false));
    // 02d2:1aa6  in al, dx  [x35]
    c.ip = 0x1aa7u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1aa7  in al, dx  [x35]
    c.ip = 0x1aa8u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1aa8  in al, dx  [x35]
    c.ip = 0x1aa9u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1aa9  in al, dx  [x35]
    c.ip = 0x1aaau; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1aaa  in al, dx  [x35]
    c.ip = 0x1aabu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1aab  in al, dx  [x35]
    c.ip = 0x1aacu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1aac  add dx, 0x103  [x35]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02d2:1ab0  mov al, 4  [x35]
    c.a.l = (uint8_t)(0x4u);
    // 02d2:1ab2  out dx, al  [x35]
    c.ip = 0x1ab3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1ab3  inc dx  [x35]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1ab4  mov ax, word ptr [di]  [x35]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:1ab6  mov bp, word ptr [di + 2]  [x35]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)));
    // 02d2:1ab9  add ax, word ptr [di + 0x10]  [x35]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), true));
    // 02d2:1abc  adc bp, 0  [x35]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x0u, false, c.cf));
    // 02d2:1abf  shr ax, 7  [x35]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02d2:1ac2  shl bp, 9  [x35]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x9u) & 31), false));
    // 02d2:1ac5  or ax, bp  [x35]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.bp.x), false));
    // 02d2:1ac7  out dx, ax  [x35]
    c.ip = 0x1ac8u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:1ac8  dec dx  [x35]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1ac9  mov al, 5  [x35]
    c.a.l = (uint8_t)(0x5u);
    // 02d2:1acb  out dx, al  [x35]
    c.ip = 0x1accu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1acc  inc dx  [x35]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1acd  mov ax, word ptr [di]  [x35]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:1acf  add ax, word ptr [di + 0x10]  [x35]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), false));
    // 02d2:1ad2  shl ax, 9  [x35]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x9u) & 31), false));
    // 02d2:1ad5  out dx, ax  [x35]
    c.ip = 0x1ad6u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:1ad6  dec dx  [x35]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1ad7  mov al, 2  [x35]
    c.a.l = (uint8_t)(0x2u);
    // 02d2:1ad9  out dx, al  [x35]
    c.ip = 0x1adau; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1ada  inc dx  [x35]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1adb  mov ax, word ptr [di]  [x35]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:1add  mov bp, word ptr [di + 2]  [x35]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)));
    // 02d2:1ae0  add ax, word ptr [di + 0xc]  [x35]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xcu)), true));
    // 02d2:1ae3  adc bp, 0  [x35]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x0u, false, c.cf));
    // 02d2:1ae6  shr ax, 7  [x35]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x7u) & 31), false));
    // 02d2:1ae9  shl bp, 9  [x35]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x9u) & 31), false));
    // 02d2:1aec  or ax, bp  [x35]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.bp.x), false));
    // 02d2:1aee  out dx, ax  [x35]
    c.ip = 0x1aefu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:1aef  dec dx  [x35]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1af0  mov al, 3  [x35]
    c.a.l = (uint8_t)(0x3u);
    // 02d2:1af2  out dx, al  [x35]
    c.ip = 0x1af3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1af3  inc dx  [x35]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1af4  mov ax, word ptr [di]  [x35]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:1af6  add ax, word ptr [di + 0xc]  [x35]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xcu)), false));
    // 02d2:1af9  shl ax, 9  [x35]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x9u) & 31), false));
    // 02d2:1afc  out dx, ax  [x35]
    c.ip = 0x1afdu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:1afd  dec dx  [x35]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1afe  mov al, 0  [x35]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:1b00  out dx, al  [x35]
    c.ip = 0x1b01u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1b01  add dx, 2  [x35]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:1b04  mov al, byte ptr [di + 0x2e]  [x35]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x2eu)));
    // 02d2:1b07  out dx, al  [x35]
    c.ip = 0x1b08u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1b08  sub dx, 0x105  [x35]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x105u, false));
    // 02d2:1b0c  in al, dx  [x35]
    c.ip = 0x1b0du; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1b0d  in al, dx  [x35]
    c.ip = 0x1b0eu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1b0e  in al, dx  [x35]
    c.ip = 0x1b0fu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1b0f  in al, dx  [x35]
    c.ip = 0x1b10u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1b10  in al, dx  [x35]
    c.ip = 0x1b11u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1b11  in al, dx  [x35]
    c.ip = 0x1b12u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1b12  add dx, 0x103  [x35]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
L04836:
    if (c.tracing) c.traceAt(0x4836);
    // 02d2:1b16  mov ax, word ptr [di + 6]  [x105504]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6u)));
    // 02d2:1b19  cmp ax, word ptr [di + 8]  [x105504]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x8u)), true);
    // 02d2:1b1c  je 0x1b21  [x105504]
    if (c.zf) goto L04841;
L0483e:
    if (c.tracing) c.traceAt(0x483e);
    // 02d2:1b1e  mov word ptr [di + 0x32], ax  [x17395]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x32u), c.a.x);
L04841:
    if (c.tracing) c.traceAt(0x4841);
    // 02d2:1b21  mov word ptr [0xf44], ax  [x105504]
    c.w16(c.dsb + (uint16_t)(0xf44u), c.a.x);
    // 02d2:1b24  mov ax, word ptr [0x167a]  [x105504]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x167au)));
    // 02d2:1b27  test word ptr [0xf34], ax  [x105504]
    c.logic<16>((c.r16(c.dsb + (uint16_t)(0xf34u))) & (c.a.x), true);
    // 02d2:1b2b  jne 0x1b38  [x105504]
    if (!c.zf) goto L04858;
    c.notTranslated(0x484d, "fall-through");
L04858:
    if (c.tracing) c.traceAt(0x4858);
    // 02d2:1b38  mov ax, word ptr [di + 8]  [x105504]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x8u)));
    // 02d2:1b3b  mov bx, word ptr [0x1686]  [x105504]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1686u)));
    // 02d2:1b3f  mul bx  [x105504]
    c.mul16(c.b.x);
    // 02d2:1b41  shr ax, 6  [x105504]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x6u) & 31), true));
    // 02d2:1b44  adc ax, 0  [x105504]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x0u, false, c.cf));
    // 02d2:1b47  mov bx, ax  [x105504]
    c.b.x = (uint16_t)(c.a.x);
    // 02d2:1b49  shl bx, 1  [x105504]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), false));
    // 02d2:1b4b  mov bx, word ptr [bx + 0xcfc]  [x105504]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xcfcu)));
    // 02d2:1b4f  mov ax, word ptr [0xf44]  [x105504]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf44u)));
    // 02d2:1b52  mov bp, word ptr [0x1686]  [x105504]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1686u)));
    // 02d2:1b56  mul bp  [x105504]
    c.mul16(c.bp.x);
    // 02d2:1b58  shr ax, 6  [x105504]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x6u) & 31), true));
    // 02d2:1b5b  adc ax, 0  [x105504]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x0u, false, c.cf));
    // 02d2:1b5e  mov bp, ax  [x105504]
    c.bp.x = (uint16_t)(c.a.x);
    // 02d2:1b60  shl bp, 1  [x105504]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x1u) & 31), false));
    // 02d2:1b62  mov bp, word ptr ds:[bp + 0xcfc]  [x105504]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xcfcu)));
    // 02d2:1b67  mov dx, bp  [x105504]
    c.dx_.x = (uint16_t)(c.bp.x);
    // 02d2:1b69  mov dl, bh  [x105504]
    c.dx_.l = (uint8_t)(c.b.h);
    // 02d2:1b6b  cmp dl, dh  [x105504]
    c.sub<8>(c.dx_.l, c.dx_.h, true);
    // 02d2:1b6d  jne 0x1b8d  [x105504]
    if (!c.zf) goto L048ad;
L0488f:
    if (c.tracing) c.traceAt(0x488f);
    // 02d2:1b6f  mov dx, word ptr [0xf2e]  [x88124]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf2eu)));
    // 02d2:1b73  add dx, 0x103  [x88124]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02d2:1b77  mov al, 0xd  [x88124]
    c.a.l = (uint8_t)(0xdu);
    // 02d2:1b79  out dx, al  [x88124]
    c.ip = 0x1b7au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1b7a  add dx, 2  [x88124]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:1b7d  mov al, 3  [x88124]
    c.a.l = (uint8_t)(0x3u);
    // 02d2:1b7f  out dx, al  [x88124]
    c.ip = 0x1b80u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1b80  sub dx, 2  [x88124]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, true));
    // 02d2:1b83  mov al, 9  [x88124]
    c.a.l = (uint8_t)(0x9u);
    // 02d2:1b85  out dx, al  [x88124]
    c.ip = 0x1b86u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1b86  mov ax, bp  [x88124]
    c.a.x = (uint16_t)(c.bp.x);
    // 02d2:1b88  inc dx  [x88124]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1b89  out dx, ax  [x88124]
    c.ip = 0x1b8au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:1b8a  dec dx  [x88124]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, true));
    // 02d2:1b8b  jmp 0x1bce  [x88124]
    goto L048ee;
L048ad:
    if (c.tracing) c.traceAt(0x48ad);
    // 02d2:1b8d  mov dx, word ptr [0xf2e]  [x17380]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf2eu)));
    // 02d2:1b91  add dx, 0x103  [x17380]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02d2:1b95  mov al, 0xd  [x17380]
    c.a.l = (uint8_t)(0xdu);
    // 02d2:1b97  out dx, al  [x17380]
    c.ip = 0x1b98u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1b98  add dx, 2  [x17380]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:1b9b  mov al, 3  [x17380]
    c.a.l = (uint8_t)(0x3u);
    // 02d2:1b9d  out dx, al  [x17380]
    c.ip = 0x1b9eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1b9e  sub dx, 2  [x17380]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, false));
    // 02d2:1ba1  mov ah, 0  [x17380]
    c.a.h = (uint8_t)(0x0u);
    // 02d2:1ba3  cmp bx, bp  [x17380]
    c.sub<16>(c.b.x, c.bp.x, true);
    // 02d2:1ba5  jb 0x1bab  [x17380]
    if (c.cf) goto L048cb;
L048c7:
    if (c.tracing) c.traceAt(0x48c7);
    // 02d2:1ba7  mov ah, 0x40  [x6274]
    c.a.h = (uint8_t)(0x40u);
    // 02d2:1ba9  xchg bp, bx  [x6274]
    { const uint32_t t0 = c.bp.x; c.bp.x = (uint16_t)(c.b.x); c.b.x = (uint16_t)(t0); }
L048cb:
    if (c.tracing) c.traceAt(0x48cb);
    // 02d2:1bab  mov dx, word ptr [0xf2e]  [x17380]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf2eu)));
    // 02d2:1baf  add dx, 0x103  [x17380]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02d2:1bb3  mov al, 7  [x17380]
    c.a.l = (uint8_t)(0x7u);
    // 02d2:1bb5  out dx, al  [x17380]
    c.ip = 0x1bb6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1bb6  xchg bx, ax  [x17380]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 02d2:1bb7  inc dx  [x17380]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1bb8  out dx, ax  [x17380]
    c.ip = 0x1bb9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:1bb9  dec dx  [x17380]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1bba  mov al, 8  [x17380]
    c.a.l = (uint8_t)(0x8u);
    // 02d2:1bbc  out dx, al  [x17380]
    c.ip = 0x1bbdu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1bbd  mov ax, bp  [x17380]
    c.a.x = (uint16_t)(c.bp.x);
    // 02d2:1bbf  inc dx  [x17380]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1bc0  out dx, ax  [x17380]
    c.ip = 0x1bc1u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:1bc1  dec dx  [x17380]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1bc2  mov al, 0xd  [x17380]
    c.a.l = (uint8_t)(0xdu);
    // 02d2:1bc4  out dx, al  [x17380]
    c.ip = 0x1bc5u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1bc5  mov al, bh  [x17380]
    c.a.l = (uint8_t)(c.b.h);
    // 02d2:1bc7  add dx, 2  [x17380]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:1bca  out dx, al  [x17380]
    c.ip = 0x1bcbu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1bcb  sub dx, 2  [x17380]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, true));
L048ee:
    if (c.tracing) c.traceAt(0x48ee);
    // 02d2:1bce  mov al, 1  [x105504]
    c.a.l = (uint8_t)(0x1u);
    // 02d2:1bd0  out dx, al  [x105504]
    c.ip = 0x1bd1u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1bd1  inc dx  [x105504]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1bd2  mov ax, word ptr [di + 4]  [x105504]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x4u)));
    // 02d2:1bd5  out dx, ax  [x105504]
    c.ip = 0x1bd6u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:1bd6  dec dx  [x105504]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1bd7  shl word ptr [0x167a], 1  [x105504]
    c.w16(c.dsb + (uint16_t)(0x167au), c.shl<16>(c.r16(c.dsb + (uint16_t)(0x167au)), (int)((0x1u) & 31), false));
    // 02d2:1bdb  add di, 0x36  [x105504]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x36u, true));
    // 02d2:1bde  dec cx  [x105504]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 02d2:1bdf  je 0x1be4  [x105504]
    if (c.zf) goto L04904;
L04901:
    if (c.tracing) c.traceAt(0x4901);
    // 02d2:1be1  jmp 0x192d  [x79128]
    goto L0464d;
L04904:
    if (c.tracing) c.traceAt(0x4904);
    // 02d2:1be4  mov di, 0x1688  [x26376]
    c.di.x = (uint16_t)(0x1688u);
    // 02d2:1be7  mov cx, word ptr [0xf32]  [x26376]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf32u)));
L0490b:
    if (c.tracing) c.traceAt(0x490b);
    // 02d2:1beb  dec dx  [x105504]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:1bec  mov al, byte ptr [0xf32]  [x105504]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xf32u)));
    // 02d2:1bef  sub al, cl  [x105504]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.c.l, false));
    // 02d2:1bf1  out dx, al  [x105504]
    c.ip = 0x1bf2u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1bf2  inc dx  [x105504]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:1bf3  cmp word ptr [di + 0x2c], 2  [x105504]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2cu)), 0x2u, true);
    // 02d2:1bf7  jne 0x1c11  [x105504]
    if (!c.zf) goto L04931;
L04919:
    if (c.tracing) c.traceAt(0x4919);
    // 02d2:1bf9  mov al, 0  [x10865]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:1bfb  out dx, al  [x10865]
    c.ip = 0x1bfcu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1bfc  add dx, 2  [x10865]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:1bff  mov al, byte ptr [di + 0x2e]  [x10865]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x2eu)));
    // 02d2:1c02  out dx, al  [x10865]
    c.ip = 0x1c03u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:1c03  sub dx, 0x105  [x10865]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x105u, false));
    // 02d2:1c07  in al, dx  [x10865]
    c.ip = 0x1c08u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1c08  in al, dx  [x10865]
    c.ip = 0x1c09u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1c09  in al, dx  [x10865]
    c.ip = 0x1c0au; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1c0a  in al, dx  [x10865]
    c.ip = 0x1c0bu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1c0b  in al, dx  [x10865]
    c.ip = 0x1c0cu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1c0c  in al, dx  [x10865]
    c.ip = 0x1c0du; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:1c0d  add dx, 0x103  [x10865]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
L04931:
    if (c.tracing) c.traceAt(0x4931);
    // 02d2:1c11  mov word ptr [di + 0x2c], 0  [x105504]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2cu), 0x0u);
    // 02d2:1c16  mov word ptr [di + 0x30], 0  [x105504]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x30u), 0x0u);
    // 02d2:1c1b  add di, 0x36  [x105504]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x36u, true));
    // 02d2:1c1e  dec cx  [x105504]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 02d2:1c1f  jne 0x1beb  [x105504]
    if (!c.zf) goto L0490b;
L04941:
    if (c.tracing) c.traceAt(0x4941);
    // 02d2:1c21  jmp 0x2230  [x26376]
    goto L04f50;
L04944:
    if (c.tracing) c.traceAt(0x4944);
    // 02d2:1c24  mov word ptr [0x167a], 0  [x26376]
    c.w16(c.dsb + (uint16_t)(0x167au), 0x0u);
    // 02d2:1c2a  dec word ptr [0xf3a]  [x26376]
    c.w16(c.dsb + (uint16_t)(0xf3au), c.dec<16>(c.r16(c.dsb + (uint16_t)(0xf3au)), true));
    // 02d2:1c2e  jne 0x1c33  [x26376]
    if (!c.zf) goto L04953;
L04950:
    if (c.tracing) c.traceAt(0x4950);
    // 02d2:1c30  jmp 0x1ea7  [x12142]
    goto L04bc7;
L04953:
    if (c.tracing) c.traceAt(0x4953);
    // 02d2:1c33  mov di, 0x1688  [x14234]
    c.di.x = (uint16_t)(0x1688u);
    // 02d2:1c36  mov cx, word ptr [0xf32]  [x14234]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf32u)));
L0495a:
    if (c.tracing) c.traceAt(0x495a);
    // 02d2:1c3a  mov ax, word ptr [di + 6]  [x56936]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6u)));
    // 02d2:1c3d  mov word ptr [di + 8], ax  [x56936]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x8u), c.a.x);
    // 02d2:1c40  inc word ptr [di + 0x1e]  [x56936]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x1eu), c.inc<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x1eu)), false));
    // 02d2:1c43  add word ptr [di + 0x2a], 2  [x56936]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2au), c.add<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2au)), 0x2u, false));
    // 02d2:1c47  cmp word ptr [di + 0x2a], 6  [x56936]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2au)), 0x6u, true);
    // 02d2:1c4b  jb 0x1c52  [x56936]
    if (c.cf) goto L04972;
L0496d:
    if (c.tracing) c.traceAt(0x496d);
    // 02d2:1c4d  mov word ptr [di + 0x2a], 0  [x4228]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2au), 0x0u);
L04972:
    if (c.tracing) c.traceAt(0x4972);
    // 02d2:1c52  mov ax, word ptr [di + 0x14]  [x56936]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x14u)));
    // 02d2:1c55  cmp ax, 0  [x56936]
    c.sub<16>(c.a.x, 0x0u, true);
    // 02d2:1c58  jne 0x1c5d  [x56936]
    if (!c.zf) goto L0497d;
L0497a:
    if (c.tracing) c.traceAt(0x497a);
    // 02d2:1c5a  jmp 0x1e9b  [x43224]
    goto L04bbb;
L0497d:
    if (c.tracing) c.traceAt(0x497d);
    // 02d2:1c5d  mov bl, al  [x13712]
    c.b.l = (uint8_t)(c.a.l);
    // 02d2:1c5f  mov bh, 0  [x13712]
    c.b.h = (uint8_t)(0x0u);
    // 02d2:1c61  cmp bl, 0xe  [x13712]
    c.sub<8>(c.b.l, 0xeu, true);
    // 02d2:1c64  je 0x1c6c  [x13712]
    if (c.zf) goto L0498c;
L04986:
    if (c.tracing) c.traceAt(0x4986);
    // 02d2:1c66  shl bx, 1  [x13623]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02d2:1c68  jmp word ptr [bx + 0x2288]  [x13623]
    t = c.csb + (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x2288u))); goto dispatch;
L0498c:
    if (c.tracing) c.traceAt(0x498c);
    // 02d2:1c6c  mov bl, ah  [x89]
    c.b.l = (uint8_t)(c.a.h);
    // 02d2:1c6e  and ah, 0xf  [x89]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xfu), false));
    // 02d2:1c71  shr bl, 4  [x89]
    c.b.l = (uint8_t)(c.shr<8>(c.b.l, (int)((0x4u) & 31), false));
    // 02d2:1c74  shl bx, 1  [x89]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02d2:1c76  jmp word ptr [bx + 0x22a8]  [x89]
    t = c.csb + (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x22a8u))); goto dispatch;
L049ac:
    if (c.tracing) c.traceAt(0x49ac);
    // 02d2:1c8c  xchg al, ah  [x96]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.a.h); c.a.h = (uint8_t)(t0); }
    // 02d2:1c8e  mov ah, 0  [x96]
    c.a.h = (uint8_t)(0x0u);
    // 02d2:1c90  mov bp, word ptr [di + 0xa]  [x96]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)));
    // 02d2:1c93  mov bp, word ptr ds:[bp + 0x8c2]  [x96]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x8c2u)));
    // 02d2:1c98  mov bx, word ptr [di + 0x12]  [x96]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)));
    // 02d2:1c9b  sub bx, ax  [x96]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, true));
    // 02d2:1c9d  jae 0x1ca1  [x96]
    if (!c.cf) goto L049c1;
    c.notTranslated(0x49bf, "fall-through");
L049c1:
    if (c.tracing) c.traceAt(0x49c1);
    // 02d2:1ca1  cmp bx, bp  [x96]
    c.sub<16>(c.b.x, c.bp.x, true);
    // 02d2:1ca3  jae 0x1ca7  [x96]
    if (!c.cf) goto L049c7;
    c.notTranslated(0x49c5, "fall-through");
L049c7:
    if (c.tracing) c.traceAt(0x49c7);
    // 02d2:1ca7  mov word ptr [di + 0x12], bx  [x96]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.b.x);
    // 02d2:1caa  shl bx, 1  [x96]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02d2:1cac  mov ax, word ptr [bx + 0xf48]  [x96]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf48u)));
    // 02d2:1cb0  mov word ptr [di + 4], ax  [x96]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.a.x);
    // 02d2:1cb3  jmp 0x1e9b  [x96]
    goto L04bbb;
L049d6:
    if (c.tracing) c.traceAt(0x49d6);
    // 02d2:1cb6  xchg al, ah  [x172]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.a.h); c.a.h = (uint8_t)(t0); }
    // 02d2:1cb8  mov ah, 0  [x172]
    c.a.h = (uint8_t)(0x0u);
    // 02d2:1cba  mov bp, word ptr [di + 0xa]  [x172]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)));
    // 02d2:1cbd  mov bp, word ptr ds:[bp + 0x87c]  [x172]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x87cu)));
    // 02d2:1cc2  mov bx, word ptr [di + 0x12]  [x172]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)));
    // 02d2:1cc5  add bx, ax  [x172]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 02d2:1cc7  cmp bx, bp  [x172]
    c.sub<16>(c.b.x, c.bp.x, true);
    // 02d2:1cc9  jbe 0x1ccd  [x172]
    if ((c.cf || c.zf)) goto L049ed;
    c.notTranslated(0x49eb, "fall-through");
L049ed:
    if (c.tracing) c.traceAt(0x49ed);
    // 02d2:1ccd  mov word ptr [di + 0x12], bx  [x172]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.b.x);
    // 02d2:1cd0  shl bx, 1  [x172]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02d2:1cd2  mov ax, word ptr [bx + 0xf48]  [x172]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf48u)));
    // 02d2:1cd6  mov word ptr [di + 4], ax  [x172]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.a.x);
    // 02d2:1cd9  jmp 0x1e9b  [x172]
    goto L04bbb;
L049fc:
    if (c.tracing) c.traceAt(0x49fc);
    // 02d2:1cdc  xchg al, ah  [x635]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.a.h); c.a.h = (uint8_t)(t0); }
    // 02d2:1cde  xor ah, ah  [x635]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 02d2:1ce0  mov dx, word ptr [di + 0x1a]  [x635]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x1au)));
    // 02d2:1ce3  mov bx, word ptr [di + 0x12]  [x635]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)));
    // 02d2:1ce6  cmp bx, dx  [x635]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02d2:1ce8  jae 0x1cf3  [x635]
    if (!c.cf) goto L04a13;
L04a0a:
    if (c.tracing) c.traceAt(0x4a0a);
    // 02d2:1cea  add bx, ax  [x249]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 02d2:1cec  cmp bx, dx  [x249]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02d2:1cee  jbe 0x1cf3  [x249]
    if ((c.cf || c.zf)) goto L04a13;
L04a10:
    if (c.tracing) c.traceAt(0x4a10);
    // 02d2:1cf0  mov word ptr [di + 0x12], dx  [x219]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.dx_.x);
L04a13:
    if (c.tracing) c.traceAt(0x4a13);
    // 02d2:1cf3  cmp bx, dx  [x635]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02d2:1cf5  jbe 0x1d03  [x635]
    if ((c.cf || c.zf)) goto L04a23;
L04a17:
    if (c.tracing) c.traceAt(0x4a17);
    // 02d2:1cf7  sub bx, ax  [x349]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, true));
    // 02d2:1cf9  jae 0x1cfd  [x349]
    if (!c.cf) goto L04a1d;
L04a1b:
    if (c.tracing) c.traceAt(0x4a1b);
    // 02d2:1cfb  mov bx, dx  [x12]
    c.b.x = (uint16_t)(c.dx_.x);
L04a1d:
    if (c.tracing) c.traceAt(0x4a1d);
    // 02d2:1cfd  cmp bx, dx  [x349]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02d2:1cff  jae 0x1d03  [x349]
    if (!c.cf) goto L04a23;
L04a21:
    if (c.tracing) c.traceAt(0x4a21);
    // 02d2:1d01  mov bx, dx  [x337]
    c.b.x = (uint16_t)(c.dx_.x);
L04a23:
    if (c.tracing) c.traceAt(0x4a23);
    // 02d2:1d03  mov word ptr [di + 0x12], bx  [x635]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.b.x);
    // 02d2:1d06  shl bx, 1  [x635]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02d2:1d08  mov ax, word ptr [bx + 0xf48]  [x635]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf48u)));
    // 02d2:1d0c  mov word ptr [di + 4], ax  [x635]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.a.x);
    // 02d2:1d0f  jmp 0x1e9b  [x635]
    goto L04bbb;
L04a32:
    if (c.tracing) c.traceAt(0x4a32);
    // 02d2:1d12  mov bp, word ptr [di + 0xa]  [x1085]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)));
    // 02d2:1d15  mov si, word ptr ds:[bp + 0x87c]  [x1085]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x87cu)));
    // 02d2:1d1a  mov bp, word ptr ds:[bp + 0x8c2]  [x1085]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x8c2u)));
    // 02d2:1d1f  mov dl, ah  [x1085]
    c.dx_.l = (uint8_t)(c.a.h);
    // 02d2:1d21  and ah, 0xf0  [x1085]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xf0u), false));
    // 02d2:1d24  shr ah, 2  [x1085]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)((0x2u) & 31), false));
    // 02d2:1d27  and dl, 0xf  [x1085]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) & (0xfu), false));
    // 02d2:1d2a  mov bl, byte ptr [di + 0x16]  [x1085]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x16u)));
    // 02d2:1d2d  add bl, ah  [x1085]
    c.b.l = (uint8_t)(c.add<8>(c.b.l, c.a.h, false));
    // 02d2:1d2f  mov byte ptr [di + 0x16], bl  [x1085]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x16u), c.b.l);
    // 02d2:1d32  shr bl, 2  [x1085]
    c.b.l = (uint8_t)(c.shr<8>(c.b.l, (int)((0x2u) & 31), false));
    // 02d2:1d35  and bx, 0x1f  [x1085]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x1fu), false));
    // 02d2:1d38  mov al, byte ptr [bx + 0x4d3]  [x1085]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x4d3u)));
    // 02d2:1d3c  mul dl  [x1085]
    c.mul8(c.dx_.l);
    // 02d2:1d3e  rol ax, 1  [x1085]
    c.a.x = (uint16_t)(c.rol<16>(c.a.x, (int)((0x1u) & 31), false));
    // 02d2:1d40  xchg al, ah  [x1085]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.a.h); c.a.h = (uint8_t)(t0); }
    // 02d2:1d42  and ah, 1  [x1085]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0x1u), false));
    // 02d2:1d45  test byte ptr [di + 0x16], 0x80  [x1085]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x + 0x16u))) & (0x80u), true);
    // 02d2:1d49  jne 0x1d4d  [x1085]
    if (!c.zf) goto L04a6d;
L04a6b:
    if (c.tracing) c.traceAt(0x4a6b);
    // 02d2:1d4b  neg ax  [x889]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
L04a6d:
    if (c.tracing) c.traceAt(0x4a6d);
    // 02d2:1d4d  add ax, word ptr [di + 0x12]  [x1085]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)), false));
    // 02d2:1d50  cmp ax, bp  [x1085]
    c.sub<16>(c.a.x, c.bp.x, true);
    // 02d2:1d52  jae 0x1d56  [x1085]
    if (!c.cf) goto L04a76;
    c.notTranslated(0x4a74, "fall-through");
L04a76:
    if (c.tracing) c.traceAt(0x4a76);
    // 02d2:1d56  cmp ax, si  [x1085]
    c.sub<16>(c.a.x, c.si.x, true);
    // 02d2:1d58  jbe 0x1d5c  [x1085]
    if ((c.cf || c.zf)) goto L04a7c;
    c.notTranslated(0x4a7a, "fall-through");
L04a7c:
    if (c.tracing) c.traceAt(0x4a7c);
    // 02d2:1d5c  shl ax, 1  [x1085]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), true));
    // 02d2:1d5e  mov bx, ax  [x1085]
    c.b.x = (uint16_t)(c.a.x);
    // 02d2:1d60  mov ax, word ptr [bx + 0xf48]  [x1085]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf48u)));
    // 02d2:1d64  mov word ptr [di + 4], ax  [x1085]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.a.x);
    // 02d2:1d67  jmp 0x1e9b  [x1085]
    goto L04bbb;
L04a8a:
    if (c.tracing) c.traceAt(0x4a8a);
    // 02d2:1d6a  mov al, ah  [x187]
    c.a.l = (uint8_t)(c.a.h);
    // 02d2:1d6c  and ah, 0xf  [x187]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xfu), false));
    // 02d2:1d6f  shr al, 4  [x187]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x4u) & 31), false));
    // 02d2:1d72  sub ah, al  [x187]
    c.a.h = (uint8_t)(c.sub<8>(c.a.h, c.a.l, false));
    // 02d2:1d74  mov al, byte ptr [di + 6]  [x187]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x6u)));
    // 02d2:1d77  sub al, ah  [x187]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.a.h, true));
    // 02d2:1d79  jns 0x1d7d  [x187]
    if (!c.sf) goto L04a9d;
    c.notTranslated(0x4a9b, "fall-through");
L04a9d:
    if (c.tracing) c.traceAt(0x4a9d);
    // 02d2:1d7d  cmp al, 0x40  [x187]
    c.sub<8>(c.a.l, 0x40u, true);
    // 02d2:1d7f  jb 0x1d83  [x187]
    if (c.cf) goto L04aa3;
    c.notTranslated(0x4aa1, "fall-through");
L04aa3:
    if (c.tracing) c.traceAt(0x4aa3);
    // 02d2:1d83  mov byte ptr [di + 6], al  [x187]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x6u), c.a.l);
    // 02d2:1d86  mov ax, word ptr [di + 0x1c]  [x187]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x1cu)));
    // 02d2:1d89  mov dx, word ptr [di + 0x1a]  [x187]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x1au)));
    // 02d2:1d8c  mov bx, word ptr [di + 0x12]  [x187]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)));
    // 02d2:1d8f  cmp bx, dx  [x187]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02d2:1d91  jae 0x1d9c  [x187]
    if (!c.cf) goto L04abc;
L04ab3:
    if (c.tracing) c.traceAt(0x4ab3);
    // 02d2:1d93  add bx, ax  [x67]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 02d2:1d95  cmp bx, dx  [x67]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02d2:1d97  jbe 0x1d9c  [x67]
    if ((c.cf || c.zf)) goto L04abc;
L04ab9:
    if (c.tracing) c.traceAt(0x4ab9);
    // 02d2:1d99  mov word ptr [di + 0x12], dx  [x43]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.dx_.x);
L04abc:
    if (c.tracing) c.traceAt(0x4abc);
    // 02d2:1d9c  cmp bx, dx  [x187]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02d2:1d9e  jbe 0x1dad  [x187]
    if ((c.cf || c.zf)) goto L04acd;
L04ac0:
    if (c.tracing) c.traceAt(0x4ac0);
    // 02d2:1da0  sub bx, ax  [x79]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, true));
    // 02d2:1da2  jae 0x1da7  [x79]
    if (!c.cf) goto L04ac7;
    c.notTranslated(0x4ac4, "fall-through");
L04ac7:
    if (c.tracing) c.traceAt(0x4ac7);
    // 02d2:1da7  cmp bx, dx  [x79]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 02d2:1da9  jae 0x1dad  [x79]
    if (!c.cf) goto L04acd;
L04acb:
    if (c.tracing) c.traceAt(0x4acb);
    // 02d2:1dab  mov bx, dx  [x67]
    c.b.x = (uint16_t)(c.dx_.x);
L04acd:
    if (c.tracing) c.traceAt(0x4acd);
    // 02d2:1dad  mov word ptr [di + 0x12], bx  [x187]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.b.x);
    // 02d2:1db0  shl bx, 1  [x187]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02d2:1db2  mov ax, word ptr [bx + 0xf48]  [x187]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf48u)));
    // 02d2:1db6  mov word ptr [di + 4], ax  [x187]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.a.x);
    // 02d2:1db9  jmp 0x1e9b  [x187]
    goto L04bbb;
L04b55:
    if (c.tracing) c.traceAt(0x4b55);
    // 02d2:1e35  mov al, ah  [x6939]
    c.a.l = (uint8_t)(c.a.h);
    // 02d2:1e37  and ah, 0xf  [x6939]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xfu), false));
    // 02d2:1e3a  shr al, 4  [x6939]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x4u) & 31), false));
    // 02d2:1e3d  cmp al, 0  [x6939]
    c.sub<8>(c.a.l, 0x0u, true);
    // 02d2:1e3f  je 0x1e45  [x6939]
    if (c.zf) goto L04b65;
L04b61:
    if (c.tracing) c.traceAt(0x4b61);
    // 02d2:1e41  neg al  [x234]
    c.a.l = (uint8_t)(c.neg<8>(c.a.l, true));
    // 02d2:1e43  mov ah, al  [x234]
    c.a.h = (uint8_t)(c.a.l);
L04b65:
    if (c.tracing) c.traceAt(0x4b65);
    // 02d2:1e45  mov al, byte ptr [di + 6]  [x6939]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x6u)));
    // 02d2:1e48  sub al, ah  [x6939]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.a.h, true));
    // 02d2:1e4a  jns 0x1e4e  [x6939]
    if (!c.sf) goto L04b6e;
L04b6c:
    if (c.tracing) c.traceAt(0x4b6c);
    // 02d2:1e4c  mov al, 0  [x1086]
    c.a.l = (uint8_t)(0x0u);
L04b6e:
    if (c.tracing) c.traceAt(0x4b6e);
    // 02d2:1e4e  cmp al, 0x40  [x6939]
    c.sub<8>(c.a.l, 0x40u, true);
    // 02d2:1e50  jb 0x1e54  [x6939]
    if (c.cf) goto L04b74;
L04b72:
    if (c.tracing) c.traceAt(0x4b72);
    // 02d2:1e52  mov al, 0x3f  [x56]
    c.a.l = (uint8_t)(0x3fu);
L04b74:
    if (c.tracing) c.traceAt(0x4b74);
    // 02d2:1e54  mov byte ptr [di + 6], al  [x6939]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x6u), c.a.l);
    // 02d2:1e57  jmp 0x1e9b  [x6939]
    goto L04bbb;
L04b79:
    if (c.tracing) c.traceAt(0x4b79);
    // 02d2:1e59  cmp ah, byte ptr [di + 0x1e]  [x45]
    c.sub<8>(c.a.h, c.r8(c.dsb + (uint16_t)(c.di.x + 0x1eu)), true);
    // 02d2:1e5c  jne 0x1e68  [x45]
    if (!c.zf) goto L04b88;
L04b7e:
    if (c.tracing) c.traceAt(0x4b7e);
    // 02d2:1e5e  mov word ptr [di + 0x1e], 0  [x12]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x1eu), 0x0u);
    // 02d2:1e63  mov word ptr [di + 0x2c], 2  [x12]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2cu), 0x2u);
L04b88:
    if (c.tracing) c.traceAt(0x4b88);
    // 02d2:1e68  jmp 0x1e9b  [x45]
    goto L04bbb;
L04b9b:
    if (c.tracing) c.traceAt(0x4b9b);
    // 02d2:1e7b  cmp ah, byte ptr [di + 0x1e]  [x44]
    c.sub<8>(c.a.h, c.r8(c.dsb + (uint16_t)(c.di.x + 0x1eu)), true);
    // 02d2:1e7e  jne 0x1e99  [x44]
    if (!c.zf) goto L04bb9;
    c.notTranslated(0x4ba0, "fall-through");
L04bb9:
    if (c.tracing) c.traceAt(0x4bb9);
    // 02d2:1e99  jmp 0x1e9b  [x44]
    goto L04bbb;
L04bbb:
    if (c.tracing) c.traceAt(0x4bbb);
    // 02d2:1e9b  add di, 0x36  [x56936]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x36u, true));
    // 02d2:1e9e  dec cx  [x56936]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 02d2:1e9f  je 0x1ea4  [x56936]
    if (c.zf) goto L04bc4;
L04bc1:
    if (c.tracing) c.traceAt(0x4bc1);
    // 02d2:1ea1  jmp 0x1c3a  [x42702]
    goto L0495a;
L04bc4:
    if (c.tracing) c.traceAt(0x4bc4);
    // 02d2:1ea4  jmp 0x2230  [x14234]
    goto L04f50;
L04bc7:
    if (c.tracing) c.traceAt(0x4bc7);
    // 02d2:1ea7  mov ax, word ptr [0xf38]  [x12142]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf38u)));
    // 02d2:1eaa  mov word ptr [0xf3a], ax  [x12142]
    c.w16(c.dsb + (uint16_t)(0xf3au), c.a.x);
    // 02d2:1ead  cmp word ptr [0xf3c], 0x40  [x12142]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xf3cu)), 0x40u, true);
    // 02d2:1eb2  jb 0x1f0d  [x12142]
    if (c.cf) goto L04c2d;
L04bd4:
    if (c.tracing) c.traceAt(0x4bd4);
    // 02d2:1eb4  mov ax, word ptr [0xf40]  [x256]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf40u)));
    // 02d2:1eb7  cmp al, byte ptr [0x451]  [x256]
    c.sub<8>(c.a.l, c.r8(c.dsb + (uint16_t)(0x451u)), true);
    // 02d2:1ebb  jb 0x1ecd  [x256]
    if (c.cf) goto L04bed;
    c.notTranslated(0x4bdd, "fall-through");
L04bed:
    if (c.tracing) c.traceAt(0x4bed);
    // 02d2:1ecd  mov bx, word ptr [0xf40]  [x256]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf40u)));
    // 02d2:1ed1  mov word ptr [0xf42], bx  [x256]
    c.w16(c.dsb + (uint16_t)(0xf42u), c.b.x);
    // 02d2:1ed5  inc word ptr [0xf42]  [x256]
    c.w16(c.dsb + (uint16_t)(0xf42u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xf42u)), false));
    // 02d2:1ed9  mov ah, 0  [x256]
    c.a.h = (uint8_t)(0x0u);
    // 02d2:1edb  mov al, byte ptr [bx + 0x453]  [x256]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x453u)));
    // 02d2:1edf  mov dx, word ptr [0xf32]  [x256]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf32u)));
    // 02d2:1ee3  shl dx, 8  [x256]
    c.dx_.x = (uint16_t)(c.shl<16>(c.dx_.x, (int)((0x8u) & 31), false));
    // 02d2:1ee6  mul dx  [x256]
    c.mul16(c.dx_.x);
    // 02d2:1ee8  shl dx, 0xc  [x256]
    c.dx_.x = (uint16_t)(c.shl<16>(c.dx_.x, (int)((0xcu) & 31), false));
    // 02d2:1eeb  add dx, word ptr [0x1666]  [x256]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x1666u)), false));
    // 02d2:1eef  mov word ptr [0x1662], dx  [x256]
    c.w16(c.dsb + (uint16_t)(0x1662u), c.dx_.x);
    // 02d2:1ef3  mov word ptr [0x1660], ax  [x256]
    c.w16(c.dsb + (uint16_t)(0x1660u), c.a.x);
    // 02d2:1ef6  mov ax, word ptr [0x1668]  [x256]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1668u)));
    // 02d2:1ef9  mov word ptr [0xf3c], ax  [x256]
    c.w16(c.dsb + (uint16_t)(0xf3cu), c.a.x);
    // 02d2:1efc  shl ax, 4  [x256]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x4u) & 31), false));
    // 02d2:1eff  add word ptr [0x1660], ax  [x256]
    c.w16(c.dsb + (uint16_t)(0x1660u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x1660u)), c.a.x, true));
    // 02d2:1f03  mov word ptr [0x1668], 0  [x256]
    c.w16(c.dsb + (uint16_t)(0x1668u), 0x0u);
    // 02d2:1f09  inc word ptr [0xf40]  [x256]
    c.w16(c.dsb + (uint16_t)(0xf40u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xf40u)), true));
L04c2d:
    if (c.tracing) c.traceAt(0x4c2d);
    // 02d2:1f0d  les si, ptr [0x1660]  [x12142]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x1660u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x1660u) + 2); c.si.x = (uint16_t)(t0); c.loadEs(t1); }
    // 02d2:1f11  mov di, 0x1688  [x12142]
    c.di.x = (uint16_t)(0x1688u);
    // 02d2:1f14  mov cx, word ptr [0xf32]  [x12142]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf32u)));
    // 02d2:1f18  mov ax, word ptr [0xf3c]  [x12142]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf3cu)));
    // 02d2:1f1b  mov word ptr [0xf3e], ax  [x12142]
    c.w16(c.dsb + (uint16_t)(0xf3eu), c.a.x);
L04c3e:
    if (c.tracing) c.traceAt(0x4c3e);
    // 02d2:1f1e  mov ax, word ptr [di + 6]  [x48568]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6u)));
    // 02d2:1f21  mov word ptr [di + 8], ax  [x48568]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x8u), c.a.x);
    // 02d2:1f24  mov word ptr [di + 0x34], 0  [x48568]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x34u), 0x0u);
    // 02d2:1f29  mov bh, byte ptr es:[si]  [x48568]
    c.b.h = (uint8_t)(c.r8(c.esb + (uint16_t)(c.si.x)));
    // 02d2:1f2c  mov bl, byte ptr es:[si + 2]  [x48568]
    c.b.l = (uint8_t)(c.r8(c.esb + (uint16_t)(c.si.x + 0x2u)));
    // 02d2:1f30  and bh, 0xf0  [x48568]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) & (0xf0u), false));
    // 02d2:1f33  shr bl, 4  [x48568]
    c.b.l = (uint8_t)(c.shr<8>(c.b.l, (int)((0x4u) & 31), false));
    // 02d2:1f36  add bl, bh  [x48568]
    c.b.l = (uint8_t)(c.add<8>(c.b.l, c.b.h, true));
    // 02d2:1f38  je 0x1fb7  [x48568]
    if (c.zf) goto L04cd7;
L04c5a:
    if (c.tracing) c.traceAt(0x4c5a);
    // 02d2:1f3a  nop   [x11326]
    // 02d2:1f3b  nop   [x11326]
    // 02d2:1f3c  nop   [x11326]
    // 02d2:1f3d  mov word ptr [di + 0x34], 1  [x11326]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x34u), 0x1u);
    // 02d2:1f42  mov bh, byte ptr [di + 0x20]  [x11326]
    c.b.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x20u)));
    // 02d2:1f45  mov byte ptr [di + 0x22], bh  [x11326]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x22u), c.b.h);
    // 02d2:1f48  mov byte ptr [di + 0x20], bl  [x11326]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x20u), c.b.l);
    // 02d2:1f4b  mov bh, 0  [x11326]
    c.b.h = (uint8_t)(0x0u);
    // 02d2:1f4d  dec bx  [x11326]
    c.b.x = (uint16_t)(c.dec<16>(c.b.x, false));
    // 02d2:1f4e  shl bx, 1  [x11326]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), false));
    // 02d2:1f50  mov ax, word ptr [bx + 0xe36]  [x11326]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xe36u)));
    // 02d2:1f54  cmp ax, 0x40  [x11326]
    c.sub<16>(c.a.x, 0x40u, true);
    // 02d2:1f57  jb 0x1f5c  [x11326]
    if (c.cf) goto L04c7c;
L04c79:
    if (c.tracing) c.traceAt(0x4c79);
    // 02d2:1f59  mov ax, 0x3f  [x8363]
    c.a.x = (uint16_t)(0x3fu);
L04c7c:
    if (c.tracing) c.traceAt(0x4c7c);
    // 02d2:1f5c  mov word ptr [di + 6], ax  [x11326]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x6u), c.a.x);
    // 02d2:1f5f  mov word ptr [di + 0x2c], 1  [x11326]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2cu), 0x1u);
    // 02d2:1f64  shl bx, 1  [x11326]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), false));
    // 02d2:1f66  mov ax, word ptr [bx + 0xd7c]  [x11326]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xd7cu)));
    // 02d2:1f6a  mov word ptr [di], ax  [x11326]
    c.w16(c.dsb + (uint16_t)(c.di.x), c.a.x);
    // 02d2:1f6c  mov ax, word ptr [bx + 0xd7e]  [x11326]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xd7eu)));
    // 02d2:1f70  mov word ptr [di + 2], ax  [x11326]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2u), c.a.x);
    // 02d2:1f73  shr bx, 1  [x11326]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x1u) & 31), false));
    // 02d2:1f75  mov ax, word ptr [bx + 0xe74]  [x11326]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xe74u)));
    // 02d2:1f79  shl ax, 3  [x11326]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x3u) & 31), false));
    // 02d2:1f7c  mov word ptr [di + 0xa], ax  [x11326]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xau), c.a.x);
    // 02d2:1f7f  shl ax, 3  [x11326]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x3u) & 31), false));
    // 02d2:1f82  add word ptr [di + 0xa], ax  [x11326]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xau), c.add<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)), c.a.x, false));
    // 02d2:1f85  mov word ptr [di + 0x2e], 0  [x11326]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2eu), 0x0u);
    // 02d2:1f8a  mov ax, word ptr [bx + 0xdf8]  [x11326]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xdf8u)));
    // 02d2:1f8e  mov word ptr [di + 0x10], ax  [x11326]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x10u), c.a.x);
    // 02d2:1f91  mov ax, word ptr [bx + 0xeb2]  [x11326]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xeb2u)));
    // 02d2:1f95  mov word ptr [di + 0xc], ax  [x11326]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xcu), c.a.x);
    // 02d2:1f98  mov ax, word ptr [bx + 0xef0]  [x11326]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xef0u)));
    // 02d2:1f9c  mov word ptr [di + 0xe], ax  [x11326]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xeu), c.a.x);
    // 02d2:1f9f  cmp ax, 2  [x11326]
    c.sub<16>(c.a.x, 0x2u, true);
    // 02d2:1fa2  jbe 0x1fb7  [x11326]
    if ((c.cf || c.zf)) goto L04cd7;
L04cc4:
    if (c.tracing) c.traceAt(0x4cc4);
    // 02d2:1fa4  mov word ptr [di + 0x2e], 8  [x3781]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2eu), 0x8u);
    // 02d2:1fa9  mov ax, word ptr [di + 0xc]  [x3781]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xcu)));
    // 02d2:1fac  add ax, word ptr [di + 0xe]  [x3781]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xeu)), false));
    // 02d2:1faf  cmp ax, word ptr [di + 0x10]  [x3781]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), true);
    // 02d2:1fb2  ja 0x1fb7  [x3781]
    if ((!c.cf && !c.zf)) goto L04cd7;
L04cd4:
    if (c.tracing) c.traceAt(0x4cd4);
    // 02d2:1fb4  mov word ptr [di + 0x10], ax  [x3781]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x10u), c.a.x);
L04cd7:
    if (c.tracing) c.traceAt(0x4cd7);
    // 02d2:1fb7  mov bx, word ptr es:[si]  [x48568]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 02d2:1fba  xchg bl, bh  [x48568]
    { const uint32_t t0 = c.b.l; c.b.l = (uint8_t)(c.b.h); c.b.h = (uint8_t)(t0); }
    // 02d2:1fbc  and bx, 0xfff  [x48568]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0xfffu), true));
    // 02d2:1fc0  je 0x202a  [x48568]
    if (c.zf) goto L04d4a;
L04ce2:
    if (c.tracing) c.traceAt(0x4ce2);
    // 02d2:1fc2  mov bl, byte ptr [bx + 0x4f3]  [x11420]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x4f3u)));
    // 02d2:1fc6  mov bh, 0  [x11420]
    c.b.h = (uint8_t)(0x0u);
    // 02d2:1fc8  add bx, word ptr [di + 0xa]  [x11420]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)), false));
    // 02d2:1fcb  mov bx, word ptr [bx + 0x87c]  [x11420]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x87cu)));
    // 02d2:1fcf  mov word ptr [di + 0x1a], bx  [x11420]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x1au), c.b.x);
    // 02d2:1fd2  mov ax, word ptr es:[si + 2]  [x11420]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x + 0x2u)));
    // 02d2:1fd6  and al, 0xf  [x11420]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfu), false));
    // 02d2:1fd8  and ah, 0xf0  [x11420]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xf0u), false));
    // 02d2:1fdb  cmp al, 3  [x11420]
    c.sub<8>(c.a.l, 0x3u, true);
    // 02d2:1fdd  je 0x1fe5  [x11420]
    if (c.zf) goto L04d05;
L04cff:
    if (c.tracing) c.traceAt(0x4cff);
    // 02d2:1fdf  cmp al, 5  [x11021]
    c.sub<8>(c.a.l, 0x5u, true);
    // 02d2:1fe1  je 0x1fe5  [x11021]
    if (c.zf) goto L04d05;
L04d03:
    if (c.tracing) c.traceAt(0x4d03);
    // 02d2:1fe3  jmp 0x2000  [x10897]
    goto L04d20;
L04d05:
    if (c.tracing) c.traceAt(0x4d05);
    // 02d2:1fe5  push cx  [x523]
    c.push16(c.c.x);
    // 02d2:1fe6  neg cx  [x523]
    c.c.x = (uint16_t)(c.neg<16>(c.c.x, false));
    // 02d2:1fe8  add cx, word ptr [0xf32]  [x523]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0xf32u)), false));
    // 02d2:1fec  mov ax, 1  [x523]
    c.a.x = (uint16_t)(0x1u);
    // 02d2:1fef  shl ax, cl  [x523]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)(c.c.l & 31), false));
    // 02d2:1ff1  test word ptr [0xf34], ax  [x523]
    c.logic<16>((c.r16(c.dsb + (uint16_t)(0xf34u))) & (c.a.x), true);
    // 02d2:1ff5  je 0x1ffd  [x523]
    if (c.zf) goto L04d1d;
L04d17:
    if (c.tracing) c.traceAt(0x4d17);
    // 02d2:1ff7  mov ax, word ptr [di + 6]  [x523]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6u)));
    // 02d2:1ffa  mov word ptr [di + 0x32], ax  [x523]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x32u), c.a.x);
L04d1d:
    if (c.tracing) c.traceAt(0x4d1d);
    // 02d2:1ffd  pop cx  [x523]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 02d2:1ffe  jmp 0x202a  [x523]
    goto L04d4a;
L04d20:
    if (c.tracing) c.traceAt(0x4d20);
    // 02d2:2000  cmp ax, 0xd00e  [x10897]
    c.sub<16>(c.a.x, 0xd00eu, true);
    // 02d2:2003  jne 0x2014  [x10897]
    if (!c.zf) goto L04d34;
L04d25:
    if (c.tracing) c.traceAt(0x4d25);
    // 02d2:2005  mov al, byte ptr es:[si + 2]  [x44]
    c.a.l = (uint8_t)(c.r8(c.esb + (uint16_t)(c.si.x + 0x2u)));
    // 02d2:2009  cmp al, 0  [x44]
    c.sub<8>(c.a.l, 0x0u, true);
    // 02d2:200b  je 0x2014  [x44]
    if (c.zf) goto L04d34;
L04d2d:
    if (c.tracing) c.traceAt(0x4d2d);
    // 02d2:200d  mov word ptr [di + 0x2c], 0  [x44]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2cu), 0x0u);
    // 02d2:2012  jmp 0x202a  [x44]
    goto L04d4a;
L04d34:
    if (c.tracing) c.traceAt(0x4d34);
    // 02d2:2014  mov word ptr [di + 0x2c], 2  [x10853]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2cu), 0x2u);
    // 02d2:2019  mov word ptr [di + 0x16], 0  [x10853]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x16u), 0x0u);
    // 02d2:201e  mov word ptr [di + 0x12], bx  [x10853]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.b.x);
    // 02d2:2021  shl bx, 1  [x10853]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02d2:2023  mov bx, word ptr [bx + 0xf48]  [x10853]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf48u)));
    // 02d2:2027  mov word ptr [di + 4], bx  [x10853]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.b.x);
L04d4a:
    if (c.tracing) c.traceAt(0x4d4a);
    // 02d2:202a  mov word ptr [di + 0x2a], 0  [x48568]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2au), 0x0u);
    // 02d2:202f  mov ax, word ptr es:[si + 2]  [x48568]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x + 0x2u)));
    // 02d2:2033  and al, 0xf  [x48568]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfu), false));
    // 02d2:2035  mov word ptr [di + 0x14], ax  [x48568]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x14u), c.a.x);
    // 02d2:2038  cmp al, 7  [x48568]
    c.sub<8>(c.a.l, 0x7u, true);
    // 02d2:203a  jb 0x2059  [x48568]
    if (c.cf) goto L04d79;
L04d5c:
    if (c.tracing) c.traceAt(0x4d5c);
    // 02d2:203c  mov bx, ax  [x10124]
    c.b.x = (uint16_t)(c.a.x);
    // 02d2:203e  and bh, 0xf0  [x10124]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) & (0xf0u), false));
    // 02d2:2041  cmp bx, 0xc00e  [x10124]
    c.sub<16>(c.b.x, 0xc00eu, true);
    // 02d2:2045  je 0x2059  [x10124]
    if (c.zf) goto L04d79;
L04d67:
    if (c.tracing) c.traceAt(0x4d67);
    // 02d2:2047  cmp bx, 0xd00e  [x10124]
    c.sub<16>(c.b.x, 0xd00eu, true);
    // 02d2:204b  je 0x2059  [x10124]
    if (c.zf) goto L04d79;
L04d6d:
    if (c.tracing) c.traceAt(0x4d6d);
    // 02d2:204d  mov bx, word ptr [di + 0x12]  [x10080]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)));
    // 02d2:2050  shl bx, 1  [x10080]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02d2:2052  mov bx, word ptr [bx + 0xf48]  [x10080]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xf48u)));
    // 02d2:2056  mov word ptr [di + 4], bx  [x10080]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x4u), c.b.x);
L04d79:
    if (c.tracing) c.traceAt(0x4d79);
    // 02d2:2059  mov bh, 0  [x48568]
    c.b.h = (uint8_t)(0x0u);
    // 02d2:205b  mov bl, al  [x48568]
    c.b.l = (uint8_t)(c.a.l);
    // 02d2:205d  cmp bl, 0xe  [x48568]
    c.sub<8>(c.b.l, 0xeu, true);
    // 02d2:2060  je 0x2068  [x48568]
    if (c.zf) goto L04d88;
L04d82:
    if (c.tracing) c.traceAt(0x4d82);
    // 02d2:2062  shl bx, 1  [x48503]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02d2:2064  jmp word ptr [bx + 0x2248]  [x48503]
    t = c.csb + (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x2248u))); goto dispatch;
L04d88:
    if (c.tracing) c.traceAt(0x4d88);
    // 02d2:2068  mov bl, ah  [x65]
    c.b.l = (uint8_t)(c.a.h);
    // 02d2:206a  and ah, 0xf  [x65]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xfu), false));
    // 02d2:206d  shr bl, 4  [x65]
    c.b.l = (uint8_t)(c.shr<8>(c.b.l, (int)((0x4u) & 31), false));
    // 02d2:2070  shl bx, 1  [x65]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02d2:2072  jmp word ptr [bx + 0x2268]  [x65]
    t = c.csb + (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x2268u))); goto dispatch;
L04d96:
    if (c.tracing) c.traceAt(0x4d96);
    // 02d2:2076  mov bx, word ptr [di + 0x12]  [x36797]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x12u)));
    // 02d2:2079  mov bl, byte ptr [bx + 0x4f3]  [x36797]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x4f3u)));
    // 02d2:207d  mov bh, 0  [x36797]
    c.b.h = (uint8_t)(0x0u);
    // 02d2:207f  mov bp, bx  [x36797]
    c.bp.x = (uint16_t)(c.b.x);
    // 02d2:2081  add bx, word ptr [di + 0xa]  [x36797]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)), false));
    // 02d2:2084  mov dx, word ptr [bx + 0x87c]  [x36797]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x87cu)));
    // 02d2:2088  mov word ptr [di + 0x24], dx  [x36797]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x24u), c.dx_.x);
    // 02d2:208b  xchg al, ah  [x36797]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.a.h); c.a.h = (uint8_t)(t0); }
    // 02d2:208d  mov ah, 0  [x36797]
    c.a.h = (uint8_t)(0x0u);
    // 02d2:208f  mov dx, ax  [x36797]
    c.dx_.x = (uint16_t)(c.a.x);
    // 02d2:2091  shr dx, 4  [x36797]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x4u) & 31), false));
    // 02d2:2094  and ax, 0xf  [x36797]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0xfu), false));
    // 02d2:2097  shl dx, 1  [x36797]
    c.dx_.x = (uint16_t)(c.shl<16>(c.dx_.x, (int)((0x1u) & 31), false));
    // 02d2:2099  shl ax, 1  [x36797]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 02d2:209b  mov bx, bp  [x36797]
    c.b.x = (uint16_t)(c.bp.x);
    // 02d2:209d  add bx, dx  [x36797]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 02d2:209f  cmp bx, 0x46  [x36797]
    c.sub<16>(c.b.x, 0x46u, true);
    // 02d2:20a2  jbe 0x20a7  [x36797]
    if ((c.cf || c.zf)) goto L04dc7;
    c.notTranslated(0x4dc4, "fall-through");
L04dc7:
    if (c.tracing) c.traceAt(0x4dc7);
    // 02d2:20a7  add bx, word ptr [di + 0xa]  [x36797]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)), false));
    // 02d2:20aa  mov dx, word ptr [bx + 0x87c]  [x36797]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x87cu)));
    // 02d2:20ae  mov word ptr [di + 0x26], dx  [x36797]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x26u), c.dx_.x);
    // 02d2:20b1  mov bx, bp  [x36797]
    c.b.x = (uint16_t)(c.bp.x);
    // 02d2:20b3  add bx, ax  [x36797]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 02d2:20b5  cmp bx, 0x46  [x36797]
    c.sub<16>(c.b.x, 0x46u, true);
    // 02d2:20b8  jbe 0x20bd  [x36797]
    if ((c.cf || c.zf)) goto L04ddd;
    c.notTranslated(0x4dda, "fall-through");
L04ddd:
    if (c.tracing) c.traceAt(0x4ddd);
    // 02d2:20bd  add bx, word ptr [di + 0xa]  [x36797]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xau)), true));
    // 02d2:20c0  mov dx, word ptr [bx + 0x87c]  [x36797]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x87cu)));
    // 02d2:20c4  mov word ptr [di + 0x28], dx  [x36797]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x28u), c.dx_.x);
    // 02d2:20c7  jmp 0x21d7  [x36797]
    goto L04ef7;
L04dea:
    if (c.tracing) c.traceAt(0x4dea);
    // 02d2:20ca  cmp ah, 0  [x515]
    c.sub<8>(c.a.h, 0x0u, true);
    // 02d2:20cd  jne 0x20d2  [x515]
    if (!c.zf) goto L04df2;
L04def:
    if (c.tracing) c.traceAt(0x4def);
    // 02d2:20cf  mov ah, byte ptr [di + 0x1c]  [x24]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x1cu)));
L04df2:
    if (c.tracing) c.traceAt(0x4df2);
    // 02d2:20d2  mov byte ptr [di + 0x1c], ah  [x515]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x1cu), c.a.h);
    // 02d2:20d5  mov byte ptr [di + 0x15], ah  [x515]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x15u), c.a.h);
    // 02d2:20d8  jmp 0x21d7  [x515]
    goto L04ef7;
L04dfb:
    if (c.tracing) c.traceAt(0x4dfb);
    // 02d2:20db  mov al, ah  [x743]
    c.a.l = (uint8_t)(c.a.h);
    // 02d2:20dd  and al, 0xf  [x743]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfu), false));
    // 02d2:20df  and ah, 0xf0  [x743]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0xf0u), false));
    // 02d2:20e2  cmp al, 0  [x743]
    c.sub<8>(c.a.l, 0x0u, true);
    // 02d2:20e4  jne 0x20e9  [x743]
    if (!c.zf) goto L04e09;
L04e06:
    if (c.tracing) c.traceAt(0x4e06);
    // 02d2:20e6  mov al, byte ptr [di + 0x18]  [x12]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x18u)));
L04e09:
    if (c.tracing) c.traceAt(0x4e09);
    // 02d2:20e9  cmp ah, 0  [x743]
    c.sub<8>(c.a.h, 0x0u, true);
    // 02d2:20ec  jne 0x20f1  [x743]
    if (!c.zf) goto L04e11;
L04e0e:
    if (c.tracing) c.traceAt(0x4e0e);
    // 02d2:20ee  mov ah, byte ptr [di + 0x19]  [x16]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x19u)));
L04e11:
    if (c.tracing) c.traceAt(0x4e11);
    // 02d2:20f1  mov byte ptr [di + 0x18], al  [x743]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x18u), c.a.l);
    // 02d2:20f4  mov byte ptr [di + 0x19], ah  [x743]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x19u), c.a.h);
    // 02d2:20f7  or al, ah  [x743]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.h), true));
    // 02d2:20f9  mov byte ptr [di + 0x15], al  [x743]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x15u), c.a.l);
    // 02d2:20fc  jmp 0x21d7  [x743]
    goto L04ef7;
L04e1f:
    if (c.tracing) c.traceAt(0x4e1f);
    // 02d2:20ff  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:2101  cmp ax, word ptr [di + 0x10]  [x16]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x10u)), true);
    // 02d2:2104  jb 0x210a  [x16]
    if (c.cf) goto L04e2a;
    c.notTranslated(0x4e26, "fall-through");
L04e2a:
    if (c.tracing) c.traceAt(0x4e2a);
    // 02d2:210a  mov word ptr [di + 0x30], ax  [x16]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x30u), c.a.x);
    // 02d2:210d  jmp 0x21d7  [x16]
    goto L04ef7;
L04e30:
    if (c.tracing) c.traceAt(0x4e30);
    // 02d2:2110  mov word ptr [0xf3c], 0x3f  [x3]
    c.w16(c.dsb + (uint16_t)(0xf3cu), 0x3fu);
    // 02d2:2116  mov byte ptr [0xf40], ah  [x3]
    c.w8(c.dsb + (uint16_t)(0xf40u), c.a.h);
    // 02d2:211a  jmp 0x21d7  [x3]
    goto L04ef7;
L04e3d:
    if (c.tracing) c.traceAt(0x4e3d);
    // 02d2:211d  cmp ah, 0x40  [x2945]
    c.sub<8>(c.a.h, 0x40u, true);
    // 02d2:2120  jb 0x2124  [x2945]
    if (c.cf) goto L04e44;
    c.notTranslated(0x4e42, "fall-through");
L04e44:
    if (c.tracing) c.traceAt(0x4e44);
    // 02d2:2124  mov byte ptr [di + 6], ah  [x2945]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x6u), c.a.h);
    // 02d2:2127  jmp 0x21d7  [x2945]
    goto L04ef7;
L04e4a:
    if (c.tracing) c.traceAt(0x4e4a);
    // 02d2:212a  mov word ptr [0xf3c], 0x3f  [x254]
    c.w16(c.dsb + (uint16_t)(0xf3cu), 0x3fu);
    // 02d2:2130  cmp ah, 0x64  [x254]
    c.sub<8>(c.a.h, 0x64u, true);
    // 02d2:2133  jb 0x2137  [x254]
    if (c.cf) goto L04e57;
    c.notTranslated(0x4e55, "fall-through");
L04e57:
    if (c.tracing) c.traceAt(0x4e57);
    // 02d2:2137  mov al, ah  [x254]
    c.a.l = (uint8_t)(c.a.h);
    // 02d2:2139  and al, 0xf  [x254]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfu), false));
    // 02d2:213b  shr ah, 4  [x254]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)((0x4u) & 31), false));
    // 02d2:213e  shl ah, 1  [x254]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x1u) & 31), false));
    // 02d2:2140  mov byte ptr [0x1668], al  [x254]
    c.w8(c.dsb + (uint16_t)(0x1668u), c.a.l);
    // 02d2:2143  add byte ptr [0x1668], ah  [x254]
    c.w8(c.dsb + (uint16_t)(0x1668u), c.add<8>(c.r8(c.dsb + (uint16_t)(0x1668u)), c.a.h, false));
    // 02d2:2147  shl ah, 2  [x254]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x2u) & 31), false));
    // 02d2:214a  add byte ptr [0x1668], ah  [x254]
    c.w8(c.dsb + (uint16_t)(0x1668u), c.add<8>(c.r8(c.dsb + (uint16_t)(0x1668u)), c.a.h, true));
    // 02d2:214e  jmp 0x21d7  [x254]
    goto L04ef7;
L04e71:
    if (c.tracing) c.traceAt(0x4e71);
    // 02d2:2151  cmp ah, 0  [x345]
    c.sub<8>(c.a.h, 0x0u, true);
    // 02d2:2154  jne 0x2159  [x345]
    if (!c.zf) goto L04e79;
    c.notTranslated(0x4e76, "fall-through");
L04e79:
    if (c.tracing) c.traceAt(0x4e79);
    // 02d2:2159  cmp ah, 0x1f  [x345]
    c.sub<8>(c.a.h, 0x1fu, true);
    // 02d2:215c  jbe 0x2183  [x345]
    if ((c.cf || c.zf)) goto L04ea3;
    c.notTranslated(0x4e7e, "fall-through");
L04ea3:
    if (c.tracing) c.traceAt(0x4ea3);
    // 02d2:2183  mov byte ptr [0xf38], ah  [x345]
    c.w8(c.dsb + (uint16_t)(0xf38u), c.a.h);
    // 02d2:2187  mov byte ptr [0xf3a], ah  [x345]
    c.w8(c.dsb + (uint16_t)(0xf3au), c.a.h);
    // 02d2:218b  jmp 0x21d7  [x345]
    goto L04ef7;
L04ef7:
    if (c.tracing) c.traceAt(0x4ef7);
    // 02d2:21d7  add si, 4  [x48568]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 02d2:21da  jae 0x21e4  [x48568]
    if (!c.cf) goto L04f04;
    c.notTranslated(0x4efc, "fall-through");
L04f04:
    if (c.tracing) c.traceAt(0x4f04);
    // 02d2:21e4  mov word ptr [di + 0x1e], 0  [x48568]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x1eu), 0x0u);
    // 02d2:21e9  add di, 0x36  [x48568]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x36u, true));
    // 02d2:21ec  dec cx  [x48568]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 02d2:21ed  je 0x21f2  [x48568]
    if (c.zf) goto L04f12;
L04f0f:
    if (c.tracing) c.traceAt(0x4f0f);
    // 02d2:21ef  jmp 0x1f1e  [x36426]
    goto L04c3e;
L04f12:
    if (c.tracing) c.traceAt(0x4f12);
    // 02d2:21f2  mov word ptr [0x1684], 0  [x12142]
    c.w16(c.dsb + (uint16_t)(0x1684u), 0x0u);
    // 02d2:21f8  mov di, 0x1688  [x12142]
    c.di.x = (uint16_t)(0x1688u);
    // 02d2:21fb  mov ax, word ptr [di + 0x20]  [x12142]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x20u)));
    // 02d2:21fe  cmp ax, 0xf  [x12142]
    c.sub<16>(c.a.x, 0xfu, true);
    // 02d2:2201  je 0x2208  [x12142]
    if (c.zf) goto L04f28;
L04f23:
    if (c.tracing) c.traceAt(0x4f23);
    // 02d2:2203  cmp ax, 0x11  [x10312]
    c.sub<16>(c.a.x, 0x11u, true);
    // 02d2:2206  jne 0x221a  [x10312]
    if (!c.zf) goto L04f3a;
L04f28:
    if (c.tracing) c.traceAt(0x4f28);
    // 02d2:2208  cmp word ptr [di + 0x34], 0  [x4256]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x34u)), 0x0u, true);
    // 02d2:220c  je 0x221a  [x4256]
    if (c.zf) goto L04f3a;
L04f2e:
    if (c.tracing) c.traceAt(0x4f2e);
    // 02d2:220e  cmp word ptr [di + 6], 0x3f  [x1105]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6u)), 0x3fu, true);
    // 02d2:2212  jne 0x221a  [x1105]
    if (!c.zf) goto L04f3a;
L04f34:
    if (c.tracing) c.traceAt(0x4f34);
    // 02d2:2214  mov word ptr [0x1684], 1  [x667]
    c.w16(c.dsb + (uint16_t)(0x1684u), 0x1u);
L04f3a:
    if (c.tracing) c.traceAt(0x4f3a);
    // 02d2:221a  inc word ptr [0xf3c]  [x12142]
    c.w16(c.dsb + (uint16_t)(0xf3cu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xf3cu)), false));
    // 02d2:221e  mov ax, word ptr [0xf32]  [x12142]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xf32u)));
    // 02d2:2221  shl ax, 2  [x12142]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x2u) & 31), false));
    // 02d2:2224  add word ptr [0x1660], ax  [x12142]
    c.w16(c.dsb + (uint16_t)(0x1660u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x1660u)), c.a.x, true));
    // 02d2:2228  jae 0x2230  [x12142]
    if (!c.cf) goto L04f50;
    c.notTranslated(0x4f4a, "fall-through");
L04f50:
    if (c.tracing) c.traceAt(0x4f50);
    // 02d2:2230  dec word ptr [0x1680]  [x527533]
    c.w16(c.dsb + (uint16_t)(0x1680u), c.dec<16>(c.r16(c.dsb + (uint16_t)(0x1680u)), true));
    // 02d2:2234  jne 0x2244  [x527533]
    if (!c.zf) goto L04f64;
L04f56:
    if (c.tracing) c.traceAt(0x4f56);
    // 02d2:2236  mov word ptr [0x1680], 0x37  [x9591]
    c.w16(c.dsb + (uint16_t)(0x1680u), 0x37u);
    // 02d2:223c  pop es  [x9591]
    c.loadEs((uint16_t)c.pop16());
    // 02d2:223d  pop ds  [x9591]
    c.loadDs((uint16_t)c.pop16());
    // 02d2:223e  popaw   [x9591]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 02d2:223f  ljmp cs:[0x166a]  [x9591]
    { const uint32_t t0 = c.r16(c.csb + (uint16_t)(0x166au)); c.loadCs(c.r16(c.csb + (uint16_t)(0x166au) + 2)); t = c.csb + t0; } goto dispatch;
L04f64:
    if (c.tracing) c.traceAt(0x4f64);
    // 02d2:2244  pop es  [x517942]
    c.loadEs((uint16_t)c.pop16());
    // 02d2:2245  pop ds  [x517942]
    c.loadDs((uint16_t)c.pop16());
    // 02d2:2246  popaw   [x517942]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 02d2:2247  iret   [x517942]
    c.iret(); return;
L04fe8:
    if (c.tracing) c.traceAt(0x4fe8);
    // 02d2:22c8  pushaw   [x1]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 02d2:22c9  push ds  [x1]
    c.push16(c.ds);
    // 02d2:22ca  push es  [x1]
    c.push16(c.es);
    // 02d2:22cb  cli   [x1]
    c.m.cli();
    // 02d2:22cc  mov word ptr cs:[0x1680], 0x37  [x1]
    c.w16(c.csb + (uint16_t)(0x1680u), 0x37u);
    // 02d2:22d3  mov di, 0x1688  [x1]
    c.di.x = (uint16_t)(0x1688u);
    // 02d2:22d6  mov cx, word ptr cs:[0xf32]  [x1]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf32u)));
L04ffb:
    if (c.tracing) c.traceAt(0x4ffb);
    // 02d2:22db  mov word ptr cs:[di + 4], 0  [x4]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x4u), 0x0u);
    // 02d2:22e1  mov word ptr cs:[di + 6], 0  [x4]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x6u), 0x0u);
    // 02d2:22e7  add di, 0x36  [x4]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x36u, true));
    // 02d2:22ea  loop 0x22db  [x4]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L04ffb;
L0500c:
    if (c.tracing) c.traceAt(0x500c);
    // 02d2:22ec  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 02d2:22ef  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 02d2:22f1  mov bx, word ptr es:[0x20]  [x1]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x20u)));
    // 02d2:22f6  mov ax, word ptr es:[0x22]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x22u)));
    // 02d2:22fa  mov word ptr cs:[0x166a], bx  [x1]
    c.w16(c.csb + (uint16_t)(0x166au), c.b.x);
    // 02d2:22ff  mov word ptr cs:[0x166c], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x166cu), c.a.x);
    // 02d2:2303  push cs  [x1]
    c.push16(c.cs);
    // 02d2:2304  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 02d2:2305  mov dx, 0x1838  [x1]
    c.dx_.x = (uint16_t)(0x1838u);
    // 02d2:2308  mov word ptr es:[0x20], dx  [x1]
    c.w16(c.esb + (uint16_t)(0x20u), c.dx_.x);
    // 02d2:230d  mov word ptr es:[0x22], ds  [x1]
    c.w16(c.esb + (uint16_t)(0x22u), c.ds);
    // 02d2:2312  mov al, 0x36  [x1]
    c.a.l = (uint8_t)(0x36u);
    // 02d2:2314  out 0x43, al  [x1]
    c.ip = 0x2316u; c.d32 = false; c.out8(0x43, c.a.l);
    // 02d2:2316  mov al, 0xa9  [x1]
    c.a.l = (uint8_t)(0xa9u);
    // 02d2:2318  out 0x40, al  [x1]
    c.ip = 0x231au; c.d32 = false; c.out8(0x40, c.a.l);
    // 02d2:231a  mov al, 4  [x1]
    c.a.l = (uint8_t)(0x4u);
    // 02d2:231c  out 0x40, al  [x1]
    c.ip = 0x231eu; c.d32 = false; c.out8(0x40, c.a.l);
    // 02d2:231e  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 02d2:2321  mov dx, 0x32  [x1]
    c.dx_.x = (uint16_t)(0x32u);
    // 02d2:2324  mov bx, 0x3e8  [x1]
    c.b.x = (uint16_t)(0x3e8u);
    // 02d2:2327  div bx  [x1]
    while (!c.div16(c.b.x)) { c.d32 = false; c.intr(0, 0x2327u); }   // #DE: int 0, then again
    // 02d2:2329  mov word ptr cs:[0x1672], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x1672u), c.a.x);
    // 02d2:232d  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 02d2:2330  div bx  [x1]
    while (!c.div16(c.b.x)) { c.d32 = false; c.intr(0, 0x2330u); }   // #DE: int 0, then again
    // 02d2:2332  mov word ptr cs:[0x1674], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x1674u), c.a.x);
    // 02d2:2336  mov word ptr cs:[0x1676], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x1676u), 0x0u);
    // 02d2:233d  mov word ptr cs:[0x1678], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x1678u), 0x0u);
    // 02d2:2344  mov word ptr cs:[0x167a], 0x14  [x1]
    c.w16(c.csb + (uint16_t)(0x167au), 0x14u);
    // 02d2:234b  mov word ptr cs:[0x167c], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x167cu), 0x0u);
    // 02d2:2352  mov word ptr cs:[0x167e], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x167eu), 0x0u);
    // 02d2:2359  mov dx, word ptr cs:[0xf2e]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:235e  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 02d2:2360  out dx, al  [x1]
    c.ip = 0x2361u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2361  sti   [x1]
    c.ip = 0x2362u; c.d32 = false; c.m.sti();
L05082:
    if (c.tracing) c.traceAt(0x5082);
    // 02d2:2362  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
L05083:
    if (c.tracing) c.traceAt(0x5083);
    // 02d2:2363  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 02d2:2364  popaw   [x1]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 02d2:2365  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L05086:
    if (c.tracing) c.traceAt(0x5086);
    // 02d2:2366  pushaw   [x1]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 02d2:2367  push ds  [x1]
    c.push16(c.ds);
    // 02d2:2368  push es  [x1]
    c.push16(c.es);
    // 02d2:2369  cli   [x1]
    c.m.cli();
    // 02d2:236a  mov dx, word ptr cs:[0xf2e]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:236f  mov al, 3  [x1]
    c.a.l = (uint8_t)(0x3u);
    // 02d2:2371  out dx, al  [x1]
    c.ip = 0x2372u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2372  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 02d2:2375  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 02d2:2377  mov al, 0x36  [x1]
    c.a.l = (uint8_t)(0x36u);
    // 02d2:2379  out 0x43, al  [x1]
    c.ip = 0x237bu; c.d32 = false; c.out8(0x43, c.a.l);
    // 02d2:237b  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:237d  out 0x40, al  [x1]
    c.ip = 0x237fu; c.d32 = false; c.out8(0x40, c.a.l);
    // 02d2:237f  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:2381  out 0x40, al  [x1]
    c.ip = 0x2383u; c.d32 = false; c.out8(0x40, c.a.l);
    // 02d2:2383  mov dx, word ptr cs:[0x166a]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x166au)));
    // 02d2:2388  mov ds, word ptr cs:[0x166c]  [x1]
    c.loadDs(c.r16(c.csb + (uint16_t)(0x166cu)));
    // 02d2:238d  mov word ptr es:[0x20], dx  [x1]
    c.w16(c.esb + (uint16_t)(0x20u), c.dx_.x);
    // 02d2:2392  mov word ptr es:[0x22], ds  [x1]
    c.w16(c.esb + (uint16_t)(0x22u), c.ds);
    // 02d2:2397  sti   [x1]
    c.ip = 0x2398u; c.d32 = false; c.m.sti();
L050b8:
    if (c.tracing) c.traceAt(0x50b8);
    // 02d2:2398  mov dx, word ptr cs:[0xf2e]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
L050bd:
    if (c.tracing) c.traceAt(0x50bd);
    // 02d2:239d  add dx, 0x102  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x102u, true));
    // 02d2:23a1  mov cx, 0x14  [x1]
    c.c.x = (uint16_t)(0x14u);
L050c4:
    if (c.tracing) c.traceAt(0x50c4);
    // 02d2:23a4  mov al, cl  [x20]
    c.a.l = (uint8_t)(c.c.l);
    // 02d2:23a6  dec al  [x20]
    c.a.l = (uint8_t)(c.dec<8>(c.a.l, false));
    // 02d2:23a8  out dx, al  [x20]
    c.ip = 0x23a9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:23a9  inc dx  [x20]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:23aa  mov al, 0  [x20]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:23ac  out dx, al  [x20]
    c.ip = 0x23adu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:23ad  add dx, 2  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:23b0  mov al, 3  [x20]
    c.a.l = (uint8_t)(0x3u);
    // 02d2:23b2  out dx, al  [x20]
    c.ip = 0x23b3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:23b3  sub dx, 2  [x20]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, false));
    // 02d2:23b6  mov al, 0xd  [x20]
    c.a.l = (uint8_t)(0xdu);
    // 02d2:23b8  out dx, al  [x20]
    c.ip = 0x23b9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:23b9  add dx, 2  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:23bc  mov al, 3  [x20]
    c.a.l = (uint8_t)(0x3u);
    // 02d2:23be  out dx, al  [x20]
    c.ip = 0x23bfu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:23bf  sub dx, 3  [x20]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x3u, true));
    // 02d2:23c2  loop 0x23a4  [x20]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L050c4;
L050e4:
    if (c.tracing) c.traceAt(0x50e4);
    // 02d2:23c4  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 02d2:23c5  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 02d2:23c6  popaw   [x1]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 02d2:23c7  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L050e8:
    if (c.tracing) c.traceAt(0x50e8);
    // 02d2:23c8  pushaw   [x1]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 02d2:23c9  push ds  [x1]
    c.push16(c.ds);
    // 02d2:23ca  push es  [x1]
    c.push16(c.es);
    // 02d2:23cb  mov word ptr cs:[0xf3c], 0x40  [x1]
    c.w16(c.csb + (uint16_t)(0xf3cu), 0x40u);
    // 02d2:23d2  mov word ptr cs:[0xf40], 0  [x1]
    c.w16(c.csb + (uint16_t)(0xf40u), 0x0u);
    // 02d2:23d9  mov word ptr cs:[0xf38], 6  [x1]
    c.w16(c.csb + (uint16_t)(0xf38u), 0x6u);
    // 02d2:23e0  mov word ptr cs:[0xf3a], 1  [x1]
    c.w16(c.csb + (uint16_t)(0xf3au), 0x1u);
    // 02d2:23e7  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 02d2:23e8  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 02d2:23e9  popaw   [x1]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 02d2:23ea  mov ax, cs  [x1]
    c.a.x = (uint16_t)(c.cs);
    // 02d2:23ec  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L0510d:
    if (c.tracing) c.traceAt(0x510d);
    // 02d2:23ed  mov word ptr cs:[0xf2e], ax  [x1]
    c.w16(c.csb + (uint16_t)(0xf2eu), c.a.x);
    // 02d2:23f1  pushaw   [x1]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 02d2:23f2  push es  [x1]
    c.push16(c.es);
    // 02d2:23f3  push ds  [x1]
    c.push16(c.ds);
    // 02d2:23f4  mov si, 0xd8  [x1]
    c.si.x = (uint16_t)(0xd8u);
    // 02d2:23f7  mov bp, 0x6c  [x1]
    c.bp.x = (uint16_t)(0x6cu);
    // 02d2:23fa  mov cx, 0x321  [x1]
    c.c.x = (uint16_t)(0x321u);
L0511d:
    if (c.tracing) c.traceAt(0x511d);
    // 02d2:23fd  mov dx, 0x36  [x801]
    c.dx_.x = (uint16_t)(0x36u);
    // 02d2:2400  mov ax, 0x9de4  [x801]
    c.a.x = (uint16_t)(0x9de4u);
    // 02d2:2403  div bp  [x801]
    while (!c.div16(c.bp.x)) { c.d32 = false; c.intr(0, 0x2403u); }   // #DE: int 0, then again
    // 02d2:2405  mov dx, 0x64  [x801]
    c.dx_.x = (uint16_t)(0x64u);
    // 02d2:2408  mul dx  [x801]
    c.mul16(c.dx_.x);
    // 02d2:240a  mov bx, 0xbd6  [x801]
    c.b.x = (uint16_t)(0xbd6u);
    // 02d2:240d  div bx  [x801]
    while (!c.div16(c.b.x)) { c.d32 = false; c.intr(0, 0x240du); }   // #DE: int 0, then again
    // 02d2:240f  shr bx, 1  [x801]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x1u) & 31), true));
    // 02d2:2411  adc bx, 0  [x801]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x0u, false, c.cf));
    // 02d2:2414  cmp dx, bx  [x801]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 02d2:2416  jb 0x2419  [x801]
    if (c.cf) goto L05139;
L05138:
    if (c.tracing) c.traceAt(0x5138);
    // 02d2:2418  inc ax  [x400]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L05139:
    if (c.tracing) c.traceAt(0x5139);
    // 02d2:2419  mov word ptr cs:[si + 0xf48], ax  [x801]
    c.w16(c.csb + (uint16_t)(c.si.x + 0xf48u), c.a.x);
    // 02d2:241e  inc bp  [x801]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, false));
    // 02d2:241f  add si, 2  [x801]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 02d2:2422  loop 0x23fd  [x801]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L0511d;
L05144:
    if (c.tracing) c.traceAt(0x5144);
    // 02d2:2424  mov bx, word ptr cs:[0xf2e]  [x1]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:2429  mov cx, bx  [x1]
    c.c.x = (uint16_t)(c.b.x);
    // 02d2:242b  add bx, 0x103  [x1]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x103u, false));
    // 02d2:242f  add cx, 0x105  [x1]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, 0x105u, false));
    // 02d2:2433  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 02d2:2435  mov al, 0x4c  [x1]
    c.a.l = (uint8_t)(0x4cu);
    // 02d2:2437  out dx, al  [x1]
    c.ip = 0x2438u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2438  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 02d2:243a  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:243c  out dx, al  [x1]
    c.ip = 0x243du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:243d  mov dx, word ptr cs:[0xf2e]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:2442  in al, dx  [x1]
    c.ip = 0x2443u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:2443  in al, dx  [x1]
    c.ip = 0x2444u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:2444  in al, dx  [x1]
    c.ip = 0x2445u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:2445  in al, dx  [x1]
    c.ip = 0x2446u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:2446  in al, dx  [x1]
    c.ip = 0x2447u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:2447  in al, dx  [x1]
    c.ip = 0x2448u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:2448  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 02d2:244a  mov al, 0x4c  [x1]
    c.a.l = (uint8_t)(0x4cu);
    // 02d2:244c  out dx, al  [x1]
    c.ip = 0x244du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:244d  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 02d2:244f  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 02d2:2451  out dx, al  [x1]
    c.ip = 0x2452u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2452  mov dx, word ptr cs:[0xf2e]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:2457  in al, dx  [x1]
    c.ip = 0x2458u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:2458  in al, dx  [x1]
    c.ip = 0x2459u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:2459  in al, dx  [x1]
    c.ip = 0x245au; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:245a  in al, dx  [x1]
    c.ip = 0x245bu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:245b  in al, dx  [x1]
    c.ip = 0x245cu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:245c  in al, dx  [x1]
    c.ip = 0x245du; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:245d  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 02d2:245f  mov al, 0x41  [x1]
    c.a.l = (uint8_t)(0x41u);
    // 02d2:2461  out dx, al  [x1]
    c.ip = 0x2462u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2462  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 02d2:2464  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:2466  out dx, al  [x1]
    c.ip = 0x2467u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2467  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 02d2:2469  mov al, 0x45  [x1]
    c.a.l = (uint8_t)(0x45u);
    // 02d2:246b  out dx, al  [x1]
    c.ip = 0x246cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:246c  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 02d2:246e  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:2470  out dx, al  [x1]
    c.ip = 0x2471u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2471  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 02d2:2473  mov al, 0x49  [x1]
    c.a.l = (uint8_t)(0x49u);
    // 02d2:2475  out dx, al  [x1]
    c.ip = 0x2476u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2476  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 02d2:2478  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:247a  out dx, al  [x1]
    c.ip = 0x247bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:247b  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 02d2:247d  mov al, 0xe  [x1]
    c.a.l = (uint8_t)(0xeu);
    // 02d2:247f  out dx, al  [x1]
    c.ip = 0x2480u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2480  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 02d2:2482  mov al, 0x14  [x1]
    c.a.l = (uint8_t)(0x14u);
    // 02d2:2484  dec al  [x1]
    c.a.l = (uint8_t)(c.dec<8>(c.a.l, false));
    // 02d2:2486  or al, 0xc0  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0xc0u), false));
    // 02d2:2488  out dx, al  [x1]
    c.ip = 0x2489u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2489  mov dx, word ptr cs:[0xf2e]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:248e  add dx, 6  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x6u, true));
    // 02d2:2491  in al, dx  [x1]
    c.ip = 0x2492u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:2492  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 02d2:2494  mov al, 0x41  [x1]
    c.a.l = (uint8_t)(0x41u);
    // 02d2:2496  out dx, al  [x1]
    c.ip = 0x2497u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2497  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 02d2:2499  in al, dx  [x1]
    c.ip = 0x249au; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:249a  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 02d2:249c  mov al, 0x49  [x1]
    c.a.l = (uint8_t)(0x49u);
    // 02d2:249e  out dx, al  [x1]
    c.ip = 0x249fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:249f  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 02d2:24a1  in al, dx  [x1]
    c.ip = 0x24a2u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:24a2  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 02d2:24a4  mov al, 0x8f  [x1]
    c.a.l = (uint8_t)(0x8fu);
    // 02d2:24a6  out dx, al  [x1]
    c.ip = 0x24a7u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:24a7  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 02d2:24a9  in al, dx  [x1]
    c.ip = 0x24aau; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:24aa  push cx  [x1]
    c.push16(c.c.x);
    // 02d2:24ab  mov cx, 0x20  [x1]
    c.c.x = (uint16_t)(0x20u);
L051ce:
    if (c.tracing) c.traceAt(0x51ce);
    // 02d2:24ae  mov dx, word ptr cs:[0xf2e]  [x32]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:24b3  add dx, 0x102  [x32]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x102u, false));
    // 02d2:24b7  mov al, cl  [x32]
    c.a.l = (uint8_t)(c.c.l);
    // 02d2:24b9  dec al  [x32]
    c.a.l = (uint8_t)(c.dec<8>(c.a.l, false));
    // 02d2:24bb  out dx, al  [x32]
    c.ip = 0x24bcu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:24bc  inc dx  [x32]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:24bd  mov al, 0  [x32]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:24bf  out dx, al  [x32]
    c.ip = 0x24c0u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:24c0  add dx, 2  [x32]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:24c3  mov al, 3  [x32]
    c.a.l = (uint8_t)(0x3u);
    // 02d2:24c5  out dx, al  [x32]
    c.ip = 0x24c6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:24c6  sub dx, 2  [x32]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, false));
    // 02d2:24c9  mov al, 0xd  [x32]
    c.a.l = (uint8_t)(0xdu);
    // 02d2:24cb  out dx, al  [x32]
    c.ip = 0x24ccu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:24cc  add dx, 2  [x32]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, true));
    // 02d2:24cf  mov al, 3  [x32]
    c.a.l = (uint8_t)(0x3u);
    // 02d2:24d1  out dx, al  [x32]
    c.ip = 0x24d2u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:24d2  loop 0x24ae  [x32]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L051ce;
L051f4:
    if (c.tracing) c.traceAt(0x51f4);
    // 02d2:24d4  pop cx  [x1]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 02d2:24d5  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 02d2:24d7  mov al, 0x41  [x1]
    c.a.l = (uint8_t)(0x41u);
    // 02d2:24d9  out dx, al  [x1]
    c.ip = 0x24dau; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:24da  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 02d2:24dc  in al, dx  [x1]
    c.ip = 0x24ddu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:24dd  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 02d2:24df  mov al, 0x49  [x1]
    c.a.l = (uint8_t)(0x49u);
    // 02d2:24e1  out dx, al  [x1]
    c.ip = 0x24e2u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:24e2  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 02d2:24e4  in al, dx  [x1]
    c.ip = 0x24e5u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:24e5  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 02d2:24e7  mov al, 0x8f  [x1]
    c.a.l = (uint8_t)(0x8fu);
    // 02d2:24e9  out dx, al  [x1]
    c.ip = 0x24eau; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:24ea  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 02d2:24ec  in al, dx  [x1]
    c.ip = 0x24edu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 02d2:24ed  mov dx, bx  [x1]
    c.dx_.x = (uint16_t)(c.b.x);
    // 02d2:24ef  mov al, 0x4c  [x1]
    c.a.l = (uint8_t)(0x4cu);
    // 02d2:24f1  out dx, al  [x1]
    c.ip = 0x24f2u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:24f2  mov dx, cx  [x1]
    c.dx_.x = (uint16_t)(c.c.x);
    // 02d2:24f4  mov al, 7  [x1]
    c.a.l = (uint8_t)(0x7u);
    // 02d2:24f6  out dx, al  [x1]
    c.ip = 0x24f7u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:24f7  mov cx, 0x14  [x1]
    c.c.x = (uint16_t)(0x14u);
L0521a:
    if (c.tracing) c.traceAt(0x521a);
    // 02d2:24fa  mov dx, word ptr cs:[0xf2e]  [x20]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:24ff  add dx, 0x102  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x102u, false));
    // 02d2:2503  mov al, 0x14  [x20]
    c.a.l = (uint8_t)(0x14u);
    // 02d2:2505  sub al, cl  [x20]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.c.l, false));
    // 02d2:2507  out dx, al  [x20]
    c.ip = 0x2508u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2508  mov dx, word ptr cs:[0xf2e]  [x20]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:250d  add dx, 0x103  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02d2:2511  mov al, 6  [x20]
    c.a.l = (uint8_t)(0x6u);
    // 02d2:2513  out dx, al  [x20]
    c.ip = 0x2514u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2514  mov al, 0x3f  [x20]
    c.a.l = (uint8_t)(0x3fu);
    // 02d2:2516  mov dx, word ptr cs:[0xf2e]  [x20]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:251b  add dx, 0x105  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x105u, false));
    // 02d2:251f  out dx, al  [x20]
    c.ip = 0x2520u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2520  mov dx, word ptr cs:[0xf2e]  [x20]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:2525  add dx, 0x103  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02d2:2529  mov al, 9  [x20]
    c.a.l = (uint8_t)(0x9u);
    // 02d2:252b  out dx, al  [x20]
    c.ip = 0x252cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:252c  mov ax, word ptr cs:[0xcfc]  [x20]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xcfcu)));
    // 02d2:2530  mov dx, word ptr cs:[0xf2e]  [x20]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:2535  add dx, 0x104  [x20]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x104u, true));
    // 02d2:2539  out dx, ax  [x20]
    c.ip = 0x253au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:253a  loop 0x24fa  [x20]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L0521a;
L0525c:
    if (c.tracing) c.traceAt(0x525c);
    // 02d2:253c  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 02d2:253d  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 02d2:253e  popaw   [x1]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 02d2:253f  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L05260:
    if (c.tracing) c.traceAt(0x5260);
    // 02d2:2540  pushaw   [x1]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 02d2:2541  push es  [x1]
    c.push16(c.es);
    // 02d2:2542  mov es, word ptr cs:[0x1666]  [x1]
    c.loadEs(c.r16(c.csb + (uint16_t)(0x1666u)));
    // 02d2:2547  call 0x2877  [x1]
    c.push16(0x254au); code_0(c, 0x5597u); if (c.ip != 0x254au) c.badReturn(0x5267);
L0526a:
    if (c.tracing) c.traceAt(0x526a);
    // 02d2:254a  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 02d2:254b  popaw   [x1]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 02d2:254c  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L0526d:
    if (c.tracing) c.traceAt(0x526d);
    // 02d2:254d  call 0x2896  [x1]
    c.push16(0x2550u); code_0(c, 0x55b6u); if (c.ip != 0x2550u) c.badReturn(0x526d);
L05270:
    if (c.tracing) c.traceAt(0x5270);
    // 02d2:2550  jae 0x2558  [x1]
    if (!c.cf) goto L05278;
    c.notTranslated(0x5272, "fall-through");
L05278:
    if (c.tracing) c.traceAt(0x5278);
    // 02d2:2558  call 0x2567  [x1]
    c.push16(0x255bu); code_0(c, 0x5287u); if (c.ip != 0x255bu) c.badReturn(0x5278);
L0527b:
    if (c.tracing) c.traceAt(0x527b);
    // 02d2:255b  jae 0x2563  [x1]
    if (!c.cf) goto L05283;
    c.notTranslated(0x527d, "fall-through");
L05283:
    if (c.tracing) c.traceAt(0x5283);
    // 02d2:2563  call 0x28c8  [x1]
    c.push16(0x2566u); code_0(c, 0x55e8u); if (c.ip != 0x2566u) c.badReturn(0x5283);
L05286:
    if (c.tracing) c.traceAt(0x5286);
    // 02d2:2566  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L05287:
    if (c.tracing) c.traceAt(0x5287);
    // 02d2:2567  pushaw   [x1]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 02d2:2568  push ds  [x1]
    c.push16(c.ds);
    // 02d2:2569  push es  [x1]
    c.push16(c.es);
    // 02d2:256a  mov word ptr cs:[0x1686], 0x40  [x1]
    c.w16(c.csb + (uint16_t)(0x1686u), 0x40u);
    // 02d2:2571  mov cx, 0x43c  [x1]
    c.c.x = (uint16_t)(0x43cu);
    // 02d2:2574  mov dx, 0x15  [x1]
    c.dx_.x = (uint16_t)(0x15u);
    // 02d2:2577  push cs  [x1]
    c.push16(c.cs);
    // 02d2:2578  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 02d2:2579  call 0x2881  [x1]
    c.push16(0x257cu); code_0(c, 0x55a1u); if (c.ip != 0x257cu) c.badReturn(0x5299);
L0529c:
    if (c.tracing) c.traceAt(0x529c);
    // 02d2:257c  mov word ptr cs:[0xf32], 4  [x1]
    c.w16(c.csb + (uint16_t)(0xf32u), 0x4u);
    // 02d2:2583  mov bp, 0x44d  [x1]
    c.bp.x = (uint16_t)(0x44du);
    // 02d2:2586  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 02d2:2589  mov cx, 4  [x1]
    c.c.x = (uint16_t)(0x4u);
L052ac:
    if (c.tracing) c.traceAt(0x52ac);
    // 02d2:258c  mov al, byte ptr cs:[bp]  [x4]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.bp.x)));
    // 02d2:2590  cmp al, byte ptr cs:[bx]  [x4]
    c.sub<8>(c.a.l, c.r8(c.csb + (uint16_t)(c.b.x)), true);
    // 02d2:2595  jne 0x25a7  [x4]
    if (!c.zf) { t = 0x52c7u; goto dispatch; }
L052b7:
    if (c.tracing) c.traceAt(0x52b7);
    // 02d2:2597  inc bp  [x4]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, false));
    // 02d2:2598  inc bx  [x4]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 02d2:2599  loop 0x258c  [x4]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L052ac;
L052bb:
    if (c.tracing) c.traceAt(0x52bb);
    // 02d2:259b  mov si, 0x3cd  [x1]
    c.si.x = (uint16_t)(0x3cdu);
    // 02d2:259e  mov byte ptr cs:[0x14], 1  [x1]
    c.w8(c.csb + (uint16_t)(0x14u), 0x1u);
    // 02d2:25a4  jmp 0x2674  [x1]
    goto L05394;
L05394:
    if (c.tracing) c.traceAt(0x5394);
    // 02d2:2674  mov ax, word ptr cs:[si - 2]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0xfffffffeu)));
    // 02d2:2678  mov word ptr cs:[0x451], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x451u), c.a.x);
    // 02d2:267c  mov di, 0x453  [x1]
    c.di.x = (uint16_t)(0x453u);
    // 02d2:267f  mov cx, 0x80  [x1]
    c.c.x = (uint16_t)(0x80u);
L053a2:
    if (c.tracing) c.traceAt(0x53a2);
    // 02d2:2682  mov al, byte ptr cs:[si]  [x128]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 02d2:2685  mov byte ptr cs:[di], al  [x128]
    c.w8(c.csb + (uint16_t)(c.di.x), c.a.l);
    // 02d2:2688  inc si  [x128]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 02d2:2689  inc di  [x128]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 02d2:268a  loop 0x2682  [x128]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L053a2;
L053ac:
    if (c.tracing) c.traceAt(0x53ac);
    // 02d2:268c  mov si, 0x453  [x1]
    c.si.x = (uint16_t)(0x453u);
    // 02d2:268f  mov cx, 0x80  [x1]
    c.c.x = (uint16_t)(0x80u);
    // 02d2:2692  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
L053b5:
    if (c.tracing) c.traceAt(0x53b5);
    // 02d2:2695  mov al, byte ptr cs:[si]  [x128]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 02d2:2698  cmp al, ah  [x128]
    c.sub<8>(c.a.l, c.a.h, true);
    // 02d2:269a  jb 0x269e  [x128]
    if (c.cf) goto L053be;
L053bc:
    if (c.tracing) c.traceAt(0x53bc);
    // 02d2:269c  xchg al, ah  [x2]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.a.h); c.a.h = (uint8_t)(t0); }
L053be:
    if (c.tracing) c.traceAt(0x53be);
    // 02d2:269e  inc si  [x128]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 02d2:269f  loop 0x2695  [x128]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L053b5;
L053c1:
    if (c.tracing) c.traceAt(0x53c1);
    // 02d2:26a1  inc ah  [x1]
    c.a.h = (uint8_t)(c.inc<8>(c.a.h, false));
    // 02d2:26a3  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 02d2:26a5  mov bx, word ptr cs:[0xf32]  [x1]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf32u)));
    // 02d2:26aa  mul bx  [x1]
    c.mul16(c.b.x);
    // 02d2:26ac  mov si, dx  [x1]
    c.si.x = (uint16_t)(c.dx_.x);
    // 02d2:26ae  mov di, ax  [x1]
    c.di.x = (uint16_t)(c.a.x);
    // 02d2:26b0  mov bx, 0x10  [x1]
    c.b.x = (uint16_t)(0x10u);
    // 02d2:26b3  div bx  [x1]
    while (!c.div16(c.b.x)) { c.d32 = false; c.intr(0, 0x26b3u); }   // #DE: int 0, then again
    // 02d2:26b5  mov bx, ax  [x1]
    c.b.x = (uint16_t)(c.a.x);
    // 02d2:26b7  call 0x286f  [x1]
    c.push16(0x26bau); code_0(c, 0x558fu); if (c.ip != 0x26bau) c.badReturn(0x53d7);
L053da:
    if (c.tracing) c.traceAt(0x53da);
    // 02d2:26ba  jae 0x26c7  [x1]
    if (!c.cf) goto L053e7;
    c.notTranslated(0x53dc, "fall-through");
L053e7:
    if (c.tracing) c.traceAt(0x53e7);
    // 02d2:26c7  mov word ptr cs:[0x1666], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x1666u), c.a.x);
    // 02d2:26cb  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 02d2:26cd  dec si  [x1]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 02d2:26ce  js 0x26ec  [x1]
    if (c.sf) goto L0540c;
    c.notTranslated(0x53f0, "fall-through");
L0540c:
    if (c.tracing) c.traceAt(0x540c);
    // 02d2:26ec  mov cx, di  [x1]
    c.c.x = (uint16_t)(c.di.x);
    // 02d2:26ee  mov dx, 0  [x1]
    c.dx_.x = (uint16_t)(0x0u);
    // 02d2:26f1  call 0x2881  [x1]
    c.push16(0x26f4u); code_0(c, 0x55a1u); if (c.ip != 0x26f4u) c.badReturn(0x5411);
L05414:
    if (c.tracing) c.traceAt(0x5414);
    // 02d2:26f4  mov cx, 0xf  [x1]
    c.c.x = (uint16_t)(0xfu);
    // 02d2:26f7  cmp byte ptr cs:[0x14], 1  [x1]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x14u)), 0x1u, true);
    // 02d2:26fd  jne 0x2702  [x1]
    if (!c.zf) goto L05422;
L0541f:
    if (c.tracing) c.traceAt(0x541f);
    // 02d2:26ff  mov cx, 0x1f  [x1]
    c.c.x = (uint16_t)(0x1fu);
L05422:
    if (c.tracing) c.traceAt(0x5422);
    // 02d2:2702  mov bx, 0x1000  [x1]
    c.b.x = (uint16_t)(0x1000u);
    // 02d2:2705  call 0x286f  [x1]
    c.push16(0x2708u); code_0(c, 0x558fu); if (c.ip != 0x2708u) c.badReturn(0x5425);
L05428:
    if (c.tracing) c.traceAt(0x5428);
    // 02d2:2708  mov word ptr cs:[0x1664], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x1664u), c.a.x);
    // 02d2:270c  mov word ptr cs:[0x166e], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x166eu), 0x0u);
    // 02d2:2713  mov word ptr cs:[0x1670], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x1670u), 0x0u);
    // 02d2:271a  mov si, 0x3f  [x1]
    c.si.x = (uint16_t)(0x3fu);
    // 02d2:271d  mov bp, 0  [x1]
    c.bp.x = (uint16_t)(0x0u);
L05440:
    if (c.tracing) c.traceAt(0x5440);
    // 02d2:2720  push cx  [x31]
    c.push16(c.c.x);
    // 02d2:2721  mov word ptr cs:[bp + 0xdf8], 0  [x31]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xdf8u), 0x0u);
    // 02d2:2728  mov cx, word ptr cs:[si]  [x31]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x)));
    // 02d2:272b  add si, 2  [x31]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 02d2:272e  xchg cl, ch  [x31]
    { const uint32_t t0 = c.c.l; c.c.l = (uint8_t)(c.c.h); c.c.h = (uint8_t)(t0); }
    // 02d2:2730  cmp cx, 2  [x31]
    c.sub<16>(c.c.x, 0x2u, true);
    // 02d2:2733  ja 0x2738  [x31]
    if ((!c.cf && !c.zf)) goto L05458;
L05455:
    if (c.tracing) c.traceAt(0x5455);
    // 02d2:2735  jmp 0x27c3  [x8]
    goto L054e3;
L05458:
    if (c.tracing) c.traceAt(0x5458);
    // 02d2:2738  shl cx, 1  [x23]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x1u) & 31), true));
    // 02d2:273a  mov word ptr cs:[bp + 0xdf8], cx  [x23]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xdf8u), c.c.x);
    // 02d2:273f  mov ds, word ptr cs:[0x1664]  [x23]
    c.loadDs(c.r16(c.csb + (uint16_t)(0x1664u)));
    // 02d2:2744  mov dx, 0  [x23]
    c.dx_.x = (uint16_t)(0x0u);
    // 02d2:2747  call 0x2881  [x23]
    c.push16(0x274au); code_0(c, 0x55a1u); if (c.ip != 0x274au) c.badReturn(0x5467);
L0546a:
    if (c.tracing) c.traceAt(0x546a);
    // 02d2:274a  push bp  [x23]
    c.push16(c.bp.x);
    // 02d2:274b  mov cx, word ptr cs:[bp + 0xdf8]  [x23]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0xdf8u)));
    // 02d2:2750  shl bp, 1  [x23]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x1u) & 31), false));
    // 02d2:2752  mov di, word ptr cs:[0x166e]  [x23]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x166eu)));
    // 02d2:2757  mov bl, byte ptr cs:[0x1670]  [x23]
    c.b.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0x1670u)));
    // 02d2:275c  mov word ptr cs:[bp + 0xd7c], di  [x23]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xd7cu), c.di.x);
    // 02d2:2761  mov byte ptr cs:[bp + 0xd7e], bl  [x23]
    c.w8(c.csb + (uint16_t)(c.bp.x + 0xd7eu), c.b.l);
    // 02d2:2766  mov bp, di  [x23]
    c.bp.x = (uint16_t)(c.di.x);
    // 02d2:2768  mov di, 0  [x23]
    c.di.x = (uint16_t)(0x0u);
    // 02d2:276b  mov dx, word ptr cs:[0xf2e]  [x23]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:2770  add dx, 0x103  [x23]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, true));
L05494:
    if (c.tracing) c.traceAt(0x5494);
    // 02d2:2774  mov al, 0x43  [x153564]
    c.a.l = (uint8_t)(0x43u);
    // 02d2:2776  out dx, al  [x153564]
    c.ip = 0x2777u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2777  inc dx  [x153564]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:2778  mov ax, bp  [x153564]
    c.a.x = (uint16_t)(c.bp.x);
    // 02d2:277a  out dx, ax  [x153564]
    c.ip = 0x277bu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:277b  dec dx  [x153564]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:277c  mov al, 0x44  [x153564]
    c.a.l = (uint8_t)(0x44u);
    // 02d2:277e  out dx, al  [x153564]
    c.ip = 0x277fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:277f  add dx, 2  [x153564]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:2782  mov al, bl  [x153564]
    c.a.l = (uint8_t)(c.b.l);
    // 02d2:2784  out dx, al  [x153564]
    c.ip = 0x2785u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2785  add dx, 2  [x153564]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:2788  mov al, byte ptr [di]  [x153564]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:278a  out dx, al  [x153564]
    c.ip = 0x278bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:278b  sub dx, 4  [x153564]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x4u, false));
    // 02d2:278e  inc di  [x153564]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 02d2:278f  add bp, 1  [x153564]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x1u, true));
    // 02d2:2792  adc bl, 0  [x153564]
    c.b.l = (uint8_t)(c.add<8>(c.b.l, 0x0u, true, c.cf));
    // 02d2:2795  loop 0x2774  [x153564]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L05494;
L054b7:
    if (c.tracing) c.traceAt(0x54b7);
    // 02d2:2797  dec di  [x23]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, false));
    // 02d2:2798  mov al, 0x43  [x23]
    c.a.l = (uint8_t)(0x43u);
    // 02d2:279a  out dx, al  [x23]
    c.ip = 0x279bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:279b  inc dx  [x23]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 02d2:279c  mov ax, bp  [x23]
    c.a.x = (uint16_t)(c.bp.x);
    // 02d2:279e  out dx, ax  [x23]
    c.ip = 0x279fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 02d2:279f  dec dx  [x23]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 02d2:27a0  mov al, 0x44  [x23]
    c.a.l = (uint8_t)(0x44u);
    // 02d2:27a2  out dx, al  [x23]
    c.ip = 0x27a3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:27a3  add dx, 2  [x23]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:27a6  mov al, bl  [x23]
    c.a.l = (uint8_t)(c.b.l);
    // 02d2:27a8  out dx, al  [x23]
    c.ip = 0x27a9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:27a9  add dx, 2  [x23]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, false));
    // 02d2:27ac  mov al, byte ptr [di]  [x23]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 02d2:27ae  out dx, al  [x23]
    c.ip = 0x27afu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:27af  sub dx, 4  [x23]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x4u, false));
    // 02d2:27b2  add bp, 1  [x23]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x1u, true));
    // 02d2:27b5  adc bl, 0  [x23]
    c.b.l = (uint8_t)(c.add<8>(c.b.l, 0x0u, true, c.cf));
    // 02d2:27b8  mov word ptr cs:[0x166e], bp  [x23]
    c.w16(c.csb + (uint16_t)(0x166eu), c.bp.x);
    // 02d2:27bd  mov byte ptr cs:[0x1670], bl  [x23]
    c.w8(c.csb + (uint16_t)(0x1670u), c.b.l);
    // 02d2:27c2  pop bp  [x23]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
L054e3:
    if (c.tracing) c.traceAt(0x54e3);
    // 02d2:27c3  mov ah, 0  [x31]
    c.a.h = (uint8_t)(0x0u);
    // 02d2:27c5  mov al, byte ptr cs:[si]  [x31]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 02d2:27c8  inc si  [x31]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 02d2:27c9  mov word ptr cs:[bp + 0xe74], ax  [x31]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xe74u), c.a.x);
    // 02d2:27ce  mov al, byte ptr cs:[si]  [x31]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 02d2:27d1  inc si  [x31]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 02d2:27d2  mov byte ptr cs:[bp + 0xe36], al  [x31]
    c.w8(c.csb + (uint16_t)(c.bp.x + 0xe36u), c.a.l);
    // 02d2:27d7  mov dx, word ptr cs:[bp + 0xdf8]  [x31]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0xdf8u)));
    // 02d2:27dc  mov ax, word ptr cs:[si]  [x31]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x)));
    // 02d2:27df  add si, 2  [x31]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 02d2:27e2  xchg al, ah  [x31]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.a.h); c.a.h = (uint8_t)(t0); }
    // 02d2:27e4  mov cx, word ptr cs:[si]  [x31]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x)));
    // 02d2:27e7  add si, 2  [x31]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 02d2:27ea  xchg cl, ch  [x31]
    { const uint32_t t0 = c.c.l; c.c.l = (uint8_t)(c.c.h); c.c.h = (uint8_t)(t0); }
    // 02d2:27ec  cmp byte ptr cs:[0x14], 1  [x31]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x14u)), 0x1u, true);
    // 02d2:27f2  jne 0x27f8  [x31]
    if (!c.zf) goto L05518;
L05514:
    if (c.tracing) c.traceAt(0x5514);
    // 02d2:27f4  shl ax, 1  [x31]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 02d2:27f6  shl cx, 1  [x31]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x1u) & 31), false));
L05518:
    if (c.tracing) c.traceAt(0x5518);
    // 02d2:27f8  mov word ptr cs:[bp + 0xef0], cx  [x31]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xef0u), c.c.x);
    // 02d2:27fd  add cx, ax  [x31]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.a.x, false));
    // 02d2:27ff  cmp cx, dx  [x31]
    c.sub<16>(c.c.x, c.dx_.x, true);
    // 02d2:2801  jbe 0x280c  [x31]
    if ((c.cf || c.zf)) goto L0552c;
    c.notTranslated(0x5523, "fall-through");
L0552c:
    if (c.tracing) c.traceAt(0x552c);
    // 02d2:280c  mov word ptr cs:[bp + 0xeb2], ax  [x31]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xeb2u), c.a.x);
    // 02d2:2811  add si, 0x16  [x31]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x16u, false));
    // 02d2:2814  add bp, 2  [x31]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, true));
    // 02d2:2817  pop cx  [x31]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 02d2:2818  dec cx  [x31]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 02d2:2819  je 0x281e  [x31]
    if (c.zf) goto L0553e;
L0553b:
    if (c.tracing) c.traceAt(0x553b);
    // 02d2:281b  jmp 0x2720  [x30]
    goto L05440;
L0553e:
    if (c.tracing) c.traceAt(0x553e);
    // 02d2:281e  mov es, word ptr cs:[0x1664]  [x1]
    c.loadEs(c.r16(c.csb + (uint16_t)(0x1664u)));
    // 02d2:2823  call 0x2877  [x1]
    c.push16(0x2826u); code_0(c, 0x5597u); if (c.ip != 0x2826u) c.badReturn(0x5543);
L05546:
    if (c.tracing) c.traceAt(0x5546);
    // 02d2:2826  mov word ptr cs:[0xf46], 0  [x1]
    c.w16(c.csb + (uint16_t)(0xf46u), 0x0u);
    // 02d2:282d  clc   [x1]
    c.cf = false;
    // 02d2:282e  mov cx, word ptr cs:[0xf32]  [x1]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf32u)));
    // 02d2:2833  mov bx, cx  [x1]
    c.b.x = (uint16_t)(c.c.x);
    // 02d2:2835  shr bx, 1  [x1]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x1u) & 31), false));
    // 02d2:2837  sub bx, 2  [x1]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0x2u, false));
    // 02d2:283a  shl bx, 4  [x1]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x4u) & 31), true));
L0555d:
    if (c.tracing) c.traceAt(0x555d);
    // 02d2:283d  mov dx, word ptr cs:[0xf2e]  [x4]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:2842  add dx, 0x102  [x4]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x102u, false));
    // 02d2:2846  mov al, byte ptr cs:[0xf32]  [x4]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0xf32u)));
    // 02d2:284a  sub al, cl  [x4]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.c.l, false));
    // 02d2:284c  out dx, al  [x4]
    c.ip = 0x284du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:284d  mov dx, word ptr cs:[0xf2e]  [x4]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:2852  add dx, 0x103  [x4]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x103u, false));
    // 02d2:2856  mov al, 0xc  [x4]
    c.a.l = (uint8_t)(0xcu);
    // 02d2:2858  out dx, al  [x4]
    c.ip = 0x2859u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2859  mov dx, word ptr cs:[0xf2e]  [x4]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf2eu)));
    // 02d2:285e  add dx, 0x105  [x4]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x105u, true));
    // 02d2:2862  mov al, byte ptr cs:[bx + 0x84c]  [x4]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.b.x + 0x84cu)));
    // 02d2:2867  out dx, al  [x4]
    c.ip = 0x2868u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 02d2:2868  inc bx  [x4]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 02d2:2869  loop 0x283d  [x4]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L0555d;
L0558b:
    if (c.tracing) c.traceAt(0x558b);
    // 02d2:286b  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 02d2:286c  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 02d2:286d  popaw   [x1]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 02d2:286e  ret   [x1]
    c.ip = c.pop16(); return;
L0558f:
    if (c.tracing) c.traceAt(0x558f);
    // 02d2:286f  push bx  [x2]
    c.push16(c.b.x);
    // 02d2:2870  mov ax, 0x4800  [x2]
    c.a.x = (uint16_t)(0x4800u);
    // 02d2:2873  int 0x21  [x2]
    c.ip = 0x2875u; c.d32 = false; c.intr(0x21, 0x2875u);
L05595:
    if (c.tracing) c.traceAt(0x5595);
    // 02d2:2875  pop bx  [x2]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 02d2:2876  ret   [x2]
    c.ip = c.pop16(); return;
L05597:
    if (c.tracing) c.traceAt(0x5597);
    // 02d2:2877  push ax  [x2]
    c.push16(c.a.x);
    // 02d2:2878  push es  [x2]
    c.push16(c.es);
    // 02d2:2879  mov ax, 0x4900  [x2]
    c.a.x = (uint16_t)(0x4900u);
    // 02d2:287c  int 0x21  [x2]
    c.ip = 0x287eu; c.d32 = false; c.intr(0x21, 0x287eu);
L0559e:
    if (c.tracing) c.traceAt(0x559e);
    // 02d2:287e  pop es  [x2]
    c.loadEs((uint16_t)c.pop16());
    // 02d2:287f  pop ax  [x2]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 02d2:2880  ret   [x2]
    c.ip = c.pop16(); return;
L055a1:
    if (c.tracing) c.traceAt(0x55a1);
    // 02d2:2881  push ax  [x25]
    c.push16(c.a.x);
    // 02d2:2882  push bx  [x25]
    c.push16(c.b.x);
    // 02d2:2883  push cx  [x25]
    c.push16(c.c.x);
    // 02d2:2884  push dx  [x25]
    c.push16(c.dx_.x);
    // 02d2:2885  push ds  [x25]
    c.push16(c.ds);
    // 02d2:2886  mov ax, 0x3f00  [x25]
    c.a.x = (uint16_t)(0x3f00u);
    // 02d2:2889  mov bx, word ptr cs:[0xf30]  [x25]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf30u)));
    // 02d2:288e  int 0x21  [x25]
    c.ip = 0x2890u; c.d32 = false; c.intr(0x21, 0x2890u);
L055b0:
    if (c.tracing) c.traceAt(0x55b0);
    // 02d2:2890  pop ds  [x25]
    c.loadDs((uint16_t)c.pop16());
    // 02d2:2891  pop dx  [x25]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 02d2:2892  pop cx  [x25]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 02d2:2893  pop bx  [x25]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 02d2:2894  pop ax  [x25]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 02d2:2895  ret   [x25]
    c.ip = c.pop16(); return;
L055b6:
    if (c.tracing) c.traceAt(0x55b6);
    // 02d2:2896  push ax  [x1]
    c.push16(c.a.x);
    // 02d2:2897  push bx  [x1]
    c.push16(c.b.x);
    // 02d2:2898  push cx  [x1]
    c.push16(c.c.x);
    // 02d2:2899  push dx  [x1]
    c.push16(c.dx_.x);
    // 02d2:289a  push ds  [x1]
    c.push16(c.ds);
    // 02d2:289b  mov ax, 0x3d00  [x1]
    c.a.x = (uint16_t)(0x3d00u);
    // 02d2:289e  int 0x21  [x1]
    c.ip = 0x28a0u; c.d32 = false; c.intr(0x21, 0x28a0u);
L055c0:
    if (c.tracing) c.traceAt(0x55c0);
    // 02d2:28a0  mov word ptr cs:[0xf30], ax  [x1]
    c.w16(c.csb + (uint16_t)(0xf30u), c.a.x);
    // 02d2:28a4  mov bx, ax  [x1]
    c.b.x = (uint16_t)(c.a.x);
    // 02d2:28a6  mov ah, 0x42  [x1]
    c.a.h = (uint8_t)(0x42u);
    // 02d2:28a8  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 02d2:28aa  mov cx, 0  [x1]
    c.c.x = (uint16_t)(0x0u);
    // 02d2:28ad  mov dx, 0  [x1]
    c.dx_.x = (uint16_t)(0x0u);
    // 02d2:28b0  int 0x21  [x1]
    c.ip = 0x28b2u; c.d32 = false; c.intr(0x21, 0x28b2u);
L055d2:
    if (c.tracing) c.traceAt(0x55d2);
    // 02d2:28b2  sub ax, 0x2418  [x1]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x2418u, true));
    // 02d2:28b5  sbb dx, 3  [x1]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x3u, true, c.cf));
    // 02d2:28b8  mov cx, dx  [x1]
    c.c.x = (uint16_t)(c.dx_.x);
    // 02d2:28ba  mov dx, ax  [x1]
    c.dx_.x = (uint16_t)(c.a.x);
    // 02d2:28bc  mov ah, 0x42  [x1]
    c.a.h = (uint8_t)(0x42u);
    // 02d2:28be  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 02d2:28c0  int 0x21  [x1]
    c.ip = 0x28c2u; c.d32 = false; c.intr(0x21, 0x28c2u);
L055e2:
    if (c.tracing) c.traceAt(0x55e2);
    // 02d2:28c2  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 02d2:28c3  pop dx  [x1]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 02d2:28c4  pop cx  [x1]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 02d2:28c5  pop bx  [x1]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 02d2:28c6  pop ax  [x1]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 02d2:28c7  ret   [x1]
    c.ip = c.pop16(); return;
L055e8:
    if (c.tracing) c.traceAt(0x55e8);
    // 02d2:28c8  push ax  [x1]
    c.push16(c.a.x);
    // 02d2:28c9  push bx  [x1]
    c.push16(c.b.x);
    // 02d2:28ca  mov ax, 0x3e00  [x1]
    c.a.x = (uint16_t)(0x3e00u);
    // 02d2:28cd  mov bx, word ptr cs:[0xf30]  [x1]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf30u)));
    // 02d2:28d2  int 0x21  [x1]
    c.ip = 0x28d4u; c.d32 = false; c.intr(0x21, 0x28d4u);
L055f4:
    if (c.tracing) c.traceAt(0x55f4);
    // 02d2:28d4  pop bx  [x1]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 02d2:28d5  pop ax  [x1]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 02d2:28d6  ret   [x1]
    c.ip = c.pop16(); return;
}

static Register reg_code_0(0, {0x2816, 0x2821, 0x2827, 0x282a, 0x2832, 0x2839, 0x2842, 0x286b, 0x286e, 0x2890, 0x2898, 0x289d, 0x28a9, 0x28b1, 0x28c2, 0x28d2, 0x28e7, 0x28ea, 0x28ed, 0x28ef, 0x28f2, 0x28f8, 0x2908, 0x290c, 0x293f, 0x2946, 0x294d, 0x2954, 0x295e, 0x2961, 0x2973, 0x2984, 0x2988, 0x299a, 0x29a6, 0x29b6, 0x29de, 0x29e2, 0x29fc, 0x2a12, 0x2a13, 0x2a3a, 0x2a3b, 0x2a41, 0x2a44, 0x2a46, 0x2a54, 0x2a55, 0x2a69, 0x2a6c, 0x2a84, 0x2a8d, 0x2a93, 0x2a9a, 0x2aab, 0x2aad, 0x2aaf, 0x2acf, 0x2af1, 0x2ba0, 0x2ba8, 0x2bba, 0x2bca, 0x2bde, 0x2be8, 0x2c04, 0x2c0c, 0x2c0d, 0x2c13, 0x2c19, 0x2c21, 0x2c26, 0x2c2c, 0x2c36, 0x2c3a, 0x2c3e, 0x2c40, 0x2c42, 0x2c4b, 0x2c51, 0x2c57, 0x2c5f, 0x2c64, 0x2c6a, 0x2c74, 0x2c78, 0x2c7c, 0x2c7e, 0x2c80, 0x2c88, 0x2c8c, 0x2c98, 0x2ca1, 0x2cb7, 0x2cbb, 0x2cbe, 0x2cc6, 0x2ce0, 0x2ceb, 0x2cf0, 0x2cf5, 0x2cf8, 0x2d01, 0x2d06, 0x2d0d, 0x4558, 0x4565, 0x456a, 0x4587, 0x458a, 0x4591, 0x4598, 0x459b, 0x459e, 0x45ad, 0x45bb, 0x45c1, 0x45c7, 0x45c9, 0x45d1, 0x45d3, 0x460d, 0x4611, 0x462c, 0x4632, 0x4635, 0x4638, 0x464d, 0x465b, 0x4661, 0x4664, 0x466a, 0x46a5, 0x46f8, 0x46fb, 0x4758, 0x4760, 0x4763, 0x4793, 0x4799, 0x479c, 0x4836, 0x483e, 0x4841, 0x4858, 0x488f, 0x48ad, 0x48c7, 0x48cb, 0x48ee, 0x4901, 0x4904, 0x490b, 0x4919, 0x4931, 0x4941, 0x4944, 0x4950, 0x4953, 0x495a, 0x496d, 0x4972, 0x497a, 0x497d, 0x4986, 0x498c, 0x49ac, 0x49c1, 0x49c7, 0x49d6, 0x49ed, 0x49fc, 0x4a0a, 0x4a10, 0x4a13, 0x4a17, 0x4a1b, 0x4a1d, 0x4a21, 0x4a23, 0x4a32, 0x4a6b, 0x4a6d, 0x4a76, 0x4a7c, 0x4a8a, 0x4a9d, 0x4aa3, 0x4ab3, 0x4ab9, 0x4abc, 0x4ac0, 0x4ac7, 0x4acb, 0x4acd, 0x4b55, 0x4b61, 0x4b65, 0x4b6c, 0x4b6e, 0x4b72, 0x4b74, 0x4b79, 0x4b7e, 0x4b88, 0x4b9b, 0x4bb9, 0x4bbb, 0x4bc1, 0x4bc4, 0x4bc7, 0x4bd4, 0x4bed, 0x4c2d, 0x4c3e, 0x4c5a, 0x4c79, 0x4c7c, 0x4cc4, 0x4cd4, 0x4cd7, 0x4ce2, 0x4cff, 0x4d03, 0x4d05, 0x4d17, 0x4d1d, 0x4d20, 0x4d25, 0x4d2d, 0x4d34, 0x4d4a, 0x4d5c, 0x4d67, 0x4d6d, 0x4d79, 0x4d82, 0x4d88, 0x4d96, 0x4dc7, 0x4ddd, 0x4dea, 0x4def, 0x4df2, 0x4dfb, 0x4e06, 0x4e09, 0x4e0e, 0x4e11, 0x4e1f, 0x4e2a, 0x4e30, 0x4e3d, 0x4e44, 0x4e4a, 0x4e57, 0x4e71, 0x4e79, 0x4ea3, 0x4ef7, 0x4f04, 0x4f0f, 0x4f12, 0x4f23, 0x4f28, 0x4f2e, 0x4f34, 0x4f3a, 0x4f50, 0x4f56, 0x4f64, 0x4fe8, 0x4ffb, 0x500c, 0x5082, 0x5083, 0x5086, 0x50b8, 0x50bd, 0x50c4, 0x50e4, 0x50e8, 0x510d, 0x511d, 0x5138, 0x5139, 0x5144, 0x51ce, 0x51f4, 0x521a, 0x525c, 0x5260, 0x526a, 0x526d, 0x5270, 0x5278, 0x527b, 0x5283, 0x5286, 0x5287, 0x529c, 0x52ac, 0x52b7, 0x52bb, 0x5394, 0x53a2, 0x53ac, 0x53b5, 0x53bc, 0x53be, 0x53c1, 0x53da, 0x53e7, 0x540c, 0x5414, 0x541f, 0x5422, 0x5428, 0x5440, 0x5455, 0x5458, 0x546a, 0x5494, 0x54b7, 0x54e3, 0x5514, 0x5518, 0x552c, 0x553b, 0x553e, 0x5546, 0x555d, 0x558b, 0x558f, 0x5595, 0x5597, 0x559e, 0x55a1, 0x55b0, 0x55b6, 0x55c0, 0x55d2, 0x55e2, 0x55e8, 0x55f4}, code_0);

}  // namespace show
