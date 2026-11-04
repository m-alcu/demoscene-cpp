# SDL3 LBM Viewer

Visor de imágenes LBM (Interleaved Bitmap) desarrollado en C++ usando SDL3.

## Características

- **Carga de imágenes LBM**: Soporta archivos ILBM (formato estándar de Amiga)
- **Compresión RLE**: Descompresión automática de imágenes comprimidas
- **Paleta de colores**: Carga y aplica paletas de color personalizadas
- **Renderizado SDL3**: Visualización moderna y eficiente
- **Escalado inteligente**: Mantiene relación de aspecto al redimensionar la ventana

## Requisitos

- CMake 3.20 o superior
- C++17 o superior
- SDL3 (https://github.com/libsdl-org/SDL)

### Instalación de dependencias

#### Linux (Ubuntu/Debian)
```bash
sudo apt-get install libsdl3-dev cmake
```

#### Linux (Fedora)
```bash
sudo dnf install SDL3-devel cmake
```

#### macOS
```bash
brew install sdl3 cmake
```

#### Windows
Descargar SDL3 desde https://github.com/libsdl-org/SDL y configurar CMAKE_PREFIX_PATH

## Compilación

```bash
# Crear directorio de compilación
mkdir build
cd build

# Configurar con CMake
cmake .. -DCMAKE_BUILD_TYPE=Release

# Compilar
cmake --build . -j8
```

## Uso

```bash
./build/lbm-viewer <archivo.lbm>
```

### Controles

- **ESC** o **Q**: Salir de la aplicación
- **Cerrar ventana**: Salir de la aplicación

## Estructura del proyecto

```
sdl3-lbm-viewer/
├── CMakeLists.txt          # Configuración de CMake
├── README.md               # Este archivo
├── .gitignore              # Archivos a ignorar en Git
└── src/
    ├── main.cpp            # Punto de entrada principal
    ├── lbm_loader.h        # Definición del cargador LBM
    ├── lbm_loader.cpp      # Implementación del cargador LBM
    ├── renderer.h          # Definición del renderizador SDL3
    └── renderer.cpp        # Implementación del renderizador SDL3
```

## Formato LBM/ILBM

LBM (Interleaved Bitmap) es un formato de archivo gráfico originario de Amiga que almacena:

- **BMHD**: Header del bitmap (dimensiones, profundidad, compresión)
- **CMAP**: Mapa de colores (paleta)
- **BODY**: Datos de píxeles (comprimidos o sin comprimir)

Este visor soporta:
- ✅ Imágenes con y sin compresión RLE
- ✅ Paletas de hasta 256 colores
- ✅ Imágenes de múltiples planos
- ✅ Masking y transparencia

## Ejemplos

Si tienes archivos LBM de prueba, puedes visualizarlos:

```bash
# Ejemplo con archivo LBM
./build/lbm-viewer sample.lbm
```

## Desarrollo

Para modificar o extender el proyecto:

1. Los archivos fuente están en `src/`
2. Modifica `CMakeLists.txt` si añades nuevas dependencias
3. Recompila con `cmake --build build`

## Licencia

Este proyecto se proporciona bajo licencia MIT.

## Referencias

- [SDL3 Documentation](https://wiki.libsdl.org/SDL3/)
- [IFF/ILBM Format Specification](http://www.martinreddy.net/gfx/2d/IFF.txt)
- [Amiga Graphics Architecture](http://www.graphics.cs.cmu.edu/neff/amiga/AmigaGraphics.html)
