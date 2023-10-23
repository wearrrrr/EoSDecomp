
undefined4 __thiscall Supervisor::__sub_424AAC(Supervisor *this,int param_1,char *filename)

{
  undefined4 uVar1;
  
  if (supervisor.config.bgm_format == '\x02') {
    if (supervisor.midi_manager_ptr != (MidiManager *)0x0) {
      UnknownB::__sub_421FF0(supervisor.midi_manager_ptr,param_1,(byte *)filename);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

