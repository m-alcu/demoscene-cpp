#include <iostream>
#include <filesystem>
#include <SDL3/SDL.h>
#include "lbm_loader.h"
#include "renderer.h"

namespace fs = std::filesystem;

void printUsage(const char* program_name) {
    std::cout << "Uso: " << program_name << " <archivo.lbm>" << std::endl;
    std::cout << "\nControles:" << std::endl;
    std::cout << "  ESC o Q - Salir" << std::endl;
    std::cout << "  I - Toggle Panel Información" << std::endl;
    std::cout << "  C - Toggle Panel Controles" << std::endl;
    std::cout << "  CERRAR VENTANA - Salir" << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Error: Se requiere especificar un archivo LBM" << std::endl;
        printUsage(argv[0]);
        return 1;
    }

    std::string filename = argv[1];

    // Verificar que el archivo existe
    if (!fs::exists(filename)) {
        std::cerr << "Error: Archivo no encontrado: " << filename << std::endl;
        return 1;
    }

    try {
        std::cout << "Cargando imagen LBM: " << filename << std::endl;

        // Cargar imagen LBM
        LBMImage image = LBMLoader::load(filename);
        std::cout << "Imagen cargada: " << image.width << "x" << image.height 
                  << " planos: " << (int)image.num_planes 
                  << " colores: " << image.num_colors << std::endl;

        // Convertir a RGBA
        std::cout << "Convirtiendo a formato RGBA..." << std::endl;
        auto rgba_pixels = LBMLoader::toRGBA(image);

        // Crear renderizador
        std::cout << "Inicializando SDL3 con ImGui..." << std::endl;
        Renderer renderer("LBM Viewer - SDL3", 1000, 750);

        // Establecer información de la imagen en la UI
        renderer.setImageInfo(fs::path(filename).filename().string(), 
                             image.width, image.height, 
                             image.num_planes, image.num_colors);

        // Cargar imagen en el renderizador
        renderer.loadImage(rgba_pixels.data(), image.width, image.height);

        // Loop principal
        std::cout << "Presiona ESC, Q, o cierra la ventana para salir" << std::endl;
        std::cout << "Presiona I para toggle información, C para toggle controles" << std::endl;
        
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
