voice_group camel_by_camel
	voice_keysplit voicegroup_piano_keysplit, keysplit_piano @ 0
	.rept 10
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204 @ 11
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204 @ 13
	.rept 11
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 0, 255, 127 @ 25
	.rept 4
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 127 @ 30
	.rept 5
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_slap_bass, 255, 254, 0, 127 @ 36
	.rept 3
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings @ 40
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings @ 42
	.rept 41
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_square_wave, 255, 0, 255, 127 @ 84
	.rept 5
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 255, 0, 255, 127 @ 90
	.rept 13
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_high, 255, 0, 255, 127 @ 104
	.rept 2
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_low, 255, 0, 255, 127 @ 107
	.rept 10
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit_all voicegroup_camel_by_camel_drumset @ 118
