
undefined4 __cdecl Ending::on_registration(Ending *this)

{
  int endFileToLoad;
  
  game_manager.__byte_1822 = '\x01';
  supervisor.dword_19C = 1;
  Supervisor::__load_dat_file(&supervisor,5,"g–‚‹½ED.dat");
  AnmManager::load_anm_file(anm_manager_ptr,0x2c,"data/staff01.anm",0x600);
  AnmManager::load_anm_file(anm_manager_ptr,0x2d,"data/staff02.anm",0x607);
  AnmManager::load_anm_file(anm_manager_ptr,0x2e,"data/staff03.anm",0x60e);
  anm_manager_ptr->current_texture = (IDirect3DTexture8 *)0x0;
  anm_manager_ptr->current_sprite = (AnmLoadedSprite *)0x0;
  anm_manager_ptr->current_blend_mode = 0xff;
  anm_manager_ptr->current_unknown = 0xff;
  endFileToLoad = (uint)(byte)game_manager.shottype + (uint)(byte)game_manager.character * 2;
  *(undefined4 *)(this->field1_0x4 + 0x1114) = 0;
  if (game_manager.__byte_1818 == '\0') {
    if (*(char *)(endFileToLoad * 24 + 0x69ccdc + game_manager.difficulty) == 'c') {
      *(undefined4 *)(this->field1_0x4 + 0x1114) = 1;
    }
    *(undefined *)(endFileToLoad * 24 + 0x69ccdc + game_manager.difficulty) = 99;
  }
  else if (*(char *)(endFileToLoad * 0x18 + 0x69cce1 + game_manager.difficulty) == 'c') {
    *(undefined4 *)(this->field1_0x4 + 0x1114) = 1;
  }
  *(undefined *)(endFileToLoad * 24 + 0x69cce1 + game_manager.difficulty) = 99;
  if ((game_manager.difficulty == 0) || (game_manager.__byte_1818 != '\0')) {
    if (game_manager.character == '\0') {
      endFileToLoad = __sub_4106D0(this,"data/end00b.end");
      if (endFileToLoad != 0) {
        return 0xffffffff;
      }
    }
    else if ((game_manager.character == '\x01') &&
            (endFileToLoad = __sub_4106D0(this,"data/end10b.end"), endFileToLoad != 0)) {
      return 0xffffffff;
    }
  }
  else if (game_manager.character == '\0') {
    if (game_manager.shottype == '\0') {
      endFileToLoad = __sub_4106D0(this,"data/end00.end");
      if (endFileToLoad != 0) {
        return 0xffffffff;
      }
    }
    else {
      endFileToLoad = __sub_4106D0(this,"data/end01.end");
      if (endFileToLoad != 0) {
        return 0xffffffff;
      }
    }
  }
  else if (game_manager.character == '\x01') {
    if (game_manager.shottype == '\0') {
      endFileToLoad = __sub_4106D0(this,"data/end10.end");
      if (endFileToLoad != 0) {
        return 0xffffffff;
      }
    }
    else {
      endFileToLoad = __sub_4106D0(this,"data/end11.end");
      if (endFileToLoad != 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

