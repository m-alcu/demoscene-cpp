#pragma once

#include <cstdint>
#include <string>
#include <vector>

/**
 * Imagen ya decodificada, lista para mostrar.
 * Píxeles empaquetados como 0xAARRGGBB (SDL_PIXELFORMAT_ARGB8888).
 */
struct LoadedImage {
    uint32_t width = 0;
    uint32_t height = 0;
    int bits_per_pixel = 0;          // Planos en LBM, bits por píxel en el resto
    int num_colors = 0;              // Colores de paleta (0 = color real)
    std::string format;              // "LBM", "BMP", "PNG", "GIF"
    std::vector<uint32_t> pixels;
};

/**
 * Cargador genérico: elige el decodificador según la extensión.
 * LBM/IFF/ILBM con el cargador propio; BMP, PNG y GIF con stb_image.
 */
class ImageLoader {
public:
    /** @throws std::runtime_error si no se puede cargar */
    static LoadedImage load(const std::string& filename);

    /** true si la extensión (sin distinguir mayúsculas) es de un formato soportado */
    static bool isSupported(const std::string& filename);
};
