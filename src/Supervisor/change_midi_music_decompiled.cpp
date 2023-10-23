
int __thiscall Supervisor::change_midi_music(Supervisor *this,int music_index)

{
  int result;
  MidiManager *midi_mgr;
  
  midi_mgr = supervisor.midi_manager_ptr;
  if (supervisor.config.bgm_format == '\x02') {
    if (supervisor.midi_manager_ptr != (MidiManager *)0x0) {
      MidiManager::__sub_4224E0(supervisor.midi_manager_ptr);
      UnknownB::__sub_422140(midi_mgr,music_index);
      UnknownB::__sub_422490(midi_mgr);
    }
    result = 0;
  }
  else {
    result = 1;
  }
  return result;
}

