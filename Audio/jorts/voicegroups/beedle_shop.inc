voice_group beedle_shop
	.rept 12
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204 @ 12
	.rept 19
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fingered_bass, 255, 253, 0, 149 @ 32
	.rept 25
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_tuba_keysplit, keysplit_tuba @ 58
	.rept 49
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_heart_of_asia_gamelan, 255, 188, 139, 239 @ 108
	.rept 9
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit_all voicegroup_beedle_shop_drumset @ 118
