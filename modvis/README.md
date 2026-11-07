# modvis

A C++17 / SDL3 / Dear ImGui player for ProTracker **MOD** and Scream
Tracker 3 **S3M** modules. It shows the notes as they play. The Journey view
follows the playing screen of Future Crew's MusicDiscPlayer (the *Journey*
music disks, see `../journey`).

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j
./build/modvis [FILE.mod | FILE.s3m | DIR]
./build/modvis --wav OUT.wav FILE          # render once through, no window
./build/modvis --shot PREFIX SECONDS FILE  # (testing) save each view as PREFIX_N.bmp
```

Dear ImGui 1.92.4 and its SDL3 / SDL_Renderer backends are in
`third_party/imgui` (MIT). SDL3 is found with pkg-config. Fonts come from the
system's DejaVu fonts if they are installed, or ImGui's built-in font if not.

## Using it

**Left panel**
- **Folders:** browse the file system. Double click a folder to open it, or
  a module to play it. The other modules in that folder become the playlist.
  You can type a path, or filter the folder by name.
- **Search:** finds modules in every folder below a root folder, as you
  watch (it runs in the background). An empty name lists every module there.
  The results become the playlist.

You can also drop a file or folder on the window.

**Transport:** previous/next song, previous/next pattern, play/pause, stop,
volume, stereo separation (MOD channels are hard-panned LRRL), linear
interpolation, loop the song, play the next song. The bar under the buttons
shows the whole song: how many channels sound, a mark at each order, and the
position. Click or drag on it to seek.

**Views** (F1 to F5)
| | |
|---|---|
| Journey | MDP's playing screen: a slate header with title, order bar and Ord/Pat/Row, and below it a black field with a dotted column per instrument. Each sounding note is a dash at its pitch: a big red block when struck, shrinking and turning orange, yellow, then pale as it rings. Options: trails, colour by channel. |
| Piano roll | Time runs left to right, pitch bottom to top, a colour per channel. It shows the coming notes too. Slides and vibrato bend the bars. A white edge marks a note start; the note sounding now is outlined. Wheel zooms, click jumps. |
| Pattern | The tracker pattern, centred on the row being heard. Click a channel header to mute it, right click to solo. |
| Channels | An oscilloscope, level, pan, note and sample for each channel, with mute and solo. |
| Samples | Every sample: lit while it plays, with length, loop, volume, finetune or C2Spd, and its waveform. |

A keyboard along the bottom lights the keys being played, in channel colours.

**Keys:** Space play/pause, Left/Right pattern, PgUp/PgDn song, F1–F5 view,
1–9 and 0 mute channels 1–10 (with Shift: solo).

## How it works

- `module.cpp` loads MOD (15 and 31 samples; M.K., FLT4/8, xCHN, xxCH…) and
  S3M (8/16-bit, signed or not, pan table) into one format. MOD periods become
  notes, with the same internal octaves as S3M. MOD notes are still shown
  with ProTracker octave numbers.
- `player.cpp` is one sequencer for both formats. Effects follow ProTracker
  for MOD and Scream Tracker 3 for S3M: arpeggio, portamentos (fine and extra
  fine), tone portamento, vibrato and fine vibrato, tremolo, tremor, volume
  slides (fine, ST3 fast slides), sample offset, retrigger with volume
  change, note cut and delay, pattern loop, break, jump and delay,
  speed/tempo, global volume, panning, finetune. The mixer is float, with
  linear interpolation and a 64-sample volume ramp on each change and each
  note start.
- When a song loads, the player runs it once **dry** (sequencer only, no
  mixing, a few ms per song). This records every tick:
  where it starts, order, pattern and row, and each channel's pitch (slides
  included), volume, instrument and pan. All the views draw from this
  timeline, at the position the listener hears now. That position is the
  audio clock (samples rendered, minus SDL's queue, minus the device
  buffer), smoothed with the frame clock. So the views can show what comes
  next, and seeking means replaying silently up to the target.
- A song ends when it would play a row it has already played (pattern loops
  excepted), or at the end of its order list.

## Checks

The test was the Journey disks' 13 S3Ms and 2 MODs, against the `../journey`
port, whose emulated GUS gives the original player's sound.
- **Spectrum:** for Aquaphobia (S3M) and Shadowrun (MOD), first 40 s,
  correlation of semitone-band spectra every 40 ms after alignment:
  median 0.95 and 0.94. Shifting by one semitone gives 0.40–0.71.
- **Song length:** the same as MDP's after its ~1 s load, except where MDP's
  STMIK rounds the tick rate down to whole hertz. Tempo 124 (49.6 Hz) runs
  at 49 Hz, and T81 (51.6 Hz) at 51 Hz. That makes Turbulence and Purple Sky
  II 1.2% longer there. modvis keeps ST3's exact rate.

## Not done

XM/IT, S3M AdLib instruments, stereo samples (only the left channel is
played), FLT8's split patterns, panbrello and glissando control. ST3's
shared effect memory covers D, E, F, I, J, K, L, Q and R. G, H, U and O
keep their own memory.
