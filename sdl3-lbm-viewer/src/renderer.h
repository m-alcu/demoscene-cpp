#pragma once

#include <memory>
#include <string>
#include <cstdint>
#include "ui.h"

struct SDL_Window;
struct SDL_Renderer;
struct SDL_Texture;

/**
 * Renderizador SDL3 para mostrar imágenes
 */
class Renderer {
public:
    Renderer(const std::string& title, int width, int height);
    ~Renderer();

    /**
     * Carga y muestra una imagen RGBA
     */
    void loadImage(const uint32_t* pixels, uint32_t width, uint32_t height);

    /**
     * Procesa eventos y retorna false si se debe cerrar
     */
    bool processEvents();

    /**
     * Renderiza la imagen actual
     */
    void render();

    /**
     * Obtiene si la ventana está abierta
     */
    bool isOpen() const { return open; }

    /**
     * Obtiene el estado de la UI
     */
    UIState& getUIState() { return ui_state; }

    /**
     * Establece la información de la imagen en la UI
     */
    void setImageInfo(const std::string& filename, int width, int height, 
                      int planes, int colors);

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* texture;
    uint32_t image_width;
    uint32_t image_height;
    bool open;
    UIState ui_state;

    void cleanup();
};
