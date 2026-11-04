#!/usr/bin/env python3
"""
Script de utilidad para trabajar con imágenes LBM.
Permite convertir entre formatos y crear archivos de prueba.
"""

import struct
import os
import sys

def create_test_lbm(filename, width=320, height=200):
    """
    Crea un archivo LBM de prueba con un patrón de color
    """
    print(f"Creando archivo LBM de prueba: {filename}")
    
    # Crear paleta simple (256 colores en gradiente)
    palette_data = bytearray()
    for i in range(256):
        palette_data.extend([i, i, i])  # Escala de grises
    
    # Crear datos de imagen (patrón simple)
    image_data = bytearray()
    for y in range(height):
        for x in range(width):
            # Patrón diagonal
            pixel = ((x + y) // 2) % 256
            image_data.append(pixel)
    
    # Construir archivo ILBM
    with open(filename, 'wb') as f:
        # FORM chunk
        form_size = 12 + 20 + (len(palette_data) + 1) + (len(image_data) + 1)  # Aproximado
        f.write(b'FORM')
        f.write(struct.pack('>I', form_size))
        f.write(b'ILBM')
        
        # BMHD chunk
        f.write(b'BMHD')
        f.write(struct.pack('>I', 20))  # Tamaño BMHD
        f.write(struct.pack('>H', width))      # ancho
        f.write(struct.pack('>H', height))     # alto
        f.write(struct.pack('>h', 0))          # x_offset
        f.write(struct.pack('>h', 0))          # y_offset
        f.write(struct.pack('B', 8))           # num_planes (8 bits = 256 colores)
        f.write(struct.pack('B', 0))           # masking
        f.write(struct.pack('B', 0))           # compression (0 = sin comprimir)
        f.write(struct.pack('B', 0))           # transparency
        f.write(struct.pack('>H', 72))         # x_aspect
        f.write(struct.pack('>H', 72))         # y_aspect
        f.write(struct.pack('>H', width))      # page_width
        f.write(struct.pack('>H', height))     # page_height
        
        # CMAP chunk
        f.write(b'CMAP')
        f.write(struct.pack('>I', len(palette_data)))
        f.write(palette_data)
        
        # BODY chunk
        f.write(b'BODY')
        f.write(struct.pack('>I', len(image_data)))
        f.write(image_data)
    
    print(f"Archivo creado: {filename}")
    print(f"Dimensiones: {width}x{height}")
    print(f"Tamaño: {os.path.getsize(filename)} bytes")

if __name__ == "__main__":
    if len(sys.argv) > 1:
        output_file = sys.argv[1]
    else:
        output_file = "test.lbm"
    
    create_test_lbm(output_file)
    print("\nPuedes usar el archivo con:")
    print(f"  ./build/lbm-viewer {output_file}")
