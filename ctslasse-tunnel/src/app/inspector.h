// The inspector (G): what the frame is made of, in the corners of the window.
#pragma once

#include <SDL3/SDL.h>

#include <cstdint>
#include <vector>

#include "tunnel.h"

// Top left, the grid on the texture: the 256x256 tile (each texel through
// the DAC, dimmed) and the 41x26 points where they read it, at their u, v,
// joined to their neighbours (the mesh the mapper interpolates in each 8x8
// block). u and v wrap at 256 texels: each segment is drawn from both its
// ends by their difference, so one that crosses the tile's edge shows on
// both sides. The plane is a mesh 8 texels apart, waving and turning; the
// tunnel's u is its angle (once round the tile across the screen) and its
// v its depth, so its rings of points run down the tile as it moves. Near
// the far end the points are further apart than the tile: those segments
// are left out. The points are coloured by their light level: dark (fog)
// to grey (63, the texel as it is), blue-white above 65 (lit).
//
// Top right, the light table: its 130 rows (level, down) by 256 texels
// (across), each entry through the DAC: the colour a texel J takes at a
// level. Rows 0-64 are the fog, J f + 128 (1 - f), towards index 128 (the
// far end's colour); 65-129 go towards white. The bars at the right count
// the grid's points at each level (what the frame uses).
//
// Bottom left, the palette: the DAC's 256 entries, and their red, green and
// blue as curves. Bottom right, the frame's parameters.
class Inspector {
public:
    bool on = false;
    void draw(SDL_Renderer* ren, const tunnel::Tunnel& k);
    // before the renderer goes
    void release();

private:
    // G: the grid's 3198 dwords (u, v, light a point); LEVEL: each point's light level
    void gridPanel(SDL_Renderer* ren, const tunnel::Tunnel& k, const uint32_t* g, const int* level, int ww, int wh);
    void lightTable(SDL_Renderer* ren, const tunnel::Tunnel& k, const int* level, int ww, int wh);
    void palette(SDL_Renderer* ren, const tunnel::Tunnel& k, int ww, int wh);
    void parameters(SDL_Renderer* ren, const tunnel::Tunnel& k, const int* level, int ww, int wh);

    SDL_Texture* tex_ = nullptr;
    SDL_Texture* light_ = nullptr;
    std::vector<uint32_t> pixels_;
};
