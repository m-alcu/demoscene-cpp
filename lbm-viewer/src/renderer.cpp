#include "renderer.h"
#include <SDL3/SDL.h>
#include <stdexcept>
#include <iostream>
#include <filesystem>
#include <algorithm>
#include <cctype>
#include "imgui_impl_sdl3.h"
#include "imgui_impl_sdlrenderer3.h"
#include "image_loader.h"

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
        SDL_PIXELFORMAT_ARGB8888,  // píxeles 0xAARRGGBB
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

void Renderer::showImage(const std::string& filepath, const LoadedImage& image) {
    loadImage(image.pixels.data(), image.width, image.height);
    setImageInfo(std::filesystem::path(filepath).filename().string(),
                 image.width, image.height, image.bits_per_pixel, image.num_colors);
    ui_state.image_format = image.format;
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
                    case SDLK_L:
                        ui_state.show_files = !ui_state.show_files;
                        break;
                    case SDLK_BACKSPACE:
                        goToParentDirectory();
                        break;
                    case SDLK_LEFT:
                    case SDLK_P:  // P para previous
                        loadPreviousFile();
                        break;
                    case SDLK_RIGHT:
                    case SDLK_N:  // N para next
                        loadNextFile();
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

    // Draw UI with callback for file selection
    drawUI(ui_state,
           [this](int index) { this->loadFileByIndex(index); },
           [this](const std::string& dir) { this->changeDirectory(dir); });

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

// Lista subdirectorios y archivos de imagen soportados (LBM, BMP, PNG, GIF) de un directorio
bool Renderer::listDirectory(const std::string& dirpath) {
    namespace fs = std::filesystem;
    std::error_code ec;

    fs::path dir = fs::absolute(dirpath, ec).lexically_normal();
    if (ec || !fs::is_directory(dir, ec)) {
        std::cerr << "No es un directorio válido: " << dirpath << std::endl;
        return false;
    }
    // Quitar barra final ("/a/b/" -> "/a/b") para que parent_path funcione bien
    if (!dir.has_filename() && dir.has_parent_path() && dir != dir.root_path()) {
        dir = dir.parent_path();
    }

    std::vector<std::string> dirs, files;
    fs::directory_iterator it(dir, fs::directory_options::skip_permission_denied, ec);
    if (ec) {
        std::cerr << "No se puede leer el directorio " << dir << ": " << ec.message() << std::endl;
        return false;
    }
    for (const auto& entry : it) {
        std::string name = entry.path().filename().string();
        if (name.empty() || name[0] == '.') continue;  // Ocultos

        std::error_code e2;
        if (entry.is_directory(e2)) {
            dirs.push_back(entry.path().string());
        } else if (entry.is_regular_file(e2)) {
            if (ImageLoader::isSupported(entry.path().string())) {
                files.push_back(entry.path().string());
            }
        }
    }

    auto ci_less = [](const std::string& a, const std::string& b) {
        return std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end(),
            [](unsigned char x, unsigned char y) { return std::tolower(x) < std::tolower(y); });
    };
    std::sort(dirs.begin(), dirs.end(), ci_less);
    std::sort(files.begin(), files.end(), ci_less);

    ui_state.current_directory = dir.string();
    ui_state.has_parent = dir.has_parent_path() && dir.parent_path() != dir;
    ui_state.subdirs = std::move(dirs);
    ui_state.files_in_dir = std::move(files);
    ui_state.current_file_index = -1;

    std::cout << "Directorio: " << dir << " (" << ui_state.subdirs.size() << " carpetas, "
              << ui_state.files_in_dir.size() << " imágenes)" << std::endl;
    return true;
}

void Renderer::scanDirectory(const std::string& filepath) {
    namespace fs = std::filesystem;
    std::error_code ec;

    if (!listDirectory(fs::absolute(filepath, ec).parent_path().string())) return;

    // Encontrar el índice del archivo actual
    fs::path target = fs::weakly_canonical(filepath, ec);
    for (size_t i = 0; i < ui_state.files_in_dir.size(); ++i) {
        if (fs::weakly_canonical(ui_state.files_in_dir[i], ec) == target) {
            ui_state.current_file_index = (int)i;
            break;
        }
    }
}

bool Renderer::changeDirectory(const std::string& dirpath) {
    // La imagen actual se mantiene en pantalla hasta que se elija otra
    return listDirectory(dirpath);
}

bool Renderer::goToParentDirectory() {
    if (!ui_state.has_parent) return false;
    namespace fs = std::filesystem;
    fs::path current(ui_state.current_directory);
    if (!listDirectory(current.parent_path().string())) return false;
    return true;
}

bool Renderer::loadNextFile() {
    int n = (int)ui_state.files_in_dir.size();
    if (n == 0) return false;
    // Si aún no hay archivo seleccionado en este directorio, empezar por el primero
    int next_index = (ui_state.current_file_index < 0) ? 0
                   : (ui_state.current_file_index + 1) % n;
    return loadFileByIndex(next_index);
}

bool Renderer::loadPreviousFile() {
    int n = (int)ui_state.files_in_dir.size();
    if (n == 0) return false;
    int prev_index = (ui_state.current_file_index < 0) ? n - 1
                   : (ui_state.current_file_index - 1 + n) % n;
    return loadFileByIndex(prev_index);
}

bool Renderer::loadFileByIndex(int index) {
    if (ui_state.files_in_dir.empty() || index < 0 || index >= (int)ui_state.files_in_dir.size()) {
        return false;
    }

    if (index == ui_state.current_file_index) {
        return true; // Ya está cargado
    }

    try {
        const std::string& file = ui_state.files_in_dir[index];
        std::cout << "Cargando archivo [" << (index + 1) << "/" << ui_state.files_in_dir.size()
                  << "]: " << file << std::endl;

        showImage(file, ImageLoader::load(file));

        ui_state.current_file_index = index;
        return true;
    } catch (const std::exception& e) {
        std::cerr << "Error al cargar archivo: " << e.what() << std::endl;
        return false;
    }
}
