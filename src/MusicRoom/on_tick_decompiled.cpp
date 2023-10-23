
undefined4 __cdecl MusicRoom::on_tick(MusicRoom *music_room)

{
  int iVar1;
  int iVar2;
  
  iVar1 = music_room->field_c;
  do {
    iVar2 = music_room->field_c;
    if (iVar2 != 0) {
      if ((iVar2 == 1) && (__sub_424EAD(music_room), iVar2 != 0)) {
        return 0;
      }
      break;
    }
    iVar2 = __sub_424E8F(music_room);
  } while (iVar2 != 0);
  if (iVar1 == music_room->field_c) {
    music_room->field_8 = music_room->field_8 + 1;
  }
  else {
    music_room->field_8 = 0;
  }
  AnmManager::run_anm(anm_manager_ptr,music_room->vms_0);
  return 1;
}

