
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall ResultScreen::__sub_42BC85(ResultScreen *this)

{
  undefined *puVar1;
  int local_20;
  int local_1c;
  undefined *local_c;
  int local_8;
  
  if (*(int *)(this->field0_0x0 + 4) == 0) {
    *(uint *)(this->field0_0x0 + 0x24) = (uint)(byte)game_manager.character;
    *(int32_t *)(this->field0_0x0 + 0x2c) = game_manager.difficulty;
    local_c = this->field0_0x0 + 0x40;
    for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
      *(short *)(local_c + 0x8a) = (short)*(undefined4 *)(this->field0_0x0 + 0x2c) + 3;
      local_c = local_c + 0x110;
    }
    AnmManager::__draw_text_to_vm_center
              (anm_manager_ptr,(AnmVm *)(this->field0_0x0 + 0x28a0),0xffffff,0,
               *(char **)(&DAT_004784d8 + *(int *)(this->field0_0x0 + 0x24) * 8));
    if (game_manager.shottype != '\0') {
      *(undefined4 *)(this->field0_0x0 + 0x291c) = 0x80ffffff;
    }
    AnmManager::__draw_text_to_vm_center
              (anm_manager_ptr,(AnmVm *)(this->field0_0x0 + 0x29b0),0xffffff,0,
               *(char **)(&DAT_004784dc + *(int *)(this->field0_0x0 + 0x24) * 8));
    if (game_manager.shottype != '\x01') {
      *(undefined4 *)(this->field0_0x0 + 0x2a2c) = 0x80ffffff;
    }
    this->field0_0x0[0x5190] =
         game_manager.shottype + (char)*(undefined4 *)(this->field0_0x0 + 0x24) * '\x02';
    this->field0_0x0[0x5191] = this->field0_0x0[0x2c];
    *(int32_t *)(this->field0_0x0 + 0x518c) = game_manager.score;
    this->field0_0x0[0x5188] = 0x10;
    *(undefined4 *)(this->field0_0x0 + 0x5180) = _HSCR_._0_4_;
    if (game_manager.__byte_1822 == '\0') {
      this->field0_0x0[0x5192] = (undefined)game_manager.current_stage;
    }
    else {
      this->field0_0x0[0x5192] = 99;
    }
    this->field0_0x0[0x5189] = 1;
    _strcpy(this->field0_0x0 + 0x5193,"        ");
    puVar1 = this->field0_0x0 + 0x5180;
    __sub_42BC2D(this,(int)puVar1,*(int *)(this->field0_0x0 + 0x2c),
                 (uint)(byte)game_manager.shottype + *(int *)(this->field0_0x0 + 0x24) * 2);
    if (9 < (int)puVar1) goto LAB_0042c273;
    *(undefined4 *)(this->field0_0x0 + 0x10) = 0;
    _strcpy(this->field0_0x0 + 0x34,"");
  }
  if (*(int *)(this->field0_0x0 + 4) < 0x1e) {
    return 0;
  }
  if ((((input.currently_pressed & 0x10) != 0) &&
      ((input.currently_pressed & 0x10) != (input.word_4 & 0x10))) ||
     (((input.currently_pressed & 0x10) != 0 && (input.word_8 != 0)))) {
    do {
      *(int *)(this->field0_0x0 + 0x20) = *(int *)(this->field0_0x0 + 0x20) + -0x10;
      if (*(int *)(this->field0_0x0 + 0x20) < 0) {
        *(int *)(this->field0_0x0 + 0x20) = *(int *)(this->field0_0x0 + 0x20) + 0x60;
      }
    } while (*(char *)(_DAT_004784d4 + *(int *)(this->field0_0x0 + 0x20)) == ' ');
    SoundManager::play_sound_centered(&sound_manager,0xc,0);
  }
  if ((((input.currently_pressed & 0x20) != 0) &&
      ((input.currently_pressed & 0x20) != (input.word_4 & 0x20))) ||
     (((input.currently_pressed & 0x20) != 0 && (input.word_8 != 0)))) {
    do {
      *(int *)(this->field0_0x0 + 0x20) = *(int *)(this->field0_0x0 + 0x20) + 0x10;
      if (0x5f < *(int *)(this->field0_0x0 + 0x20)) {
        *(int *)(this->field0_0x0 + 0x20) = *(int *)(this->field0_0x0 + 0x20) + -0x60;
      }
    } while (*(char *)(_DAT_004784d4 + *(int *)(this->field0_0x0 + 0x20)) == ' ');
    SoundManager::play_sound_centered(&sound_manager,0xc,0);
  }
  if ((((input.currently_pressed & 0x40) != 0) &&
      ((input.currently_pressed & 0x40) != (input.word_4 & 0x40))) ||
     (((input.currently_pressed & 0x40) != 0 && (input.word_8 != 0)))) {
    do {
      *(int *)(this->field0_0x0 + 0x20) = *(int *)(this->field0_0x0 + 0x20) + -1;
      if (*(int *)(this->field0_0x0 + 0x20) % 0x10 == 0xf) {
        *(int *)(this->field0_0x0 + 0x20) = *(int *)(this->field0_0x0 + 0x20) + 0x10;
      }
      if (*(int *)(this->field0_0x0 + 0x20) < 0) {
        *(undefined4 *)(this->field0_0x0 + 0x20) = 0xf;
      }
    } while (*(char *)(_DAT_004784d4 + *(int *)(this->field0_0x0 + 0x20)) == ' ');
    SoundManager::play_sound_centered(&sound_manager,0xc,0);
  }
  if ((((input.currently_pressed & 0x80) != 0) &&
      ((input.currently_pressed & 0x80) != (input.word_4 & 0x80))) ||
     (((input.currently_pressed & 0x80) != 0 && (input.word_8 != 0)))) {
    do {
      *(int *)(this->field0_0x0 + 0x20) = *(int *)(this->field0_0x0 + 0x20) + 1;
      if (*(int *)(this->field0_0x0 + 0x20) % 0x10 == 0) {
        *(int *)(this->field0_0x0 + 0x20) = *(int *)(this->field0_0x0 + 0x20) + -0x10;
      }
    } while (*(char *)(_DAT_004784d4 + *(int *)(this->field0_0x0 + 0x20)) == ' ');
    SoundManager::play_sound_centered(&sound_manager,0xc,0);
  }
  if ((((input.currently_pressed & 0x1001) == 0) ||
      ((input.currently_pressed & 0x1001) == (input.word_4 & 0x1001))) &&
     (((input.currently_pressed & 0x1001) == 0 || (input.word_8 == 0)))) {
LAB_0042c1aa:
    if ((((input.currently_pressed & 10) != 0) &&
        ((input.currently_pressed & 10) != (input.word_4 & 10))) ||
       (((input.currently_pressed & 10) != 0 && (input.word_8 != 0)))) {
      if (*(int *)(this->field0_0x0 + 0x10) < 8) {
        local_20 = *(int *)(this->field0_0x0 + 0x10);
      }
      else {
        local_20 = 7;
      }
      if (0 < *(int *)(this->field0_0x0 + 0x10)) {
        *(int *)(this->field0_0x0 + 0x10) = *(int *)(this->field0_0x0 + 0x10) + -1;
        this->field0_0x0[local_20 + 0x5193] = 0x20;
      }
      SoundManager::play_sound_centered(&sound_manager,0xb,0);
    }
    if ((input.currently_pressed & 8) == 0) {
      return 0;
    }
    if ((input.currently_pressed & 8) == (input.word_4 & 8)) {
      return 0;
    }
  }
  else {
    if (*(int *)(this->field0_0x0 + 0x10) < 8) {
      local_1c = *(int *)(this->field0_0x0 + 0x10);
    }
    else {
      local_1c = 7;
    }
    if (*(int *)(this->field0_0x0 + 0x20) < 0x5e) {
      this->field0_0x0[local_1c + 0x5193] =
           *(undefined *)(_DAT_004784d4 + *(int *)(this->field0_0x0 + 0x20));
LAB_0042c173:
      if ((*(int *)(this->field0_0x0 + 0x10) < 8) &&
         (*(int *)(this->field0_0x0 + 0x10) = *(int *)(this->field0_0x0 + 0x10) + 1,
         *(int *)(this->field0_0x0 + 0x10) == 8)) {
        *(undefined4 *)(this->field0_0x0 + 0x20) = 0x5f;
      }
      SoundManager::play_sound_centered(&sound_manager,10,0);
      goto LAB_0042c1aa;
    }
    if (*(int *)(this->field0_0x0 + 0x20) == 0x5e) {
      this->field0_0x0[local_1c + 0x5193] = 0x20;
      goto LAB_0042c173;
    }
  }
  SoundManager::play_sound_centered(&sound_manager,0xb,0);
LAB_0042c273:
  *(undefined4 *)(this->field0_0x0 + 8) = 0xf;
  *(undefined4 *)(this->field0_0x0 + 4) = 0;
  local_c = this->field0_0x0 + 0x40;
  for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
    *(undefined2 *)(local_c + 0x8a) = 2;
    local_c = local_c + 0x110;
  }
  _strcpy(this->field0_0x0 + 0x34,this->field0_0x0 + 0x5193);
  return 0;
}

