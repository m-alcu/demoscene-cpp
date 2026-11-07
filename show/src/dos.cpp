#include "dos.h"

#include <algorithm>
#include <cstring>
#include <stdexcept>

namespace show {

namespace {
const char kEnv[] = "COMSPEC=C:\\COMMAND.COM\0PATH=C:\\\0ULTRASND=220,1,1,7,7\0\0\x01\0C:\\SHOW.EXE";
uint16_t word(const std::vector<uint8_t>& d, size_t o) { return (uint16_t)(d.at(o) | d.at(o + 1) << 8); }
}  // namespace

Dos::Dos(Machine& m, std::vector<uint8_t> showExe) : m_(m), exe_(std::move(showExe)) {
    // the IVT: every vector at the BIOS (F000:0100+n), the BIOS data area
    for (int v = 0; v < 256; v++) m_.w16(v * 4, 0x100 + v), m_.w16(v * 4 + 2, 0xF000);
    for (int i = 0; i < 256; i++) m_.w8(0xF0100 + i, 0xCF);
    m_.w8(0xF2000, 0xCB);                      // (the harness's traps)
    m_.w8(0xF3000, 0xF4);
    // (the harness's video BIOS: zeros, the signature, four bytes for a CRC)
    m_.w8(0xC0000, 0x55), m_.w8(0xC0001, 0xAA), m_.w8(0xC0002, 0x40);
    m_.w32(0xC7FF0, 0xEB745F92);
    m_.w8(0x449, 3);
    m_.w16(0x463, 0x3D4);
    m_.w16(0x413, 640);
    std::memcpy(&m_.mem[kEnvSeg * 16], kEnv, sizeof kEnv);
    // SHOW.EXE as DOS loads it: maxalloc FFFFh, so its block is all of memory
    const uint16_t cblp = word(exe_, 2), cp = word(exe_, 4), nrel = word(exe_, 6), hdr = word(exe_, 8);
    const uint16_t maxAlloc = word(exe_, 12), minAlloc = word(exe_, 10);
    const uint32_t size = (uint32_t)cp * 512 - (cblp ? 512u - cblp : 0u) - hdr * 16u;
    uint16_t paras = (uint16_t)(0x10 + ((size + 15) >> 4) + minAlloc);
    if (maxAlloc == 0xFFFF) paras = (uint16_t)(kDosTop - kFirstMcb);
    mcbs_[kFirstMcb] = {paras, kPsp0};
    if (kFirstMcb + 1 + paras < kDosTop)
        mcbs_[(uint16_t)(kFirstMcb + 1 + paras)] = {(uint16_t)(kDosTop - (kFirstMcb + 1 + paras)), 0};
    writeMcbs();
    std::memcpy(&m_.mem[kLoad * 16], &exe_[hdr * 16u], size);
    const uint16_t relocs = word(exe_, 0x18);
    for (int k = 0; k < nrel; k++) {
        const uint32_t a = (uint32_t)kLoad * 16 + word(exe_, relocs + 4 * k + 2) * 16u + word(exe_, relocs + 4 * k);
        m_.w16(a, (uint16_t)(m_.r16(a) + kLoad));
    }
    ss = (uint16_t)(kLoad + word(exe_, 14)), sp = word(exe_, 16);
    ip = word(exe_, 20), cs = (uint16_t)(kLoad + word(exe_, 22));
    // its PSP
    uint8_t* p = &m_.mem[kPsp0 * 16];
    std::memset(p, 0, 256);
    p[0] = 0xCD, p[1] = 0x20;
    p[2] = (uint8_t)(kPsp0 + paras), p[3] = (uint8_t)((kPsp0 + paras) >> 8);
    p[5] = 0x9A;
    for (int k = 0; k < 3; k++) std::memcpy(p + 0x0A + 4 * k, &m_.mem[(0x22 + k) * 4], 4);
    p[0x16] = (uint8_t)kPsp0, p[0x17] = (uint8_t)(kPsp0 >> 8);
    const uint8_t jft[20] = {1, 1, 1, 0, 2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
    std::memcpy(p + 0x18, jft, 20);
    p[0x2C] = (uint8_t)kEnvSeg, p[0x2D] = (uint8_t)(kEnvSeg >> 8);
    p[0x32] = 20;
    const uint32_t jftPtr = (uint32_t)kPsp0 << 16 | 0x18;
    std::memcpy(p + 0x34, &jftPtr, 4);
    p[0x50] = 0xCD, p[0x51] = 0x21, p[0x52] = 0xCB;
    p[0x80] = 0, p[0x81] = 0x0D;
}

void Dos::writeMcbs() {
    auto last = mcbs_.end();
    --last;
    for (auto it = mcbs_.begin(); it != mcbs_.end(); ++it) {
        uint8_t* p = &m_.mem[it->first * 16];
        p[0] = it == last ? 'Z' : 'M';
        p[1] = (uint8_t)it->second.second, p[2] = (uint8_t)(it->second.second >> 8);
        p[3] = (uint8_t)it->second.first, p[4] = (uint8_t)(it->second.first >> 8);
        std::memset(p + 5, 0, 11);
    }
}

void Dos::mergeFree() {
    for (auto it = mcbs_.begin(); it != mcbs_.end();) {
        auto nx = std::next(it);
        if (nx == mcbs_.end()) break;
        if (it->second.second == 0 && nx->second.second == 0) {
            it->second.first = (uint16_t)(it->second.first + 1 + nx->second.first);
            mcbs_.erase(nx);
        } else {
            it = nx;
        }
    }
}

uint16_t Dos::alloc(uint16_t paras, uint16_t& largest) {
    largest = 0;
    for (auto& [s, b] : mcbs_) {
        if (b.second) continue;
        if (b.first >= paras) {
            if (b.first > paras) mcbs_[(uint16_t)(s + 1 + paras)] = {(uint16_t)(b.first - paras - 1), 0};
            mcbs_[s] = {paras, psp};
            writeMcbs();
            return (uint16_t)(s + 1);
        }
        largest = std::max(largest, b.first);
    }
    return 0;
}

bool Dos::free(uint16_t seg) {
    auto it = mcbs_.find((uint16_t)(seg - 1));
    if (it == mcbs_.end()) return false;
    it->second.second = 0;
    mergeFree();
    writeMcbs();
    return true;
}

int Dos::resize(uint16_t seg, uint16_t paras, uint16_t& got) {
    const uint16_t mcb = (uint16_t)(seg - 1);
    auto it = mcbs_.find(mcb);
    if (it == mcbs_.end()) return 9;
    auto nx = std::next(it);
    const bool nextFree = nx != mcbs_.end() && nx->second.second == 0;
    const uint32_t avail = it->second.first + (nextFree ? 1u + nx->second.first : 0u);
    if (paras > avail) {
        got = (uint16_t)avail;
        return 8;
    }
    if (nextFree) mcbs_.erase(nx);
    mcbs_[mcb].first = paras;
    if (avail > paras) mcbs_[(uint16_t)(mcb + 1 + paras)] = {(uint16_t)(avail - paras - 1), 0};
    mergeFree();
    writeMcbs();
    got = paras;
    return 0;
}

int Dos::open(const std::string& name) {
    if (name != "SHOW.EXE") return -1;
    int h = 5;
    while (files_.count(h)) h++;
    files_[h] = {&exe_, 0};
    return h;
}

bool Dos::close(int handle) { return files_.erase(handle) != 0; }

uint16_t Dos::read(int handle, uint32_t lin, uint16_t count) {
    File& f = files_.at(handle);
    const uint32_t n = (uint32_t)std::min<size_t>(count, f.data->size() - std::min<size_t>(f.pos, f.data->size()));
    for (uint32_t i = 0; i < n; i++) m_.w8(lin + i, (*f.data)[f.pos + i]);
    f.pos += n;
    return (uint16_t)n;
}

uint32_t Dos::seek(int handle, int whence, int32_t off) {
    File& f = files_.at(handle);
    const int64_t base = whence == 0 ? 0 : whence == 1 ? (int64_t)f.pos : (int64_t)f.data->size();
    f.pos = (uint32_t)(base + off);
    return f.pos;
}

}  // namespace show
