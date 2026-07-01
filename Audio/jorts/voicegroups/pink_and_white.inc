voice_group pink_and_white
	voice_keysplit voicegroup_piano_keysplit, keysplit_piano @ 0
	.rept 4
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 255, 249, 0, 165 @ 5
	.rept 27
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fingered_bass, 255, 253, 0, 149 @ 33
	.rept 84
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit_all voicegroup_pink_and_white_drumset @ 118
