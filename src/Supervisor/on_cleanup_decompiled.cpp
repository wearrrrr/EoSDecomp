
undefined4 __cdecl Supervisor::on_cleanup(Supervisor *supervisor)

{
  int i;
  MidiManager *midi_mgr;
  
  AnmManager::__sub_4240F0(anm_manager_ptr);
  for (i = 0; i < 16; i = i + 1) {
    __sub_4242F3(supervisor,i);
  }
  AnmManager::free_anm_file(anm_manager_ptr,0);
  AsciiManager::unregister_update_funcs();
  SoundManager::__sub_430F80(&sound_manager);
  if (supervisor->midi_manager_ptr != (MidiManager *)0x0) {
    MidiManager::__sub_4224E0(supervisor->midi_manager_ptr);
    midi_mgr = supervisor->midi_manager_ptr;
    if (midi_mgr != (MidiManager *)0x0) {
      UnknownB::__sub_421F50(midi_mgr);
      _free(midi_mgr);
    }
    supervisor->midi_manager_ptr = (MidiManager *)0x0;
  }
  __sub_42AB30((char *)0x0,(char *)0x0);
  release_global_surface();
  if (*(int *)(supervisor->field3_0xc + 4) != 0) {
    (**(code **)(**(int **)(supervisor->field3_0xc + 4) + 0x20))
              (*(undefined4 *)(supervisor->field3_0xc + 4));
  }
  if (*(int *)(supervisor->field3_0xc + 4) != 0) {
    (**(code **)(**(int **)(supervisor->field3_0xc + 4) + 8))
              (*(undefined4 *)(supervisor->field3_0xc + 4));
    *(undefined4 *)(supervisor->field3_0xc + 4) = 0;
  }
  if (supervisor->dinput_related_ptr_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*supervisor->dinput_related_ptr_1 + 0x20))(supervisor->dinput_related_ptr_1);
  }
  if (supervisor->dinput_related_ptr_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*supervisor->dinput_related_ptr_1 + 8))(supervisor->dinput_related_ptr_1);
    supervisor->dinput_related_ptr_1 = (void *)0x0;
  }
  if (*(int *)supervisor->field3_0xc != 0) {
    (**(code **)(**(int **)supervisor->field3_0xc + 8))(*(undefined4 *)supervisor->field3_0xc);
    *(undefined4 *)supervisor->field3_0xc = 0;
  }
  return 0;
}

