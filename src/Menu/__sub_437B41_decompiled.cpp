
undefined4 __fastcall Menu::__sub_437B41(int param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar1 = __cycle_menu_indices((Menu *)param_1,8);
  if ((((*(int *)(param_1 + 0x81a0) == 1) &&
       (iVar2 = GameManager::__CLRD_related_2(&game_manager,0,0), iVar2 == 0)) &&
      (iVar2 = GameManager::__CLRD_related_2(&game_manager,0,1), iVar2 == 0)) &&
     ((iVar2 = GameManager::__CLRD_related_2(&game_manager,1,0), iVar2 == 0 &&
      (iVar2 = GameManager::__CLRD_related_2(&game_manager,1,1), iVar2 == 0)))) {
    *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + iVar1;
  }
  local_c = param_1;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    __sub_4377A3(local_c,local_8,*(int *)(param_1 + 0x81a0),0xffff0000,0x80300000,0x7a);
    local_c = local_c + 0x110;
  }
  if (0x13 < *(int *)(param_1 + 0x81f4)) {
    if (((input.currently_pressed & 0x1001) != 0) &&
       ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) {
      switch(*(undefined4 *)(param_1 + 0x81a0)) {
      case 0:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 4;
        }
        *(undefined4 *)(param_1 + 0x81f0) = 6;
        game_manager.__byte_1823 = '\0';
        if (3 < game_manager.difficulty) {
          game_manager.difficulty = 1;
        }
        if (3 < supervisor.config.__byte_1d) {
          supervisor.config.__byte_1d = '\x01';
        }
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        *(undefined4 *)(param_1 + 0x81fc) = 0x40000000;
        *(undefined4 *)(param_1 + 0x8200) = 0xff000000;
        *(undefined4 *)(param_1 + 0x820c) = 0;
        *(undefined4 *)(param_1 + 0x8210) = 0x3c;
        SoundManager::play_sound_centered(&sound_manager,10,0);
        break;
      case 1:
        iVar1 = GameManager::__CLRD_related_2(&game_manager,0,0);
        if ((((iVar1 == 0) && (iVar1 = GameManager::__CLRD_related_2(&game_manager,0,1), iVar1 == 0)
             ) && (iVar1 = GameManager::__CLRD_related_2(&game_manager,1,0), iVar1 == 0)) &&
           (iVar1 = GameManager::__CLRD_related_2(&game_manager,1,1), iVar1 == 0)) {
          SoundManager::play_sound_centered(&sound_manager,0xb,0);
        }
        else {
          for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
            *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 4;
          }
          *(undefined4 *)(param_1 + 0x81f0) = 6;
          game_manager.__byte_1823 = '\0';
          game_manager.difficulty = 4;
          *(undefined4 *)(param_1 + 0x81f4) = 0;
          *(undefined4 *)(param_1 + 0x81fc) = 0x40000000;
          *(undefined4 *)(param_1 + 0x8200) = 0xff000000;
          *(undefined4 *)(param_1 + 0x820c) = 0;
          *(undefined4 *)(param_1 + 0x8210) = 0x3c;
          SoundManager::play_sound_centered(&sound_manager,10,0);
        }
        break;
      case 2:
        game_manager.__byte_1823 = '\x01';
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 4;
        }
        *(undefined4 *)(param_1 + 0x81f0) = 6;
        if (3 < game_manager.difficulty) {
          game_manager.difficulty = 1;
        }
        if (3 < supervisor.config.__byte_1d) {
          supervisor.config.__byte_1d = '\x01';
        }
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        *(undefined4 *)(param_1 + 0x81fc) = 0x40000000;
        *(undefined4 *)(param_1 + 0x8200) = 0xff000000;
        *(undefined4 *)(param_1 + 0x820c) = 0;
        *(undefined4 *)(param_1 + 0x8210) = 0x3c;
        SoundManager::play_sound_centered(&sound_manager,10,0);
        break;
      case 3:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 4;
        }
        *(undefined4 *)(param_1 + 0x81f0) = 0xc;
        game_manager.__byte_1823 = '\0';
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        *(undefined4 *)(param_1 + 0x81fc) = 0x40000000;
        *(undefined4 *)(param_1 + 0x8200) = 0xff000000;
        *(undefined4 *)(param_1 + 0x820c) = 0;
        *(undefined4 *)(param_1 + 0x8210) = 0x3c;
        SoundManager::play_sound_centered(&sound_manager,10,0);
        break;
      case 4:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 4;
        }
        *(undefined4 *)(param_1 + 0x81f0) = 10;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        *(undefined4 *)(param_1 + 0x81fc) = 0x40000000;
        *(undefined4 *)(param_1 + 0x8200) = 0xff000000;
        *(undefined4 *)(param_1 + 0x820c) = 0;
        *(undefined4 *)(param_1 + 0x8210) = 0x3c;
        SoundManager::play_sound_centered(&sound_manager,10,0);
        break;
      case 5:
        *(undefined4 *)(param_1 + 0x81f0) = 0x10;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 4;
        }
        SoundManager::play_sound_centered(&sound_manager,10,0);
        break;
      case 6:
        *(undefined4 *)(param_1 + 0x81f0) = 3;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 3;
        }
        *(undefined4 *)(param_1 + 0x81a0) = 0;
        *(uint8_t *)(param_1 + 0x8230) = supervisor.config.graphics_format;
        *(uint8_t *)(param_1 + 0x8231) = supervisor.config.fullscreen;
        *(uint8_t *)(param_1 + 0x8232) = supervisor.config.frameskip_settings;
        SoundManager::play_sound_centered(&sound_manager,10,0);
        break;
      case 7:
        *(undefined4 *)(param_1 + 0x81f0) = 4;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 4;
        }
        SoundManager::play_sound_centered(&sound_manager,0xb,0);
      }
    }
    if (((input.currently_pressed & 0x200) != 0) &&
       ((input.currently_pressed & 0x200) != (input.word_4 & 0x200))) {
      *(undefined4 *)(param_1 + 0x81f0) = 4;
      *(undefined4 *)(param_1 + 0x81f4) = 0;
      for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
        *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 4;
      }
      SoundManager::play_sound_centered(&sound_manager,0xb,0);
    }
    if (((input.currently_pressed & 10) != 0) &&
       ((input.currently_pressed & 10) != (input.word_4 & 10))) {
      *(undefined4 *)(param_1 + 0x81a0) = 7;
      SoundManager::play_sound_centered(&sound_manager,0xb,0);
    }
  }
  return 0;
}

