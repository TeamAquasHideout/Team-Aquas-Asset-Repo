voice_group forest_haven
	voice_keysplit_all voicegroup_forest_haven_drumset @ 0
	.rept 10
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204 @ 11
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0 @ 12
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204 @ 13
	.rept 59
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_french_horn_keysplit, keysplit_french_horn @ 73
	.rept 30
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_low, 255, 0, 255, 127 @ 104
