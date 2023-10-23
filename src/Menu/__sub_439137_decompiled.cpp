
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Menu::__sub_439137(Menu *menu)

{
  AnmVm *local_c;
  int i;
  int selectedOption;
  
  __cycle_menu_indices(menu,9);
  local_c = (AnmVm *)(menu + 0x880);
  for (i = 0; i < 9; i = i + 1) {
    if ((i < 5) || (7 < i)) {
      __sub_438EF8(menu,local_c,i,i,*(int *)(menu + 0x81a0));
      local_c = local_c + 1;
    }
    else {
      __sub_438EF8(menu,(AnmVm *)(menu + (i + 0x43) * 0x110),i,i,*(int *)(menu + 0x81a0));
    }
  }
  for (i = 0; i < 5; i = i + 1) {
    __sub_438EF8(menu,local_c,0,i,(uint)supervisor.config.starting_lives);
    local_c = local_c + 1;
  }
  for (i = 0; i < 4; i = i + 1) {
    __sub_438EF8(menu,local_c,1,i,(uint)supervisor.config.starting_bombs);
    local_c = local_c + 1;
  }
  for (i = 0; i < 2; i = i + 1) {
    __sub_438EF8(menu,local_c,2,i,(uint)supervisor.config.graphics_format);
    local_c = local_c + 1;
  }
  for (i = 0; i < 2; i = i + 1) {
    __sub_438EF8(menu,local_c,4,i,(uint)supervisor.config.__byte_1c);
    local_c = local_c + 1;
  }
  local_c = (AnmVm *)(menu + 0x51d0);
  for (i = 0; i < 3; i = i + 1) {
    __sub_438EF8(menu,local_c,3,i,(uint)supervisor.config.bgm_format);
    local_c = local_c + 1;
  }
  local_c = (AnmVm *)(menu + 0x4fb0);
  for (i = 0; i < 2; i = i + 1) {
    __sub_438EF8(menu,local_c,5,i,(uint)(byte)menu[0x8231]);
    local_c = local_c + 1;
  }
  if (0x1f < *(int *)(menu + 0x81f4)) {
    if ((((input.currently_pressed & 0x40) != 0) &&
        ((input.currently_pressed & 0x40) != (input.word_4 & 0x40))) ||
       (((input.currently_pressed & 0x40) != 0 && (input.word_8 != 0)))) {
      selectedOption = *(int *)(menu + 0x81a0);
      if (selectedOption == 0) {
        SoundManager::play_sound_centered(&sound_manager,0xc,0);
        if (supervisor.config.starting_lives == '\0') {
          supervisor.config.starting_lives = '\x05';
        }
        supervisor.config.starting_lives = supervisor.config.starting_lives + 0xff;
      }
      else if (selectedOption == 1) {
        SoundManager::play_sound_centered(&sound_manager,0xc,0);
        if (supervisor.config.starting_bombs == '\0') {
          supervisor.config.starting_bombs = '\x04';
        }
        supervisor.config.starting_bombs = supervisor.config.starting_bombs + 0xff;
      }
      else if (selectedOption == 2) {
        SoundManager::play_sound_centered(&sound_manager,0xc,0);
        if (supervisor.config.graphics_format == '\0') {
          supervisor.config.graphics_format = '\x02';
        }
        supervisor.config.graphics_format = supervisor.config.graphics_format + 0xff;
      }
      else if (selectedOption == 3) {
        SoundManager::play_sound_centered(&sound_manager,0xc,0);
        Supervisor::__sub_424D38(&supervisor);
        if (supervisor.config.bgm_format == '\0') {
          supervisor.config.bgm_format = '\x03';
        }
        supervisor.config.bgm_format = supervisor.config.bgm_format + 0xff;
        Supervisor::__validate_bgm_mode(&supervisor);
        Supervisor::__load_bgm_file(&supervisor,"bgm/th06_01.mid");
      }
      else if (selectedOption == 4) {
        SoundManager::play_sound_centered(&sound_manager,0xc,0);
        if (supervisor.config.__byte_1c == '\0') {
          supervisor.config.__byte_1c = '\x02';
        }
        supervisor.config.__byte_1c = supervisor.config.__byte_1c + 0xff;
      }
      else if (selectedOption == 5) {
        SoundManager::play_sound_centered(&sound_manager,0xc,0);
        if (menu[0x8231] == (Menu)0x0) {
          menu[0x8231] = (Menu)0x2;
        }
        menu[0x8231] = (Menu)((char)menu[0x8231] + -1);
      }
    }
    if (((input.currently_pressed & 10) != 0) &&
       ((input.currently_pressed & 10) != (input.word_4 & 10))) {
      *(undefined4 *)(menu + 0x81a0) = 8;
      SoundManager::play_sound_centered(&sound_manager,0xb,0);
    }
    if ((((input.currently_pressed & 0x80) != 0) &&
        ((input.currently_pressed & 0x80) != (input.word_4 & 0x80))) ||
       (((input.currently_pressed & 0x80) != 0 && (input.word_8 != 0)))) {
      selectedOption = *(int *)(menu + 0x81a0);
      if (selectedOption == 0) {
        SoundManager::play_sound_centered(&sound_manager,0xc,0);
        supervisor.config.starting_lives = supervisor.config.starting_lives + 1;
        if (4 < supervisor.config.starting_lives) {
          supervisor.config.starting_lives = '\0';
        }
      }
      else if (selectedOption == 1) {
        SoundManager::play_sound_centered(&sound_manager,0xc,0);
        supervisor.config.starting_bombs = supervisor.config.starting_bombs + 1;
        if (3 < supervisor.config.starting_bombs) {
          supervisor.config.starting_bombs = '\0';
        }
      }
      else if (selectedOption == 2) {
        SoundManager::play_sound_centered(&sound_manager,0xc,0);
        supervisor.config.graphics_format = supervisor.config.graphics_format + 1;
        if (1 < supervisor.config.graphics_format) {
          supervisor.config.graphics_format = '\0';
        }
      }
      else if (selectedOption == 3) {
        SoundManager::play_sound_centered(&sound_manager,0xc,0);
        Supervisor::__sub_424D38(&supervisor);
        supervisor.config.bgm_format = supervisor.config.bgm_format + 1;
        if (2 < supervisor.config.bgm_format) {
          supervisor.config.bgm_format = '\0';
        }
        Supervisor::__validate_bgm_mode(&supervisor);
        Supervisor::__load_bgm_file(&supervisor,"bgm/th06_01.mid");
      }
      else if (selectedOption == 4) {
        SoundManager::play_sound_centered(&sound_manager,0xc,0);
        supervisor.config.__byte_1c = supervisor.config.__byte_1c + 1;
        if (1 < supervisor.config.__byte_1c) {
          supervisor.config.__byte_1c = '\0';
        }
      }
      else if (selectedOption == 5) {
        SoundManager::play_sound_centered(&sound_manager,0xc,0);
        menu[0x8231] = (Menu)((char)menu[0x8231] + '\x01');
        if (1 < (byte)menu[0x8231]) {
          menu[0x8231] = (Menu)0x0;
        }
      }
    }
    if (((input.currently_pressed & 0x1001) != 0) &&
       ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) {
      selectedOption = *(int *)(menu + 0x81a0);
      if (selectedOption == 6) {
        Supervisor::__sub_424D38(&supervisor);
        supervisor.config.starting_lives = '\x02';
        supervisor.config.starting_bombs = '\x03';
        supervisor.config.bgm_format = '\x01';
        supervisor.config.__byte_1c = '\x01';
        supervisor.config.__byte_1d = '\x01';
        supervisor.config.fullscreen = '\0';
        supervisor.config.frameskip_settings = '\0';
        Supervisor::__validate_bgm_mode(&supervisor);
        Supervisor::__load_bgm_file(&supervisor,"bgm/th06_01.mid");
      }
      else if (selectedOption == 7) {
        *(undefined4 *)(menu + 0x81f0) = 5;
        *(undefined4 *)(menu + 0x81f4) = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          *(undefined2 *)(menu + i * 0x110 + 0x8a) = 5;
        }
        *(undefined4 *)(menu + 0x81a0) = 0;
        SoundManager::play_sound_centered(&sound_manager,10,0);
        *(undefined4 *)(menu + 0x821c) = _DAT_004765a0;
        *(undefined4 *)(menu + 0x8220) = _DAT_004765a4;
        *(undefined4 *)(menu + 0x8224) = _DAT_004765a8;
        *(undefined4 *)(menu + 0x8228) = _DAT_004765ac;
        *(undefined2 *)(menu + 0x822c) = _DAT_004765b0;
        _DAT_004765a8 = 0xffffffff;
      }
      else if (selectedOption == 8) {
        *(undefined4 *)(menu + 0x81f0) = 2;
        *(undefined4 *)(menu + 0x81f4) = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          *(undefined2 *)(menu + i * 0x110 + 0x8a) = 2;
        }
        *(undefined4 *)(menu + 0x81a0) = 6;
        SoundManager::play_sound_centered(&sound_manager,0xb,0);
        if (((menu[0x8230] != (Menu)supervisor.config.graphics_format) ||
            (menu[0x8231] != (Menu)supervisor.config.fullscreen)) ||
           (menu[0x8232] != (Menu)supervisor.config.frameskip_settings)) {
          supervisor.config.fullscreen = (uint8_t)menu[0x8231];
          supervisor.config.frameskip_settings = (uint8_t)menu[0x8232];
          supervisor.dword_18C = 5;
          return 1;
        }
      }
    }
  }
  return 0;
}

