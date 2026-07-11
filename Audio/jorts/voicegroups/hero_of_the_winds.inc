voice_group hero_of_the_winds
	voice_keysplit_all voicegroup_hero_of_the_winds_drumset @ 0
	.rept 13
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 216, 90, 242 @ 14
	.rept 29
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings @ 44
	.rept 11
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_trumpet_keysplit, keysplit_trumpet @ 56
	.rept 3
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_french_horn_keysplit, keysplit_french_horn @ 60
	.rept 8
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_oboe, 255, 165, 154, 127 @ 69
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0 @ 70
	voice_directsound 60, 0, DirectSoundWaveData_hg_024clarie4, 255, 0, 255, 127 @ 71
