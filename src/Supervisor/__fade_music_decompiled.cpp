
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall Supervisor::__fade_music(Supervisor *this,float fade_duration_ms,float param_2)

{
  longlong lVar1;
  
  if (supervisor.config.bgm_format == 2) {
    if (supervisor.midi_manager_ptr != (MidiManager *)0x0) {
      lVar1 = __ftol2((double)(_000_0f * fade_duration_ms));
      MidiManager::constructor(supervisor.midi_manager_ptr,(int)lVar1);
    }
  }
  else {
    if (supervisor.config.bgm_format != 1) {
      return -1;
    }
    if (this->game_speed == (float)__0f) {
      SoundManager::__sub_424E41(&sound_manager,SUB41(fade_duration_ms,0));
    }
    else if (this->game_speed <= _1_0f) {
      SoundManager::__sub_424E41(&sound_manager,SUB41(fade_duration_ms / this->game_speed,0));
    }
    else {
      SoundManager::__sub_424E41(&sound_manager,SUB41(fade_duration_ms,0));
    }
  }
  return 0;
}

