
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Menu::__sub_4381EC(int param_1)

{
  BOOL BVar1;
  char *pcVar2;
  int j;
  int *piVar3;
  int *piVar4;
  uint unaff_retaddr;
  _WIN32_FIND_DATAA replayBuffer;
  char local_5c [64];
  uint local_1c;
  int *local_18;
  int local_14;
  HANDLE replayFile;
  int i;
  int local_8;
  
  local_1c = _DAT_0047a630 ^ unaff_retaddr;
  j = *(int *)(param_1 + 0x81f0);
  if (j == 0xc) {
    if (*(int *)(param_1 + 0x81f4) == 0x3c) {
      j = __sub_43A1EC(param_1);
      if (j == 0) {
        local_14 = 0;
        for (i = 0; i < 15; i = i + 1) {
          _sprintf(local_5c,(byte *)"./replay/th6_%.2d.rpy");
          local_18 = (int *)__read_file_to_buffer(local_5c,1);
          if (local_18 != (int *)0x0) {
            j = __sub_42A140(local_18,___current_filesize);
            if (j == 0) {
              piVar3 = local_18;
              piVar4 = (int *)(param_1 + 0xfc1c + local_14 * 0x50);
              for (j = 0x14; j != 0; j = j + -1) {
                *piVar4 = *piVar3;
                piVar3 = piVar3 + 1;
                piVar4 = piVar4 + 1;
              }
              _strcpy((char *)(param_1 + 0x823c + local_14 * 0x200),local_5c);
              _sprintf((char *)(param_1 + 0xfa3c + local_14 * 8),(byte *)"No.%.2d");
              local_14 = local_14 + 1;
            }
            _free(local_18);
          }
        }
        __mkdir("./replay");
        __chdir("./replay");
        replayFile = FindFirstFileA("th6_ud????.rpy",&replayBuffer);
        if (replayFile != (HANDLE)0xffffffff) {
          for (i = 0; i < 0x2d; i = i + 1) {
            local_18 = (int *)__read_file_to_buffer(replayBuffer.cFileName,1);
            if (local_18 != (int *)0x0) {
              j = __sub_42A140(local_18,___current_filesize);
              if (j == 0) {
                piVar3 = local_18;
                piVar4 = (int *)(param_1 + 0xfc1c + local_14 * 0x50);
                for (j = 0x14; j != 0; j = j + -1) {
                  *piVar4 = *piVar3;
                  piVar3 = piVar3 + 1;
                  piVar4 = piVar4 + 1;
                }
                _sprintf((char *)(param_1 + 0x823c + local_14 * 0x200),(byte *)"./replay/%s");
                _sprintf((char *)(param_1 + 0xfa3c + local_14 * 8),(byte *)"User ");
                local_14 = local_14 + 1;
              }
              _free(local_18);
              BVar1 = FindNextFileA(replayFile,&replayBuffer);
              if (BVar1 == 0) break;
            }
          }
        }
        FindClose(replayFile);
        __chdir("../");
        *(int *)(param_1 + 0x81ec) = local_14;
        *(undefined4 *)(param_1 + 0x81fc) = 0;
        *(undefined4 *)(param_1 + 0x8214) = *(undefined4 *)(param_1 + 0x8210);
        *(undefined4 *)(param_1 + 0x8210) = 0;
        *(undefined4 *)(param_1 + 0x81f0) = 0xd;
        local_8 = param_1;
        for (i = 0; i < 0x7a; i = i + 1) {
          *(undefined2 *)(local_8 + 0x8a) = 0xf;
          local_8 = local_8 + 0x110;
        }
        *(undefined4 *)(param_1 + 0x81a0) = 0;
      }
      else {
        LogBuffer::write(&LogBuffer,"ƒZƒŒƒNƒg‰æ–Ê‚Ì“Ç‚Ýž‚Ý‚ÉŽ¸”s\n");
        supervisor.dword_18C = 4;
      }
    }
  }
  else if (j == 0xd) {
    if (0x27 < *(int *)(param_1 + 0x81f4)) {
      if (*(int *)(param_1 + 0x81ec) != 0) {
        __cycle_menu_indices((Menu *)param_1,*(int *)(param_1 + 0x81ec));
        *(undefined4 *)(param_1 + 0x81e8) = *(undefined4 *)(param_1 + 0x81a0);
        if (((input.currently_pressed & 0x1001) != 0) &&
           ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) {
          *(undefined4 *)(param_1 + 0x81f0) = 0xf;
          local_8 = param_1 + 0x6710;
          for (i = 0; i < 0x19; i = i + 1) {
            *(undefined2 *)(local_8 + 0x8a) = 0x11;
            local_8 = local_8 + 0x110;
          }
          local_8 = param_1 + (*(int *)(param_1 + 0x81e8) + 99) * 0x110;
          *(undefined2 *)(local_8 + 0x8a) = 0x10;
          *(undefined4 *)(param_1 + 0x81f4) = 0;
          *(undefined4 *)(param_1 + 0x81a0) = 0;
          SoundManager::play_sound_centered(&sound_manager,10,0);
          pcVar2 = __read_file_to_buffer
                             ((char *)(param_1 + 0x823c + *(int *)(param_1 + 0x81e8) * 0x200),1);
          *(char **)(param_1 + 0x10edc) = pcVar2;
          __sub_42A140(*(int **)(param_1 + 0x10edc),___current_filesize);
          for (i = 0; i < 7; i = i + 1) {
            if (*(int *)(*(int *)(param_1 + 0x10edc) + 0x34 + i * 4) != 0) {
              *(int *)(*(int *)(param_1 + 0x10edc) + 0x34 + i * 4) =
                   *(int *)(param_1 + 0x10edc) +
                   *(int *)(*(int *)(param_1 + 0x10edc) + 0x34 + i * 4);
            }
          }
          do {
            if (*(int *)(param_1 + *(int *)(param_1 + 0x81e8) * 0x50 + 0xfc50 +
                        *(int *)(param_1 + 0x81a0) * 4) != 0) goto LAB_0043877b;
            *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + 1;
          } while (*(int *)(param_1 + 0x81a0) < 7);
          goto LAB_00438bb2;
        }
      }
LAB_0043877b:
      if (((input.currently_pressed & 10) != 0) &&
         ((input.currently_pressed & 10) != (input.word_4 & 10))) {
        *(undefined4 *)(param_1 + 0x81f0) = 0xe;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          *(undefined2 *)(param_1 + 0x8a + i * 0x110) = 4;
        }
        SoundManager::play_sound_centered(&sound_manager,0xb,0);
        *(undefined4 *)(param_1 + 0x81a0) = 0;
      }
    }
  }
  else if (j == 0xe) {
    if (*(int *)(param_1 + 0x81f4) == 0x24) {
      *(undefined4 *)(param_1 + 0x81f0) = 0;
      *(undefined4 *)(param_1 + 0x81f4) = 0;
    }
  }
  else if ((j == 0xf) && (0x27 < *(int *)(param_1 + 0x81f4))) {
    i = __cycle_menu_indices((Menu *)param_1,7);
    if (i < 0) {
      while (*(int *)(param_1 + *(int *)(param_1 + 0x81e8) * 0x50 + 0xfc50 +
                     *(int *)(param_1 + 0x81a0) * 4) == 0) {
        *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + -1;
        if (*(int *)(param_1 + 0x81a0) < 0) {
          *(undefined4 *)(param_1 + 0x81a0) = 6;
        }
      }
    }
    else if (0 < i) {
      while (*(int *)(param_1 + *(int *)(param_1 + 0x81e8) * 0x50 + 0xfc50 +
                     *(int *)(param_1 + 0x81a0) * 4) == 0) {
        *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + 1;
        if (6 < *(int *)(param_1 + 0x81a0)) {
          *(undefined4 *)(param_1 + 0x81a0) = 0;
        }
      }
    }
    if ((((input.currently_pressed & 0x1001) == 0) ||
        ((input.currently_pressed & 0x1001) == (input.word_4 & 0x1001))) ||
       (*(int *)(param_1 + 0x10edc) + 0x34 + *(int *)(param_1 + 0x81a0) * 0x50 == 0)) {
      if (((input.currently_pressed & 10) != 0) &&
         ((input.currently_pressed & 10) != (input.word_4 & 10))) {
        _free(*(void **)(param_1 + 0x10edc));
        *(undefined4 *)(param_1 + 0x10edc) = 0;
        *(undefined4 *)(param_1 + 0x81f0) = 0xd;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          *(undefined2 *)(param_1 + 0x8a + i * 0x110) = 4;
        }
        SoundManager::play_sound_centered(&sound_manager,0xb,0);
        *(undefined4 *)(param_1 + 0x81f0) = 0xd;
        local_8 = param_1;
        for (i = 0; i < 0x7a; i = i + 1) {
          *(undefined2 *)(local_8 + 0x8a) = 0xf;
          local_8 = local_8 + 0x110;
        }
        *(undefined4 *)(param_1 + 0x81a0) = *(undefined4 *)(param_1 + 0x81e8);
      }
    }
    else {
      game_manager.__spellcard_related_1 = 1;
      supervisor.slowdown = 1.0;
      _strcpy(game_manager.replay_filename,
              (char *)(param_1 + 0x823c + *(int *)(param_1 + 0x81e8) * 0x200));
      game_manager.difficulty = (int32_t)*(byte *)(*(int *)(param_1 + 0x10edc) + 7);
      game_manager.character = *(byte *)(*(int *)(param_1 + 0x10edc) + 6) / 2;
      game_manager.shottype = *(byte *)(*(int *)(param_1 + 0x10edc) + 6) % 2;
      for (i = 0; *(int *)(*(int *)(param_1 + 0x10edc) + 0x34 + i * 4) == 0; i = i + 1) {
      }
      game_manager.lives_remaining =
           *(char *)(*(int *)(*(int *)(param_1 + 0x10edc) + 0x34 + i * 4) + 9);
      game_manager.bombs_remaining =
           *(char *)(*(int *)(*(int *)(param_1 + 0x10edc) + 0x34 + i * 4) + 10);
      _free(*(void **)(param_1 + 0x10edc));
      *(undefined4 *)(param_1 + 0x10edc) = 0;
      game_manager.current_stage = *(int32_t *)(param_1 + 0x81a0);
      supervisor.dword_18C = 2;
    }
  }
LAB_00438bb2:
  ___security_check_cookie_4(local_1c ^ unaff_retaddr);
  return;
}

