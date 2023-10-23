
undefined4 __cdecl ResultScreen::on_cleanup(ResultScreen **result_screen)

{
  int j;
  int i;
  
  if (*result_screen != (ResultScreen *)0x0) {
    __construct_and_save_scorefile((GameManager *)result_screen);
    __free_scorefile(*result_screen);
  }
  *result_screen = (ResultScreen *)0x0;
  for (i = 0; i < 5; i = i + 1) {
    for (j = 0; j < 4; j = j + 1) {
      __sub_42BC5B((ResultScreen *)result_screen,i,j);
    }
  }
  AnmManager::free_anm_file(anm_manager_ptr,0x25);
  AnmManager::free_anm_file(anm_manager_ptr,0x26);
  AnmManager::free_anm_file(anm_manager_ptr,0x27);
  AnmManager::free_anm_file(anm_manager_ptr,0x28);
  AnmManager::free_surface(anm_manager_ptr,0);
  UpdateFuncRegistry::unregister(&update_func_registry,(UpdateFunc *)result_screen[0x146b]);
  result_screen[0x146b] = (ResultScreen *)0x0;
  if (result_screen != (ResultScreen **)0x0) {
    _free(*result_screen);
    _free(result_screen);
  }
  return 0;
}

