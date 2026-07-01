voice_group mirror_b_og
	voice_keysplit_all voicegroup_mirror_b_og_drumset @ 0
	voice_keysplit voicegroup_piano_keysplit, keysplit_piano @ 1
	.rept 31
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fingered_bass, 255, 253, 0, 149 @ 33
	.rept 22
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_trumpet_keysplit, keysplit_trumpet @ 56
	.rept 8
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_dp_altosax_c3_16, 255, 0, 255, 127 @ 65
	voice_directsound 60, 0, DirectSoundWaveData_dp_altosax_c3_16, 255, 0, 255, 127 @ 66
	voice_directsound 60, 0, DirectSoundWaveData_dp_altosax_c3_16, 255, 0, 255, 127 @ 67
