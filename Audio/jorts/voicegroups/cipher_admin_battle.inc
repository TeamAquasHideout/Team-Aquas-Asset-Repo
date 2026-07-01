voice_group cipher_admin_battle
	voice_keysplit_all voicegroup_cipher_admin_battle_drumset @ 0
	voice_keysplit voicegroup_piano_keysplit, keysplit_piano @ 1
	.rept 45
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 0, 180, 239 @ 47
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings @ 48
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings @ 50
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings @ 51
	.rept 5
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_french_horn_keysplit, keysplit_french_horn @ 57
	.rept 2
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_french_horn_keysplit, keysplit_french_horn @ 60
	.rept 12
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 0, 255, 127 @ 73
