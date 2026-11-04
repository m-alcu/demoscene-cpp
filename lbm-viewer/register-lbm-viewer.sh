#!/bin/bash

# Script para registrar LBM Viewer como la aplicación predeterminada para archivos .LBM

DESKTOP_FILE="$HOME/.local/share/applications/lbm-viewer.desktop"
DESKTOP_SOURCE="$(dirname "$0")/lbm-viewer.desktop"
VIEWER_PATH="$(dirname "$0")/build/lbm-viewer"

# Crear directorio si no existe
mkdir -p "$(dirname "$DESKTOP_FILE")"

# Copiar el archivo .desktop
cp "$DESKTOP_SOURCE" "$DESKTOP_FILE"

# Actualizar la ruta completa en el archivo desktop
sed -i "s|Exec=.*|Exec=$VIEWER_PATH %F|" "$DESKTOP_FILE"

echo "✓ LBM Viewer registrado como aplicación predeterminada"
echo "✓ Archivo .desktop instalado en: $DESKTOP_FILE"

# Registrar el tipo MIME
xdg-mime default lbm-viewer.desktop image/x-lbm 2>/dev/null

echo ""
echo "Ahora puedes:"
echo "1. Hacer clic derecho en archivos .LBM → Abrir con → LBM Viewer"
echo "2. Ejecutar: ./build/lbm-viewer archivo.lbm"
echo ""
echo "Atajos de teclado:"
echo "  ← / P  - Archivo anterior"
echo "  → / N  - Archivo siguiente"
echo "  I      - Toggle información"
echo "  C      - Toggle controles"
echo "  ESC/Q  - Salir"
