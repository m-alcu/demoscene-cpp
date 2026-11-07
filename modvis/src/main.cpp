// modvis: a MOD/S3M player that shows the notes it plays
//
//   modvis [FILE.mod|FILE.s3m|DIR]
//   modvis --wav OUT.wav FILE     (renders the song once through, no window)
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdio>
#include <memory>
#include <string>
#include <vector>

#include "backends/imgui_impl_sdl3.h"
#include "backends/imgui_impl_sdlrenderer3.h"
#include "browser.h"
#include "imgui.h"
#include "module.h"
#include "player.h"
#include "views.h"

using namespace modvis;

namespace {

constexpr int kRate = 48000;

struct Song {
    fs::path path;
    Module mod;
    Timeline tl;
};

struct App {
    SDL_Window* window = nullptr;
    SDL_AudioStream* stream = nullptr;
    int stepPending = 0;  // a song change asked for mid frame, done at the next one
    std::unique_ptr<Song> song;
    std::unique_ptr<Player> player;
    std::atomic<int64_t> rendered{0};
    bool playing = false;
    double heard = 0;  // smoothed position being heard, in samples
    std::vector<fs::path> playlist;
    std::string error;
    bool loopSong = false, autoNext = true;
    float volume = 1.f, separation = 0.6f;
    bool interpolate = true;
    int view = 0, wantView = -1;
    ViewSettings vs;
};

// guards the player: SDL runs the audio callback with this same (recursive) lock
// held, so a separate mutex would deadlock against SDL_ClearAudioStream
struct StreamLock {
    SDL_AudioStream* s;
    explicit StreamLock(SDL_AudioStream* s) : s(s) { SDL_LockAudioStream(s); }
    ~StreamLock() { SDL_UnlockAudioStream(s); }
};

void SDLCALL audioCallback(void* user, SDL_AudioStream* stream, int additional, int) {
    App& app = *static_cast<App*>(user);
    const int frames = additional / 8;
    if (frames <= 0) return;
    std::vector<float> buf((size_t)frames * 2, 0.f);
    if (app.player) {  // the stream lock is already held here
        app.player->render(buf.data(), frames);
        app.rendered = app.player->position();
    }
    SDL_PutAudioStreamData(stream, buf.data(), (int)(buf.size() * sizeof(float)));
}

// the sample position the listener hears now
int64_t measuredPosition(App& app) {
    const int queued = SDL_GetAudioStreamQueued(app.stream) / 8;
    SDL_AudioSpec spec;
    int devFrames = 0;
    SDL_GetAudioDeviceFormat(SDL_GetAudioStreamDevice(app.stream), &spec, &devFrames);
    return std::max<int64_t>(0, app.rendered - queued - devFrames);
}

void seekTo(App& app, int64_t s) {
    if (!app.song) return;
    s = std::clamp<int64_t>(s, 0, std::max<int64_t>(0, app.song->tl.totalSamples - 1));
    {
        StreamLock g(app.stream);
        app.player->seek(s);
        app.rendered = app.player->position();
        SDL_ClearAudioStream(app.stream);
    }
    app.heard = (double)s;
}

void setPlaying(App& app, bool on) {
    app.playing = on && app.song;
    if (app.playing)
        SDL_ResumeAudioStreamDevice(app.stream);
    else
        SDL_PauseAudioStreamDevice(app.stream);
}

bool loadSong(App& app, const fs::path& path) {
    auto song = std::make_unique<Song>();
    try {
        song->mod = loadModule(path.string());
    } catch (const std::exception& e) {
        app.error = path.filename().string() + ": " + e.what();
        return false;
    }
    song->path = path;
    song->tl = Player::buildTimeline(song->mod, kRate);
    if (song->tl.ticks.empty()) {
        app.error = path.filename().string() + ": the song plays nothing";
        return false;
    }
    auto player = std::make_unique<Player>(song->mod, kRate);
    player->volume = app.volume;
    player->stereoSeparation = app.separation;
    player->interpolate = app.interpolate;
    {
        StreamLock g(app.stream);
        app.player = std::move(player);
        app.song = std::move(song);
        app.rendered = 0;
        SDL_ClearAudioStream(app.stream);
    }
    app.heard = 0;
    app.error.clear();
    std::string title = "modvis - " + (app.song->mod.title.empty() ? path.filename().string() : app.song->mod.title);
    SDL_SetWindowTitle(app.window, title.c_str());
    setPlaying(app, true);
    return true;
}

// the next (dir = 1) or previous (-1) song of the playlist that loads
void stepSong(App& app, int dir) {
    if (app.playlist.empty() || !app.song) return;
    auto it = std::find(app.playlist.begin(), app.playlist.end(), app.song->path);
    int i = it == app.playlist.end() ? -1 : (int)(it - app.playlist.begin());
    const int n = (int)app.playlist.size();
    for (int k = 0; k < n; ++k) {
        i = ((i + dir) % n + n) % n;
        if (loadSong(app, app.playlist[i])) return;
    }
}

void stepOrder(App& app, int dir) {
    if (!app.song) return;
    const Timeline& tl = app.song->tl;
    const int cur = tl.ticks[tl.tickAt((int64_t)app.heard)].orderPos;
    for (int o = cur + dir; o >= 0 && o < (int)tl.orderFirstTick.size(); o += dir)
        if (tl.orderFirstTick[o] >= 0) {
            seekTo(app, tl.ticks[tl.orderFirstTick[o]].sample);
            return;
        }
    if (dir < 0) seekTo(app, 0);
}

std::vector<fs::path> modulesIn(const fs::path& dir) {
    std::vector<fs::path> v;
    std::error_code ec;
    for (fs::directory_iterator it(dir, ec); !ec && it != fs::directory_iterator(); it.increment(ec))
        if (it->is_regular_file(ec) && isModuleFile(it->path())) v.push_back(it->path());
    std::sort(v.begin(), v.end());
    return v;
}

ImFont* addFont(const char* const* paths, float size) {
    ImGuiIO& io = ImGui::GetIO();
    for (const char* const* p = paths; *p; ++p)
        if (fs::exists(*p)) return io.Fonts->AddFontFromFileTTF(*p, size);
    return nullptr;
}

void style() {
    ImGui::StyleColorsDark();
    ImGuiStyle& s = ImGui::GetStyle();
    s.WindowRounding = 0;
    s.FrameRounding = 4;
    s.ChildRounding = 4;
    s.GrabRounding = 4;
    s.TabRounding = 4;
    s.WindowPadding = ImVec2(8, 8);
    ImVec4* c = s.Colors;
    c[ImGuiCol_WindowBg] = ImVec4(0.08f, 0.09f, 0.12f, 1);
    c[ImGuiCol_ChildBg] = ImVec4(0.06f, 0.07f, 0.09f, 1);
    c[ImGuiCol_FrameBg] = ImVec4(0.14f, 0.17f, 0.23f, 1);
    c[ImGuiCol_Button] = ImVec4(0.17f, 0.24f, 0.33f, 1);
    c[ImGuiCol_ButtonHovered] = ImVec4(0.25f, 0.36f, 0.50f, 1);
    c[ImGuiCol_ButtonActive] = ImVec4(0.32f, 0.46f, 0.64f, 1);
    c[ImGuiCol_Header] = ImVec4(0.17f, 0.24f, 0.33f, 1);
    c[ImGuiCol_HeaderHovered] = ImVec4(0.25f, 0.36f, 0.50f, 1);
    c[ImGuiCol_Tab] = ImVec4(0.12f, 0.16f, 0.22f, 1);
    c[ImGuiCol_TabSelected] = ImVec4(0.17f, 0.24f, 0.33f, 1);
    c[ImGuiCol_TabHovered] = ImVec4(0.25f, 0.36f, 0.50f, 1);
}

int renderWav(const std::string& out, const std::string& in) {
    Module m;
    try {
        m = loadModule(in);
    } catch (const std::exception& e) {
        std::fprintf(stderr, "modvis: %s: %s\n", in.c_str(), e.what());
        return 1;
    }
    const Timeline tl = Player::buildTimeline(m, kRate);
    Player p(m, kRate);
    std::vector<int16_t> pcm;
    std::vector<float> buf(4096 * 2);
    while (!p.ended() && p.position() < tl.totalSamples) {
        const int n = (int)std::min<int64_t>(4096, tl.totalSamples - p.position());
        p.render(buf.data(), n);
        for (int i = 0; i < 2 * n; ++i) pcm.push_back((int16_t)std::lround(buf[i] * 32767));
    }
    FILE* f = std::fopen(out.c_str(), "wb");
    if (!f) return 1;
    auto u32 = [&](uint32_t v) { std::fwrite(&v, 4, 1, f); };
    auto u16 = [&](uint16_t v) { std::fwrite(&v, 2, 1, f); };
    const uint32_t bytes = (uint32_t)(pcm.size() * 2);
    std::fwrite("RIFF", 1, 4, f);
    u32(36 + bytes);
    std::fwrite("WAVEfmt ", 1, 8, f);
    u32(16); u16(1); u16(2); u32(kRate); u32(kRate * 4); u16(4); u16(16);
    std::fwrite("data", 1, 4, f);
    u32(bytes);
    std::fwrite(pcm.data(), 2, pcm.size(), f);
    std::fclose(f);
    std::printf("%s: %s, %d channels, %.1f s, %zu ticks\n", in.c_str(), m.title.c_str(), m.channels,
                tl.totalSamples / (double)kRate, tl.ticks.size());
    return 0;
}

}  // namespace

int main(int argc, char** argv) {
    if (argc == 4 && std::string(argv[1]) == "--wav") return renderWav(argv[2], argv[3]);

    // --shot PREFIX SECONDS: (for testing) after SECONDS of silent playback, save
    // each view as PREFIX_N.bmp and quit
    std::string shotPrefix;
    double shotAt = 0;
    int argi = 1;
    if (argc >= 4 && std::string(argv[1]) == "--shot") {
        shotPrefix = argv[2];
        shotAt = std::atof(argv[3]);
        argi = 4;
    }
    fs::path startDir = fs::current_path(), startFile;
    if (argc > argi) {
        fs::path a = argv[argi];
        if (fs::is_directory(a))
            startDir = a;
        else if (fs::exists(a)) {
            startFile = fs::absolute(a);
            startDir = startFile.parent_path();
        }
    }

    SDL_SetHint(SDL_HINT_AUDIO_DEVICE_SAMPLE_FRAMES, "512");
    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO)) {
        std::fprintf(stderr, "modvis: SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    const float scale = SDL_GetDisplayContentScale(SDL_GetPrimaryDisplay());
    SDL_Window* window = SDL_CreateWindow("modvis", (int)(1440 * std::max(scale, 1.f)), (int)(900 * std::max(scale, 1.f)),
                                          SDL_WINDOW_RESIZABLE | SDL_WINDOW_HIGH_PIXEL_DENSITY);
    SDL_Renderer* renderer = window ? SDL_CreateRenderer(window, nullptr) : nullptr;
    if (!renderer) {
        std::fprintf(stderr, "modvis: %s\n", SDL_GetError());
        return 1;
    }
    SDL_SetRenderVSync(renderer, 1);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    io.IniFilename = nullptr;
    style();
    ImGui::GetStyle().ScaleAllSizes(std::max(scale, 1.f));
    ImGui::GetStyle().FontScaleDpi = std::max(scale, 1.f);
    static const char* uiFonts[] = {"/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf",
                                    "/usr/share/fonts/TTF/DejaVuSans.ttf", "/usr/share/fonts/dejavu/DejaVuSans.ttf",
                                    "/usr/share/fonts/truetype/liberation/LiberationSans-Regular.ttf", nullptr};
    static const char* monoFonts[] = {"/usr/share/fonts/truetype/dejavu/DejaVuSansMono.ttf",
                                      "/usr/share/fonts/TTF/DejaVuSansMono.ttf",
                                      "/usr/share/fonts/dejavu/DejaVuSansMono.ttf",
                                      "/usr/share/fonts/truetype/noto/NotoSansMono-Regular.ttf", nullptr};
    static const char* titleFonts[] = {"/usr/share/fonts/truetype/dejavu/DejaVuSerif-Bold.ttf",
                                       "/usr/share/fonts/TTF/DejaVuSerif-Bold.ttf",
                                       "/usr/share/fonts/dejavu/DejaVuSerif-Bold.ttf", nullptr};
    Fonts fonts;
    fonts.ui = addFont(uiFonts, 15.f);
    if (!fonts.ui) fonts.ui = io.Fonts->AddFontDefault();
    fonts.mono = addFont(monoFonts, 15.f);
    if (!fonts.mono) fonts.mono = fonts.ui;
    fonts.title = addFont(titleFonts, 26.f);
    if (!fonts.title) fonts.title = fonts.ui;
    io.FontDefault = fonts.ui;

    ImGui_ImplSDL3_InitForSDLRenderer(window, renderer);
    ImGui_ImplSDLRenderer3_Init(renderer);

    App app;
    app.window = window;
    if (!shotPrefix.empty()) app.volume = 0;
    SDL_AudioSpec spec{SDL_AUDIO_F32, 2, kRate};
    app.stream = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, audioCallback, &app);
    if (!app.stream) {
        std::fprintf(stderr, "modvis: no audio: %s\n", SDL_GetError());
        return 1;
    }

    Browser browser(startDir);
    if (!startFile.empty()) {
        app.playlist = modulesIn(startDir);
        loadSong(app, startFile);
    }

    static const char* viewNames[] = {"Journey", "Piano roll", "Pattern", "Channels", "Samples"};
    const int nViews = 5;
    Uint64 last = SDL_GetPerformanceCounter();
    bool quit = false;
    while (!quit) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            ImGui_ImplSDL3_ProcessEvent(&e);
            if (e.type == SDL_EVENT_QUIT) quit = true;
            if (e.type == SDL_EVENT_WINDOW_CLOSE_REQUESTED && e.window.windowID == SDL_GetWindowID(window)) quit = true;
            if (e.type == SDL_EVENT_DROP_FILE && e.drop.data) {
                const fs::path p = e.drop.data;
                if (fs::is_directory(p))
                    browser.open(p);
                else {
                    browser.open(p.parent_path());
                    app.playlist = modulesIn(p.parent_path());
                    loadSong(app, p);
                }
            }
        }
        if (SDL_GetWindowFlags(window) & SDL_WINDOW_MINIMIZED) {
            SDL_Delay(20);
            continue;
        }
        const Uint64 nowc = SDL_GetPerformanceCounter();
        const double dt = (double)(nowc - last) / SDL_GetPerformanceFrequency();
        last = nowc;

        // where the listener is: the audio clock, smoothed by the frame clock
        if (app.song) {
            const double measured = (double)measuredPosition(app);
            if (app.playing) {
                app.heard += dt * kRate;
                const double d = measured - app.heard;
                if (std::fabs(d) > kRate * 0.15)
                    app.heard = measured;
                else
                    app.heard += d * 0.08;
            } else {
                app.heard = measured;
            }
            app.heard = std::clamp(app.heard, 0.0, (double)app.song->tl.totalSamples);
            // the end of the song
            bool ended;
            {
                StreamLock g(app.stream);
                ended = app.player->ended();
            }
            if (app.playing && ended && measured >= app.song->tl.totalSamples - 1) {
                if (app.loopSong)
                    seekTo(app, 0);
                else if (app.autoNext && app.playlist.size() > 1)
                    stepSong(app, 1);
                else {
                    setPlaying(app, false);
                    seekTo(app, 0);
                }
            }
        }

        ImGui_ImplSDLRenderer3_NewFrame();
        ImGui_ImplSDL3_NewFrame();
        ImGui::NewFrame();

        // keys
        if (!io.WantTextInput) {
            if (ImGui::IsKeyPressed(ImGuiKey_Space, false)) setPlaying(app, !app.playing);
            if (ImGui::IsKeyPressed(ImGuiKey_RightArrow)) stepOrder(app, 1);
            if (ImGui::IsKeyPressed(ImGuiKey_LeftArrow)) stepOrder(app, -1);
            if (ImGui::IsKeyPressed(ImGuiKey_PageDown)) stepSong(app, 1);
            if (ImGui::IsKeyPressed(ImGuiKey_PageUp)) stepSong(app, -1);
        }
        if (app.stepPending) {  // the buttons, from the last frame (the song can't vanish mid frame)
            stepSong(app, app.stepPending);
            app.stepPending = 0;
        }
        if (!io.WantTextInput) {
            for (int k = 0; k < nViews; ++k)
                if (ImGui::IsKeyPressed((ImGuiKey)(ImGuiKey_F1 + k), false)) app.wantView = k;
            if (app.song)
                for (int k = 0; k < 10 && k < app.song->mod.channels; ++k)
                    if (ImGui::IsKeyPressed((ImGuiKey)(ImGuiKey_1 + (k == 9 ? -1 : k)), false)) {
                        const int ch = k;  // 1..9, 0 = channel 10
                        if (io.KeyShift)
                            toggleSolo(*app.player, ch, app.song->mod.channels);
                        else
                            toggleMute(*app.player, ch, app.song->mod.channels);
                    }
        }

        const ImGuiViewport* vp = ImGui::GetMainViewport();
        ImGui::SetNextWindowPos(vp->WorkPos);
        ImGui::SetNextWindowSize(vp->WorkSize);
        ImGui::Begin("modvis", nullptr,
                     ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoSavedSettings |
                         ImGuiWindowFlags_NoBringToFrontOnFocus);

        // left: the browser
        const float leftW = std::clamp(vp->WorkSize.x * 0.24f, 260.f, 420.f);
        ImGui::BeginChild("left", ImVec2(leftW, 0), ImGuiChildFlags_ResizeX);
        if (auto c = browser.draw(app.song ? app.song->path : fs::path())) {
            app.playlist = c->playlist;
            loadSong(app, c->file);
        }
        ImGui::EndChild();
        ImGui::SameLine();

        // right: transport, the view, the keyboard
        ImGui::BeginChild("right");
        if (!app.song) {
            ImGui::PushFont(fonts.title, 30.f);
            ImGui::TextColored(ImVec4(.85f, .9f, 1.f, 1), "modvis");
            ImGui::PopFont();
            ImGui::TextWrapped("Double click a .mod or .s3m file on the left, or drop one on the window. "
                               "The Search tab finds modules in the folders below one.");
            if (!app.error.empty()) ImGui::TextColored(ImVec4(1, .4f, .4f, 1), "%s", app.error.c_str());
        } else {
            Song& s = *app.song;
            const int64_t pos = (int64_t)app.heard;
            const size_t tick = s.tl.tickAt(pos);
            const TickInfo& ti = s.tl.ticks[tick];
            ViewCtx v{s.mod, s.tl, *app.player, pos, tick, app.heard / kRate, fonts, app.vs,
                      [&](int64_t p) { seekTo(app, p); }};

            // song line
            ImGui::PushFont(fonts.title, 22.f);
            ImGui::TextUnformatted(s.mod.title.empty() ? s.path.filename().string().c_str() : s.mod.title.c_str());
            ImGui::PopFont();
            ImGui::SameLine();
            ImGui::TextDisabled("%s   %s   %s   %d ch   %zu orders   %zu samples", s.path.filename().string().c_str(),
                                s.mod.typeName.c_str(), s.mod.tracker.c_str(), s.mod.channels, s.mod.orders.size(),
                                s.mod.samples.size());
            // transport
            const double t = app.heard / kRate, total = (double)s.tl.totalSamples / kRate;
            if (ImGui::Button("|<")) app.stepPending = -1;
            ImGui::SetItemTooltip("previous song (PgUp)");
            ImGui::SameLine();
            if (ImGui::Button("<<")) stepOrder(app, -1);
            ImGui::SetItemTooltip("previous pattern (Left)");
            ImGui::SameLine();
            if (ImGui::Button(app.playing ? "Pause" : "Play", ImVec2(64, 0))) setPlaying(app, !app.playing);
            ImGui::SameLine();
            if (ImGui::Button("Stop")) {
                setPlaying(app, false);
                seekTo(app, 0);
            }
            ImGui::SameLine();
            if (ImGui::Button(">>")) stepOrder(app, 1);
            ImGui::SetItemTooltip("next pattern (Right)");
            ImGui::SameLine();
            if (ImGui::Button(">|")) app.stepPending = 1;
            ImGui::SetItemTooltip("next song (PgDn)");
            ImGui::SameLine();
            ImGui::PushFont(fonts.mono, 15.f);
            ImGui::Text(" %d:%02d / %d:%02d   ord %3d/%-3zu pat %3d row %2d   spd %2d bpm %3d gv %2d", (int)t / 60,
                        (int)t % 60, (int)total / 60, (int)total % 60, ti.orderPos, s.mod.orders.size(), ti.pattern,
                        ti.row, ti.speed, ti.tempo, ti.globalVol);
            ImGui::PopFont();
            drawSeekBar(v, 22);
            // settings
            ImGui::SetNextItemWidth(120);
            if (ImGui::SliderFloat("Volume", &app.volume, 0.f, 2.f, "%.2f")) app.player->volume = app.volume;
            ImGui::SameLine();
            ImGui::SetNextItemWidth(120);
            if (ImGui::SliderFloat("Stereo", &app.separation, 0.f, 1.f, "%.2f")) app.player->stereoSeparation = app.separation;
            ImGui::SameLine();
            if (ImGui::Checkbox("Interpolate", &app.interpolate)) app.player->interpolate = app.interpolate;
            ImGui::SameLine();
            ImGui::Checkbox("Loop song", &app.loopSong);
            ImGui::SameLine();
            ImGui::Checkbox("Play next", &app.autoNext);
            if (!app.error.empty()) {
                ImGui::SameLine();
                ImGui::TextColored(ImVec4(1, .4f, .4f, 1), "%s", app.error.c_str());
            }

            // the views
            const float kbH = 56;
            if (ImGui::BeginTabBar("views")) {
                for (int k = 0; k < nViews; ++k) {
                    const ImGuiTabItemFlags f = app.wantView == k ? ImGuiTabItemFlags_SetSelected : 0;
                    if (ImGui::BeginTabItem(viewNames[k], nullptr, f)) {
                        app.view = k;
                        ImGui::EndTabItem();
                    }
                }
                app.wantView = -1;
                ImGui::EndTabBar();
            }
            // per view options
            if (app.view == 0) {
                ImGui::Checkbox("Trails", &app.vs.trails);
                ImGui::SameLine();
                ImGui::Checkbox("Channel colours", &app.vs.channelColours);
                ImGui::SameLine();
                ImGui::TextDisabled("columns = instruments, height = pitch, size = loudness, colour = age");
            } else if (app.view == 1) {
                ImGui::SetNextItemWidth(160);
                ImGui::SliderFloat("Seconds shown", &app.vs.rollSeconds, 1.f, 120.f, "%.0f s", ImGuiSliderFlags_Logarithmic);
                ImGui::SameLine();
                ImGui::TextDisabled("colour = channel, white edge = note start; wheel zooms, click jumps");
            } else if (app.view == 2) {
                ImGui::TextDisabled("click a channel header to mute it, right click to solo (or keys 1-0, shift for solo)");
            }
            ImGui::BeginChild("view", ImVec2(0, -kbH - 8), ImGuiChildFlags_None, ImGuiWindowFlags_NoScrollbar);
            switch (app.view) {
                case 0: drawJourney(v); break;
                case 1: drawPianoRoll(v); break;
                case 2: drawPattern(v); break;
                case 3: drawChannels(v); break;
                default: drawSamples(v); break;
            }
            ImGui::EndChild();
            drawKeyboard(v, kbH);
        }
        ImGui::EndChild();
        ImGui::End();

        ImGui::Render();
        SDL_SetRenderScale(renderer, io.DisplayFramebufferScale.x, io.DisplayFramebufferScale.y);
        SDL_SetRenderDrawColor(renderer, 10, 12, 16, 255);
        SDL_RenderClear(renderer);
        ImGui_ImplSDLRenderer3_RenderDrawData(ImGui::GetDrawData(), renderer);
        if (!shotPrefix.empty() && app.song && app.heard / kRate >= shotAt) {
            // a view is shown from the frame after it is chosen
            static int shot = -1, frames = 0;
            if (shot >= 0 && ++frames == 3) {
                if (SDL_Surface* px = SDL_RenderReadPixels(renderer, nullptr)) {
                    SDL_SaveBMP(px, (shotPrefix + "_" + std::to_string(shot) + ".bmp").c_str());
                    SDL_DestroySurface(px);
                }
            }
            if (shot < 0 || frames >= 3) {
                if (++shot >= nViews) quit = true;
                app.wantView = shot;
                frames = 0;
                setPlaying(app, false);
            }
        }
        SDL_RenderPresent(renderer);
    }

    SDL_DestroyAudioStream(app.stream);
    ImGui_ImplSDLRenderer3_Shutdown();
    ImGui_ImplSDL3_Shutdown();
    ImGui::DestroyContext();
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
