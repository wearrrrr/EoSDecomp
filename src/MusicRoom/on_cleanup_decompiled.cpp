
undefined4 __cdecl MusicRoom::on_cleanup(MusicRoom *music_room)

{
  _free((void *)music_room->field_20);
  music_room->field_20 = 0;
  AnmManager::free_surface(anm_manager_ptr,0);
  AnmManager::free_anm_file(anm_manager_ptr,0x29);
  AnmManager::free_anm_file(anm_manager_ptr,0x2a);
  AnmManager::free_anm_file(anm_manager_ptr,0x2b);
  UpdateFuncRegistry::unregister(&update_func_registry,music_room->on_draw);
  music_room->on_draw = (UpdateFunc *)0x0;
  return 0;
}

