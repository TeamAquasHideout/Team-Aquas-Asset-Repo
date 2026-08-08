Hello, credit is preferred but not required (I'd have no way of knowing if you give credit anyway lol).
Feel free to reach out to `specker1` on Discord if you have any problems adding this song or it doesn't sound like the preview.

## Installation

**Note**: This song requires you change `| (5 << SOUND_MODE_MAXCHN_SHIFT)` TO `| (12 << SOUND_MODE_MAXCHN_SHIFT)` in `src/m4a.c`!
This song plays *way* more than just 5 samples at a time!

- Move the `drums` folder into wherever you have your DirectSound samples
    - Also move `pl_musicbox62.bin` to your sounds directory.
- Add the imports from `new_direct_soundata.inc` to your `direct_sound_data.inc`.
    - the paths for the samples assume they're inside a `drums` folder, keep that in mind. You can change this by editing `new_direct_soundata.inc` in this repo before copying to your `direct_sound_data.inc`.
- Include the song in your `midi.cfg`:
    `mus_jazzy_song:                     -E -R10 -G_jazzy_song -V110`
    - I didn't notice any cliping/crackling at this volume, feel free to set reverb and volume to taste. Note that setting the volume *too* low might mute some lower-velocity notes.
- Include the two new voicegroups in your `voice_groups.inc` file.
- Include the new song in your `song_table.inc` file.
- Add the song wherever the other songs are mentioned. Please consult external documentation on this, I forget where else you have to add it.
## Tips & Tricks
- The drums in the `drums` folder are from DP/HG, which I got from Emerald Imperium. I have no clue where they come from before that. 
- The drums don't actually use *all* the samples included in the `drums` folder, and frankly it's a bit irresponsible of me to just throw 'em all in there like I am, but feel free to strip out the samples I don't use.

- The song might feel more authentic to RSE if you move the shakers from the drum pattern to their own noise channel. There is 1 channel left out of the 12 default limit. I didn't do this because it sounds like shit.
- The preview was recorded in a romhack that uses IPatix's HQ Mixer. 
- The song was arranged in stereo. I don't warranty how it sounds in mono.