// The DOS MDP sees, as the analysis harness's: the memory arena with its
// MCBs (first fit, the same blocks at the same segments as there), the
// music disk's files (read-only, from its directory), and MDP.EXE loaded
// as EXEC loads it (PSP 0111h, the image at 0121h, relocated, all of memory
// its block: Turbo Pascal's startup shrinks it). MDP.EXE is packed with
// LZEXE 0.91; it is unpacked here (as the harness's unlzexe.py does) and
// the unpacked program is what runs.
#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include "machine.h"

namespace journey {

constexpr uint16_t kEnvSeg = 0x0100;
constexpr uint16_t kFirstMcb = 0x0110;
constexpr uint16_t kPsp0 = kFirstMcb + 1;       // MDP.EXE's PSP
constexpr uint16_t kLoad = kPsp0 + 0x10;        // its load image
constexpr uint16_t kDosTop = 0x9FFF;

// LZEXE 0.91: the packed EXE to the plain one (empty if it is not packed so)
std::vector<uint8_t> unlzexe(const std::vector<uint8_t>& packed);

class Dos {
public:
    // EXE: MDP.EXE as unpacked (unlzexe); DIR: the music disk's directory
    Dos(Machine& m, std::vector<uint8_t> exe, std::string dir);

    // MDP.EXE's entry: CS:IP, SS:SP (relocated)
    uint16_t cs = 0, ip = 0, ss = 0, sp = 0;

    // memory (paragraphs): alloc returns the segment, or 0 and the largest
    // block in `largest`
    uint16_t alloc(uint16_t paras, uint16_t& largest);
    bool free(uint16_t seg);
    // resize: 0, or the DOS error (8) with the largest possible in `got`
    int resize(uint16_t seg, uint16_t paras, uint16_t& got);

    // files: open by name (-1 if the disk has no such file), close, read, seek
    int open(const std::string& name);
    bool close(int handle);
    bool isOpen(int handle) const { return files_.count(handle) != 0; }
    uint16_t read(int handle, uint32_t lin, uint16_t count);
    uint32_t seek(int handle, int whence, int32_t off);

    uint16_t psp = kPsp0;

private:
    void writeMcbs();
    void mergeFree();

    Machine& m_;
    std::map<uint16_t, std::pair<uint16_t, uint16_t>> mcbs_;   // MCB seg -> (size, owner)
    struct File {
        std::vector<uint8_t> data;
        uint32_t pos;
    };
    std::map<int, File> files_;
    std::vector<uint8_t> exe_;
    std::string dir_;
};

}  // namespace journey
