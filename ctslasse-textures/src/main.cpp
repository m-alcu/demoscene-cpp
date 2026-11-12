// ctslasse-textures - a workbench for the textures of Lasse Reinbøng's knot
// (Cubic Team & $eeN, 1995): the generators of ctslasse-knot with their
// constants as sliders, the result shown tiled (they wrap) and coloured
// through the intro's palette or any of its ramps.
//
// Usage: ctslasse-textures [--scale N]
//            keys (outside the panel): 1-6 the texture, Space new seeds,
//                  A animate the waves, Esc quit
//        ctslasse-textures --dump DIR (no window: each texture at its
//            defaults as DIR/<name>.ppm, coloured as on screen)
#include <SDL3/SDL.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <random>
#include <string>
#include <vector>

#include "imgui.h"
#include "imgui_impl_sdl3.h"
#include "imgui_impl_sdlrenderer3.h"
#include "texgen.h"

using namespace texlab;

namespace {

enum Kind { kPlasma, kWarp, kHexes, kLight, kKnot, kPalette, kKinds };
const char* const kNames[kKinds] = {"Ruido fractal", "Material del nudo", "Hexágonos", "Luz",
                                    "Nudo (luz + material)", "Paleta"};
const char* const kFiles[kKinds] = {"plasma", "warp", "hexes", "light", "knot", "palette"};

// How the bytes become colours: as grey (stretched from the lowest to the
// highest value), as palette indices (plus an offset), or as the shade in
// one ramp (stretched to 0-31).
enum Colour { kGrey, kIndex, kRamp };
struct View {
    int colour, offset, ramp;
};

struct State {
    Kind kind = kWarp;
    PlasmaParams plasma;
    WarpParams warp;
    HexParams hex;
    LightParams light;
    PaletteParams pal;
    View view[kKinds] = {
        {kRamp, 0, 3},   // the noise: its levels as the shades of a ramp
        {kIndex, 17, 0}, // the material: ramp N's colour (entry 17, the end of black -> colour)
        {kIndex, 0, 0},  // the hexagons: indices as they are (ramp 2)
        {kRamp, 0, 2},   // the light
        {kIndex, 0, 0},  // light + material: the indices the knot draws
        {kIndex, 0, 0},
    };
    int tiles = 2;
    bool smooth = false, animate = false;
    float speed = 1.0f;

    std::vector<uint8_t> tex = std::vector<uint8_t>(kTexels);
    uint8_t rgb[768];
    int lo = 0, hi = 0, distinct = 0;
};

// The selected texture, generated.
void generate(State& s) {
    palette(s.pal, s.rgb);
    switch (s.kind) {
    case kPlasma: plasma(s.plasma, s.tex.data()); break;
    case kWarp: warp(s.warp, s.tex.data()); break;
    case kHexes: hexes(s.hex, s.tex.data()); break;
    case kLight: lighting(s.light, s.tex.data()); break;
    case kKnot: {
        std::vector<uint8_t> l(kTexels);
        warp(s.warp, s.tex.data());
        lighting(s.light, l.data());
        for (int i = 0; i < kTexels; i++) s.tex[i] = (uint8_t)(s.tex[i] + l[i]);
        break;
    }
    case kPalette:
        for (int i = 0; i < kTexels; i++) s.tex[i] = (uint8_t)((i >> 13) << 5 | (i & 0xFF) >> 3);  // 8 rows of 32
        break;
    default: break;
    }
    bool seen[256] = {};
    s.lo = 255, s.hi = 0, s.distinct = 0;
    for (uint8_t v : s.tex) {
        s.lo = std::min<int>(s.lo, v), s.hi = std::max<int>(s.hi, v);
        if (!seen[v]) seen[v] = true, s.distinct++;
    }
}

// The texture as ARGB, through the view.
void colourise(const State& s, uint32_t* out) {
    const View& v = s.view[s.kind];
    auto pal = [&](int i) {
        const uint8_t* c = s.rgb + 3 * (i & 0xFF);
        auto ch = [](uint8_t x) { return (uint32_t)(x & 0x3F) * 255 / 63; };
        return 0xFF000000u | ch(c[0]) << 16 | ch(c[1]) << 8 | ch(c[2]);
    };
    const int range = std::max(1, s.hi - s.lo);
    uint32_t lut[256];
    for (int i = 0; i < 256; i++) {
        const int n = std::clamp(i - s.lo, 0, range);
        if (s.kind == kPalette || v.colour == kIndex) lut[i] = pal(i + v.offset);
        else if (v.colour == kGrey) {
            const uint32_t g = (uint32_t)(n * 255 / range);
            lut[i] = 0xFF000000u | g << 16 | g << 8 | g;
        } else lut[i] = pal(v.ramp * 32 + n * 31 / range);
    }
    for (int i = 0; i < kTexels; i++) out[i] = lut[s.tex[i]];
}

// --- the panel ----------------------------------------------------------------------------

bool seedInput(const char* label, uint32_t& seed) {
    return ImGui::InputScalar(label, ImGuiDataType_U32, &seed, nullptr, nullptr, "%08X",
                              ImGuiInputTextFlags_CharsHexadecimal);
}

bool plasmaUI(const char* id, PlasmaParams& p, bool withBits = true) {
    ImGui::PushID(id);
    bool c = seedInput("Semilla", p.seed);
    if (withBits) c |= ImGui::SliderInt("Bits", &p.bits, 1, 8);
    c |= ImGui::SliderInt("Amplitud", &p.amp, 0, 4000);
    ImGui::SetItemTooltip("El tamaño de la parte aleatoria en el primer nivel (el intro: 500)");
    c |= ImGui::SliderFloat("Rugosidad", &p.decay, 0.1f, 1.0f, "%.2f");
    ImGui::SetItemTooltip("El factor de la amplitud de un nivel al siguiente (el intro: 0,5)");
    c |= ImGui::SliderInt("Peso centros", &p.centreMul, -8, 8);
    c |= ImGui::SliderInt("Peso lados", &p.sideMul, -8, 8);
    ImGui::PopID();
    return c;
}

bool warpUI(WarpParams& w) {
    bool c = false;
    if (ImGui::TreeNodeEx("Base (qué rampa)", ImGuiTreeNodeFlags_DefaultOpen)) {
        c |= plasmaUI("base", w.base);
        ImGui::TreePop();
    }
    if (ImGui::TreeNodeEx("Ondas", ImGuiTreeNodeFlags_DefaultOpen)) {
        c |= ImGui::SliderFloat("Amplitud##w", &w.amplitude, 0, 256, "%.1f");
        c |= ImGui::SliderFloat("Frecuencia", &w.freq, 0, 0.5f, "%.4f");
        c |= ImGui::SliderFloat("Fase", &w.phase, -3.1416f, 3.1416f, "%.3f");
        c |= ImGui::SliderInt("Divisor del ruido", &w.div, 1, 16);
        c |= ImGui::SliderInt("Desplazamiento <<", &w.shift, 0, 7);
        ImGui::SetItemTooltip("5: cada valor de la base elige una de las 8 rampas de 32");
        ImGui::TreePop();
    }
    if (ImGui::TreeNode("Ruido U (desplaza en x)")) {
        c |= plasmaUI("u", w.u, false);
        ImGui::TreePop();
    }
    if (ImGui::TreeNode("Ruido V (desplaza en y)")) {
        c |= plasmaUI("v", w.v, false);
        ImGui::TreePop();
    }
    return c;
}

bool lightUI(LightParams& l) {
    bool c = false;
    c |= ImGui::SliderFloat("Centro x", &l.cx, 0, 256, "%.0f");
    c |= ImGui::SliderFloat("Centro y", &l.cy, 0, 256, "%.0f");
    c |= ImGui::SliderFloat("Radio", &l.radius, 8, 512, "%.0f");
    c |= ImGui::SliderFloat("R máximo", &l.rmax, 0.05f, 1.0f, "%.2f");
    c |= ImGui::SliderFloat("Exponente", &l.power, 1, 400, "%.0f", ImGuiSliderFlags_Logarithmic);
    ImGui::SetItemTooltip("Cuanto mayor, más estrecho el brillo (el intro: 100)");
    c |= ImGui::SliderFloat("Divisor de R", &l.div, 1, 32, "%.1f");
    c |= ImGui::SliderFloat("Pico", &l.peak, 0, 512, "%.0f");
    c |= ImGui::SliderFloat("Pendiente", &l.slope, 0, 512, "%.0f");
    c |= ImGui::SliderFloat("Base", &l.offset, -128, 256, "%.0f");
    c |= ImGui::SliderFloat("Escala", &l.scale, 1, 32, "%.0f");
    return c;
}

bool hexUI(HexParams& h) {
    bool c = false;
    c |= ImGui::SliderInt("Paso x", &h.dx, 1, 32);
    c |= ImGui::SliderInt("Paso y", &h.dy, 1, 32);
    c |= ImGui::SliderInt("Color 1", &h.colour[0], 0, 255, "%02X");
    c |= ImGui::SliderInt("Color 2", &h.colour[1], 0, 255, "%02X");
    c |= ImGui::SliderInt("Color 3", &h.colour[2], 0, 255, "%02X");
    c |= ImGui::SliderInt("Difuminado", &h.blur, 0, 16);
    ImGui::SetItemTooltip("Pasadas de la media 3x3 (el intro: 1)");
    return c;
}

bool paletteUI(PaletteParams& p) {
    bool c = ImGui::SliderInt("Negro -> color", &p.split, 1, 31);
    ImGui::SetItemTooltip("Entradas de negro al color de la rampa; el resto va al blanco (el intro: 18)");
    for (int i = 0; i < 8; i++) {
        float f[3] = {p.colour[i][0] / 63.0f, p.colour[i][1] / 63.0f, p.colour[i][2] / 63.0f};
        char label[16];
        std::snprintf(label, sizeof label, "Rampa %d", i);
        if (ImGui::ColorEdit3(label, f)) {
            for (int k = 0; k < 3; k++) p.colour[i][k] = (int)(f[k] * 63 + 0.5f);
            c = true;
        }
    }
    if (ImGui::Button("Colores del intro")) palette8Colours(p.colour), c = true;
    return c;
}

void randomSeeds(State& s, std::mt19937& rng) {
    s.plasma.seed = rng();
    s.warp.base.seed = rng(), s.warp.u.seed = rng(), s.warp.v.seed = rng();
}

void resetKind(State& s) {
    switch (s.kind) {
    case kPlasma: s.plasma = PlasmaParams{}; break;
    case kWarp: s.warp = WarpParams{}; break;
    case kHexes: s.hex = HexParams{}; break;
    case kLight: s.light = LightParams{}; break;
    case kKnot: s.warp = WarpParams{}, s.light = LightParams{}; break;
    case kPalette: s.pal = PaletteParams{}; break;
    default: break;
    }
}

// The panel; true when the texture must be made again.
bool panel(State& s, std::mt19937& rng, SDL_Texture* shown, float width, float height) {
    ImGui::SetNextWindowPos(ImVec2(0, 0));
    ImGui::SetNextWindowSize(ImVec2(width, height));
    ImGui::Begin("Texturas", nullptr,
                 ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse |
                     ImGuiWindowFlags_NoTitleBar);
    bool c = false;
    ImGui::SeparatorText("Textura");
    int kind = s.kind;
    for (int i = 0; i < kKinds; i++) {
        char label[64];
        std::snprintf(label, sizeof label, "%d  %s", i + 1, kNames[i]);
        c |= ImGui::RadioButton(label, &kind, i);
    }
    s.kind = (Kind)kind;

    ImGui::SeparatorText("Parámetros");
    ImGui::PushItemWidth(-130);
    switch (s.kind) {
    case kPlasma: c |= plasmaUI("plasma", s.plasma); break;
    case kWarp: c |= warpUI(s.warp); break;
    case kHexes: c |= hexUI(s.hex); break;
    case kLight: c |= lightUI(s.light); break;
    case kKnot:
        if (ImGui::CollapsingHeader("Material", ImGuiTreeNodeFlags_DefaultOpen)) c |= warpUI(s.warp);
        if (ImGui::CollapsingHeader("Luz")) c |= lightUI(s.light);
        break;
    case kPalette: break;
    default: break;
    }
    if (s.kind != kPalette && ImGui::CollapsingHeader("Paleta")) c |= paletteUI(s.pal);
    if (s.kind == kPalette) c |= paletteUI(s.pal);
    if (ImGui::Button("Valores del intro")) resetKind(s), c = true;
    if (s.kind == kPlasma || s.kind == kWarp || s.kind == kKnot) {
        ImGui::SameLine();
        if (ImGui::Button("Semillas al azar (Espacio)")) randomSeeds(s, rng), c = true;
    }
    if (s.kind == kWarp || s.kind == kKnot) {
        ImGui::Checkbox("Animar la fase (A)", &s.animate);
        if (s.animate) ImGui::SliderFloat("Velocidad", &s.speed, -4, 4, "%.2f rad/s");
    }

    ImGui::SeparatorText("Vista");
    if (s.kind != kPalette) {
        View& v = s.view[s.kind];
        c |= ImGui::Combo("Color", &v.colour, "Gris\0Índices de la paleta\0Una rampa\0");
        if (v.colour == kIndex) c |= ImGui::SliderInt("Sumar al índice", &v.offset, 0, 255);
        if (v.colour == kRamp) c |= ImGui::SliderInt("Rampa", &v.ramp, 0, 7);
    }
    ImGui::SliderInt("Mosaico", &s.tiles, 1, 6, "%dx%d");
    ImGui::SetItemTooltip("Las texturas se repiten sin costuras: se ven NxN copias");
    if (ImGui::Checkbox("Suavizar (bilineal)", &s.smooth))
        SDL_SetTextureScaleMode(shown, s.smooth ? SDL_SCALEMODE_LINEAR : SDL_SCALEMODE_NEAREST);
    ImGui::PopItemWidth();

    ImGui::SeparatorText("Información");
    ImGui::Text("Valores %d..%d, %d distintos", s.lo, s.hi, s.distinct);
    if (ImGui::Button("Guardar BMP")) {
        SDL_Surface* surf = SDL_CreateSurface(kSize, kSize, SDL_PIXELFORMAT_ARGB8888);
        if (surf) {
            colourise(s, (uint32_t*)surf->pixels);
            char name[64];
            for (int i = 0; i < 1000; i++) {
                std::snprintf(name, sizeof name, "%s-%03d.bmp", kFiles[s.kind], i);
                if (!SDL_GetPathInfo(name, nullptr)) break;
            }
            if (SDL_SaveBMP(surf, name)) SDL_Log("saved %s", name);
            SDL_DestroySurface(surf);
        }
    }
    ImGui::End();
    return c;
}

int dump(const std::string& dir) {
    State s;
    std::vector<uint32_t> px(kTexels);
    for (int k = 0; k < kKinds; k++) {
        s.kind = (Kind)k;
        generate(s);
        colourise(s, px.data());
        const std::string path = dir + "/" + kFiles[k] + ".ppm";
        FILE* f = std::fopen(path.c_str(), "wb");
        if (!f) {
            std::perror(path.c_str());
            return 1;
        }
        std::fprintf(f, "P6\n%d %d\n255\n", kSize, kSize);
        for (uint32_t c : px) {
            const uint8_t rgb[3] = {(uint8_t)(c >> 16), (uint8_t)(c >> 8), (uint8_t)c};
            std::fwrite(rgb, 1, 3, f);
        }
        std::fclose(f);
    }
    return 0;
}

}  // namespace

int main(int argc, char** argv) {
    int scale = 1;
    std::string dumpDir;
    for (int i = 1; i < argc; i++) {
        const std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dumpDir = argv[++i];
        else {
            std::fprintf(stderr, "usage: ctslasse-textures [--scale N] | --dump DIR\n");
            return 1;
        }
    }
    if (!dumpDir.empty()) return dump(dumpDir);

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    SDL_Window* win = SDL_CreateWindow("ctslasse-textures", 1280 * scale, 800 * scale,
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

    SDL_Texture* shown = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, kSize, kSize);
    SDL_SetTextureScaleMode(shown, SDL_SCALEMODE_NEAREST);

    State s;
    std::mt19937 rng(std::random_device{}());
    std::vector<uint32_t> px(kTexels);
    bool dirty = true, running = true;
    Uint64 last = SDL_GetTicksNS();
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            ImGui_ImplSDL3_ProcessEvent(&e);
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type != SDL_EVENT_KEY_DOWN || e.key.repeat || ImGui::GetIO().WantCaptureKeyboard) continue;
            const SDL_Scancode k = e.key.scancode;
            if (k == SDL_SCANCODE_ESCAPE) running = false;
            else if (k >= SDL_SCANCODE_1 && k < SDL_SCANCODE_1 + kKinds) s.kind = (Kind)(k - SDL_SCANCODE_1), dirty = true;
            else if (k == SDL_SCANCODE_SPACE) randomSeeds(s, rng), dirty = true;
            else if (k == SDL_SCANCODE_A) s.animate = !s.animate;
        }
        const Uint64 now = SDL_GetTicksNS();
        const float dt = (float)(now - last) * 1e-9f;
        last = now;
        if (s.animate && (s.kind == kWarp || s.kind == kKnot)) {
            s.warp.phase += s.speed * dt;
            if (s.warp.phase > 3.14159265f) s.warp.phase -= 6.2831853f;
            if (s.warp.phase < -3.14159265f) s.warp.phase += 6.2831853f;
            dirty = true;
        }

        int ww, wh;
        SDL_GetRenderOutputSize(ren, &ww, &wh);
        const float panelW = std::min(420.0f * dpi * scale, ww * 0.5f);

        ImGui_ImplSDLRenderer3_NewFrame();
        ImGui_ImplSDL3_NewFrame();
        ImGui::NewFrame();
        dirty |= panel(s, rng, shown, panelW, (float)wh);
        if (dirty) {
            generate(s);
            colourise(s, px.data());
            SDL_UpdateTexture(shown, nullptr, px.data(), kSize * 4);
            dirty = false;
        }
        ImGui::Render();

        SDL_SetRenderDrawColor(ren, 24, 24, 28, 255);
        SDL_RenderClear(ren);
        // the tiles, as large as fits right of the panel, centred
        const float areaW = ww - panelW, side = std::min(areaW, (float)wh) * 0.95f;
        const float x0 = panelW + (areaW - side) / 2, y0 = (wh - side) / 2;
        {
            const int n = s.kind == kPalette ? 1 : s.tiles;    // the palette: 8 rows of 32, once
            const float t = side / n;
            for (int y = 0; y < n; y++)
                for (int x = 0; x < n; x++) {
                    const SDL_FRect dst = {x0 + x * t, y0 + y * t, t, t};
                    SDL_RenderTexture(ren, shown, nullptr, &dst);
                }
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
