voice_group beneath_the_mask
	voice_keysplit voicegroup_piano_keysplit, keysplit_piano @ 0
	.rept 4
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 255, 249, 0, 165 @ 5
	.rept 21
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 249, 25, 127 @ 27
	.rept 5
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fingered_bass, 255, 253, 0, 149 @ 33
	.rept 6
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_dp_altosax_c3_16, 255, 0, 255, 127 @ 40
	.rept 49
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings @ 90
	.rept 27
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit_all voicegroup_beneath_the_mask_drumset @ 118
