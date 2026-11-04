#include "renderer.h"
#include <SDL3/SDL.h>
#include <stdexcept>
#include <iostream>
#include "imgui_impl_sdl3.h"
#include "imgui_impl_sdlrenderer3.h"

Renderer::Renderer(const std::string& title, int width, int height)
    : window(nullptr), renderer(nullptr), texture(nullptr),
      image_width(0), image_height(0), open(false) {

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        throw std::runtime_error("No se pudo inicializar SDL3");
    }

    window = SDL_CreateWindow(
        title.c_str(),
        width,
        height,
        SDL_WINDOW_RESIZABLE
    );

    if (!window) {
        SDL_Quit();
        throw std::runtime_error("No se pudo crear ventana SDL3");
    }

    renderer = SDL_CreateRenderer(window, nullptr);
    if (!renderer) {
        SDL_DestroyWindow(window);
        SDL_Quit();
        throw std::runtime_error("No se pudo crear renderizador SDL3");
    }

    SDL_SetRenderVSync(renderer, 1);

    // Initialize ImGui
    initImGui(window, renderer);

    open = true;
    std::cout << "SDL3 inicializado correctamente" << std::endl;
}

Renderer::~Renderer() {
    cleanup();
}

void Renderer::cleanup() {
    shutdownImGui();
    if (texture) {
        SDL_DestroyTexture(texture);
        texture = nullptr;
    }
    if (renderer) {
        SDL_DestroyRenderer(renderer);
        renderer = nullptr;
    }
    if (window) {
        SDL_DestroyWindow(window);
        window = nullptr;
    }
    SDL_Quit();
}

void Renderer::loadImage(const uint32_t* pixels, uint32_t width, uint32_t height) {
    if (!renderer || !pixels) {
        throw std::runtime_error("Renderizador no inicializado o píxeles nulos");
    }

    // Destruir textura anterior si existe
    if (texture) {
        SDL_DestroyTexture(texture);
    }

    // Crear nueva textura
    texture = SDL_CreateTexture(
        renderer,
        SDL_PIXELFORMAT_RGBA8888,
        SDL_TEXTUREACCESS_STATIC,
        width,
        height
    );

    if (!texture) {
        throw std::runtime_error("No se pudo crear textura SDL3");
    }

    // Copiar datos de píxeles
    SDL_UpdateTexture(texture, nullptr, pixels, width * sizeof(uint32_t));

    image_width = width;
    image_height = height;

    std::cout << "Imagen cargada: " << width << "x" << height << std::endl;
}

void Renderer::setImageInfo(const std::string& filename, int width, int height, 
                             int planes, int colors) {
    ui_state.loaded_file = filename;
    ui_state.image_width = width;
    ui_state.image_height = height;
    ui_state.num_planes = planes;
    ui_state.num_colors = colors;
}

bool Renderer::processEvents() {
    SDL_Event event;

    while (SDL_PollEvent(&event)) {
        ImGui_ImplSDL3_ProcessEvent(&event);

        switch (event.type) {
            case SDL_EVENT_QUIT:
                open = false;
                return false;

            case SDL_EVENT_KEY_DOWN:
                switch (event.key.key) {
                    case SDLK_ESCAPE:
                    case SDLK_Q:
                        open = false;
                        return false;
                    case SDLK_I:
                        ui_state.show_info = !ui_state.show_info;
                        break;
                    case SDLK_C:
                        ui_state.show_controls = !ui_state.show_controls;
                        break;
                    default:
                        break;
                }
                break;

            case SDL_EVENT_WINDOW_CLOSE_REQUESTED:
                open = false;
                return false;

            default:
                break;
        }
    }

    return open;
}

void Renderer::render() {
    if (!renderer) return;

    // Start ImGui frame
    imguiBeginFrame();

    // Draw UI
    drawUI(ui_state);

    // Limpiar pantalla con color negro
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    if (texture) {
        // Calcular rectángulo destino (centrado y escalado si es necesario)
        int window_width, window_height;
        SDL_GetWindowSize(window, &window_width, &window_height);

        // Aplicar zoom y pan desde UI
        float effective_scale = (ui_state.zoom_level);
        
        // Mantener aspecto
        float scale_x = (float)window_width / image_width;
        float scale_y = (float)window_height / image_height;
        float scale = (scale_x < scale_y) ? scale_x : scale_y;
        scale *= effective_scale;

        int dest_width = (int)(image_width * scale);
        int dest_height = (int)(image_height * scale);
        int dest_x = (window_width - dest_width) / 2 + (int)ui_state.pan_x;
        int dest_y = (window_height - dest_height) / 2 + (int)ui_state.pan_y;

        SDL_FRect dest_rect = {
            (float)dest_x,
            (float)dest_y,
            (float)dest_width,
            (float)dest_height
        };

        SDL_RenderTexture(renderer, texture, nullptr, &dest_rect);
    }

    // Render ImGui
    imguiEndFrame(renderer);

    // Presentar
    SDL_RenderPresent(renderer);
}
