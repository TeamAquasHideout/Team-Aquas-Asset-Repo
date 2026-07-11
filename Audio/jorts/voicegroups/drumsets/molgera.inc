voice_group molgera_drumset, 31
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88pro_taiko, 255, 0, 255, 127 @ 31
	.rept 37
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound_no_resample 60, 79, DirectSoundWaveData_unknown_close_hihat, 255, 0, 255, 0 @ 69
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88pro_tambourine, 255, 0, 255, 127 @ 70
	.rept 12
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sd90_open_triangle, 255, 0, 255, 127 @ 83
