// The DOS (and HIMEM) the programs see, as the analysis harness's: the
// memory arena with its MCBs (first fit, the same blocks at the same
// segments as there), the two files (ANGEL.EXE, DRIVERS.VGA), the PSPs the
// loader makes, the return code, and the XMS blocks (from 110000h up).
#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include "machine.h"

namespace angel {

constexpr uint16_t kEnvSeg = 0x0100;
constexpr uint16_t kFirstMcb = 0x0110;
constexpr uint16_t kPsp0 = kFirstMcb + 1;       // ANGEL.EXE's PSP (the loader)
constexpr uint16_t kDosTop = 0x9FFF;
constexpr uint32_t kXmsBase = 0x110000;

class Dos {
public:
    Dos(Machine& m, std::vector<uint8_t> angelExe, std::vector<uint8_t> driversVga);

    // memory (paragraphs): alloc returns the segment, or 0 and the largest
    // block in `largest`
    uint16_t alloc(uint16_t paras, uint16_t& largest);
    bool free(uint16_t seg);
    // resize: 0, or the DOS error (8) with the largest possible in `got`
    int resize(uint16_t seg, uint16_t paras, uint16_t& got);

    // files: open by name (DRIVERS.VGA, ANGEL.EXE), read, seek
    int open(const std::string& name);
    uint16_t read(int handle, uint32_t lin, uint16_t count);
    uint32_t seek(int handle, int whence, int32_t off);

    // processes
    uint16_t psp = kPsp0;            // current PSP
    uint16_t retcode = 0;            // int 21h/4Dh
    void makeChildPsp(uint16_t seg, uint16_t top);   // int 21h/55h
    // int 21h/4Ch (resident < 0) and /31h: frees or shrinks, back to the parent
    void terminate(uint8_t code, int resident);

    // XMS
    uint32_t xmsAlloc(uint16_t kb, uint16_t& handle);
    uint32_t xmsBase(uint16_t handle) const { return xms_.at(handle).first; }

private:
    void writeMcbs();
    void mergeFree();

    Machine& m_;
    std::map<uint16_t, std::pair<uint16_t, uint16_t>> mcbs_;   // MCB seg -> (size, owner)
    struct File {
        const std::vector<uint8_t>* data;
        uint32_t pos;
    };
    std::map<int, File> files_;
    std::vector<uint8_t> exe_, drv_;
    std::map<uint16_t, std::pair<uint32_t, uint16_t>> xms_;    // handle -> (base, KB)
    uint32_t xmsNext_ = kXmsBase;
};

}  // namespace angel
