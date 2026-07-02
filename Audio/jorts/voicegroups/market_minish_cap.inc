voice_group market_minish_cap
	.rept 8
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit_all voicegroup_market_minish_cap_drumset @ 8
	.rept 3
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204 @ 12
	.rept 33
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings @ 46
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0 @ 47
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings @ 48
	.rept 11
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_french_horn_keysplit, keysplit_french_horn @ 60
	.rept 10
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_hg_024clarie4, 255, 0, 255, 127 @ 71
	.rept 3
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_kawai_k1r_pan_flute_c5, 255, 0, 255, 127 @ 75
	.rept 4
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0 @ 80
