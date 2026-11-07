// views.cpp: Journey view, piano roll, pattern, channels, samples, keyboard, seek bar
#include "views.h"

#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

namespace modvis {

namespace {

ImVec2 operator+(ImVec2 a, ImVec2 b) { return ImVec2(a.x + b.x, a.y + b.y); }

ImU32 rgb(int r, int g, int b, int a = 255) { return IM_COL32(r, g, b, a); }

double tickSeconds(const Timeline& tl, size_t i) {
    return (double)(i < tl.ticks.size() ? tl.ticks[i].sample : tl.totalSamples) / tl.rate;
}

// seconds since the channel's last note (10 if none near)
float ageOf(const ViewCtx& v, int ch) {
    const Timeline& tl = v.tl;
    for (size_t i = v.tick, n = 0; i < tl.ticks.size() && n < 400; --i, ++n) {
        const ChanState& s = tl.at(i, ch);
        if (s.flags & ChanState::TRIG) return (float)((v.pos - tl.ticks[i].sample) / (double)tl.rate);
        if (!(s.flags & ChanState::ACTIVE)) break;
        if (i == 0) break;
    }
    return 10.f;
}

std::string noteOf(const Module& m, float pitch) {
    return m.noteName((uint8_t)std::clamp((int)std::lround(pitch), 0, 119));
}

bool isBlack(int note) {
    const int k = ((note % 12) + 12) % 12;
    return k == 1 || k == 3 || k == 6 || k == 8 || k == 10;
}

// red -> orange -> yellow -> pale, as a note gets older
ImU32 ageColour(float age, float alpha) {
    struct Stop { float t, r, g, b; };
    static const Stop stops[] = {{0.f, 255, 40, 30}, {.12f, 255, 120, 20}, {.35f, 255, 215, 30}, {1.f, 255, 245, 170}};
    const int n = sizeof stops / sizeof stops[0];
    Stop c = stops[n - 1];
    for (int i = 0; i + 1 < n; ++i)
        if (age < stops[i + 1].t) {
            const float f = (age - stops[i].t) / (stops[i + 1].t - stops[i].t);
            c = {0, stops[i].r + (stops[i + 1].r - stops[i].r) * f, stops[i].g + (stops[i + 1].g - stops[i].g) * f,
                 stops[i].b + (stops[i + 1].b - stops[i].b) * f};
            break;
        }
    return IM_COL32((int)c.r, (int)c.g, (int)c.b, (int)(alpha * 255));
}

}  // namespace

ImU32 channelColour(int ch, int channels, float alpha) {
    (void)channels;
    const float h = std::fmod(ch * 0.61803398875f + 0.02f, 1.f);
    float r, g, b;
    ImGui::ColorConvertHSVtoRGB(h, 0.62f, 1.f, r, g, b);
    return ImGui::ColorConvertFloat4ToU32(ImVec4(r, g, b, alpha));
}

void toggleMute(Player& p, int ch, int) { p.mute[ch] = !p.mute[ch]; }

void toggleSolo(Player& p, int ch, int channels) {
    bool solo = !p.mute[ch];
    for (int i = 0; i < channels; ++i)
        if (i != ch && !p.mute[i]) solo = false;
    for (int i = 0; i < channels; ++i) p.mute[i] = solo ? false : i != ch;
}

// ---------------------------------------------------------------------------- Journey

// In the spirit of Future Crew's MusicDiscPlayer (Journey I/II): a slate header
// with the song and its position, and below, on black, a dotted column per
// instrument; each sounding note is a dash at its pitch, a big red block when
// struck, shrinking and fading to yellow as it rings.
void drawJourney(ViewCtx& v) {
    ImDrawList* dl = ImGui::GetWindowDrawList();
    const ImVec2 p0 = ImGui::GetCursorScreenPos(), sz = ImGui::GetContentRegionAvail();
    if (sz.x < 50 || sz.y < 120) return;
    const ImVec2 p1 = p0 + sz;
    const TickInfo& ti = v.tl.ticks[v.tick];

    // header
    const float hh = 78;
    dl->AddRectFilled(p0, ImVec2(p1.x, p0.y + hh), rgb(43, 61, 80));
    dl->AddLine(ImVec2(p0.x, p0.y + hh), ImVec2(p1.x, p0.y + hh), rgb(70, 95, 120));
    const std::string title = v.mod.title.empty() ? "(untitled)" : v.mod.title;
    ImGui::PushFont(v.fonts.title, 26.f);
    dl->AddText(ImVec2(p0.x + 10, p0.y + 6), rgb(0, 0, 0, 160), title.c_str());
    dl->AddText(ImVec2(p0.x + 9, p0.y + 5), rgb(225, 232, 240), title.c_str());
    ImGui::PopFont();
    // the order position, as MDP's bar
    const float bw = std::min(220.f, sz.x * 0.3f);
    const ImVec2 b0(p0.x + 10, p0.y + 52), b1(p0.x + 10 + bw, p0.y + 62);
    const float frac = v.mod.orders.empty() ? 0 : (float)v.tl.ticks[v.tick].orderPos / v.mod.orders.size();
    const float tfrac = v.tl.totalSamples ? (float)v.pos / v.tl.totalSamples : 0;
    dl->AddRectFilled(b0, ImVec2(b0.x + (bw - 2) * std::clamp(tfrac, 0.f, 1.f) + 2, b1.y), rgb(30, 60, 200));
    dl->AddRectFilled(ImVec2(b0.x + (bw - 2) * frac, b0.y), ImVec2(b0.x + (bw - 2) * frac + 6, b1.y),
                      rgb(80, 120, 255));
    dl->AddRect(b0, b1, rgb(150, 175, 200));
    ImGui::PushFont(v.fonts.mono, 15.f);
    const ImU32 muted = rgb(95, 125, 155);
    char buf[64];
    const float rx = p1.x - 120;
    std::snprintf(buf, sizeof buf, "Ord : %d", ti.orderPos);
    dl->AddText(ImVec2(rx, p0.y + 6), muted, buf);
    std::snprintf(buf, sizeof buf, "Pat : %d", ti.pattern);
    dl->AddText(ImVec2(rx, p0.y + 24), muted, buf);
    std::snprintf(buf, sizeof buf, "Row : %d", ti.row);
    dl->AddText(ImVec2(rx, p0.y + 42), muted, buf);
    const float hx = std::max(p0.x + bw + 30, rx - 300);
    if (hx + 280 < rx) {
        dl->AddText(ImVec2(hx, p0.y + 6), muted, "Space  pause / play");
        dl->AddText(ImVec2(hx, p0.y + 24), muted, "Arrows to change pattern");
        dl->AddText(ImVec2(hx, p0.y + 42), muted, "PgUp/PgDn  other song");
    }
    std::snprintf(buf, sizeof buf, "%s  %d ch", v.mod.typeName.c_str(), v.mod.channels);
    dl->AddText(ImVec2(b1.x + 12, b0.y - 3), muted, buf);
    ImGui::PopFont();

    // body
    const ImVec2 q0(p0.x, p0.y + hh + 1);
    dl->AddRectFilled(q0, p1, rgb(0, 0, 0));
    std::vector<int> cols;  // instrument -> column
    std::vector<int> used;
    for (size_t i = 1; i < v.tl.instUse.size(); ++i)
        if (v.tl.instUse[i]) used.push_back((int)i);
    if (used.empty())
        for (size_t i = 1; i <= v.mod.samples.size(); ++i) used.push_back((int)i);
    cols.assign(v.mod.samples.size() + 2, -1);
    for (size_t i = 0; i < used.size(); ++i) cols[used[i]] = (int)i;
    const int ncol = std::max<int>(used.size(), 1);
    const float mx = 16, top = q0.y + 14, bottom = p1.y - 26;
    const float colW = (sz.x - 2 * mx) / ncol;
    auto colX = [&](int c) { return p0.x + mx + colW * (c + 0.5f); };
    const float lo = v.tl.minPitch, hi = v.tl.maxPitch;
    auto yOf = [&](float pitch) { return bottom - (pitch - lo) / (hi - lo) * (bottom - top); };

    const ImU32 dot = rgb(55, 72, 90);
    for (int c = 0; c < ncol; ++c) {
        const float x = std::floor(colX(c));
        for (float y = top; y < bottom; y += 6) dl->AddRectFilled(ImVec2(x, y), ImVec2(x + 1, y + 1), dot);
    }
    // octave marks on the left
    ImGui::PushFont(v.fonts.mono, 12.f);
    for (int n = (int)std::ceil(lo); n <= (int)hi; ++n)
        if (n % 12 == 0) {
            const float y = yOf((float)n);
            dl->AddText(ImVec2(p0.x + 2, y - 7), rgb(60, 80, 100), noteOf(v.mod, (float)n).substr(0, 1).append(noteOf(v.mod, (float)n).substr(2)).c_str());
        }
    // instrument numbers at the foot
    for (int c = 0; c < ncol && colW >= 14; ++c) {
        std::snprintf(buf, sizeof buf, "%02d", used.empty() ? 0 : used[c]);
        const ImVec2 ts = ImGui::CalcTextSize(buf);
        dl->AddText(ImVec2(colX(c) - ts.x / 2, bottom + 8), rgb(60, 80, 100), buf);
    }
    ImGui::PopFont();

    const float dashW = std::clamp(colW * 0.72f, 6.f, 22.f);
    auto block = [&](const ChanState& s, int ch, float age, float alpha) {
        if (!(s.flags & ChanState::ACTIVE) || s.inst >= cols.size() || cols[s.inst] < 0) return;
        const float x = colX(cols[s.inst]), y = yOf(s.pitch);
        const float fresh = std::exp(-age / 0.16f);
        const float vol = s.vol / 64.f;
        const float h = 2.f + 10.f * vol * fresh;
        const float w = dashW * (1.f + 0.2f * fresh * vol);
        const ImU32 col = v.set.channelColours ? channelColour(ch, v.mod.channels, alpha * (0.45f + 0.55f * vol))
                                               : ageColour(age, alpha * (0.5f + 0.5f * std::sqrt(vol)));
        dl->AddRectFilled(ImVec2(x - w / 2, y - h / 2), ImVec2(x + w / 2, y + h / 2), col);
    };
    dl->PushClipRect(q0, p1, true);
    if (v.set.trails) {
        const int back = 40;
        for (int k = back; k >= 1; --k) {
            if (v.tick < (size_t)k) continue;
            const size_t t = v.tick - k;
            for (int ch = 0; ch < v.mod.channels; ++ch)
                if (!v.player.mute[ch]) block(v.tl.at(t, ch), ch, 1.f, 0.35f * (1.f - (float)k / back));
        }
    }
    for (int ch = 0; ch < v.mod.channels; ++ch)
        if (!v.player.mute[ch]) block(v.tl.at(v.tick, ch), ch, ageOf(v, ch), 1.f);
    dl->PopClipRect();

    // hover: which instrument a column is
    ImGui::SetCursorScreenPos(q0);
    ImGui::InvisibleButton("journey", ImVec2(sz.x, p1.y - q0.y));
    if (ImGui::IsItemHovered()) {
        const int c = (int)((ImGui::GetIO().MousePos.x - p0.x - mx) / colW);
        if (c >= 0 && c < (int)used.size()) {
            const Sample& s = v.mod.samples[used[c] - 1];
            ImGui::SetTooltip("%02d %s", used[c], s.name.c_str());
        }
    }
}

// ---------------------------------------------------------------------------- piano roll

void drawPianoRoll(ViewCtx& v) {
    ImDrawList* dl = ImGui::GetWindowDrawList();
    const ImVec2 p0 = ImGui::GetCursorScreenPos(), sz = ImGui::GetContentRegionAvail();
    if (sz.x < 100 || sz.y < 60) return;
    const ImVec2 p1 = p0 + sz;
    const Timeline& tl = v.tl;
    const float keyW = 44;
    const float x0 = p0.x + keyW, x1 = p1.x;
    const double span = v.set.rollSeconds, t0 = v.now - span * 0.25, t1 = t0 + span;
    auto xOf = [&](double t) { return (float)(x0 + (t - t0) / span * (x1 - x0)); };
    const int lo = (int)std::floor(tl.minPitch), hi = (int)std::ceil(tl.maxPitch);
    const float rowH = sz.y / (hi - lo + 1);
    auto yOf = [&](float pitch) { return p1.y - (pitch - lo + 0.5f) * rowH; };

    dl->AddRectFilled(p0, p1, rgb(14, 16, 22));
    dl->PushClipRect(ImVec2(x0, p0.y), p1, true);
    for (int n = lo; n <= hi; ++n) {
        const float y = yOf((float)n);
        if (isBlack(n)) dl->AddRectFilled(ImVec2(x0, y - rowH / 2), ImVec2(x1, y + rowH / 2), rgb(19, 22, 30));
        if (n % 12 == 0) dl->AddLine(ImVec2(x0, y + rowH / 2), ImVec2(x1, y + rowH / 2), rgb(40, 46, 60));
    }
    // rows and patterns
    const size_t a = tl.tickAt((int64_t)(std::max(0.0, t0) * tl.rate));
    const size_t b = std::min(tl.ticks.size(), tl.tickAt((int64_t)(t1 * tl.rate)) + 2);
    ImGui::PushFont(v.fonts.mono, 12.f);
    for (size_t i = a; i < b; ++i) {
        const TickInfo& t = tl.ticks[i];
        if (t.tick != 0) continue;
        const float x = xOf(tickSeconds(tl, i));
        if (t.row == 0) {
            dl->AddLine(ImVec2(x, p0.y), ImVec2(x, p1.y), rgb(90, 100, 130), 1.5f);
            char buf[32];
            std::snprintf(buf, sizeof buf, "%d:%d", t.orderPos, t.pattern);
            dl->AddText(ImVec2(x + 3, p0.y + 2), rgb(120, 130, 160), buf);
        } else if (t.row % 16 == 0) {
            dl->AddLine(ImVec2(x, p0.y), ImVec2(x, p1.y), rgb(48, 54, 72));
        } else if (t.row % 4 == 0 && span < 20) {
            dl->AddLine(ImVec2(x, p0.y), ImVec2(x, p1.y), rgb(28, 32, 42));
        }
    }
    ImGui::PopFont();
    // notes: runs of ticks at one pitch, cut at every new note
    const float nh = std::max(2.f, rowH * 0.8f);
    for (int ch = 0; ch < v.mod.channels; ++ch) {
        const bool muted = v.player.mute[ch];
        size_t start = 0;
        float pitch = 0;
        int vol = 0;
        bool open = false, trig = false;
        auto flush = [&](size_t end) {
            if (!open) return;
            const double ts = tickSeconds(tl, start), te = tickSeconds(tl, end);
            const float xa = xOf(ts), xb = std::max(xOf(te) - 1, xa + 1);
            const float y = yOf(pitch);
            const bool now = ts <= v.now && v.now < te;
            float alpha = 0.3f + 0.7f * vol / 64.f;
            if (muted) alpha *= 0.25f;
            if (ts > v.now) alpha *= 0.75f;
            dl->AddRectFilled(ImVec2(xa, y - nh / 2), ImVec2(xb, y + nh / 2), channelColour(ch, v.mod.channels, alpha),
                              nh > 6 ? 2.f : 0.f);
            if (trig) dl->AddRectFilled(ImVec2(xa, y - nh / 2), ImVec2(xa + 2, y + nh / 2), rgb(255, 255, 255, (int)(200 * alpha)));
            if (now && !muted) dl->AddRect(ImVec2(xa - 1, y - nh / 2 - 1), ImVec2(xb + 1, y + nh / 2 + 1), rgb(255, 255, 255, 200), 2.f);
            open = false;
        };
        for (size_t i = a; i < b; ++i) {
            const ChanState& s = tl.at(i, ch);
            if (!(s.flags & ChanState::ACTIVE)) {
                flush(i);
                continue;
            }
            if (open && (s.flags & ChanState::TRIG || std::fabs(s.pitch - pitch) > 0.03f || std::abs(s.vol - vol) > 12))
                flush(i);
            if (!open) {
                open = true;
                start = i;
                pitch = s.pitch;
                vol = s.vol;
                trig = (s.flags & ChanState::TRIG) != 0;
            }
        }
        flush(b);
    }
    const float xn = xOf(v.now);
    dl->AddLine(ImVec2(xn, p0.y), ImVec2(xn, p1.y), rgb(255, 255, 255, 180), 1.5f);
    dl->PopClipRect();

    // the keys, lit by what plays now
    std::vector<int> lit(hi - lo + 1, -1);
    std::vector<float> litVol(hi - lo + 1, 0);
    for (int ch = 0; ch < v.mod.channels; ++ch) {
        const ChanState& s = tl.at(v.tick, ch);
        if (!(s.flags & ChanState::ACTIVE) || v.player.mute[ch]) continue;
        const int n = (int)std::lround(s.pitch) - lo;
        if (n >= 0 && n < (int)lit.size() && s.vol >= litVol[n]) {
            lit[n] = ch;
            litVol[n] = s.vol;
        }
    }
    ImGui::PushFont(v.fonts.mono, std::clamp(rowH, 8.f, 13.f));
    for (int n = lo; n <= hi; ++n) {
        const float y = yOf((float)n);
        const ImVec2 k0(p0.x, y - rowH / 2), k1(p0.x + (isBlack(n) ? keyW * 0.62f : keyW - 2), y + rowH / 2);
        ImU32 col = isBlack(n) ? rgb(30, 30, 34) : rgb(215, 215, 220);
        if (lit[n - lo] >= 0) col = channelColour(lit[n - lo], v.mod.channels, 0.5f + 0.5f * litVol[n - lo] / 64.f);
        dl->AddRectFilled(k0, ImVec2(k1.x, k1.y - (rowH > 4 ? 1 : 0)), col);
        if (n % 12 == 0 && rowH >= 7) {
            const std::string nm = noteOf(v.mod, (float)n);
            dl->AddText(ImVec2(p0.x + keyW - 26, y - ImGui::GetFontSize() / 2), rgb(60, 60, 70),
                        (nm.substr(0, 1) + nm.substr(2)).c_str());
        }
    }
    ImGui::PopFont();

    // wheel zooms, click or drag seeks
    ImGui::SetCursorScreenPos(ImVec2(x0, p0.y));
    ImGui::InvisibleButton("roll", ImVec2(x1 - x0, sz.y));
    if (ImGui::IsItemHovered()) {
        const float w = ImGui::GetIO().MouseWheel;
        if (w != 0) v.set.rollSeconds = std::clamp(v.set.rollSeconds * (w > 0 ? 0.85f : 1.18f), 1.f, 120.f);
        const double t = t0 + (ImGui::GetIO().MousePos.x - x0) / (x1 - x0) * span;
        const int64_t s = (int64_t)(std::max(0.0, t) * tl.rate);
        const TickInfo& ti = tl.ticks[tl.tickAt(s)];
        ImGui::SetTooltip("%d:%02d.%d  order %d  pattern %d  row %d\nclick to jump, wheel to zoom", (int)t / 60,
                          (int)t % 60, (int)(t * 10) % 10, ti.orderPos, ti.pattern, ti.row);
    }
    if (ImGui::IsItemActive() && ImGui::IsMouseClicked(0)) {
        const double t = t0 + (ImGui::GetIO().MousePos.x - x0) / (x1 - x0) * span;
        v.seek((int64_t)(std::max(0.0, t) * tl.rate));
    }
}

// ---------------------------------------------------------------------------- pattern

void drawPattern(ViewCtx& v) {
    const TickInfo& ti = v.tl.ticks[v.tick];
    const Pattern& pat = v.mod.patterns[ti.pattern];
    const int nch = v.mod.channels;
    ImGui::PushFont(v.fonts.mono, 15.f);
    const float cw = ImGui::CalcTextSize("0").x, lh = ImGui::GetTextLineHeight() + 2;
    const float rowNumW = 4 * cw, chW = 14 * cw;
    const float contentW = rowNumW + nch * chW + cw;
    if (ImGui::BeginChild("pattern", ImVec2(0, 0), ImGuiChildFlags_None, ImGuiWindowFlags_HorizontalScrollbar)) {
        ImDrawList* dl = ImGui::GetWindowDrawList();
        const ImVec2 o = ImGui::GetCursorScreenPos();
        const float h = ImGui::GetContentRegionAvail().y;
        const float headH = lh * 2 + 4;
        // channel headers: click mutes, right click solos
        for (int c = 0; c < nch; ++c) {
            const float x = o.x + rowNumW + c * chW;
            const ChanState& s = v.tl.at(v.tick, c);
            const bool m = v.player.mute[c];
            dl->AddRectFilled(ImVec2(x, o.y), ImVec2(x + chW - cw, o.y + 4), channelColour(c, nch, m ? 0.2f : 1.f));
            char buf[32];
            std::snprintf(buf, sizeof buf, m ? "Ch %d  off" : "Ch %d", c + 1);
            dl->AddText(ImVec2(x, o.y + 5), m ? rgb(110, 110, 110) : rgb(220, 220, 230), buf);
            const float vu = (s.flags & ChanState::ACTIVE) ? s.vol / 64.f : 0.f;
            dl->AddRectFilled(ImVec2(x, o.y + lh + 6), ImVec2(x + (chW - cw) * vu, o.y + lh + 10),
                              channelColour(c, nch, m ? 0.2f : 0.8f));
            ImGui::SetCursorScreenPos(ImVec2(x, o.y));
            ImGui::PushID(c);
            ImGui::InvisibleButton("hdr", ImVec2(chW - cw, headH - 2));
            if (ImGui::IsItemClicked(0)) toggleMute(v.player, c, nch);
            if (ImGui::IsItemClicked(1)) toggleSolo(v.player, c, nch);
            if (ImGui::IsItemHovered()) ImGui::SetTooltip("click: mute   right click: solo");
            ImGui::PopID();
        }
        const float y0 = o.y + headH;
        const int visible = std::max(1, (int)((h - headH) / lh));
        const int centre = visible / 2;
        const float ybar = y0 + centre * lh;
        const float sx = ImGui::GetScrollX();
        dl->AddRectFilled(ImVec2(o.x + sx, ybar), ImVec2(o.x + sx + ImGui::GetWindowWidth(), ybar + lh), rgb(50, 60, 95));
        for (int k = 0; k < visible; ++k) {
            const int r = ti.row - centre + k;
            if (r < 0 || r >= pat.rows) continue;
            const float y = y0 + k * lh;
            if (r % 4 == 0 && r != ti.row)
                dl->AddRectFilled(ImVec2(o.x + sx, y), ImVec2(o.x + sx + ImGui::GetWindowWidth(), y + lh), rgb(26, 28, 38));
            char buf[16];
            std::snprintf(buf, sizeof buf, "%02d", r);
            dl->AddText(ImVec2(o.x + sx + cw * 0.5f, y + 1), r % 16 == 0 ? rgb(230, 200, 90) : rgb(120, 120, 140), buf);
            for (int c = 0; c < nch; ++c) {
                const Cell& cell = v.mod.cell(ti.pattern, r, c);
                float x = o.x + rowNumW + c * chW;
                const bool m = v.player.mute[c];
                const int a = m ? 90 : 255;
                const ImU32 dim = r == ti.row ? rgb(110, 115, 140, a) : rgb(70, 70, 80, a);
                const bool empty = cell.note == NOTE_NONE;
                dl->AddText(ImVec2(x, y + 1), empty ? dim : rgb(235, 235, 245, a),
                            v.mod.noteName(cell.note).c_str());
                x += 4 * cw;
                if (cell.inst)
                    std::snprintf(buf, sizeof buf, "%02d", cell.inst);
                else
                    std::snprintf(buf, sizeof buf, "..");
                dl->AddText(ImVec2(x, y + 1), cell.inst ? rgb(110, 200, 255, a) : dim, buf);
                x += 3 * cw;
                if (cell.vol != VOL_NONE)
                    std::snprintf(buf, sizeof buf, "%02d", cell.vol);
                else
                    std::snprintf(buf, sizeof buf, "..");
                dl->AddText(ImVec2(x, y + 1), cell.vol != VOL_NONE ? rgb(120, 230, 120, a) : dim, buf);
                x += 3 * cw;
                const std::string fx = v.mod.effectText(cell.cmd, cell.param);
                dl->AddText(ImVec2(x, y + 1), fx[0] == '.' ? dim : rgb(255, 165, 80, a), fx.c_str());
            }
        }
        ImGui::SetCursorScreenPos(o);
        ImGui::Dummy(ImVec2(contentW, h - 4));
    }
    ImGui::EndChild();
    ImGui::PopFont();
}

// ---------------------------------------------------------------------------- channels

void drawChannels(ViewCtx& v) {
    const int nch = v.mod.channels;
    const float cardW = 250, cardH = 132;
    const int cols = std::max(1, (int)(ImGui::GetContentRegionAvail().x / (cardW + 8)));
    if (!ImGui::BeginChild("channels")) {
        ImGui::EndChild();
        return;
    }
    const int N = 1024, mask = Player::SCOPE - 1;
    for (int c = 0; c < nch; ++c) {
        if (c % cols) ImGui::SameLine();
        ImGui::PushID(c);
        ImGui::BeginChild("card", ImVec2(cardW, cardH), ImGuiChildFlags_Borders, ImGuiWindowFlags_NoScrollbar);
        ImDrawList* dl = ImGui::GetWindowDrawList();
        const ChanState& s = v.tl.at(v.tick, c);
        const bool m = v.player.mute[c];
        const ImVec2 p = ImGui::GetCursorScreenPos();
        dl->AddRectFilled(p, ImVec2(p.x + 12, p.y + 12), channelColour(c, nch, m ? 0.25f : 1.f), 2.f);
        ImGui::SetCursorScreenPos(ImVec2(p.x + 18, p.y - 2));
        ImGui::Text("%d", c + 1);
        ImGui::SameLine(cardW - 70);
        if (m) ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(.6f, .2f, .2f, 1));
        if (ImGui::SmallButton("M")) toggleMute(v.player, c, nch);
        if (m) ImGui::PopStyleColor();
        ImGui::SameLine();
        if (ImGui::SmallButton("S")) toggleSolo(v.player, c, nch);
        // note and sample
        const bool on = s.flags & ChanState::ACTIVE;
        ImGui::PushFont(v.fonts.mono, 14.f);
        if (on && s.inst && s.inst <= v.mod.samples.size())
            ImGui::Text("%s %02d %s", noteOf(v.mod, s.pitch).c_str(), s.inst, v.mod.samples[s.inst - 1].name.c_str());
        else
            ImGui::TextDisabled("--- .. ");
        ImGui::PopFont();
        // scope
        const ImVec2 a = ImGui::GetCursorScreenPos();
        const float w = cardW - 16, h = cardH - (a.y - p.y) - 18;
        dl->AddRectFilled(a, ImVec2(a.x + w, a.y + h), rgb(8, 10, 14));
        dl->AddLine(ImVec2(a.x, a.y + h / 2), ImVec2(a.x + w, a.y + h / 2), rgb(35, 40, 50));
        const std::vector<float>& ring = v.player.scope[c];
        std::vector<ImVec2> pts;
        const int px = (int)w;
        double sum = 0;
        for (int i = 0; i < N; ++i) {
            const float x = ring[(size_t)(v.pos - N + i) & mask];
            sum += x * x;
        }
        for (int i = 0; i < px; ++i) {
            const float x = ring[(size_t)(v.pos - N + (int64_t)i * N / px) & mask];
            pts.push_back(ImVec2(a.x + i, a.y + h / 2 - std::clamp(x * 1.6f, -1.f, 1.f) * h / 2));
        }
        dl->AddPolyline(pts.data(), (int)pts.size(), channelColour(c, nch, m ? 0.25f : 0.95f), 0, 1.2f);
        ImGui::Dummy(ImVec2(w, h));
        // level and pan
        const float rms = (float)std::sqrt(sum / N);
        const float lvl = std::clamp(1.f + std::log10(std::max(rms, 1e-4f)) / 2.5f, 0.f, 1.f);
        const ImVec2 l0 = ImGui::GetCursorScreenPos();
        dl->AddRectFilled(ImVec2(l0.x, l0.y + 3), ImVec2(l0.x + (w - 40) * lvl, l0.y + 9),
                          lvl > 0.9f ? rgb(255, 90, 60) : channelColour(c, nch, 0.8f));
        dl->AddRect(ImVec2(l0.x, l0.y + 2), ImVec2(l0.x + w - 40, l0.y + 10), rgb(50, 55, 65));
        const float pc = l0.x + w - 34 + 30 * s.pan / 255.f;
        dl->AddLine(ImVec2(l0.x + w - 34, l0.y + 6), ImVec2(l0.x + w - 4, l0.y + 6), rgb(70, 75, 90));
        dl->AddRectFilled(ImVec2(pc - 2, l0.y + 2), ImVec2(pc + 2, l0.y + 10), rgb(200, 200, 220));
        ImGui::EndChild();
        ImGui::PopID();
    }
    ImGui::EndChild();
}

// ---------------------------------------------------------------------------- samples

void drawSamples(ViewCtx& v) {
    std::vector<float> active(v.mod.samples.size() + 1, 0.f);
    for (int c = 0; c < v.mod.channels; ++c) {
        const ChanState& s = v.tl.at(v.tick, c);
        if ((s.flags & ChanState::ACTIVE) && s.inst < active.size() && !v.player.mute[c])
            active[s.inst] = std::max(active[s.inst], s.vol / 64.f);
    }
    const ImGuiTableFlags fl = ImGuiTableFlags_RowBg | ImGuiTableFlags_ScrollY | ImGuiTableFlags_BordersInnerV |
                               ImGuiTableFlags_SizingFixedFit;
    if (!ImGui::BeginTable("samples", 8, fl)) return;
    ImGui::TableSetupScrollFreeze(0, 1);
    ImGui::TableSetupColumn("", ImGuiTableColumnFlags_WidthFixed, 14);
    ImGui::TableSetupColumn("#");
    ImGui::TableSetupColumn("Name", ImGuiTableColumnFlags_WidthStretch);
    ImGui::TableSetupColumn("Length");
    ImGui::TableSetupColumn("Loop");
    ImGui::TableSetupColumn("Vol");
    ImGui::TableSetupColumn(v.mod.format == Format::MOD ? "Finetune" : "C2Spd");
    ImGui::TableSetupColumn("Waveform", ImGuiTableColumnFlags_WidthFixed, 200);
    ImGui::TableHeadersRow();
    ImGui::PushFont(v.fonts.mono, 14.f);
    for (size_t i = 0; i < v.mod.samples.size(); ++i) {
        const Sample& s = v.mod.samples[i];
        if (s.data.empty() && s.name.empty()) continue;
        const float act = active[i + 1];
        ImGui::TableNextRow(ImGuiTableRowFlags_None, 26);
        ImGui::TableNextColumn();
        const ImVec2 p = ImGui::GetCursorScreenPos();
        ImGui::GetWindowDrawList()->AddCircleFilled(ImVec2(p.x + 6, p.y + 9), 5,
                                                    act > 0 ? ageColour(0.5f * (1 - act), 1.f) : rgb(40, 40, 48));
        ImGui::TableNextColumn();
        ImGui::Text("%02zu", i + 1);
        ImGui::TableNextColumn();
        if (s.data.empty())
            ImGui::TextDisabled("%s", s.name.c_str());
        else
            ImGui::TextUnformatted(s.name.c_str());
        ImGui::TableNextColumn();
        if (!s.data.empty()) ImGui::Text("%zu", s.data.size());
        ImGui::TableNextColumn();
        if (s.loop) ImGui::Text("%u-%u", s.loopStart, s.loopEnd);
        ImGui::TableNextColumn();
        if (!s.data.empty()) ImGui::Text("%d", s.volume);
        ImGui::TableNextColumn();
        if (!s.data.empty()) {
            if (v.mod.format == Format::MOD)
                ImGui::Text("%+d", s.finetune);
            else
                ImGui::Text("%d", s.c2spd);
        }
        ImGui::TableNextColumn();
        if (!s.data.empty()) {
            ImDrawList* dl = ImGui::GetWindowDrawList();
            const ImVec2 a = ImGui::GetCursorScreenPos();
            const float w = 196, h = 22;
            dl->AddRectFilled(a, ImVec2(a.x + w, a.y + h), rgb(10, 12, 16));
            const int n = (int)s.thumbMin.size();
            const ImU32 col = act > 0 ? ageColour(0.3f, 1.f) : rgb(90, 140, 190);
            for (int k = 0; k < n; ++k) {
                const float x = a.x + k * w / n;
                dl->AddLine(ImVec2(x, a.y + h / 2 - s.thumbMax[k] * h / 2), ImVec2(x, a.y + h / 2 - s.thumbMin[k] * h / 2 + 1), col);
            }
            if (s.loop) {
                const float la = a.x + w * s.loopStart / s.data.size(), lb = a.x + w * s.loopEnd / s.data.size();
                dl->AddRectFilled(ImVec2(la, a.y), ImVec2(lb, a.y + h), rgb(120, 200, 120, 40));
            }
            ImGui::Dummy(ImVec2(w, h));
        }
    }
    ImGui::PopFont();
    ImGui::EndTable();
}

// ---------------------------------------------------------------------------- keyboard

void drawKeyboard(ViewCtx& v, float height) {
    ImDrawList* dl = ImGui::GetWindowDrawList();
    const ImVec2 p0 = ImGui::GetCursorScreenPos();
    const float W = ImGui::GetContentRegionAvail().x;
    int o0 = (int)std::floor(v.tl.minPitch / 12.f), o1 = (int)std::ceil((v.tl.maxPitch + 1) / 12.f);
    o0 = std::max(o0, 0);
    o1 = std::min(std::max(o1, o0 + 4), 10);
    const int lo = o0 * 12, hi = o1 * 12;  // [lo, hi)
    std::vector<int> lit(hi - lo, -1);
    std::vector<float> litVol(hi - lo, 0);
    for (int ch = 0; ch < v.mod.channels; ++ch) {
        const ChanState& s = v.tl.at(v.tick, ch);
        if (!(s.flags & ChanState::ACTIVE) || v.player.mute[ch]) continue;
        const int n = (int)std::lround(s.pitch) - lo;
        if (n >= 0 && n < hi - lo && s.vol >= litVol[n]) {
            lit[n] = ch;
            litVol[n] = s.vol;
        }
    }
    const int whites = (o1 - o0) * 7;
    const float ww = W / whites;
    static const int whiteIdx[12] = {0, -1, 1, -1, 2, 3, -1, 4, -1, 5, -1, 6};
    static const float blackPos[12] = {0, 1, 0, 2, 0, 0, 4, 0, 5, 0, 6, 0};
    auto litCol = [&](int i, ImU32 base) {
        return lit[i] >= 0 ? channelColour(lit[i], v.mod.channels, 0.55f + 0.45f * litVol[i] / 64.f) : base;
    };
    ImGui::PushFont(v.fonts.mono, 11.f);
    for (int n = lo; n < hi; ++n) {
        const int k = n % 12;
        if (whiteIdx[k] < 0) continue;
        const float x = p0.x + ((n / 12 - o0) * 7 + whiteIdx[k]) * ww;
        dl->AddRectFilled(ImVec2(x, p0.y), ImVec2(x + ww - 1, p0.y + height), litCol(n - lo, rgb(225, 225, 230)), 2.f);
        if (k == 0 && ww > 9) {
            const std::string nm = v.mod.noteName((uint8_t)n);
            dl->AddText(ImVec2(x + 2, p0.y + height - 13), rgb(110, 110, 120), (nm.substr(0, 1) + nm.substr(2)).c_str());
        }
    }
    for (int n = lo; n < hi; ++n) {
        const int k = n % 12;
        if (whiteIdx[k] >= 0) continue;
        const float x = p0.x + ((n / 12 - o0) * 7 + blackPos[k]) * ww - ww * 0.32f;
        dl->AddRectFilled(ImVec2(x, p0.y), ImVec2(x + ww * 0.64f, p0.y + height * 0.6f), litCol(n - lo, rgb(25, 25, 30)), 2.f);
    }
    ImGui::PopFont();
    ImGui::Dummy(ImVec2(W, height));
}

// ---------------------------------------------------------------------------- seek bar

void drawSeekBar(ViewCtx& v, float height) {
    ImDrawList* dl = ImGui::GetWindowDrawList();
    const ImVec2 p0 = ImGui::GetCursorScreenPos();
    const float W = ImGui::GetContentRegionAvail().x;
    const ImVec2 p1(p0.x + W, p0.y + height);
    const Timeline& tl = v.tl;
    const double total = std::max<int64_t>(tl.totalSamples, 1);
    dl->AddRectFilled(p0, p1, rgb(22, 26, 36), 3.f);
    // activity: how many channels sound, along the song
    const int bins = std::max(1, (int)W / 2);
    for (int i = 0; i < bins; ++i) {
        const size_t t = tl.tickAt((int64_t)(total * (i + 0.5) / bins));
        int n = 0;
        for (int c = 0; c < tl.channels; ++c) n += (tl.at(t, c).flags & ChanState::ACTIVE) != 0;
        const float f = (float)n / std::max(1, tl.channels);
        const float x = p0.x + W * i / bins;
        dl->AddRectFilled(ImVec2(x, p1.y - (height - 4) * f - 2), ImVec2(x + W / bins, p1.y - 2), rgb(55, 70, 100));
    }
    const float xp = p0.x + (float)(v.pos / total) * W;
    dl->AddRectFilled(p0, ImVec2(xp, p1.y), rgb(70, 110, 200, 90), 3.f);
    for (size_t o = 0; o < tl.orderFirstTick.size(); ++o) {
        if (tl.orderFirstTick[o] < 0) continue;
        const float x = p0.x + (float)(tl.ticks[tl.orderFirstTick[o]].sample / total) * W;
        dl->AddLine(ImVec2(x, p0.y), ImVec2(x, p0.y + 5), rgb(130, 140, 170));
    }
    dl->AddLine(ImVec2(xp, p0.y - 2), ImVec2(xp, p1.y + 2), rgb(255, 210, 90), 2.f);
    ImGui::InvisibleButton("seek", ImVec2(W, height));
    if (ImGui::IsItemHovered()) {
        const double t = std::clamp((ImGui::GetIO().MousePos.x - p0.x) / W, 0.f, 1.f) * total / tl.rate;
        const TickInfo& ti = tl.ticks[tl.tickAt((int64_t)(t * tl.rate))];
        ImGui::SetTooltip("%d:%02d  order %d  pattern %d", (int)t / 60, (int)t % 60, ti.orderPos, ti.pattern);
    }
    if (ImGui::IsItemActive() && (ImGui::IsMouseClicked(0) || ImGui::IsMouseDragging(0))) {
        const double f = std::clamp((ImGui::GetIO().MousePos.x - p0.x) / W, 0.f, 1.f);
        v.seek((int64_t)(f * total));
    }
}

}  // namespace modvis
