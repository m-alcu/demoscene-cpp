# LBM Viewer - SDL3 + ImGui

Visor interactivo de imágenes LBM (Interleaved Bitmap) con interfaz gráfica ImGui.

## Características

- ✅ Carga imágenes LBM (8 planos interleaveados)
- ✅ Soporta compresión RLE
- ✅ UI moderna con ImGui
- ✅ Controles de zoom y pan
- ✅ Navegación entre archivos del mismo directorio
- ✅ Información detallada de la imagen

## Compilación

```bash
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

## Uso

### Abrir un archivo o un directorio
```bash
./build/lbm-viewer /ruta/a/imagen.lbm
./build/lbm-viewer /ruta/a/directorio   # sin argumentos: directorio actual
```

En el panel **Archivos** aparecen `[..] Subir`, las carpetas (`[DIR]`) y los
ficheros LBM: un clic en una carpeta entra en ella y un clic en un fichero lo abre.

### Atajos de Teclado

| Tecla | Función |
|-------|---------|
| `ESC` / `Q` | Salir |
| `I` | Toggle Panel Información |
| `C` | Toggle Panel Controles |
| `←` / `P` | Archivo anterior |
| `→` / `N` | Archivo siguiente |
| `L` | Toggle Lista de Archivos |
| `Backspace` | Directorio padre |

### Controles en UI

- **Zoom**: Slider 0.1x a 5.0x
- **Pan**: Ajuste de posición X/Y
- **Navegación**: Botones o atajos de teclado

## Asociación con el Sistema (Linux)

### Opción 1: Script automático
```bash
./register-lbm-viewer.sh
```

### Opción 2: Manual
1. Copiar archivo .desktop a aplicaciones:
   ```bash
   mkdir -p ~/.local/share/applications
   cp lbm-viewer.desktop ~/.local/share/applications/
   ```

2. Hacer clic derecho en un archivo `.lbm` → Abrir con → LBM Viewer

## Estructura del Proyecto

```
src/
├── main.cpp          - Punto de entrada
├── renderer.*        - Renderizador SDL3 + ImGui
├── ui.*              - Interfaz gráfica
├── lbm_loader.*      - Cargador de archivos LBM
└── vendor/imgui/     - Biblioteca ImGui + backends SDL3

assets/               - Archivos LBM de ejemplo
tools/                - Utilidades (crear_test_lbm.py)
```

## Formato LBM Soportado

- **Tipo**: ILBM (Interleaved Bitmap)
- **Planos**: Hasta 8 planos (256 colores)
- **Compresión**: Sin comprimir y RLE
- **Extensiones**: .lbm, .LBM

## Ejemplos

### Navegar entre archivos
```bash
# Abre test_1.lbm y permite navegar con ← / →
./build/lbm-viewer assets/test_1.lbm
```

### Crear archivos de prueba
```bash
python3 tools/create_test_lbm.py test.lbm
```

## Dependencias

- SDL3
- CMake 3.20+
- C++17

## Notas

- El programa escanea automáticamente el directorio del archivo abierto
- Los archivos se muestran en orden alfabético
- La posición actual se muestra en el panel Información

## Licencia

MIT

## Autor

Creado para demoscene retro y archivos gráficos antiguos.
