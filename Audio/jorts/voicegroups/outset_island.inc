voice_group outset_island
	.rept 40
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings @ 40
	.rept 4
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_pizzicato_strings, 255, 226, 0, 38 @ 45
	.rept 2
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings @ 48
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings @ 49
	.rept 20
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_french_horn_keysplit, keysplit_french_horn @ 70
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 0, 255, 127 @ 71
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 0, 255, 127 @ 72
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 0, 255, 127 @ 73
	.rept 44
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit_all voicegroup_outset_island_drumset @ 118
