# Guía de Inicio Rápido

## 1. Instalación de SDL3

### Linux (Ubuntu/Debian)
```bash
sudo apt-get update
sudo apt-get install libsdl3-dev cmake build-essential
```

### Linux (Fedora)
```bash
sudo dnf install SDL3-devel cmake gcc-c++
```

### macOS
```bash
brew install sdl3 cmake
```

### Windows
1. Descargar SDL3 desde https://github.com/libsdl-org/SDL/releases
2. Extraer en una carpeta conocida
3. En VS Code, abrir el terminal integrado en el directorio del proyecto
4. Configurar CMAKE_PREFIX_PATH al compilar

## 2. Compilar el proyecto

### Opción A: Usando CMake directamente
```bash
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . -j8
```

### Opción B: Usando Makefile (Linux/macOS)
```bash
make build
```

### Opción C: Desde VS Code
- Instalar extensión "CMake Tools"
- Abrir la carpeta del proyecto
- La compilación se puede hacer desde la paleta de comandos (Ctrl+Shift+P)

## 3. Crear una imagen de prueba

```bash
# Usar el script Python para crear un LBM de prueba
python3 tools/create_test_lbm.py test.lbm
```

O con Makefile:
```bash
make test-image
```

## 4. Ejecutar el visor

### Con archivo de prueba
```bash
./build/lbm-viewer test.lbm
```

### Con imagen personalizada
```bash
./build/lbm-viewer /ruta/a/tu/imagen.lbm
```

## 5. Estructura del código

### `lbm_loader.h/cpp`
- Carga archivos ILBM (formato Amiga)
- Descomprime datos RLE
- Convierte a formato RGBA de 32 bits

### `renderer.h/cpp`
- Inicializa SDL3
- Crea ventana y renderizador
- Maneja eventos (ESC para salir)
- Renderiza la imagen escalada manteniendo aspecto

### `main.cpp`
- Orquesta cargador y renderizador
- Gestiona el loop principal

## 6. Solución de problemas

### "SDL3 not found"
- Verificar que SDL3 está instalado: `pkg-config --modversion SDL3`
- En Windows, establecer CMAKE_PREFIX_PATH

### "Falta archivo LBM"
- Crear uno con: `python3 tools/create_test_lbm.py test.lbm`
- O usar una imagen LBM existente

### Error de compilación
- Asegurar C++17: `cmake .. -DCMAKE_CXX_STANDARD=17`
- Limpiar build: `rm -rf build && mkdir build`

## 7. Desarrollo posterior

Para extender el proyecto:

1. **Agregar más formatos**: Copiar estructura de `LBMLoader` para nuevos formatos
2. **Mejorar UI**: Añadir interfaz con ImGui
3. **Animations**: Implementar soporte para secuencias de animaciones
4. **Efectos**: Zoom, pan, transformaciones en tiempo real

## 8. Referencias

- [SDL3 Documentation](https://wiki.libsdl.org/SDL3/)
- [IFF/ILBM File Format](http://www.martinreddy.net/gfx/2d/IFF.txt)
- [CMake Documentation](https://cmake.org/documentation/)
