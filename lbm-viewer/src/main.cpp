#include <iostream>
#include <filesystem>
#include <SDL3/SDL.h>
#include "image_loader.h"
#include "renderer.h"

namespace fs = std::filesystem;

void printUsage(const char* program_name) {
    std::cout << "Uso: " << program_name << " [imagen.lbm|.bmp|.png|.gif | directorio]" << std::endl;
    std::cout << "\nControles:" << std::endl;
    std::cout << "  ESC o Q - Salir" << std::endl;
    std::cout << "  I - Toggle Panel Información" << std::endl;
    std::cout << "  C - Toggle Panel Controles" << std::endl;
    std::cout << "  L - Toggle Lista de Archivos" << std::endl;
    std::cout << "  ← o P - Archivo anterior" << std::endl;
    std::cout << "  → o N - Archivo siguiente" << std::endl;
    std::cout << "  Backspace - Directorio padre" << std::endl;
    std::cout << "  CERRAR VENTANA - Salir" << std::endl;
}

int main(int argc, char* argv[]) {
    // Sin argumentos: abrir el directorio actual
    std::string target = (argc >= 2) ? argv[1] : fs::current_path().string();

    // Verificar que existe
    if (!fs::exists(target)) {
        std::cerr << "Error: No encontrado: " << target << std::endl;
        printUsage(argv[0]);
        return 1;
    }

    try {
        std::cout << "Inicializando SDL3 con ImGui..." << std::endl;
        Renderer renderer("LBM Viewer - SDL3", 1000, 750);

        if (fs::is_directory(target)) {
            // Abrir un directorio: mostrar su contenido, sin imagen cargada
            renderer.changeDirectory(target);
        } else {
            std::cout << "Cargando imagen: " << target << std::endl;
            LoadedImage image = ImageLoader::load(target);
            std::cout << "Imagen " << image.format << " cargada: " << image.width << "x" << image.height
                      << " bpp: " << image.bits_per_pixel
                      << " colores: " << image.num_colors << std::endl;

            renderer.showImage(target, image);

            // Escanear directorio para encontrar otras imágenes
            renderer.scanDirectory(target);
        }

        std::cout << "Presiona ESC, Q, o cierra la ventana para salir" << std::endl;
        std::cout << "Presiona ← / → o P / N para navegar entre archivos, Backspace para subir" << std::endl;

        while (renderer.isOpen()) {
            // Wait for events with timeout to keep loop responsive
            SDL_WaitEventTimeout(nullptr, 16);

            if (!renderer.processEvents()) {
                break;
            }
            renderer.render();
        }

        std::cout << "Programa terminado correctamente" << std::endl;
        return 0;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
}
