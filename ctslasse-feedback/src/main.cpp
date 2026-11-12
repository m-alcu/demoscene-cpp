// ctslasse-feedback - the feedback zoomer of Lasse Reinbøng (Cubic Team &
// $eeN, 1995), part 6, its picture in the middle only, in C++17 / SDL3,
// with a panel to take it apart: the camera, the seeds, the blur and the
// feedback itself can be changed or switched off while it runs.
//
// Usage: ctslasse-feedback [--start SECONDS] [--loop] [--scale N]
//            keys (outside the panel): Space pause, N one frame, R restart,
//                  L endless / the part looped, C clear A and B,
//                  B blur, F feedback, I the intro's values, Esc quit
//            click or drag on the picture: the point there
//        ctslasse-feedback --dump DIR [--frames N] [--start SECONDS] [--loop]
//            (no window: writes N frames, 79.5 per second, as DIR/fNNNN.ppm,
//             with the intro's values)
//
// The effect feeds back on itself, so it is always run from the part's
// start; frames before --start (part time in seconds, 20 by default: the
// blue-red palette coming in and the zoom starting to sway) are drawn
// unseen. Endless (the default): it then runs on. --loop / L: up to the
// part's end in the intro (T 38.2 s), then back to the start, over and over.
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iterator>
#include <memory>
#include <string>
#include <vector>

#include "feedback.h"
#include "imgui.h"
#include "imgui_impl_sdl3.h"
#include "imgui_impl_sdlrenderer3.h"

namespace {

using feedback::Feedback;
using feedback::Params;

constexpr double kStep = feedback::kStep;
constexpr double kLastClock = 2147483647.0 - kStep;                       // endless: before the clock overflows
constexpr double kPartEnd = feedback::kFirstClock + (feedback::kFrames - 1) * kStep;  // the part's last frame

// The effect from the part's start up to the clock of START (drawn), then
// one frame at a time. Each frame moves the clock on by kStep · tScale (the
// intro: 1; 0 stops the time but not the feedback). At the end (looped, or
// the clock's) it goes back to the start.
struct Runner {
    std::unique_ptr<Feedback> fb = std::make_unique<Feedback>(), start;
    double startClock = 0, clock = 0, tScale = 1;
    bool loop = false;
    Params p;

    explicit Runner(double seconds, const Params& with = Params{}) { build(seconds, with); }
    void build(double seconds, const Params& with) {
        *fb = Feedback();
        int first = 0;
        while (Feedback::frameClock(first) < seconds * feedback::kPit) first++;
        for (int i = 0; i <= first; i++) fb->frame(Feedback::frameClock(i), with);
        start = std::make_unique<Feedback>(*fb);
        startClock = clock = Feedback::frameClock(first);
    }
    void restart() {
        *fb = *start;
        clock = startClock;
    }
    void step() {
        if (clock + kStep * tScale > (loop ? kPartEnd : kLastClock)) restart();
        clock += kStep * tScale;
        fb->frame((int32_t)clock, p);
    }
};

int dump(Runner& r, const std::string& dir, int frames) {
    std::vector<uint32_t> argb(feedback::W * feedback::H);
    for (int f = 0; f < frames; f++) {
        if (f) r.step();
        r.fb->toArgb(argb.data());
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        FILE* g = std::fopen(p, "wb");
        if (!g) {
            std::perror(p);
            return 1;
        }
        std::fprintf(g, "P6\n%d %d\n255\n", feedback::W, feedback::H);
        for (uint32_t c : argb) {
            const uint8_t rgb[3] = {(uint8_t)(c >> 16), (uint8_t)(c >> 8), (uint8_t)c};
            std::fwrite(rgb, 1, 3, g);
        }
        std::fclose(g);
    }
    return 0;
}

// --- the workbench --------------------------------------------------------------------------

// What is shown: B (the screen) or A (B fed back, the next frame's start),
// through the intro's DAC, one of its two palettes, or as grey.
enum Show { kShowB, kShowA };
enum Colour { kDac, kPal1, kPal2, kGrey };

struct Ui {
    int show = kShowB, colour = kDac;
    bool mark = true, paused = false, smooth = false;
    float fps = (float)(feedback::kPit / kStep);
    float goTo = 20;
};

void colourise(const Feedback& fb, const Ui& u, uint32_t* out) {
    const uint8_t* pal = u.colour == kPal1 ? fb.palette1() : u.colour == kPal2 ? fb.palette2() : fb.dac();
    uint32_t lut[64];
    for (int i = 0; i < 64; i++) {
        if (u.colour == kGrey) {
            const uint32_t g = (uint32_t)i * 255 / 63;
            lut[i] = 0xFF000000u | g << 16 | g << 8 | g;
            continue;
        }
        auto c = [&](int k) { return (uint32_t)(pal[3 * i + k] & 0x3F) * 255 / 63; };
        lut[i] = 0xFF000000u | c(0) << 16 | c(1) << 8 | c(2);
    }
    // the screen is B's rows 1-198; A's same rows, to line up
    const uint8_t* s = (u.show == kShowA ? fb.picA() : fb.picB()) + 0x100;
    for (int y = 0; y < feedback::H; y++)
        for (int x = 0; x < feedback::W; x++) out[y * feedback::W + x] = lut[s[y * 256 + x] & 0x3F];
}

// A few set-ups that each show one part of the trick, from the intro's values.
struct Preset {
    const char* name;
    const char* tip;
    void (*apply)(Params&);
};
// a plain camera: the point fixed at (X, Y), a step and a turn
void camera(Params& p, int x, int y, float step, float turn) {
    p.introCentre = false, p.cx = x, p.cy = y;
    p.introCamera = false, p.step = step, p.turn = turn;
}
const Preset kPresets[] = {
    {"Solo semillas", "Sin realimentación: A se borra cada frame. Esto es todo lo que se dibuja de verdad.",
     [](Params& p) { p.feed = false; }},
    {"Ecos del título", "Solo el título, el punto abajo y sin giro: sus copias anteriores se apilan, cada "
     "una más grande, en rayos que salen del punto.",
     [](Params& p) { camera(p, 128, 190, 0.85f, 0), p.dots = 0, p.blink = Params::kBlinkOff; }},
    {"Estelas", "Solo los dots, el punto en el centro: cada uno deja una estela que huye del punto.",
     [](Params& p) { camera(p, 128, 100, 0.93f, 0), p.title = false, p.blink = Params::kBlinkOff; }},
    {"Espiral", "El título con un giro de 9 grados por frame: los ecos se tuercen en espiral.",
     [](Params& p) { camera(p, 128, 150, 0.9f, 0.15f), p.dots = 0, p.blink = Params::kBlinkOff; }},
    {"Bordes", "El punto cerca de una esquina y 63 grados por frame, como el intro hacia T 22: el borde "
     "borrado (0, gris) entra y se estira en las bandas rectas.",
     [](Params& p) { camera(p, 40, 30, 0.88f, 1.1f); }},
    {"Solo el punto", "El punto solo apenas deja nada: cerca de él la imagen casi no se mueve y su valor se "
     "queda en un disco. Lo que se ve viene sobre todo del título y los dots.",
     [](Params& p) { camera(p, 128, 100, 0.9f, 0), p.dots = 0, p.title = false; }},
    {"Contraer", "Paso mayor que 1: la imagen se encoge hacia el punto en vez de salir de él, y por los "
     "bordes entra lo que hay fuera.",
     [](Params& p) { camera(p, 128, 100, 1.06f, 0); }},
    {"Sin blur", "Sin difuminado, la ampliación solo da píxeles gordos que se estiran.",
     [](Params& p) { p.blur = false; }},
    {"Sin acarreo", "El blur tira los 2 bits bajos de cada suma: se pierde un poco cada frame y todo se apaga.",
     [](Params& p) { p.carry = false; }},
};

void help(const char* text) {
    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::GetStyleColorVec4(ImGuiCol_TextDisabled));
    ImGui::TextWrapped("%s", text);
    ImGui::PopStyleColor();
}

void panel(Runner& r, Ui& u, SDL_Texture* shown, float width, float height) {
    Params& p = r.p;
    const feedback::Info& in = r.fb->info();
    ImGui::SetNextWindowPos(ImVec2(0, 0));
    ImGui::SetNextWindowSize(ImVec2(width, height));
    ImGui::Begin("Feedback", nullptr,
                 ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse |
                     ImGuiWindowFlags_NoTitleBar);
    ImGui::PushItemWidth(-150);

    ImGui::SeparatorText("Estado");
    const double step = in.zoom / 65536.0;
    ImGui::Text("T = %.2f s   %s", in.T, r.loop ? "(la parte, en bucle)" : "(sin fin)");
    ImGui::Text("Paso %.4f: la imagen x%.3f por frame", step, step > 0 ? 1 / step : 0.0);
    ImGui::Text("Giro %.2f grados por frame", in.angle * 180 / 3.14159265);
    ImGui::Text("Punto (%d, %d) %s", in.px, in.py, in.lit ? "encendido" : "apagado");

    ImGui::SeparatorText("Tiempo");
    if (ImGui::Button(u.paused ? "Seguir (Espacio)" : "Pausa (Espacio)")) u.paused = !u.paused;
    ImGui::SameLine();
    if (ImGui::Button("Un frame (N)")) r.step();
    ImGui::SameLine();
    if (ImGui::Button("Reiniciar (R)")) r.restart();
    ImGui::SliderFloat("Frames por segundo", &u.fps, 1, 80, "%.1f", ImGuiSliderFlags_Logarithmic);
    ImGui::SetItemTooltip("El intro: 79,5. Más despacio se ve cada paso del bucle.");
    float ts = (float)r.tScale;
    if (ImGui::SliderFloat("T por frame", &ts, 0, 2, "x%.2f")) r.tScale = ts;
    ImGui::SetItemTooltip("Cuánto avanza el reloj del intro en cada frame (x1). Con 0 la cámara y las "
                          "semillas se quedan quietas, pero la realimentación sigue.");
    ImGui::SliderFloat("Ir a T", &u.goTo, 0, 38, "%.1f s");
    ImGui::SameLine();
    if (ImGui::Button("Ir")) r.build(u.goTo, p);
    ImGui::SetItemTooltip("Calcula desde T = 0, con los parámetros de ahora (hasta 1 s)");
    if (ImGui::Button("Limpiar A y B (C)")) r.fb->clearPictures();
    ImGui::SetItemTooltip("Todo a negro: el efecto se vuelve a construir solo a partir de las semillas");

    ImGui::SeparatorText("Experimentos");
    for (size_t i = 0; i < std::size(kPresets); i++) {
        if (i % 3) ImGui::SameLine();
        if (ImGui::Button(kPresets[i].name)) p = Params{}, kPresets[i].apply(p);
        ImGui::SetItemTooltip("%s", kPresets[i].tip);
    }
    if (ImGui::Button("Valores del intro (I)")) p = Params{};

    ImGui::SeparatorText("1. Semillas en A");
    help("Lo único que se dibuja cada frame. Todo lo demás es la imagen anterior.");
    ImGui::Combo("Punto", &p.blink, "Parpadea (intro)\0Siempre encendido\0No se dibuja\0");
    ImGui::SetItemTooltip("Encendido el primer tercio de cada 1/2,93 s: cada destello da un anillo");
    ImGui::SliderInt("Dots", &p.dots, 0, 100);
    ImGui::SetItemTooltip("Cruces de 5 píxeles en curvas de Lissajous: dejan estelas");
    ImGui::Checkbox("Título", &p.title);

    ImGui::SeparatorText("2. Blur A -> B");
    help("Cada píxel, la media de sus 4 vecinos: suaviza lo que el zoom estira.");
    ImGui::Checkbox("Difuminar (B)", &p.blur);
    ImGui::BeginDisabled(!p.blur);
    ImGui::Checkbox("Acarrear el resto", &p.carry);
    ImGui::SetItemTooltip("Los 2 bits que pierde la división entre 4 pasan a los 4 píxeles siguientes "
                          "(difusión de error). Sin ellos la imagen se oscurece cada frame.");
    ImGui::EndDisabled();

    ImGui::SeparatorText("3. Rotozoom B -> A");
    help("B vuelve sobre A, ampliada y girada alrededor del punto. Es el motor del efecto.");
    ImGui::Checkbox("Realimentar (F)", &p.feed);
    ImGui::BeginDisabled(!p.feed);
    bool manual = !p.introCamera;
    if (ImGui::Checkbox("Cámara a mano", &manual)) {
        p.introCamera = !manual;
        if (manual) p.step = (float)step, p.turn = in.angle;
    }
    ImGui::BeginDisabled(p.introCamera);
    ImGui::SliderFloat("Paso", &p.step, 0.5f, 1.25f, "%.3f");
    ImGui::SetItemTooltip("Texels de B por píxel de A. Menor que 1: amplía, la imagen sale del punto. "
                          "Mayor que 1: encoge, entra en él (y por los bordes entra lo que hay fuera).");
    float deg = p.turn * 180 / 3.14159265f;
    if (ImGui::SliderFloat("Giro", &deg, -90, 90, "%.1f grados")) p.turn = deg * 3.14159265f / 180;
    ImGui::EndDisabled();
    bool fixed = !p.introCentre;
    if (ImGui::Checkbox("Punto fijo (clic en la imagen)", &fixed)) {
        p.introCentre = !fixed;
        if (fixed) p.cx = in.px, p.cy = in.py;
    }
    ImGui::BeginDisabled(p.introCentre);
    ImGui::SliderInt("x", &p.cx, 2, 253);
    ImGui::SliderInt("y", &p.cy, 2, 197);
    ImGui::EndDisabled();
    ImGui::EndDisabled();

    ImGui::SeparatorText("Vista");
    ImGui::Combo("Mostrar", &u.show, "B (la pantalla)\0A (B realimentada)\0");
    ImGui::SetItemTooltip("A: el comienzo del frame siguiente, antes de las semillas y el blur");
    ImGui::Combo("Color", &u.colour, "La del intro\0Paleta 1 (azul)\0Paleta 2 (rojo)\0Gris (valor 0-63)\0");
    ImGui::Checkbox("Marcar el punto", &u.mark);
    if (ImGui::Checkbox("Suavizar (bilineal)", &u.smooth))
        SDL_SetTextureScaleMode(shown, u.smooth ? SDL_SCALEMODE_LINEAR : SDL_SCALEMODE_NEAREST);

    ImGui::PopItemWidth();
    ImGui::End();
}

}  // namespace

int main(int argc, char** argv) {
    std::string dumpDir;
    int scale = 1, frames = 80;
    double start = 20;
    bool loop = false;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dumpDir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--start" && i + 1 < argc) start = std::clamp(std::atof(argv[++i]), 0.0, 38.0);
        else if (a == "--loop") loop = true;
        else {
            std::fprintf(stderr, "usage: ctslasse-feedback [--start S] [--loop] [--scale N] | --dump DIR [--frames N] [--start S] [--loop]\n");
            return 1;
        }
    }
    Runner r(start);
    r.loop = loop;
    if (!dumpDir.empty()) return dump(r, dumpDir, frames);

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    SDL_Window* win = SDL_CreateWindow("ctslasse-feedback", 1400 * scale, 820 * scale,
                                       SDL_WINDOW_RESIZABLE | SDL_WINDOW_HIGH_PIXEL_DENSITY);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    if (!win || !ren) {
        std::fprintf(stderr, "SDL: %s\n", SDL_GetError());
        return 1;
    }
    SDL_SetRenderVSync(ren, 1);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGui::GetIO().IniFilename = nullptr;
    ImGui::StyleColorsDark();
    const float dpi = SDL_GetWindowDisplayScale(win);
    ImGui::GetStyle().ScaleAllSizes(dpi * scale);
    ImGui::GetIO().FontGlobalScale = dpi * scale;
    ImGui_ImplSDL3_InitForSDLRenderer(win, ren);
    ImGui_ImplSDLRenderer3_Init(ren);

    SDL_Texture* shown = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, feedback::W,
                                           feedback::H);
    SDL_SetTextureScaleMode(shown, SDL_SCALEMODE_NEAREST);

    Ui u;
    u.goTo = (float)start;
    std::vector<uint32_t> argb(feedback::W * feedback::H);
    SDL_FRect pic = {0, 0, 1, 1};   // where the picture is drawn, in output pixels
    const Uint64 freq = SDL_GetPerformanceFrequency();
    Uint64 last = SDL_GetPerformanceCounter();
    double due = 0;                 // the effect's frames owed
    bool running = true;
    // a click or drag on the picture: the point fixed there
    auto pointAt = [&](float wx, float wy) {
        float sx = wx, sy = wy;
        SDL_RenderCoordinatesFromWindow(ren, wx, wy, &sx, &sy);
        if (sx < pic.x || sy < pic.y || sx >= pic.x + pic.w || sy >= pic.y + pic.h) return;
        r.p.introCentre = false;
        r.p.cx = std::clamp((int)((sx - pic.x) / pic.w * feedback::W), 2, 253);
        r.p.cy = std::clamp((int)((sy - pic.y) / pic.h * feedback::H) + 1, 2, 197);  // screen row 0 is B's row 1
    };
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            ImGui_ImplSDL3_ProcessEvent(&e);
            if (e.type == SDL_EVENT_QUIT) running = false;
            const bool mouseFree = !ImGui::GetIO().WantCaptureMouse;
            if (e.type == SDL_EVENT_MOUSE_BUTTON_DOWN && e.button.button == SDL_BUTTON_LEFT && mouseFree)
                pointAt(e.button.x, e.button.y);
            if (e.type == SDL_EVENT_MOUSE_MOTION && (e.motion.state & SDL_BUTTON_LMASK) && mouseFree)
                pointAt(e.motion.x, e.motion.y);
            if (e.type != SDL_EVENT_KEY_DOWN || e.key.repeat || ImGui::GetIO().WantCaptureKeyboard) continue;
            switch (e.key.scancode) {
            case SDL_SCANCODE_ESCAPE: running = false; break;
            case SDL_SCANCODE_SPACE: u.paused = !u.paused; break;
            case SDL_SCANCODE_N: r.step(); break;
            case SDL_SCANCODE_R: r.restart(), due = 0; break;
            case SDL_SCANCODE_L: r.loop = !r.loop, r.restart(), due = 0; break;
            case SDL_SCANCODE_C: r.fb->clearPictures(); break;
            case SDL_SCANCODE_B: r.p.blur = !r.p.blur; break;
            case SDL_SCANCODE_F: r.p.feed = !r.p.feed; break;
            case SDL_SCANCODE_I: r.p = Params{}; break;
            default: break;
            }
        }
        const Uint64 now = SDL_GetPerformanceCounter();
        if (!u.paused) due += (double)(now - last) / (double)freq * u.fps;
        last = now;
        due = std::min(due, 8.0);   // fallen behind: skip ahead rather than catch up
        for (; due >= 1; due -= 1) r.step();

        int ww, wh;
        SDL_GetRenderOutputSize(ren, &ww, &wh);
        const float panelW = std::min(460.0f * dpi * scale, ww * 0.5f);

        ImGui_ImplSDLRenderer3_NewFrame();
        ImGui_ImplSDL3_NewFrame();
        ImGui::NewFrame();
        panel(r, u, shown, panelW, (float)wh);
        ImGui::Render();

        colourise(*r.fb, u, argb.data());
        SDL_UpdateTexture(shown, nullptr, argb.data(), feedback::W * 4);
        SDL_SetRenderDrawColor(ren, 24, 24, 28, 255);
        SDL_RenderClear(ren);
        // 256 x 198 as on the intro's 4:3 screen (pixels 5 wide by 6 tall), as large as fits
        {
            const float areaW = ww - panelW, aspect = feedback::W * 5.0f / (feedback::H * 6.0f);
            float w = areaW * 0.96f, h = w / aspect;
            if (h > wh * 0.96f) h = wh * 0.96f, w = h * aspect;
            pic = {panelW + (areaW - w) / 2, (wh - h) / 2, w, h};
        }
        SDL_RenderTexture(ren, shown, nullptr, &pic);
        if (u.mark) {
            const feedback::Info& in = r.fb->info();
            const float x = pic.x + (in.px + 0.5f) * pic.w / feedback::W;
            const float y = pic.y + (in.py - 1 + 0.5f) * pic.h / feedback::H;
            const float k = 10 * dpi * scale;
            SDL_SetRenderDrawColor(ren, 0, 255, 128, 255);
            SDL_RenderLine(ren, x - k, y, x - k / 3, y);
            SDL_RenderLine(ren, x + k / 3, y, x + k, y);
            SDL_RenderLine(ren, x, y - k, x, y - k / 3);
            SDL_RenderLine(ren, x, y + k / 3, x, y + k);
        }
        ImGui_ImplSDLRenderer3_RenderDrawData(ImGui::GetDrawData(), ren);
        SDL_RenderPresent(ren);
    }

    ImGui_ImplSDLRenderer3_Shutdown();
    ImGui_ImplSDL3_Shutdown();
    ImGui::DestroyContext();
    SDL_DestroyTexture(shown);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
