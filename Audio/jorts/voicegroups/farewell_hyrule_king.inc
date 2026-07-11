voice_group farewell_hyrule_king_piano_keysplit
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_piano1_48, 255, 252, 0, 239
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_piano1_60, 255, 250, 0, 221
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_piano1_72, 255, 250, 0, 221
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_piano1_84, 255, 247, 0, 221

voice_group farewell_hyrule_king_strings_keysplit
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_string_ensemble_60, 255, 0, 255, 196
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_string_ensemble_72, 255, 0, 255, 196
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_string_ensemble_84, 255, 0, 255, 196

voice_group farewell_hyrule_king
	voice_keysplit voicegroup_farewell_hyrule_king_piano_keysplit, keysplit_farewell_hyrule_king_piano @ 0
	.rept 47
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_keysplit voicegroup_farewell_hyrule_king_strings_keysplit, keysplit_farewell_hyrule_king_strings @ 48
