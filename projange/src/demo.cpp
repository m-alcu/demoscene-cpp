#include "demo.h"

#include "cpu.h"

#include <cstdio>
#include <cstdlib>

namespace angel {

namespace {
// the loader's data (CS = its PSP, 0111h; offsets as in its code, org 100h)
constexpr uint32_t kLoader = (uint32_t)kPsp0 << 4;
constexpr uint32_t kRet = kLoader + 0x6B0;      // AL of int 21h/4Dh
constexpr uint32_t kPos = kLoader + 0x6B1;      // the file position the parts start at (DX, AX)
constexpr uint32_t kHdr = kLoader + 0x6B6;      // a chunk's header
constexpr uint32_t kExeH = kLoader + 0x6BC, kDrvH = kLoader + 0x6BE, kCurH = kLoader + 0x6C0;
constexpr uint32_t kBlock = kLoader + 0x6C2, kPacked = kLoader + 0x6C4;
}  // namespace

Demo::Demo(Machine& m, std::vector<uint8_t> angelExe, std::vector<uint8_t> driversVga)
    : m(m), dos(m, std::move(angelExe), std::move(driversVga)), cpu(new Cpu(m, *this)) {
    m.dispatch = [this](int n) { cpu->intr(n, cpu->ip); };
    cpu->traceSetup();
}

Demo::~Demo() = default;

void Demo::setMode(uint8_t mode) {
    m.vga.setMode(mode & 0x7F);
    m.w8(0x449, mode & 0x7F);
}

void Demo::exitProgram(uint8_t code, int residentParas) {
    dos.terminate(code, residentParas);
    throw ProgramEnd{};
}

// CS:016Eh: the next chunk of the current file as a program, run to its end.
uint16_t Demo::loaderRun() {
    uint16_t largest, unused;
    dos.alloc(0xFFFF, largest);
    const uint16_t seg = dos.alloc(largest, unused);
    m.w16(kBlock, seg);
    // its PSP, the terminate address the loader's (CS:04D6h)
    dos.makeChildPsp(seg, 0);
    m.w16(seg * 16 + 2, (uint16_t)(largest + seg));
    m.w16(seg * 16 + 0x0A, 0x04D6);
    m.w16(seg * 16 + 0x0C, kPsp0);
    m.w16(kLoader + 0x4DB, 0x0BFC);                 // (the SP its terminate code goes back to)
    dos.read(curHandle_, kHdr, 6);
    const uint16_t paras = m.r16(kHdr);
    uint32_t len = m.r32(kHdr + 2);
    const uint16_t packed = (uint16_t)(seg + paras);
    m.w16(kPacked, packed);
    for (uint16_t s = packed;; s = (uint16_t)(s + 0x800)) {
        uint16_t n = 0x8000;
        if (len < 0x8000) {
            if (!len) break;
            n = (uint16_t)len;
        }
        len -= n;
        m.w32(kHdr + 2, len);
        dos.read(curHandle_, (uint32_t)s << 4, n);
    }
    entry = unpack(m, packed, seg);
    dos.psp = seg;
    psp = seg;
    index++;
    // the registers as the loader leaves them
    Cpu& c = *cpu;
    c.loadSs(entry.ss);
    c.sp.e = entry.sp;
    c.loadDs(seg), c.loadEs(seg);
    c.a.e = c.b.e = c.c.e = c.dx_.e = c.si.e = c.di.e = c.bp.e = 0;
    // the flags: DOS's after a program's end (0202h), then the loader's last
    // XOR AX,AX (ZF, PF)
    c.setFlags(0x0246);
    c.loadCs(entry.cs);
    c.ip = entry.ip;
    // (the loader's PUSH CS, PUSH IP and RETF on the program's stack)
    m.w16(c.ssb + (uint16_t)(entry.sp - 4), entry.ip), m.w16(c.ssb + (uint16_t)(entry.sp - 2), entry.cs);
    c.program = index;
    // PROJANGE_MEMDUMP=DIR: the first megabyte at each program's start (DIR/mem_NN.bin)
    if (const char* dd = std::getenv("PROJANGE_MEMDUMP")) {
        char name[512];
        std::snprintf(name, sizeof name, "%s/mem_%02d.bin", dd, index);
        if (FILE* f = std::fopen(name, "wb")) {
            std::fwrite(m.mem.data(), 1, 0x110000, f);
            std::fclose(f);
        }
    }
    try {
        const uint32_t lin = c.csb + entry.ip;
        Code f = c.find(lin);
        if (!f) c.notTranslated(lin, "program entry");
        f(c, lin);
        throw std::runtime_error("a program returned to the loader without int 21h/4Ch");
    } catch (const ProgramEnd&) {
    }
    // CS:04D6h: back in the loader: its return code; the block freed unless
    // the program stayed resident
    c.loadSs(kPsp0), c.sp.e = 0x0BFC;
    c.loadDs(kPsp0), c.loadEs(kPsp0);
    m.w8(kRet, (uint8_t)dos.retcode);
    if ((dos.retcode >> 8) != 3) dos.free(seg);
    return dos.retcode;
}

// CS:0150h: the next chunk of the file as a module: int FCh with the
// module loader's descriptors, then int FAh with the file.
void Demo::loaderModule() {
    Cpu& c = *cpu;
    c.a.e = ((uint32_t)m.r16(0x3EA) << 4) + 8;
    c.loadDs(0);
    c.intr(0xFC, 0x165);
    c.loadDs(kPsp0);
    c.b.x = (uint16_t)curHandle_;
    c.intr(0xFA, 0x16D);
}

void Demo::main() {
    Cpu& c = *cpu;
    c.loadCs(kPsp0), c.loadSs(kPsp0), c.sp.e = 0x0BFE;
    c.loadDs(kPsp0), c.loadEs(kPsp0);
    // its Ctrl-C and critical error handlers
    m.w16(0x8C, 0x508), m.w16(0x8E, kPsp0);
    m.w16(0x90, 0x4F6), m.w16(0x92, kPsp0);
    uint16_t largest;
    const uint16_t s = dos.alloc(0x85C0, largest);   // 538K free?
    if (!s) m.exit();
    dos.free(s);
    drvHandle_ = dos.open("DRIVERS.VGA");
    m.w16(kDrvH, drvHandle_), m.w16(kCurH, drvHandle_);
    exeHandle_ = dos.open("ANGEL.EXE");
    m.w16(kExeH, exeHandle_);
    dos.seek(exeHandle_, 0, 0x5F5);
    curHandle_ = drvHandle_;
    if (loaderRun() & 0xFF) m.exit();                   // the video setup
    loaderRun();                                        // the player
    curHandle_ = exeHandle_;
    m.w16(kCurH, exeHandle_);
    if (loaderRun() & 0xFF) m.exit();                   // the XMS stub
    loaderRun();                                        // the module loader
    const uint32_t pos = dos.seek(exeHandle_, 1, 0);
    m.w16(kPos, (uint16_t)(pos >> 16)), m.w16(kPos + 2, (uint16_t)pos);
    // M P M P P P P M P M P P P P P P M P M P M P M P P P M P P P P (then -loop, or) M P P P
    const char* seq = "MPMPPPPMPMPPPPPPMPMPMPMPPPMPPPPMPPP";
    for (const char* k = seq; *k; k++) {
        if (*k == 'M') loaderModule();
        else loaderRun();
    }
    m.exit();
}

}  // namespace angel
