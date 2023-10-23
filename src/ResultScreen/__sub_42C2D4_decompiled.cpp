
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ResultScreen::__sub_42C2D4(ResultScreen *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint unaff_retaddr;
  int local_b8;
  int local_b4;
  char local_a4 [68];
  int local_60;
  char local_5c [68];
  uint local_18;
  int *local_14;
  int i;
  int local_c;
  undefined *local_8;
  
  local_18 = _DAT_0047a630 ^ unaff_retaddr;
  iVar1 = *(int *)(this->field0_0x0 + 8);
  if (iVar1 == 10) {
    if (*(int *)(this->field0_0x0 + 4) == 0x3c) {
      if (game_manager.__byte_1818 == '\0') {
        if (__99f <= supervisor.slowdown) {
          local_c = 9;
        }
        else {
          local_c = 0xd;
        }
      }
      else {
        local_c = 0xc;
      }
      local_8 = this->field0_0x0 + 0x150;
      for (i = 0; i < 38; i = i + 1) {
        *(undefined2 *)(local_8 + 0x8a) = (undefined2)local_c;
        local_8 = local_8 + 0x110;
      }
      if (local_c != 9) {
        *(undefined4 *)(this->field0_0x0 + 8) = 0xb;
      }
      *(undefined4 *)(this->field0_0x0 + 0x10) = 0;
    }
    local_8 = this->field0_0x0 + 0x1140;
    if (*(int *)(this->field0_0x0 + 0x10) == 0) {
      *(uint *)(this->field0_0x0 + 0x11bc) =
           *(uint *)(this->field0_0x0 + 0x11bc) & 0xff000000 | 0xff6060;
      *(uint *)(this->field0_0x0 + 0x12cc) =
           *(uint *)(this->field0_0x0 + 0x12cc) & 0xff000000 | 0x606060;
    }
    else {
      *(uint *)(this->field0_0x0 + 0x11bc) =
           *(uint *)(this->field0_0x0 + 0x11bc) & 0xff000000 | 0x606060;
      *(uint *)(this->field0_0x0 + 0x12cc) =
           *(uint *)(this->field0_0x0 + 0x12cc) & 0xff000000 | 0xff6060;
    }
    if (*(int *)(this->field0_0x0 + 4) < 0x50) goto LAB_0042d095;
    __sub_42D18F((int)this,2);
    if ((((input.currently_pressed & 10) == 0) ||
        ((input.currently_pressed & 10) == (input.word_4 & 10))) &&
       (((input.currently_pressed & 8) == 0 || ((input.currently_pressed & 8) == (input.word_4 & 8))
        ))) {
      if (((input.currently_pressed & 0x1001) == 0) ||
         ((input.currently_pressed & 0x1001) == (input.word_4 & 0x1001))) goto LAB_0042d095;
      if (*(int *)(this->field0_0x0 + 0x10) == 0) goto LAB_0042c515;
    }
    *(undefined4 *)(this->field0_0x0 + 4) = 0;
    SoundManager::play_sound_centered(&sound_manager,0xb,0);
    *(undefined4 *)(this->field0_0x0 + 8) = 2;
    local_8 = this->field0_0x0 + 0x40;
    for (i = 0; i < 0x26; i = i + 1) {
      *(undefined2 *)(local_8 + 0x8a) = 2;
      local_8 = local_8 + 0x110;
    }
  }
  else {
    if (iVar1 == 0xb) {
      if ((0x13 < *(int *)(this->field0_0x0 + 4)) &&
         ((((input.currently_pressed & 0x1001) != 0 &&
           ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) ||
          (((input.currently_pressed & 10) != 0 &&
           ((input.currently_pressed & 10) != (input.word_4 & 10))))))) {
        *(undefined4 *)(this->field0_0x0 + 4) = 0;
        SoundManager::play_sound_centered(&sound_manager,0xb,0);
        *(undefined4 *)(this->field0_0x0 + 8) = 2;
        local_8 = this->field0_0x0 + 0x40;
        for (i = 0; i < 0x26; i = i + 1) {
          *(undefined2 *)(local_8 + 0x8a) = 2;
          local_8 = local_8 + 0x110;
        }
      }
      goto LAB_0042d095;
    }
    if (iVar1 != 0xc) {
      if (iVar1 == 0xd) {
        if (*(int *)(this->field0_0x0 + 4) < 0x1e) goto LAB_0042d095;
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
        if ((((input.currently_pressed & 0x1001) != 0) &&
            ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) ||
           (((input.currently_pressed & 0x1001) != 0 && (input.word_8 != 0)))) {
          if (*(int *)(this->field0_0x0 + 0x10) < 8) {
            local_b4 = *(int *)(this->field0_0x0 + 0x10);
          }
          else {
            local_b4 = 7;
          }
          local_60 = local_b4;
          if (*(int *)(this->field0_0x0 + 0x20) < 0x5e) {
            this->field0_0x0[local_b4 + 0x34] =
                 *(undefined *)(_DAT_004784d4 + *(int *)(this->field0_0x0 + 0x20));
          }
          else if (*(int *)(this->field0_0x0 + 0x20) == 0x5e) {
            this->field0_0x0[local_b4 + 0x34] = 0x20;
          }
          else {
            _sprintf(local_a4,(byte *)"./replay/th6_%.2d.rpy");
            __sub_42AB30(local_a4,this->field0_0x0 + 0x34);
            *(undefined4 *)(this->field0_0x0 + 4) = 0;
            *(undefined4 *)(this->field0_0x0 + 8) = 2;
            local_8 = this->field0_0x0 + 0x40;
            for (i = 0; i < 0x26; i = i + 1) {
              *(undefined2 *)(local_8 + 0x8a) = 2;
              local_8 = local_8 + 0x110;
            }
          }
          if ((*(int *)(this->field0_0x0 + 0x10) < 8) &&
             (*(int *)(this->field0_0x0 + 0x10) = *(int *)(this->field0_0x0 + 0x10) + 1,
             *(int *)(this->field0_0x0 + 0x10) == 8)) {
            *(undefined4 *)(this->field0_0x0 + 0x20) = 0x5f;
          }
          SoundManager::play_sound_centered(&sound_manager,10,0);
        }
        if ((((input.currently_pressed & 10) != 0) &&
            ((input.currently_pressed & 10) != (input.word_4 & 10))) ||
           (((input.currently_pressed & 10) != 0 && (input.word_8 != 0)))) {
          if (*(int *)(this->field0_0x0 + 0x10) < 8) {
            local_b8 = *(int *)(this->field0_0x0 + 0x10);
          }
          else {
            local_b8 = 7;
          }
          if (0 < *(int *)(this->field0_0x0 + 0x10)) {
            *(int *)(this->field0_0x0 + 0x10) = *(int *)(this->field0_0x0 + 0x10) + -1;
            this->field0_0x0[local_b8 + 0x34] = 0x20;
          }
          SoundManager::play_sound_centered(&sound_manager,0xb,0);
        }
        if (((input.currently_pressed & 8) == 0) ||
           ((input.currently_pressed & 8) == (input.word_4 & 8))) goto LAB_0042d095;
      }
      else {
        if (iVar1 != 0xe) goto LAB_0042d095;
        local_8 = this->field0_0x0 + 0x1140;
        if (*(int *)(this->field0_0x0 + 0x10) == 0) {
          *(uint *)(this->field0_0x0 + 0x11bc) =
               *(uint *)(this->field0_0x0 + 0x11bc) & 0xff000000 | 0xff6060;
          *(uint *)(this->field0_0x0 + 0x12cc) =
               *(uint *)(this->field0_0x0 + 0x12cc) & 0xff000000 | 0x606060;
        }
        else {
          *(uint *)(this->field0_0x0 + 0x11bc) =
               *(uint *)(this->field0_0x0 + 0x11bc) & 0xff000000 | 0x606060;
          *(uint *)(this->field0_0x0 + 0x12cc) =
               *(uint *)(this->field0_0x0 + 0x12cc) & 0xff000000 | 0xff6060;
        }
        if (*(int *)(this->field0_0x0 + 4) < 0x14) goto LAB_0042d095;
        __sub_42D18F((int)this,2);
        if ((((input.currently_pressed & 10) == 0) ||
            ((input.currently_pressed & 10) == (input.word_4 & 10))) &&
           (((input.currently_pressed & 8) == 0 ||
            ((input.currently_pressed & 8) == (input.word_4 & 8))))) {
          if (((input.currently_pressed & 0x1001) == 0) ||
             ((input.currently_pressed & 0x1001) == (input.word_4 & 0x1001))) goto LAB_0042d095;
          *(undefined4 *)(this->field0_0x0 + 4) = 0;
          if (*(int *)(this->field0_0x0 + 0x10) == 0) {
            local_8 = this->field0_0x0 + 0x40;
            for (i = 0; i < 0x26; i = i + 1) {
              *(undefined2 *)(local_8 + 0x8a) = 0xf;
              local_8 = local_8 + 0x110;
            }
            local_8 = this->field0_0x0 + *(int *)(this->field0_0x0 + 0x1c) * 0x110 + 0x17a0;
            *(undefined2 *)(local_8 + 0x8a) = 0xe;
            *(undefined4 *)(this->field0_0x0 + 8) = 0xd;
            goto LAB_0042d095;
          }
        }
      }
LAB_0042c515:
      SoundManager::play_sound_centered(&sound_manager,10,0);
      *(undefined4 *)(this->field0_0x0 + 8) = 0xc;
      local_8 = this->field0_0x0 + 0x40;
      for (i = 0; i < 0x26; i = i + 1) {
        *(undefined2 *)(local_8 + 0x8a) = 10;
        local_8 = local_8 + 0x110;
      }
      *(undefined4 *)(this->field0_0x0 + 4) = 0;
    }
    if (*(int *)(this->field0_0x0 + 4) == 0) {
      __mkdir("replay");
      for (i = 0; i < 0xf; i = i + 1) {
        _sprintf(local_5c,(byte *)"./replay/th6_%.2d.rpy");
        local_14 = (int *)__read_file_to_buffer(local_5c,1);
        if (local_14 != (int *)0x0) {
          iVar1 = __sub_42A140(local_14,___current_filesize);
          if (iVar1 == 0) {
            piVar2 = local_14;
            piVar3 = (int *)(this->field0_0x0 + i * 0x50 + 0x51b0);
            for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar3 = *piVar2;
              piVar2 = piVar2 + 1;
              piVar3 = piVar3 + 1;
            }
          }
          _free(local_14);
        }
      }
    }
    if (0x13 < *(int *)(this->field0_0x0 + 4)) {
      __sub_42D0A4((int)this,0xf);
      *(undefined4 *)(this->field0_0x0 + 0x1c) = *(undefined4 *)(this->field0_0x0 + 0x10);
      if (((input.currently_pressed & 0x1001) != 0) &&
         ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) {
        SoundManager::play_sound_centered(&sound_manager,10,0);
        *(undefined4 *)(this->field0_0x0 + 0x1c) = *(undefined4 *)(this->field0_0x0 + 0x10);
        *(undefined4 *)(this->field0_0x0 + 4) = 0;
        __strdate(this->field0_0x0 + 0x5670);
        *(int32_t *)(this->field0_0x0 + 0x5684) = game_manager.score;
        if ((*(int *)(this->field0_0x0 + *(int *)(this->field0_0x0 + 0x10) * 0x50 + 0x51b0) ==
             magic_T6RP._0_4_) &&
           (*(short *)(this->field0_0x0 + *(int *)(this->field0_0x0 + 0x10) * 0x50 + 0x51b4) ==
            0x102)) {
          local_8 = this->field0_0x0 + 0x40;
          for (i = 0; i < 0x26; i = i + 1) {
            *(undefined2 *)(local_8 + 0x8a) = 0xb;
            local_8 = local_8 + 0x110;
          }
          local_8 = this->field0_0x0 + *(int *)(this->field0_0x0 + 0x1c) * 0x110 + 0x17a0;
          *(undefined2 *)(local_8 + 0x8a) = 0xe;
          *(undefined4 *)(this->field0_0x0 + 8) = 0xe;
        }
        else {
          local_8 = this->field0_0x0 + 0x40;
          for (i = 0; i < 0x26; i = i + 1) {
            *(undefined2 *)(local_8 + 0x8a) = 0xf;
            local_8 = local_8 + 0x110;
          }
          local_8 = this->field0_0x0 + *(int *)(this->field0_0x0 + 0x1c) * 0x110 + 0x17a0;
          *(undefined2 *)(local_8 + 0x8a) = 0xe;
          *(undefined4 *)(this->field0_0x0 + 8) = 0xd;
        }
        *(undefined4 *)(this->field0_0x0 + 0x10) = 0;
        *(undefined4 *)(this->field0_0x0 + 0x20) = 0;
      }
      if (((input.currently_pressed & 10) != 0) &&
         ((input.currently_pressed & 10) != (input.word_4 & 10))) {
        SoundManager::play_sound_centered(&sound_manager,0xb,0);
        *(undefined4 *)(this->field0_0x0 + 8) = 10;
        local_8 = this->field0_0x0 + 0x40;
        for (i = 0; i < 0x26; i = i + 1) {
          *(undefined2 *)(local_8 + 0x8a) = 2;
          local_8 = local_8 + 0x110;
        }
        *(undefined4 *)(this->field0_0x0 + 4) = 0;
      }
    }
  }
LAB_0042d095:
  ___security_check_cookie_4(local_18 ^ unaff_retaddr);
  return;
}

