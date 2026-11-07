#include "demo.h"

#include "cpu.h"

namespace show {

const char* const kParts[32] = {"SKULL", "START", "QQ",    "ROT",  "CH",   "COPPER", "16C",  "1LAP",
                                "PIXEL", "TMAP",  "DO",    "TRON", "C",    "DOOM",   "NEWG", "STOP",
                                "ART",   "ZZZ",   "INTER", "CIR",  "FAST", "RULES",  "CRED", "NOTJUST",
                                "RAS",   "BIGS",  "CYC",   "BOB",  "KOM",  "HAM",    "END",  "THE"};

Demo::Demo(Machine& m, std::vector<uint8_t> showExe) : m(m), dos(m, std::move(showExe)), cpu(new Cpu(m, *this)) {
    m.dispatch = [this](int n) { cpu->intr(n, cpu->ip); };
    cpu->traceSetup();
}

Demo::~Demo() = default;

void Demo::setMode(uint8_t mode) {
    m.vga.setMode(mode);
    m.w8(0x449, mode & 0x7F);
}

void Demo::partStarted(int n) {
    // the name the loader has put together (CS:05FDh, the .COD file)
    std::string name;
    for (uint32_t p = (uint32_t)(kLoad + 0x1C) * 16 + 0x5FD; m.r8(p) && name.size() < 12; p++) name += (char)m.r8(p);
    if (onPart) onPart(n, name);
}

void Demo::main() {
    Cpu& c = *cpu;
    c.loadCs(dos.cs), c.loadSs(dos.ss), c.sp.e = dos.sp;
    c.loadDs(kPsp0), c.loadEs(kPsp0);
    c.setFlags(0x0202);
    c.ip = dos.ip;
    const uint32_t lin = c.csb + dos.ip;
    Code f = c.find(lin);
    if (!f) c.notTranslated(lin, "SHOW.EXE's entry");
    f(c, lin);
    throw std::runtime_error("SHOW.EXE's entry returned");
}

}  // namespace show
