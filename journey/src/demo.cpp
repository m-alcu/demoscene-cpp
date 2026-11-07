#include "demo.h"

#include "cpu.h"

namespace journey {

Demo::Demo(Machine& m, std::vector<uint8_t> exe, std::string dir)
    : m(m), dos(m, std::move(exe), std::move(dir)), cpu(new Cpu(m, *this)) {
    m.dispatch = [this](int n) { cpu->intr(n, cpu->ip); };
    cpu->traceSetup();
}

Demo::~Demo() = default;

void Demo::setMode(uint8_t mode) {
    m.vga.setMode(mode);
    m.w8(0x449, mode & 0x7F);
    if (((mode & 0x7F) == 2 || (mode & 0x7F) == 3) && !(mode & 0x80))
        for (uint32_t a = 0xB8000; a < 0xC0000; a += 2) m.mem[a] = 0x20, m.mem[a + 1] = 0x07;   // the text page cleared
}

std::string Demo::textPage() const {
    std::string out;
    int blank = 0;
    for (int r = 0; r < 25; r++) {
        std::string line;
        for (int c = 0; c < 80; c++) {
            const uint8_t ch = m.mem[0xB8000 + (r * 80 + c) * 2];
            line += ch >= 32 && ch < 127 ? (char)ch : ' ';
        }
        line.erase(line.find_last_not_of(' ') + 1);
        if (line.empty()) {
            blank++;
            continue;
        }
        out.append((size_t)blank, '\n');
        blank = 0;
        out += line + "\n";
    }
    return out;
}

void Demo::main() {
    Cpu& c = *cpu;
    c.loadCs(dos.cs), c.loadSs(dos.ss), c.sp.e = dos.sp;
    c.loadDs(kPsp0), c.loadEs(kPsp0);
    c.setFlags(0x0202);
    c.ip = dos.ip;
    const uint32_t lin = c.csb + dos.ip;
    Code f = c.find(lin);
    if (!f) c.notTranslated(lin, "MDP.EXE's entry");
    f(c, lin);
    throw std::runtime_error("MDP.EXE's entry returned");
}

}  // namespace journey
