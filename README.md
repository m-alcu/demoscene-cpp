# demoscene-cpp

Colección de portes en C++17/SDL3 de clásicos de la escena demo: intros, demos, diskettes y utilidades. Cada proyecto incluye traducciones routine-by-routine del código original, verificadas frame-by-frame contra la ejecución original. Las recreaciones (megablast-blob, megablast-tunnel, tsbdemo) y los efectos propios (gouraud-torus, plasma-palette, scroll-sprites-raster, tunnel-rotozoom, voxel-landscape) se indican como tales.

## Proyectos

### Intros

- [**arnial**](arnial/) - Puerto de ARNIAL (LCUB, 1995): rotación, zoom y pan de un bitmap en modo X
- [**asm94**](asm94/) - Traducción del Assembly '94 invitation intro (1994)
- [**ctslasse**](ctslasse/) - Traducción del 64K intro Lasse Reinbøng (Cubic Team & $eeN, 1995)
- [**cyboman2**](cyboman2/) - Traducción del 64K intro "Cyboman 2: The Inner Loop" (Complex, 1994)
- [**desert**](desert/) - Puerto del 128-byte intro Desert Fractal (ETERNAL, 1996)
- [**drift**](drift/) - Traducción del 64K intro DRIFT, ganador en Assembly '95 (Wild Light)
- [**gouraud-torus**](gouraud-torus/) - Efecto propio al estilo 1993-95: toro con sombreado Gouraud, rasterizado por software a 320x200x256 (rampa de paleta, algoritmo del pintor, scanlines en coma fija). Incluye el toro de Cyboman 2 (Complex, 1994) con su malla, sus materiales y sus paletas
- [**hexappeal**](hexappeal/) - Puerto de la sección final de "HEX APPEAL" (Cascada, 1993)
- [**insert-chipcity**](insert-chipcity/) - Escena "chip city" del 64K Win32 Insert No Coins (Razor 1911, 2010): las mismas llamadas OpenGL 1.x, float a float, que la traza del original (3005 frames)
- [**plasma-palette**](plasma-palette/) - Efecto propio al estilo 1992-95: tres plasmas de tablas de senos en bytes, ciclado de paleta y fundidos de 64 pasos entre cuatro paletas, a 320x200x256 y 70 Hz
- [**projange**](projange/) - Traducción del demo Project Angel (Impact Studios, 1994)
- [**rbgdemo2**](rbgdemo2/) - Puerto del vector demo "Black Glass ][" (Tran/Renaissance, 1992)
- [**scroll-sprites-raster**](scroll-sprites-raster/) - Efecto propio al estilo 1990-94: barras raster (color 0 distinto en cada scanline), sprites de bolas sombreadas y un scroller sinusoidal con sombra y degradado cíclico
- [**show**](show/) - Traducción del demo Show (Majic 12, 1994)
- [**tsbdemo**](tsbdemo/) - Réplica del demo "The Sound Barrier" (Tran/Renaissance, 1991)
- [**tunnel-rotozoom**](tunnel-rotozoom/) - Efecto propio al estilo 1993-96: túnel texturizado con tablas precalculadas de ángulo y distancia (centro móvil, niebla por paleta) y rotozoom en coma fija 16.16
- [**voxel-landscape**](voxel-landscape/) - Efecto propio al estilo Comanche (1992): vuelo sobre un paisaje voxel con heightmap diamond-square, rayos por columna con y-buffer, niebla por paleta y cámara que alabea en los giros

### Wish (Majic 12, In Bloom '93)

Partes del demo, verificadas contra la ejecución emulada con un modelo del haz por scanline (`rea/wish-analisis`).

- [**wish-bars**](wish-bars/) - Las barras rojas y verdes de la parte 18: "beam racing" que reescribe una sola línea de vídeo en cada retrazado horizontal, con estelas que forman una cinta retorcida; 1995 frames idénticos

### Diskettes y revistas

- [**imphobia7**](imphobia7/) - Puerto del Imphobia Issue #7 diskmag (1993)
- [**imphobia8**](imphobia8/) - Puerto del Imphobia Issue #8 diskmag (1994)
- [**imphobia9**](imphobia9/) - Puerto del Imphobia Issue #9 diskmag (1995)
- [**imphobia10**](imphobia10/) - Puerto del Imphobia Issue #10 diskmag (1995)
- [**imphobia11**](imphobia11/) - Puerto del Imphobia Issue #11 diskmag (1995)
- [**imphobia12**](imphobia12/) - Puerto del Imphobia Issue #12 diskmag (1996)
- [**journey**](journey/) - Puerto de los Journey music disks (Future Crew, 1993)

### Kaleidoscopico (lft, Raspberry Pi Pico 2)

Partes del demo para Pico 2 (RISC-V), verificadas frame a frame contra el emulador kemu (`rea/kaleido-analisis`).

- [**kaleido-bars**](kaleido-bars/) - Partes 15-17: barras verticales giradas sobre fondo de fibra de carbono; la tecla `i` muestra el scroll aplicado a cada fila
- [**kaleido-tunnel**](kaleido-tunnel/) - Parte 46: el túnel, con el sólido de la parte 7 (hexaedro tetrakis con relleno XOR) en lugar del globo
- [**kaleido-snowflake**](kaleido-snowflake/) - Parte 27: copo de nieve con normal mapping y estrellas
- [**kaleido-dotsphere**](kaleido-dotsphere/) - Parte 41: esfera de puntos

### Megablast (Orange, 1996)

Escenas del demo de PC, analizadas con el emulador de `rea/megademo-analisis`.

- [**megablast-feedback**](megablast-feedback/) - Escena del tablero: video feedback a través de una lente precalculada, bit a bit idéntica al original
- [**megablast-blob**](megablast-blob/) - Recreación (no puerto) del blob de gelatina luminoso, hecha a partir de una captura
- [**megablast-tunnel**](megablast-tunnel/) - Primera recreación de la escena del tablero como túnel; sustituida por megablast-feedback

### Second Reality (Future Crew, 1993)

Partes portadas desde el código fuente publicado por Future Crew, verificadas contra capturas de `SECOND.EXE` en DOSBox (`rea/2ndreal-analisis`).

- [**2ndreal-water**](2ndreal-water/) - Esferas espejo sobre el agua con la espada que las atraviesa: las 58 capturas coinciden bit a bit

### Club Honey (Acme, Bizarre '98)

Puerto de CLUB.EXE (Watcom LE, motor 3D con keyframer de 3D Studio), verificado contra la ejecución emulada (`rea/b98dem15-analisis`).

- [**clubhoney-star**](clubhoney-star/) - La estrella cromada con environment map, la cámara animada y el fundido a verde: 266 frames idénticos bit a bit

### Utilidades y visualizadores

- [**lbm-viewer**](lbm-viewer/) - Visor de imágenes LBM (formato Amiga)
- [**modvis**](modvis/) - Reproductor de módulos MOD y S3M con visualización de notas
