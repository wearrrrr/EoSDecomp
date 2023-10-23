
int __cdecl EffectManager::on_registration(EffectManager *eff_mgr)

{
  int result;
  
  __sub_40E340(eff_mgr);
                    /* Load proper effects for each stage */
  switch(game_manager.current_stage) {
  case 0:
  case 1:
    result = AnmManager::load_anm_file(anm_manager_ptr,0xb,"data/eff01.anm",0x2b3);
    if (result != 0) {
      return -1;
    }
    break;
  case 2:
    result = AnmManager::load_anm_file(anm_manager_ptr,0xb,"data/eff02.anm",0x2b3);
    if (result != 0) {
      return -1;
    }
    break;
  case 3:
    result = AnmManager::load_anm_file(anm_manager_ptr,0xb,"data/eff03.anm",0x2b3);
    if (result != 0) {
      return -1;
    }
    break;
  case 4:
    result = AnmManager::load_anm_file(anm_manager_ptr,0xb,"data/eff04.anm",0x2b3);
    if (result != 0) {
      return -1;
    }
    break;
  case 5:
    result = AnmManager::load_anm_file(anm_manager_ptr,0xb,"data/eff05.anm",0x2b3);
    if (result != 0) {
      return -1;
    }
    break;
  case 6:
    result = AnmManager::load_anm_file(anm_manager_ptr,0xb,"data/eff05.anm",0x2b3);
    if (result != 0) {
      return -1;
    }
    break;
  case 7:
    result = AnmManager::load_anm_file(anm_manager_ptr,0xb,"data/eff04.anm",0x2b3);
    if (result != 0) {
      return -1;
    }
  }
  return 0;
}

