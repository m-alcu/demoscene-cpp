// Playing the part: the loop, what is shown, and frames written to files.
// Not in the intro, which plays the part once.
#pragma once

#include <cstdint>
#include <string>
#include <vector>

#include "tunnel.h"

constexpr double kEndSeconds = tunnel::kEnd * tunnel::kUnit / tunnel::kPit;   // about 49.1 s
// the loop's morph into its start: 5 T (3.4 s), as long as the tunnel's own blend in (T 33-38)
constexpr double kMorph = 5 * tunnel::kUnit / tunnel::kPit;
constexpr double kLatestStart = kEndSeconds - 2 * kMorph;   // a loop at least as long as its morph

// The time, kept in the loop. Looped: from START to the part's end; over
// its last kMorph the frame turns into the one kMorph after START, so at
// the end it goes on from there, START + kMorph. Endless: back to START
// when the intro's 32-bit clock would overflow, after 30 minutes.
double wrap(double t, double start, bool endless);

// The frame at T (in the loop): over the loop's last kMorph, morphed into
// the frames after START: the intro's blend of the tunnel in over the plane
// (T 33-38) the other way, the plane's weight (1 - cos) / 2
void show(tunnel::Tunnel& k, double t, double start, bool endless);

// What is shown: 32-bit colour at RES, or the intro's 256 colours at 320x200
struct View {
    bool trueColor = true, smooth = true;
    int resW = 1280, resH = 800;
    int w() const { return trueColor ? resW : tunnel::W; }
    int h() const { return trueColor ? resH : tunnel::H; }
};

// The frame K holds, as V shows it, in ARGB
void picture(const tunnel::Tunnel& k, const View& v, std::vector<uint32_t>& argb);

// No window: FRAMES frames from START, 70 per second, as DIR/fNNNN.ppm. Returns the exit code.
int dump(tunnel::Tunnel& k, const std::string& dir, int frames, double start, bool endless, const View& v);
