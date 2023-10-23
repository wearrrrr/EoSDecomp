
undefined4 __cdecl Ending::on_tick(Ending *ending)

{
  int in_EAX;
  int i;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    __sub_40F7C0(ending);
    if (in_EAX != 0) {
      return 0;
    }
    for (i = 0; i < 16; i = i + 1) {
      if (*(short *)(ending->field1_0x4 + i * 272 + 196) != 0) {
        AnmManager::run_anm(anm_manager_ptr,(AnmVm *)(ending->field1_0x4 + i * 0x110 + 0x10));
      }
    }
    if (((*(int *)(ending->field1_0x4 + 0x1114) == 0) || ((input.currently_pressed & 0x100) == 0))
       || (3 < local_8)) break;
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  return 1;
}

