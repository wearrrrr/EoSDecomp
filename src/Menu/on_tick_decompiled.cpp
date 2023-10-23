
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl Menu::on_tick(Menu *menu)

{
  float fVar1;
  short sVar2;
  DWORD DVar3;
  int selectedMenuOption;
  bool bVar4;
  uint local_b8;
  uint local_b4;
  uint local_50;
  uint local_4c;
  float local_48;
  float slowdown_rate;
  short local_28;
  AnmVm *local_c;
  uint i;
  
  if (*(int *)(menu + 0x10ee0) < 0x10) {
    timeBeginPeriod(1);
    if (*(int *)(menu + 0x10f30) == 0) {
      DVar3 = timeGetTime();
      *(DWORD *)(menu + 0x10f30) = DVar3;
    }
    DVar3 = timeGetTime();
    timeEndPeriod(1);
    *(int *)(menu + 69420) = *(int *)(menu + 69420) + 1;
    selectedMenuOption = DVar3 - *(int *)(menu + 69424);
    if (selectedMenuOption < 700) {
      if (499 < selectedMenuOption) {
        fVar1 = ((float)*(int *)(menu + 0x10f2c) * _000_0f) / (float)selectedMenuOption;
        if (ram0x0046c3a0 <= fVar1) {
          *(float *)(menu + *(int *)(menu + 0x10ee0) * 4 + 0x10ee4) = fVar1;
          *(int *)(menu + 0x10ee0) = *(int *)(menu + 0x10ee0) + 1;
        }
        *(DWORD *)(menu + 0x10f30) = DVar3;
        *(undefined4 *)(menu + 0x10f2c) = 0;
      }
    }
    else {
      *(DWORD *)(menu + 0x10f30) = DVar3;
      *(undefined4 *)(menu + 0x10f2c) = 0;
    }
  }
  selectedMenuOption = *(int *)(menu + 0x81f0);
  switch(selectedMenuOption) {
  case 0:
    selectedMenuOption = __sub_4378A2((int)menu);
    if (selectedMenuOption == -1) {
      return 0;
    }
  case 1:
    *(int *)(menu + 0x81f8) = *(int *)(menu + 0x81f8) + 1;
    if (input.currently_pressed != 0) {
      *(undefined4 *)(menu + 0x81f8) = 0;
    }
    if (719 < *(int *)(menu + 33272)) {
loadReplay:
      game_manager.__spellcard_related_1 = 1;
      game_manager.demoplay_mode = '\x01';
      game_manager._6184_4_ = 0;
      supervisor.slowdown = 1.0;
      _strcpy(game_manager.replay_filename,"data/demo/demo00.rpy");
      game_manager.difficulty = 3;
      game_manager.current_stage = 3;
      supervisor.dword_18C = 2;
      return 0;
    }
    selectedMenuOption = __sub_4379E4((int)menu);
    if (selectedMenuOption == 0) {
      *(undefined4 *)(menu + 0x81f8) = 0;
_switchA_Menu__on_tick_case_2:
      __sub_437B41((int)menu);
      if (input.currently_pressed != 0) {
        *(undefined4 *)(menu + 0x81f8) = 0;
      }
      *(int *)(menu + 0x81f8) = *(int *)(menu + 0x81f8) + 1;
      if (0x2cf < *(int *)(menu + 0x81f8)) goto loadReplay;
    }
    break;
  case 2:
    goto _switchA_Menu__on_tick_case_2;
  case 3:
    selectedMenuOption = __sub_439137(menu);
    if (selectedMenuOption != 0) {
      return 0;
    }
    break;
  case 4:
    if (0x3b < *(int *)(menu + 0x81f4)) {
      supervisor.dword_18C = 4;
      return 0;
    }
    break;
  case 5:
    __cycle_menu_indices(menu,0xb);
    local_c = (AnmVm *)(menu + 0x2420);
    for (i = 0; (int)i < 0xb; i = i + 1) {
      __sub_4377A3((int)local_c,i,*(int *)(menu + 0x81a0),*(uint *)(menu + 0x8204),
                   *(uint *)(menu + 0x8208),0x73);
      local_c = local_c + 1;
    }
    for (i = 0; (int)i < 9; i = i + 1) {
      if (*(short *)(menu + i * 2 + 0x821c) < 0) {
        local_c->flags = local_c->flags & 0xfffffffd;
      }
      else {
        local_c->flags = local_c->flags | 2;
        __sub_4377A3((int)local_c,i,*(int *)(menu + 0x81a0),*(uint *)(menu + 0x8204),
                     *(uint *)(menu + 0x8208),0x73);
      }
      local_c = local_c + 1;
    }
    for (i = 0; (int)i < 0x12; i = i + 1) {
      if (*(short *)(menu + ((int)i / 2) * 2 + 0x821c) < 0) {
        local_c->flags = local_c->flags & 0xfffffffd;
      }
      else {
        local_c->flags = local_c->flags | 2;
        if ((int)i % 2 == 0) {
          AnmManager::set_vm_sprite
                    (anm_manager_ptr,local_c,
                     (int)*(short *)(menu + ((int)i / 2) * 2 + 0x821c) / 10 + 0x100);
        }
        else {
          AnmManager::set_vm_sprite
                    (anm_manager_ptr,local_c,
                     (int)*(short *)(menu + ((int)i / 2) * 2 + 0x821c) % 10 + 0x100);
        }
        local_c->sprite_number_duplicate = local_c->sprite_number;
        __sub_4377A3((int)local_c,(int)i / 2,*(int *)(menu + 0x81a0),*(uint *)(menu + 0x8204),
                     *(uint *)(menu + 0x8208),0x7a);
      }
      local_c = local_c + 1;
    }
    if (0x1f < *(int *)(menu + 0x81f4)) {
      selectedMenuOption = __input_related_4();
      sVar2 = 0;
      while ((sVar2 < 0x20 && ((*(byte *)(selectedMenuOption + sVar2) & 0x80) == 0))) {
        sVar2 = sVar2 + 1;
      }
      if ((sVar2 < 0x20) && (_DAT_00478690 != sVar2)) {
        SoundManager::play_sound_centered(&sound_manager,10,0);
        switch(*(undefined4 *)(menu + 0x81a0)) {
        case 0:
          __sub_437672((int)menu,sVar2,*(undefined2 *)(menu + 0x821c),1);
          *(short *)(menu + 0x821c) = sVar2;
          break;
        case 1:
          __sub_437672((int)menu,sVar2,*(undefined2 *)(menu + 0x821e),0);
          *(short *)(menu + 0x821e) = sVar2;
          break;
        case 2:
          __sub_437672((int)menu,sVar2,*(undefined2 *)(menu + 0x8220),1);
          *(short *)(menu + 0x8220) = sVar2;
          break;
        case 3:
          __sub_437672((int)menu,sVar2,*(undefined2 *)(menu + 0x8222),0);
          *(short *)(menu + 0x8222) = sVar2;
          break;
        case 4:
          __sub_437672((int)menu,sVar2,*(undefined2 *)(menu + 0x8224),0);
          *(short *)(menu + 0x8224) = sVar2;
          break;
        case 5:
          __sub_437672((int)menu,sVar2,*(undefined2 *)(menu + 0x8226),0);
          *(short *)(menu + 0x8226) = sVar2;
          break;
        case 6:
          __sub_437672((int)menu,sVar2,*(undefined2 *)(menu + 0x8228),0);
          *(short *)(menu + 0x8228) = sVar2;
          break;
        case 7:
          __sub_437672((int)menu,sVar2,*(undefined2 *)(menu + 0x822a),0);
          *(short *)(menu + 0x822a) = sVar2;
          break;
        case 8:
          __sub_437672((int)menu,sVar2,*(undefined2 *)(menu + 0x822c),0);
          *(short *)(menu + 0x822c) = sVar2;
        }
      }
      _DAT_00478690 = sVar2;
      if (((input.currently_pressed & 0x1001) != 0) &&
         ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) {
        if (*(int *)(menu + 0x81a0) == 9) {
          *(undefined4 *)(menu + 0x821c) = 0x10000;
          *(undefined4 *)(menu + 0x8220) = 0xffff0000;
          *(undefined4 *)(menu + 0x8224) = 0xffffffff;
          *(undefined4 *)(menu + 0x8228) = 0xffffffff;
          *(undefined2 *)(menu + 0x822c) = 0xffff;
        }
        else if (*(int *)(menu + 0x81a0) == 10) {
          *(undefined4 *)(menu + 0x81f0) = 3;
          *(undefined4 *)(menu + 0x81f4) = 0;
          for (local_28 = 0; local_28 < 0x7a; local_28 = local_28 + 1) {
            *(undefined2 *)(menu + local_28 * 0x110 + 0x8a) = 3;
          }
          *(undefined4 *)(menu + 0x81a0) = 7;
          SoundManager::play_sound_centered(&sound_manager,0xb,0);
          _DAT_004765a0 = *(undefined4 *)(menu + 0x821c);
          _DAT_004765a4 = *(undefined4 *)(menu + 0x8220);
          _DAT_004765a8 = *(undefined4 *)(menu + 0x8224);
          _DAT_004765ac = *(undefined4 *)(menu + 0x8228);
          _DAT_004765b0 = *(undefined2 *)(menu + 0x822c);
          supervisor.config.field0_0x0._0_4_ = *(undefined4 *)(menu + 0x821c);
          supervisor.config.field0_0x0._4_4_ = *(undefined4 *)(menu + 0x8220);
          supervisor.config.field0_0x0._8_4_ = *(undefined4 *)(menu + 0x8224);
          supervisor.config.field0_0x0._12_4_ = *(undefined4 *)(menu + 0x8228);
          supervisor.config.field0_0x0._16_2_ = *(undefined2 *)(menu + 0x822c);
        }
      }
    }
    break;
  case 6:
    if (*(int *)(menu + 0x81f4) != 0x3c) break;
    selectedMenuOption = __sub_439F88((int)menu);
    if (selectedMenuOption != 0) {
      LogBuffer::write(&LogBuffer,"ƒZƒŒƒNƒg‰æ–Ê‚Ì“Ç‚Ýž‚Ý‚ÉŽ¸”s\n");
      supervisor.dword_18C = 4;
      return 0;
    }
    *(undefined4 *)(menu + 0x81f0) = 7;
    *(undefined4 *)(menu + 0x81fc) = 0;
    *(undefined4 *)(menu + 0x8214) = *(undefined4 *)(menu + 0x8210);
    *(undefined4 *)(menu + 0x8210) = 0;
    if (game_manager.difficulty < 4) {
      for (i = 0; (int)i < 0x7a; i = i + 1) {
        *(undefined2 *)(menu + i * 0x110 + 0x8a) = 6;
      }
      *(uint *)(menu + 0x81a0) = (uint)supervisor.config.__byte_1d;
    }
    else {
      for (i = 0; (int)i < 0x7a; i = i + 1) {
        *(undefined2 *)(menu + i * 0x110 + 0x8a) = 0x12;
      }
      *(undefined4 *)(menu + 0x81a0) = 0;
    }
  case 8:
    if (*(int *)(menu + 0x81f4) == 0x24) {
      *(undefined4 *)(menu + 0x81f0) = 0;
      *(undefined4 *)(menu + 0x81f4) = 0;
    }
    break;
  case 7:
    local_c = (AnmVm *)(menu + 0x5610);
    if (game_manager.difficulty < 4) {
      __cycle_menu_indices(menu,4);
      for (i = 0; (int)i < 4; i = i + 1) {
        if (i == *(int *)(menu + 0x81a0)) {
          if ((supervisor.config.flags & 1) == 0) {
            *(undefined4 *)((int)local_c + 0x7c) = 0xff000000;
          }
          else {
            *(undefined4 *)((int)local_c + 0x7c) = 0xffffffff;
          }
          fVar1 = _6_0f;
          *(float *)((int)local_c + 0xe4) = _6_0f;
          *(float *)((int)local_c + 0xe8) = fVar1;
          *(undefined4 *)((int)local_c + 0xec) = 0;
        }
        else {
          if ((supervisor.config.flags & 1) == 0) {
            *(undefined4 *)((int)local_c + 0x7c) = 0x60000000;
          }
          else {
            *(undefined4 *)((int)local_c + 0x7c) = 0x60ffffff;
          }
          *(undefined4 *)((int)local_c + 0xe4) = 0;
          *(undefined4 *)((int)local_c + 0xe8) = 0;
          *(undefined4 *)((int)local_c + 0xec) = 0;
          *(undefined2 *)((int)local_c + 0x84) = 0;
        }
        local_c = (AnmVm *)((int)local_c + 0x110);
      }
      *(uint *)((int)local_c + 0x80) = *(uint *)((int)local_c + 0x80) & 0xfffffffd;
    }
    else {
      for (i = 0; (int)i < 4; i = i + 1) {
        *(uint *)((int)local_c + 0x80) = *(uint *)((int)local_c + 0x80) & 0xfffffffd;
        local_c = (AnmVm *)((int)local_c + 0x110);
      }
      for (i = 4; (int)i < 5; i = i + 1) {
        if ((supervisor.config.flags & 1) == 0) {
          *(undefined4 *)((int)local_c + 0x7c) = 0xff000000;
        }
        else {
          *(undefined4 *)((int)local_c + 0x7c) = 0xffffffff;
        }
        fVar1 = _6_0f;
        *(float *)((int)local_c + 0xe4) = _6_0f;
        *(float *)((int)local_c + 0xe8) = fVar1;
        *(undefined4 *)((int)local_c + 0xec) = 0;
        local_c = (AnmVm *)((int)local_c + 0x110);
      }
    }
    if (((input.currently_pressed & 10) == 0) ||
       ((input.currently_pressed & 10) == (input.word_4 & 10))) {
      if (((input.currently_pressed & 0x1001) != 0) &&
         ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) {
        *(undefined4 *)(menu + 0x81f0) = 9;
        *(undefined4 *)(menu + 0x81f4) = 0;
        for (i = 0; (int)i < 0x7a; i = i + 1) {
          *(undefined2 *)(menu + i * 0x110 + 0x8a) = 7;
        }
        SoundManager::play_sound_centered(&sound_manager,10,0);
        if (game_manager.difficulty < 4) {
          *(undefined2 *)(menu + (*(int *)(menu + 0x81a0) + 0x51) * 0x110 + 0x8a) = 8;
          game_manager.difficulty = *(int32_t *)(menu + 0x81a0);
          *(uint *)(menu + 0x81a0) = (uint)(byte)game_manager.character;
        }
        else {
          *(undefined2 *)(menu + 0x5ada) = 8;
          game_manager.difficulty = 4;
          selectedMenuOption =
               GameManager::__CLRD_related_2(&game_manager,(uint)(byte)game_manager.character,0);
          if ((selectedMenuOption == 0) &&
             (selectedMenuOption =
                   GameManager::__CLRD_related_2(&game_manager,(uint)(byte)game_manager.character,1)
             , selectedMenuOption == 0)) {
            *(uint *)(menu + 0x81a0) = 1 - (uint)(byte)game_manager.character;
          }
          else {
            *(uint *)(menu + 0x81a0) = (uint)(byte)game_manager.character;
          }
        }
        supervisor.config.__byte_1d = (uint8_t)game_manager.difficulty;
        local_c = (AnmVm *)(menu + 0x5b60);
        for (i = 0; (int)i < 2; i = i + 1) {
          if (i != *(int *)(menu + 0x81a0)) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
      }
    }
    else {
      *(undefined4 *)(menu + 0x81f0) = 8;
      *(undefined4 *)(menu + 0x81f4) = 0;
      for (i = 0; (int)i < 0x7a; i = i + 1) {
        *(undefined2 *)(menu + i * 0x110 + 0x8a) = 4;
      }
      SoundManager::play_sound_centered(&sound_manager,0xb,0);
      if (game_manager.difficulty < 4) {
        supervisor.config.__byte_1d = *(uint8_t *)(menu + 0x81a0);
        if (game_manager.__byte_1823 == '\0') {
          *(undefined4 *)(menu + 0x81a0) = 0;
        }
        else {
          *(undefined4 *)(menu + 0x81a0) = 2;
        }
      }
      else {
        *(undefined4 *)(menu + 0x81a0) = 1;
      }
    }
    break;
  case 9:
    if (*(int *)(menu + 0x81f4) < 0x1e) break;
    if ((((input.currently_pressed & 0x40) == 0) ||
        ((input.currently_pressed & 0x40) == (input.word_4 & 0x40))) &&
       (((input.currently_pressed & 0x40) == 0 || (input.word_8 == 0)))) {
LAB_0043666d:
      if ((((input.currently_pressed & 0x80) != 0) &&
          ((input.currently_pressed & 0x80) != (input.word_4 & 0x80))) ||
         (((input.currently_pressed & 0x80) != 0 && (input.word_8 != 0)))) {
        *(int *)(menu + 0x81a0) = *(int *)(menu + 0x81a0) + -1;
        if (*(int *)(menu + 0x81a0) < 0) {
          *(int *)(menu + 0x81a0) = *(int *)(menu + 0x81a0) + 2;
        }
        if (((game_manager.difficulty == 4) &&
            (selectedMenuOption =
                  GameManager::__CLRD_related_2(&game_manager,*(int *)(menu + 0x81a0),0),
            selectedMenuOption == 0)) &&
           (selectedMenuOption =
                 GameManager::__CLRD_related_2(&game_manager,*(int *)(menu + 0x81a0),1),
           selectedMenuOption == 0)) {
          *(int *)(menu + 0x81a0) = *(int *)(menu + 0x81a0) + 1;
          if (1 < *(int *)(menu + 0x81a0)) {
            *(int *)(menu + 0x81a0) = *(int *)(menu + 0x81a0) + -2;
          }
        }
        else {
          SoundManager::play_sound_centered(&sound_manager,0xc,0);
          local_c = (AnmVm *)(menu + 0x5b60);
          for (i = 0; (int)i < 2; i = i + 1) {
            if (i == *(int *)(menu + 0x81a0)) {
              *(undefined2 *)((int)local_c + 0x8a) = 10;
              *(undefined2 *)((int)local_c + 0x19a) = 10;
            }
            else {
              *(undefined2 *)((int)local_c + 0x8a) = 0xb;
              *(undefined2 *)((int)local_c + 0x19a) = 0xb;
            }
            local_c = (AnmVm *)((int)local_c + 0x220);
          }
        }
      }
    }
    else {
      *(int *)(menu + 0x81a0) = *(int *)(menu + 0x81a0) + 1;
      if (1 < *(int *)(menu + 0x81a0)) {
        *(int *)(menu + 0x81a0) = *(int *)(menu + 0x81a0) + -2;
      }
      if (((game_manager.difficulty != 4) ||
          (selectedMenuOption =
                GameManager::__CLRD_related_2(&game_manager,*(int *)(menu + 0x81a0),0),
          selectedMenuOption != 0)) ||
         (selectedMenuOption =
               GameManager::__CLRD_related_2(&game_manager,*(int *)(menu + 0x81a0),1),
         selectedMenuOption != 0)) {
        SoundManager::play_sound_centered(&sound_manager,0xc,0);
        local_c = (AnmVm *)(menu + 0x5b60);
        for (i = 0; (int)i < 2; i = i + 1) {
          if (i == *(int *)(menu + 0x81a0)) {
            *(undefined2 *)((int)local_c + 0x8a) = 9;
            *(undefined2 *)((int)local_c + 0x19a) = 9;
          }
          else {
            *(undefined2 *)((int)local_c + 0x8a) = 0xc;
            *(undefined2 *)((int)local_c + 0x19a) = 0xc;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
        goto LAB_0043666d;
      }
      *(int *)(menu + 0x81a0) = *(int *)(menu + 0x81a0) + -1;
      if (*(int *)(menu + 0x81a0) < 0) {
        *(int *)(menu + 0x81a0) = *(int *)(menu + 0x81a0) + 2;
      }
    }
    if (((input.currently_pressed & 10) == 0) ||
       ((input.currently_pressed & 10) == (input.word_4 & 10))) {
      if (((input.currently_pressed & 0x1001) != 0) &&
         ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) {
        *(undefined4 *)(menu + 0x81f0) = 0xb;
        *(undefined4 *)(menu + 0x81f4) = 0;
        for (i = 0; (int)i < 0x7a; i = i + 1) {
          *(undefined2 *)(menu + i * 0x110 + 0x8a) = 0xd;
        }
        *(undefined2 *)(menu + (game_manager.difficulty + 0x51) * 0x110 + 0x8a) = 0;
        local_c = (AnmVm *)(menu + 0x5b60);
        for (i = 0; (int)i < 2; i = i + 1) {
          if (i != *(int *)(menu + 0x81a0)) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
        local_c = (AnmVm *)(menu + 0x61c0);
        for (i = 0; (int)i < 2; i = i + 1) {
          if (i != *(int *)(menu + 0x81a0)) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
        game_manager.character = *(char *)(menu + 0x81a0);
        if (game_manager.difficulty < 4) {
          *(uint *)(menu + 0x81a0) = (uint)(byte)game_manager.shottype;
        }
        else {
          selectedMenuOption =
               GameManager::__CLRD_related_2
                         (&game_manager,(uint)(byte)game_manager.character,
                          (uint)(byte)game_manager.shottype);
          if (selectedMenuOption == 0) {
            *(uint *)(menu + 0x81a0) = 1 - (uint)(byte)game_manager.shottype;
          }
          else {
            *(uint *)(menu + 0x81a0) = (uint)(byte)game_manager.shottype;
          }
        }
        SoundManager::play_sound_centered(&sound_manager,10,0);
      }
    }
    else {
      *(undefined4 *)(menu + 0x81f0) = 7;
      *(undefined4 *)(menu + 0x81f4) = 0;
      if (game_manager.difficulty < 4) {
        for (i = 0; (int)i < 0x7a; i = i + 1) {
          *(undefined2 *)(menu + i * 0x110 + 0x8a) = 6;
        }
        *(uint *)(menu + 0x81a0) = (uint)supervisor.config.__byte_1d;
      }
      else {
        for (i = 0; (int)i < 0x7a; i = i + 1) {
          *(undefined2 *)(menu + i * 0x110 + 0x8a) = 0x12;
        }
        *(undefined4 *)(menu + 0x81a0) = 0;
      }
      SoundManager::play_sound_centered(&sound_manager,0xb,0);
    }
    break;
  case 10:
    if (0x3b < *(int *)(menu + 0x81f4)) {
      supervisor.dword_18C = 6;
      return 0;
    }
    break;
  case 0xb:
    __cycle_menu_indices(menu,2);
    if ((game_manager.difficulty == 4) &&
       (selectedMenuOption =
             GameManager::__CLRD_related_2
                       (&game_manager,(uint)(byte)game_manager.character,*(int *)(menu + 0x81a0)),
       selectedMenuOption == 0)) {
      *(int *)(menu + 0x81a0) = 1 - *(int *)(menu + 0x81a0);
    }
    local_c = (AnmVm *)(menu + 0x61c0);
    for (i = 0; (int)i < 2; i = i + 1) {
      *(uint *)((int)local_c + 400) = *(uint *)((int)local_c + 400) | 8;
      local_c = (AnmVm *)((int)local_c + 0x220);
    }
    local_c = (AnmVm *)(menu + ((uint)(byte)game_manager.character * 2 + 0x5c) * 0x110);
    for (i = 0; (int)i < 2; i = i + 1) {
      *(uint *)((int)local_c + 0x80) = *(uint *)((int)local_c + 0x80) | 8;
      *(uint *)((int)local_c + 0x80) = *(uint *)((int)local_c + 0x80) | 1;
      if (i == *(int *)(menu + 0x81a0)) {
        if ((supervisor.config.flags & 1) == 0) {
          *(undefined4 *)((int)local_c + 0x7c) = 0xff202020;
        }
        else {
          *(undefined4 *)((int)local_c + 0x7c) = 0xffffffff;
        }
        fVar1 = _6_0f;
        *(float *)((int)local_c + 0xe4) = _6_0f;
        *(float *)((int)local_c + 0xe8) = fVar1;
        *(undefined4 *)((int)local_c + 0xec) = 0;
      }
      else {
        if ((supervisor.config.flags & 1) == 0) {
          *(undefined4 *)((int)local_c + 0x7c) = 0xa0000000;
        }
        else {
          *(undefined4 *)((int)local_c + 0x7c) = 0xa0d0d0d0;
        }
        *(undefined4 *)((int)local_c + 0xe4) = 0;
        *(undefined4 *)((int)local_c + 0xe8) = 0;
        *(undefined4 *)((int)local_c + 0xec) = 0;
      }
      local_c = (AnmVm *)((int)local_c + 0x110);
    }
    if (0x1d < *(int *)(menu + 0x81f4)) {
      if (((input.currently_pressed & 10) == 0) ||
         ((input.currently_pressed & 10) == (input.word_4 & 10))) {
        if (((input.currently_pressed & 0x1001) != 0) &&
           ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) {
          game_manager.shottype = *(char *)(menu + 0x81a0);
          if (game_manager.__byte_1823 == '\0') {
            if (game_manager.difficulty < 4) {
              game_manager.current_stage = 0;
            }
            else {
              game_manager.current_stage = 6;
            }
            goto LAB_00436de7;
          }
          *(undefined4 *)(menu + 0x81f0) = 0x11;
          *(undefined4 *)(menu + 0x81f4) = 0;
          for (i = 0; (int)i < 0x7a; i = i + 1) {
            *(undefined2 *)(menu + i * 0x110 + 0x8a) = 0x13;
          }
          *(undefined2 *)(menu + (game_manager.difficulty + 0x51) * 0x110 + 0x8a) = 0;
          local_c = (AnmVm *)(menu + 0x5b60);
          for (i = 0; (int)i < 2; i = i + 1) {
            if (i != (byte)game_manager.character) {
              *(undefined2 *)((int)local_c + 0x8a) = 0;
              *(undefined2 *)((int)local_c + 0x19a) = 0;
            }
            local_c = (AnmVm *)((int)local_c + 0x220);
          }
          local_c = (AnmVm *)(menu + 0x61c0);
          for (i = 0; (int)i < 2; i = i + 1) {
            if (i != (byte)game_manager.character) {
              *(undefined2 *)((int)local_c + 0x8a) = 0;
              *(undefined2 *)((int)local_c + 0x19a) = 0;
            }
            local_c = (AnmVm *)((int)local_c + 0x220);
          }
          *(int32_t *)(menu + 0x81a0) = game_manager.__dword_1a38;
          if (*(byte *)(((uint)(byte)game_manager.shottype + (uint)(byte)game_manager.character * 2)
                        * 0x18 + 0x69cce1 + game_manager.difficulty) < 7) {
            local_b4 = (uint)*(byte *)(((uint)(byte)game_manager.shottype +
                                       (uint)(byte)game_manager.character * 2) * 0x18 + 0x69cce1 +
                                      game_manager.difficulty);
          }
          else {
            local_b4 = 6;
          }
          local_4c = local_b4;
          if ((game_manager.difficulty == 0) && (local_b4 == 6)) {
            local_4c = 5;
          }
          if ((int)local_4c <= *(int *)(menu + 0x81a0)) {
            *(undefined4 *)(menu + 0x81a0) = 0;
          }
        }
      }
      else {
        *(undefined4 *)(menu + 0x81f0) = 9;
        *(undefined4 *)(menu + 0x81f4) = 0;
        for (i = 0; (int)i < 0x7a; i = i + 1) {
          *(undefined2 *)(menu + i * 0x110 + 0x8a) = 7;
        }
        local_c = (AnmVm *)(menu + 0x61c0);
        for (i = 0; (int)i < 2; i = i + 1) {
          if (i != (byte)game_manager.character) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
        *(undefined2 *)(menu + (game_manager.difficulty + 0x51) * 0x110 + 0x8a) = 0;
        SoundManager::play_sound_centered(&sound_manager,0xb,0);
        game_manager.shottype = *(char *)(menu + 0x81a0);
        *(uint *)(menu + 0x81a0) = (uint)(byte)game_manager.character;
        local_c = (AnmVm *)(menu + 0x5b60);
        for (i = 0; (int)i < 2; i = i + 1) {
          if (i != *(int *)(menu + 0x81a0)) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
      }
    }
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    __sub_4381EC((int)menu);
    if (selectedMenuOption != 0) {
      return 0;
    }
    break;
  case 0x10:
    if (0x3b < *(int *)(menu + 0x81f4)) {
      supervisor.dword_18C = 9;
      return 0;
    }
    break;
  case 0x11:
    if (*(byte *)(((uint)(byte)game_manager.shottype + (uint)(byte)game_manager.character * 2) *
                  0x18 + 0x69cce1 + game_manager.difficulty) < 7) {
      local_b8 = (uint)*(byte *)(((uint)(byte)game_manager.shottype +
                                 (uint)(byte)game_manager.character * 2) * 0x18 + 0x69cce1 +
                                game_manager.difficulty);
    }
    else {
      local_b8 = 6;
    }
    local_50 = local_b8;
    if ((game_manager.difficulty == 0) && (local_b8 == 6)) {
      local_50 = 5;
    }
    __cycle_menu_indices(menu,local_50);
    if (0x1d < *(int *)(menu + 0x81f4)) {
      if (((input.currently_pressed & 10) == 0) ||
         ((input.currently_pressed & 10) == (input.word_4 & 10))) {
        if (((input.currently_pressed & 0x1001) != 0) &&
           ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) {
          game_manager.current_stage = *(int32_t *)(menu + 0x81a0);
          game_manager.__dword_1a38 = *(int32_t *)(menu + 0x81a0);
LAB_00436de7:
          game_manager.lives_remaining = supervisor.config.starting_lives;
          game_manager.bombs_remaining = supervisor.config.starting_bombs;
          if ((game_manager.difficulty == 4) || (game_manager.__byte_1823 != '\0')) {
            game_manager.lives_remaining = '\x02';
            game_manager.bombs_remaining = '\x03';
          }
          supervisor.dword_18C = 2;
          SoundManager::play_sound_centered(&sound_manager,10,0);
          game_manager.__spellcard_related_1 = 0;
          local_48 = 0.0;
          if (*(int *)(menu + 0x10ee0) < 2) {
            local_48 = _60_0f;
          }
          else {
            for (i = 0; (int)i < *(int *)(menu + 0x10ee0); i = i + 1) {
              local_48 = local_48 + *(float *)(menu + i * 4 + 0x10ee4);
            }
            local_48 = local_48 / (float)i;
          }
          if (local_48 < _55_0f) {
            if (local_48 < _35_0f) {
              if (local_48 < _10_0f) {
                if (local_48 < _5_0f) {
                  if (local_48 < _7_5f) {
                    if (local_48 < _2_5f) {
                      if (local_48 < _7_5f) {
                        if (local_48 < _3_5f) {
                          if (local_48 < _8_0f) {
                            slowdown_rate = 1.0;
                          }
                          else {
                            slowdown_rate = __7_f;
                          }
                        }
                        else {
                          slowdown_rate = __8f;
                        }
                      }
                      else {
                        slowdown_rate = ram0x0046a518;
                      }
                    }
                    else {
                      slowdown_rate = __7058824f;
                    }
                  }
                  else {
                    slowdown_rate = __3_f;
                  }
                }
                else {
                  slowdown_rate = __6f;
                }
              }
              else {
                slowdown_rate = __5f;
              }
            }
            else {
              slowdown_rate = __4f;
            }
          }
          else {
            slowdown_rate = __8_f;
          }
          __stub_4();
          supervisor.slowdown = slowdown_rate;
          Supervisor::__sub_424D38(&supervisor);
          return 0;
        }
      }
      else {
        *(undefined4 *)(menu + 0x81f0) = 0xb;
        *(undefined4 *)(menu + 0x81f4) = 0;
        for (i = 0; (int)i < 0x7a; i = i + 1) {
          *(undefined2 *)(menu + i * 0x110 + 0x8a) = 0xd;
        }
        *(undefined2 *)(menu + (game_manager.difficulty + 0x51) * 0x110 + 0x8a) = 0;
        local_c = (AnmVm *)(menu + 0x5b60);
        for (i = 0; (int)i < 2; i = i + 1) {
          if (i != (byte)game_manager.character) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
        local_c = (AnmVm *)(menu + 0x61c0);
        for (i = 0; (int)i < 2; i = i + 1) {
          if (i != (byte)game_manager.character) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
        *(uint *)(menu + 0x81a0) = (uint)(byte)game_manager.shottype;
        SoundManager::play_sound_centered(&sound_manager,10,0);
      }
    }
  }
  *(int *)(menu + 0x81f4) = *(int *)(menu + 0x81f4) + 1;
  for (i = 0; (int)i < 0x7a; i = i + 1) {
    if (*(int *)(menu + i * 0x110 + 0xc0) == 0) {
      bVar4 = false;
    }
    else if (**(int **)(menu + i * 0x110 + 0xc0) < 0) {
      bVar4 = false;
    }
    else {
      bVar4 = anm_manager_ptr->textures[**(int **)(menu + i * 0x110 + 0xc0)] !=
              (IDirect3DTexture8 *)0x0;
    }
    if (bVar4) {
      AnmManager::run_anm(anm_manager_ptr,(AnmVm *)(menu + i * 0x110));
    }
  }
  return 1;
}

