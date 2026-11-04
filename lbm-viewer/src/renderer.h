#pragma once

#include <memory>
#include <string>
#include <cstdint>
#include "ui.h"

struct LoadedImage;

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
     * Sube una imagen decodificada a la textura y actualiza la info de la UI
     */
    void showImage(const std::string& filepath, const LoadedImage& image);

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

    /**
     * Carga los archivos de imagen del directorio actual
     */
    void scanDirectory(const std::string& filepath);

    /**
     * Cambia al directorio indicado y lista su contenido
     */
    bool changeDirectory(const std::string& dirpath);

    /**
     * Sube al directorio padre
     */
    bool goToParentDirectory();

    /**
     * Carga el siguiente archivo en el directorio
     */
    bool loadNextFile();

    /**
     * Carga el archivo anterior en el directorio
     */
    bool loadPreviousFile();

    /**
     * Carga un archivo específico por su índice
     */
    bool loadFileByIndex(int index);

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* texture;
    uint32_t image_width;
    uint32_t image_height;
    bool open;
    UIState ui_state;

    void cleanup();
    bool listDirectory(const std::string& dirpath);
};
