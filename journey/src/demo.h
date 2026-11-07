// MDP.EXE as DOS starts it: Future Crew's MusicDiscPlayer V1.0 (1993), the
// program of both Journey music disks. A Turbo Pascal program with Sami
// Tammilehto's Scream Tracker Music Interface Kit (STMIK) and its Gravis
// UltraSound driver linked in. All of its code is translated to C++
// (code00.cpp, from the analysis's translate.py) and runs on the machine's
// memory where the harness has it.
#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "dos.h"
#include "machine.h"

namespace journey {

class Cpu;

class Demo {
public:
    // EXE: MDP.EXE as unpacked; DIR: the music disk (MDP.MDI and the modules)
    Demo(Machine& m, std::vector<uint8_t> exe, std::string dir);
    ~Demo();
    // MDP.EXE's entry: to its end (int 21h/4Ch, exitCode)
    void main();

    Machine& m;
    Dos dos;
    std::unique_ptr<Cpu> cpu;
    int exitCode = -1;

    // int 10h AH=0
    void setMode(uint8_t mode);
    // what the program writes through DOS (int 21h/02h, 09h, 40h)
    std::string text;
    // the text page (B800:0000) as lines, trailing blanks dropped: what MDP
    // leaves on the screen when it ends in text mode
    std::string textPage() const;
};

}  // namespace journey
