#include "image_loader.h"
#include "lbm_loader.h"

#include <algorithm>
#include <cctype>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <stdexcept>

#define STB_IMAGE_IMPLEMENTATION
#define STBI_ONLY_BMP
#define STBI_ONLY_PNG
#define STBI_ONLY_GIF
#include "stb/stb_image.h"

namespace {

std::string lowerExtension(const std::string& filename) {
    std::string ext = std::filesystem::path(filename).extension().string();
    std::transform(ext.begin(), ext.end(), ext.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    return ext;
}

bool isLBM(const std::string& ext) {
    return ext == ".lbm" || ext == ".iff" || ext == ".ilbm";
}

uint32_t be32(const uint8_t* p) { return (uint32_t(p[0]) << 24) | (p[1] << 16) | (p[2] << 8) | p[3]; }
uint16_t le16(const uint8_t* p) { return uint16_t(p[0] | (p[1] << 8)); }
uint32_t le32(const uint8_t* p) { return p[0] | (p[1] << 8) | (p[2] << 16) | (uint32_t(p[3]) << 24); }

// Lee la profundidad de color y el tamaño de paleta de la cabecera (solo informativo)
void readFormatInfo(const std::vector<uint8_t>& d, LoadedImage& img) {
    const size_t n = d.size();
    if (img.format == "PNG" && n >= 33) {
        int depth = d[24], color_type = d[25];
        static const int channels[] = {1, 0, 3, 1, 2, 0, 4};
        img.bits_per_pixel = (color_type <= 6) ? depth * std::max(1, channels[color_type]) : depth;
        if (color_type == 3) {
            // Buscar el chunk PLTE
            for (size_t pos = 8; pos + 8 <= n;) {
                uint32_t len = be32(&d[pos]);
                if (std::equal(d.begin() + pos + 4, d.begin() + pos + 8, "PLTE")) {
                    img.num_colors = int(len / 3);
                    break;
                }
                if (std::equal(d.begin() + pos + 4, d.begin() + pos + 8, "IDAT")) break;
                pos += 12 + size_t(len);
            }
        }
    } else if (img.format == "BMP" && n >= 50) {
        img.bits_per_pixel = le16(&d[28]);
        if (img.bits_per_pixel <= 8) {
            uint32_t used = le32(&d[46]);
            img.num_colors = used ? int(used) : (1 << img.bits_per_pixel);
        }
    } else if (img.format == "GIF" && n >= 13) {
        uint8_t packed = d[10];
        img.bits_per_pixel = (packed & 7) + 1;
        if (packed & 0x80) img.num_colors = 1 << img.bits_per_pixel;
    }
}

LoadedImage loadWithStb(const std::string& filename, const std::string& ext) {
    std::ifstream f(filename, std::ios::binary);
    if (!f) throw std::runtime_error("No se pudo abrir " + filename);
    std::vector<uint8_t> data((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
    if (data.empty()) throw std::runtime_error("Archivo vacío: " + filename);

    int w = 0, h = 0, comp = 0;
    // Para GIF animados stb devuelve el primer fotograma
    stbi_uc* rgba = stbi_load_from_memory(data.data(), int(data.size()), &w, &h, &comp, 4);
    if (!rgba) {
        throw std::runtime_error(std::string("No se pudo decodificar ") + filename +
                                 ": " + stbi_failure_reason());
    }

    LoadedImage img;
    img.width = uint32_t(w);
    img.height = uint32_t(h);
    img.format = ext == ".png" ? "PNG" : ext == ".gif" ? "GIF" : "BMP";
    img.bits_per_pixel = comp * 8;
    img.pixels.resize(size_t(w) * h);
    for (size_t i = 0; i < img.pixels.size(); ++i) {
        const stbi_uc* p = rgba + i * 4;
        img.pixels[i] = (uint32_t(p[3]) << 24) | (p[0] << 16) | (p[1] << 8) | p[2];
    }
    stbi_image_free(rgba);

    readFormatInfo(data, img);
    return img;
}

} // namespace

bool ImageLoader::isSupported(const std::string& filename) {
    std::string ext = lowerExtension(filename);
    return isLBM(ext) || ext == ".bmp" || ext == ".png" || ext == ".gif";
}

LoadedImage ImageLoader::load(const std::string& filename) {
    std::string ext = lowerExtension(filename);

    if (isLBM(ext)) {
        LBMImage lbm = LBMLoader::load(filename);
        LoadedImage img;
        img.width = lbm.width;
        img.height = lbm.height;
        img.bits_per_pixel = lbm.num_planes;
        img.num_colors = lbm.num_colors;
        img.format = "LBM";
        img.pixels = LBMLoader::toRGBA(lbm);
        return img;
    }
    if (ext == ".bmp" || ext == ".png" || ext == ".gif") {
        return loadWithStb(filename, ext);
    }
    throw std::runtime_error("Formato no soportado: " + filename);
}
