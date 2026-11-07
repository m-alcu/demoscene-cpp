// The demo: SHOW.EXE as DOS starts it. Its own code (a small loader with
// Cascada's GUS module player linked in) and the parts the loader reads
// from the file and far-calls one after the other are all translated to
// C++ (code*.cpp, from the analysis's translate.py) and run on the
// machine's memory where the harness has them.
#pragma once

#include <cstdint>
#include <functional>
#include <memory>
#include <string>
#include <vector>

#include "dos.h"
#include "machine.h"

namespace show {

class Cpu;

class Demo {
public:
    Demo(Machine& m, std::vector<uint8_t> showExe);
    ~Demo();
    // SHOW.EXE's entry: to its end (int 21h/4Ch)
    void main();

    Machine& m;
    Dos dos;
    std::unique_ptr<Cpu> cpu;

    // int 10h AH=0
    void setMode(uint8_t mode);
    // what the demo writes to DOS's screen (int 21h/09h): the end's text
    std::string text;
    // the loader starting part n (its name: the .COD file)
    std::function<void(int, const std::string&)> onPart;
    void partStarted(int n);
};

// The parts, in the loader's order (COM.COD is KOM.COD on a fast machine,
// as here)
extern const char* const kParts[32];

}  // namespace show
