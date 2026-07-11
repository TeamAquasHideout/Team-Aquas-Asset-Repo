voice_group minish_village
	voice_keysplit_all voicegroup_minish_village_drumset @ 0
	.rept 7
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit_all voicegroup_minish_village_drumset @ 8
	.rept 2
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204 @ 11
	.rept 36
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings @ 48
	.rept 11
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_french_horn_keysplit, keysplit_french_horn @ 60
	.rept 11
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 0, 255, 127 @ 72
	.rept 7
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0 @ 80
