# demoscene-cpp

Colección de portes en C++17/SDL3 de clásicos de la escena demo: intros, demos, diskettes y utilidades. Cada proyecto incluye traducciones routine-by-routine del código original, verificadas frame-by-frame contra la ejecución original. Las recreaciones (megablast-blob, megablast-tunnel, tsbdemo) se indican como tales.

## Proyectos

### Intros

- [**arnial**](arnial/) - Puerto de ARNIAL (LCUB, 1995): rotación, zoom y pan de un bitmap en modo X
- [**asm94**](asm94/) - Traducción del Assembly '94 invitation intro (1994)
- [**ctslasse**](ctslasse/) - Traducción del 64K intro Lasse Reinbøng (Cubic Team & $eeN, 1995)
- [**cyboman2**](cyboman2/) - Traducción del 64K intro "Cyboman 2: The Inner Loop" (Complex, 1994)
- [**desert**](desert/) - Puerto del 128-byte intro Desert Fractal (ETERNAL, 1996)
- [**drift**](drift/) - Traducción del 64K intro DRIFT, ganador en Assembly '95 (Wild Light)
- [**hexappeal**](hexappeal/) - Puerto de la sección final de "HEX APPEAL" (Cascada, 1993)
- [**projange**](projange/) - Traducción del demo Project Angel (Impact Studios, 1994)
- [**rbgdemo2**](rbgdemo2/) - Puerto del vector demo "Black Glass ][" (Tran/Renaissance, 1992)
- [**show**](show/) - Traducción del demo Show (Majic 12, 1994)
- [**tsbdemo**](tsbdemo/) - Réplica del demo "The Sound Barrier" (Tran/Renaissance, 1991)

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

### Utilidades y visualizadores

- [**lbm-viewer**](lbm-viewer/) - Visor de imágenes LBM (formato Amiga)
- [**modvis**](modvis/) - Reproductor de módulos MOD y S3M con visualización de notas
