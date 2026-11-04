#pragma once

#include <cstdint>
#include <vector>
#include <string>

/**
 * Estructura para almacenar una imagen LBM (Interleaved Bitmap)
 * Formato típicamente utilizado en Amiga y otras plataformas retro
 */
struct LBMImage {
    uint32_t width;
    uint32_t height;
    uint16_t num_planes;
    uint16_t compression;
    std::vector<uint8_t> pixels;      // Datos de píxeles crudos
    std::vector<uint32_t> palette;    // Paleta RGBA (256 colores máx)
    uint16_t num_colors;
};

/**
 * Cargador de imágenes LBM
 * Soporta formatos comprimidos (RLE) y sin comprimir
 */
class LBMLoader {
public:
    /**
     * Carga una imagen LBM desde un archivo
     * @param filename Ruta al archivo LBM
     * @return Estructura LBMImage con los datos cargados
     * @throws std::runtime_error si hay error al cargar
     */
    static LBMImage load(const std::string& filename);

    /**
     * Convierte la imagen LBM a formato RGBA de 32 bits
     * @param image Imagen LBM con datos de índice de paleta
     * @return Vector de píxeles en formato RGBA
     */
    static std::vector<uint32_t> toRGBA(const LBMImage& image);

private:
    // Estructura interna para el header ILBM
    struct ILBMHeader {
        uint32_t width;
        uint32_t height;
        int16_t x_offset;
        int16_t y_offset;
        uint8_t num_planes;
        uint8_t masking;
        uint8_t compression;
        uint8_t transparency;
        uint16_t x_aspect;
        uint16_t y_aspect;
        uint16_t page_width;
        uint16_t page_height;
    };

    static bool readChunk(FILE* file, uint32_t& chunk_id, uint32_t& chunk_size);
    static ILBMHeader readBitmapHeader(const uint8_t* data, size_t size);
    static std::vector<uint8_t> decompressRLE(const uint8_t* data, size_t size, 
                                               uint32_t width, uint32_t height, 
                                               uint8_t planes);
};
