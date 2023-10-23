
int __thiscall Supervisor::__sub_424D38(Supervisor *this)

{
  if (supervisor.config.bgm_format == '\x02') {
    if (supervisor.midi_manager_ptr != (MidiManager *)0x0) {
      MidiManager::__sub_4224E0(supervisor.midi_manager_ptr);
    }
  }
  else {
    if (supervisor.config.bgm_format != '\x01') {
      return -1;
    }
    SoundManager::__sub_430F80(&sound_manager);
  }
  return 0;
}

