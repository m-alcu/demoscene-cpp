#include "dos.h"

#include <stdexcept>

namespace angel {

namespace {
const char kEnv[] = "COMSPEC=C:\\COMMAND.COM\0PATH=C:\\\0ULTRASND=220,1,1,11,11\0\0\x01\0C:\\ANGEL.EXE";
}

Dos::Dos(Machine& m, std::vector<uint8_t> angelExe, std::vector<uint8_t> driversVga)
    : m_(m), exe_(std::move(angelExe)), drv_(std::move(driversVga)) {
    // the IVT: every vector at the BIOS (F000:0100+n), the BIOS data area
    for (int v = 0; v < 256; v++) m_.w16(v * 4, 0x100 + v), m_.w16(v * 4 + 2, 0xF000);
    for (int i = 0; i < 256; i++) m_.w8(0xF0100 + i, 0xCF);
    m_.w8(0xF2000, 0xCB);                      // (the harness's traps: XMS entry, 32-bit return)
    m_.w8(0xF3000, 0xF4);
    // the video BIOS: what the harness has at C000:0000-7FFFh, zeros with the
    // signature and four bytes that give the CRC-32 SETUP saved (85128997h)
    m_.w8(0xC0000, 0x55), m_.w8(0xC0001, 0xAA), m_.w8(0xC0002, 0x40);
    m_.w32(0xC7FF0, 0xEB745F92);
    m_.w8(0x449, 3);
    m_.w16(0x463, 0x3D4);
    m_.w16(0x413, 640);
    std::memcpy(&m_.mem[kEnvSeg * 16], kEnv, sizeof kEnv);
    // ANGEL.EXE as DOS loads it: its block (PSP, image, minimum allocation)
    const uint16_t cblp = (uint16_t)(exe_[2] | exe_[3] << 8), cp = (uint16_t)(exe_[4] | exe_[5] << 8);
    const uint16_t hdr = (uint16_t)(exe_[8] | exe_[9] << 8), minAlloc = (uint16_t)(exe_[10] | exe_[11] << 8);
    const uint32_t size = (uint32_t)(cp - 1) * 512 + (cblp ? cblp : 512) - hdr * 16u;
    const uint16_t paras = (uint16_t)(0x10 + ((size + 15) >> 4) + minAlloc);
    mcbs_[kFirstMcb] = {paras, kPsp0};
    mcbs_[(uint16_t)(kFirstMcb + 1 + paras)] = {(uint16_t)(kDosTop - (kFirstMcb + 1 + paras)), 0};
    writeMcbs();
    std::memcpy(&m_.mem[(kPsp0 + 0x10) * 16], &exe_[hdr * 16u], size);
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
    const std::vector<uint8_t>* d = name == "ANGEL.EXE" ? &exe_ : name == "DRIVERS.VGA" ? &drv_ : nullptr;
    if (!d) throw std::runtime_error("open " + name);
    int h = 5;
    while (files_.count(h)) h++;
    files_[h] = {d, 0};
    return h;
}

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

void Dos::makeChildPsp(uint16_t seg, uint16_t top) {
    std::memmove(&m_.mem[seg * 16], &m_.mem[psp * 16], 256);
    m_.w16(seg * 16 + 0x16, psp);
    m_.w16(seg * 16 + 2, top);
    for (int k = 0; k < 3; k++) m_.w32(seg * 16 + 0x0A + 4 * k, m_.r32((0x22 + k) * 4));
    psp = seg;
}

void Dos::terminate(uint8_t code, int resident) {
    if (resident < 0) {
        for (auto& [s, b] : mcbs_)
            if (b.second == psp) b.second = 0;
        mergeFree();
        retcode = code;
    } else {
        uint16_t got;
        resize(psp, (uint16_t)std::max(resident, 6), got);
        retcode = (uint16_t)(0x300 | code);
    }
    writeMcbs();
    for (int k = 0; k < 3; k++) m_.w32((0x22 + k) * 4, m_.r32(psp * 16 + 0x0A + 4 * k));
    psp = m_.r16(psp * 16 + 0x16);
}

uint32_t Dos::xmsAlloc(uint16_t kb, uint16_t& handle) {
    handle = 1;
    while (xms_.count(handle)) handle++;
    xms_[handle] = {xmsNext_, kb};
    const uint32_t b = xmsNext_;
    xmsNext_ += (uint32_t)kb << 10;
    return b;
}

}  // namespace angel
