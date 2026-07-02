voice_group gerudo_desert_drumset, 60
	voice_directsound_no_resample 72, 94, DirectSoundWaveData_sc88pro_open_low_conga, 255, 0, 255, 0 @ 60
	voice_directsound_no_resample 72, 104, DirectSoundWaveData_sc88pro_mute_high_conga, 255, 0, 255, 0 @ 61
	.rept 7
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound_no_resample 32, 34, DirectSoundWaveData_sc88pro_tambourine, 255, 127, 77, 204 @ 69
	voice_directsound_no_resample 32, 34, DirectSoundWaveData_sc88pro_tambourine, 255, 127, 77, 204 @ 70
