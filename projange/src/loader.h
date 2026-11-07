// ANGEL.EXE's own program, the loader (a 1.5 KB real-mode .EXE, org 100h,
// its PSP at 0111h). It runs the demo as a chain of programs, each packed
// in a chunk of DRIVERS.VGA or of ANGEL.EXE after the loader:
//
//   chunk: a word (where in the new block the packed bytes go, in
//          paragraphs), a dword (their length), the packed bytes;
//   packed: an LZ stream (literal bit, then lengths and offsets in Huffman-
//          like bit codes, with escape codes that renormalise the segments
//          and end the stream), then the relocations (count, segment,
//          offsets: a word to add the load segment to), then SS, SP, CS,
//          IP.
//
// For each program the loader takes the largest DOS block, makes a PSP in
// it (int 21h/55h), reads and unpacks the chunk to PSP:0100h and jumps to
// it. The program ends with int 21h/4Ch, or 31h to stay resident; DOS goes
// back to the loader's terminate address (PSP:0Ah), which frees the block
// unless the program stayed.
//
// Between programs the loader hands the resident module loader (int FAh)
// the next chunk of the file, after telling the XMS stub (int FCh) where
// that loader's descriptors are.
#pragma once

#include <cstdint>
#include <functional>
#include <vector>

#include "dos.h"
#include "machine.h"

namespace angel {

struct Entry {
    uint16_t ss, sp, cs, ip;
};

// The unpacker (loader 0300h-04D5h): from SRC:0 to DST:0100h, then the
// relocations (load segment DST+10h). Returns where the program starts.
Entry unpack(Machine& m, uint16_t src, uint16_t dst);

}  // namespace angel
