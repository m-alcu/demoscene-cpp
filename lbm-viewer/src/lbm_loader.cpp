#include "lbm_loader.h"
#include <cstdio>
#include <cstring>
#include <stdexcept>
#include <algorithm>

// IFF chunk identifiers
#define MAKE_ID(a,b,c,d) ((uint32_t)(a)<<24 | (uint32_t)(b)<<16 | (uint32_t)(c)<<8 | (uint32_t)(d))

const uint32_t ID_FORM = MAKE_ID('F','O','R','M');
const uint32_t ID_ILBM = MAKE_ID('I','L','B','M');
const uint32_t ID_PBM = MAKE_ID('P','B','M',' ');
const uint32_t ID_BMHD = MAKE_ID('B','M','H','D');
const uint32_t ID_CMAP = MAKE_ID('C','M','A','P');
const uint32_t ID_BODY = MAKE_ID('B','O','D','Y');

LBMImage LBMLoader::load(const std::string& filename) {
    FILE* file = fopen(filename.c_str(), "rb");
    if (!file) {
        throw std::runtime_error("No se puede abrir archivo: " + filename);
    }

    LBMImage image = {};

    // Leer FORM header
    uint8_t header[12];
    if (fread(header, 1, 12, file) != 12) {
        fclose(file);
        throw std::runtime_error("Archivo LBM demasiado pequeño");
    }

    // Verificar FORM y tipo ILBM o PBM
    uint32_t form_id = (header[0] << 24) | (header[1] << 16) | (header[2] << 8) | header[3];
    uint32_t form_type = (header[8] << 24) | (header[9] << 16) | (header[10] << 8) | header[11];

    if (form_id != ID_FORM || (form_type != ID_ILBM && form_type != ID_PBM)) {
        fclose(file);
        throw std::runtime_error("No es un archivo ILBM/PBM válido");
    }
    image.is_pbm = (form_type == ID_PBM);

    // Leer chunks
    bool has_header = false;
    bool has_body = false;

    while (true) {
        uint32_t chunk_id, chunk_size;
        if (fread(&chunk_id, 4, 1, file) != 1) break;
        if (fread(&chunk_size, 4, 1, file) != 1) break;

        // Convertir de big-endian
        chunk_id = ((chunk_id & 0xFF) << 24) | ((chunk_id & 0xFF00) << 8) | 
                   ((chunk_id & 0xFF0000) >> 8) | ((chunk_id >> 24) & 0xFF);
        chunk_size = ((chunk_size & 0xFF) << 24) | ((chunk_size & 0xFF00) << 8) | 
                     ((chunk_size & 0xFF0000) >> 8) | ((chunk_size >> 24) & 0xFF);

        if (chunk_id == ID_BMHD) {
            // Leer bitmap header
            std::vector<uint8_t> bmhd_data(chunk_size);
            if (fread(bmhd_data.data(), 1, chunk_size, file) != chunk_size) {
                fclose(file);
                throw std::runtime_error("Error leyendo BMHD chunk");
            }

            image.width = (bmhd_data[0] << 8) | bmhd_data[1];
            image.height = (bmhd_data[2] << 8) | bmhd_data[3];
            image.num_planes = bmhd_data[8];
            image.masking = bmhd_data[9];
            image.compression = bmhd_data[10];

            has_header = true;
        } 
        else if (chunk_id == ID_CMAP) {
            // Leer colormap
            image.num_colors = chunk_size / 3;
            image.palette.resize(image.num_colors);

            for (uint32_t i = 0; i < image.num_colors; ++i) {
                uint8_t r, g, b;
                if (fread(&r, 1, 1, file) != 1 ||
                    fread(&g, 1, 1, file) != 1 ||
                    fread(&b, 1, 1, file) != 1) {
                    fclose(file);
                    throw std::runtime_error("Error leyendo CMAP chunk");
                }
                image.palette[i] = (0xFF << 24) | (r << 16) | (g << 8) | b;
            }
        } 
        else if (chunk_id == ID_BODY) {
            // Leer body (datos de píxeles)
            std::vector<uint8_t> body_data(chunk_size);
            if (fread(body_data.data(), 1, chunk_size, file) != chunk_size) {
                fclose(file);
                throw std::runtime_error("Error leyendo BODY chunk");
            }

            if (image.compression == 1) {
                // RLE compression
                image.pixels = decompressRLE(body_data.data(), body_data.size(),
                                            image.width, image.height, image.num_planes + (image.masking == 1 ? 1 : 0), image.is_pbm);
            } else {
                // Sin comprimir
                image.pixels = body_data;
            }

            has_body = true;
        } 
        else {
            // Saltar chunks desconocidos
            fseek(file, chunk_size, SEEK_CUR);
        }

        // Alinear a frontera de 2 bytes
        if (chunk_size & 1) {
            fseek(file, 1, SEEK_CUR);
        }
    }

    fclose(file);

    if (!has_header || !has_body) {
        throw std::runtime_error("Archivo LBM incompleto o inválido");
    }

    return image;
}

std::vector<uint32_t> LBMLoader::toRGBA(const LBMImage& image) {
    std::vector<uint32_t> rgba_data(image.width * image.height);
    
    if (image.num_planes == 0 || image.pixels.empty()) {
        // Imagen inválida
        std::fill(rgba_data.begin(), rgba_data.end(), 0xFF000000);
        return rgba_data;
    }

    // Calcular bytes por línea de escaneo (redondeados a palabra)
    uint32_t bytes_per_line = ((image.width + 15) / 16) * 2;
    // En ILBM con masking==1 cada línea lleva un plano extra de máscara
    uint32_t stored_planes = image.num_planes + (image.masking == 1 ? 1 : 0);

    // ILBM "deep" (24/32 planos): color real sin paleta.
    // Planos 0-7 = R, 8-15 = G, 16-23 = B (24-31 = alfa, se ignora). Bit LSB primero.
    if (!image.is_pbm && image.num_planes >= 24) {
        std::vector<uint32_t> rgb(image.width * image.height, 0);
        for (uint32_t y = 0; y < image.height; ++y) {
            for (uint32_t plane = 0; plane < 24; ++plane) {
                size_t plane_offset = (size_t)y * bytes_per_line * stored_planes + plane * bytes_per_line;
                uint32_t shift = (plane < 8) ? 16 + plane          // R
                               : (plane < 16) ? 8 + (plane - 8)    // G
                               : (plane - 16);                     // B
                for (uint32_t byte_x = 0; byte_x < bytes_per_line && plane_offset + byte_x < image.pixels.size(); ++byte_x) {
                    uint8_t byte_val = image.pixels[plane_offset + byte_x];
                    if (!byte_val) continue;
                    for (int bit = 7; bit >= 0; --bit) {
                        uint32_t x = byte_x * 8 + (7 - bit);
                        if (x < image.width && (byte_val & (1 << bit))) {
                            rgb[y * image.width + x] |= (1u << shift);
                        }
                    }
                }
            }
        }
        for (size_t i = 0; i < rgba_data.size(); ++i) {
            rgba_data[i] = 0xFF000000 | rgb[i];
        }
        return rgba_data;
    }

    // Si no hay paleta, usar una paleta por defecto
    if (image.palette.empty()) {
        for (size_t i = 0; i < rgba_data.size(); ++i) {
            uint8_t gray = (i % 256);
            rgba_data[i] = (0xFF << 24) | (gray << 16) | (gray << 8) | gray;
        }
        return rgba_data;
    }

    // Desinterleavear planos y convertir a índices de paleta
    std::vector<uint8_t> palette_indices(image.width * image.height, 0);

    if (image.is_pbm) {
        // PBM (Deluxe Paint PC): chunky, 1 byte por píxel, filas alineadas a par
        uint32_t row_bytes = (image.width + 1) & ~1u;
        for (uint32_t y = 0; y < image.height; ++y) {
            size_t row = (size_t)y * row_bytes;
            for (uint32_t x = 0; x < image.width && row + x < image.pixels.size(); ++x) {
                palette_indices[y * image.width + x] = image.pixels[row + x];
            }
        }
    } else
    for (uint32_t y = 0; y < image.height; ++y) {
        for (uint8_t plane = 0; plane < image.num_planes; ++plane) {
            // Offset en el buffer de píxeles para este plano en esta línea
            size_t plane_offset = y * bytes_per_line * stored_planes + plane * bytes_per_line;

            for (uint32_t byte_x = 0; byte_x < bytes_per_line && plane_offset + byte_x < image.pixels.size(); ++byte_x) {
                uint8_t byte_val = image.pixels[plane_offset + byte_x];

                // Procesar cada bit del byte (del MSB al LSB)
                for (int bit = 7; bit >= 0; --bit) {
                    uint32_t x = byte_x * 8 + (7 - bit);
                    if (x < image.width) {
                        uint32_t pixel_index = y * image.width + x;
                        if (byte_val & (1 << bit)) {
                            palette_indices[pixel_index] |= (1 << plane);
                        }
                    }
                }
            }
        }
    }

    // Convertir índices a RGBA usando paleta
    for (size_t i = 0; i < rgba_data.size(); ++i) {
        uint8_t palette_index = palette_indices[i];
        if (palette_index < image.palette.size()) {
            rgba_data[i] = image.palette[palette_index];
        } else {
            rgba_data[i] = 0xFF000000; // Negro por defecto
        }
    }

    return rgba_data;
}

std::vector<uint8_t> LBMLoader::decompressRLE(const uint8_t* data, size_t size,
                                              uint32_t width, uint32_t height,
                                              uint8_t planes, bool is_pbm) {
    std::vector<uint8_t> decompressed;
    size_t pos = 0;
    uint32_t expected_size;
    if (is_pbm) {
        expected_size = ((width + 1) & ~1u) * height;
    } else {
        uint32_t bytes_per_line = ((width + 15) / 16) * 2;
        expected_size = bytes_per_line * height * planes;
    }
    
    decompressed.reserve(expected_size);

    while (pos < size && decompressed.size() < expected_size) {
        uint8_t code = data[pos++];

        if (code == 0x80) {
            // NOP en ByteRun1
            continue;
        } else if (code & 0x80) {
            // RLE comprimido: repetir siguiente byte
            uint8_t count = 257 - code;
            if (pos >= size) break;
            uint8_t value = data[pos++];

            for (uint8_t i = 0; i < count && decompressed.size() < expected_size; ++i) {
                decompressed.push_back(value);
            }
        } else {
            // Datos literales
            uint8_t count = code + 1;
            for (uint8_t i = 0; i < count && pos < size && decompressed.size() < expected_size; ++i) {
                decompressed.push_back(data[pos++]);
            }
        }
    }

    // Rellenar con ceros si es necesario
    while (decompressed.size() < expected_size) {
        decompressed.push_back(0);
    }

    return decompressed;
}
