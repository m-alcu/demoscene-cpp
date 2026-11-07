// The 520 KB SRAM of the RP2350. Routines keep their original addresses, so copper lists,
// DMA read addresses and tables work unchanged.
#pragma once
#include <cstdint>
#include <vector>

namespace kb {

constexpr uint32_t GP = 0x20081000;        // global pointer of both cores
constexpr uint32_t SRAM_SIZE = 0x82000;

struct Mem {
    std::vector<uint8_t> sram = std::vector<uint8_t>(SRAM_SIZE, 0);

    uint8_t* ptr(uint32_t a);
    uint32_t r8(uint32_t a) { return *ptr(a); }
    uint32_t r16(uint32_t a) { const uint8_t* p = ptr(a); return p[0] | p[1] << 8; }
    int32_t r16s(uint32_t a) { return (int16_t)r16(a); }
    uint32_t r32(uint32_t a) { const uint8_t* p = ptr(a); return p[0] | p[1] << 8 | p[2] << 16 | (uint32_t)p[3] << 24; }
    void w8(uint32_t a, uint32_t v) { *ptr(a) = (uint8_t)v; }
    void w16(uint32_t a, uint32_t v) { uint8_t* p = ptr(a); p[0] = v; p[1] = v >> 8; }
    void w32(uint32_t a, uint32_t v) { uint8_t* p = ptr(a); p[0] = v; p[1] = v >> 8; p[2] = v >> 16; p[3] = v >> 24; }
    int32_t sine(uint32_t idx) { return r16s(0x20060000 + 2 * (idx & 0xfff)); }  // 4096-entry table
};

}  // namespace kb
