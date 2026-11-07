// views.h: the visualisations of the playing song
#pragma once

#include <cstdint>
#include <functional>

#include "imgui.h"
#include "player.h"

namespace modvis {

struct Fonts {
    ImFont* ui = nullptr;
    ImFont* mono = nullptr;
    ImFont* title = nullptr;
};

struct ViewSettings {
    // Journey
    bool trails = false;
    bool channelColours = false;
    // piano roll
    float rollSeconds = 8.f;
    bool rollVertical = false;
};

struct ViewCtx {
    const Module& mod;
    const Timeline& tl;
    Player& player;
    int64_t pos;  // the sample being heard
    size_t tick;  // the timeline tick being heard
    double now;   // seconds
    const Fonts& fonts;
    ViewSettings& set;
    std::function<void(int64_t)> seek;
};

ImU32 channelColour(int ch, int channels, float alpha = 1.f);
void toggleMute(Player& p, int ch, int channels);
void toggleSolo(Player& p, int ch, int channels);

void drawJourney(ViewCtx& v);
void drawPianoRoll(ViewCtx& v);
void drawPattern(ViewCtx& v);
void drawChannels(ViewCtx& v);
void drawSamples(ViewCtx& v);
void drawKeyboard(ViewCtx& v, float height);
void drawSeekBar(ViewCtx& v, float height);

}  // namespace modvis
