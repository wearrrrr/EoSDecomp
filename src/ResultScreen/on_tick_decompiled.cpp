
undefined4 __cdecl ResultScreen::on_tick(ResultScreen *result_screen)

{
  float fVar1;
  int iVar2;
  int local_14;
  int local_10;
  AnmVm *local_c;
  int local_8;
  
  iVar2 = *(int *)(result_screen->field0_0x0 + 8);
  if (iVar2 < 9) {
    if (iVar2 == 8) {
      if ((*(int *)(result_screen->field0_0x0 + 0x28) != *(int *)(result_screen->field0_0x0 + 0x10))
         && (*(int *)(result_screen->field0_0x0 + 4) == 0x14)) {
        *(undefined4 *)(result_screen->field0_0x0 + 0x28) =
             *(undefined4 *)(result_screen->field0_0x0 + 0x10);
        for (local_8 = *(int *)(result_screen->field0_0x0 + 0x28) * 10;
            (local_8 < *(int *)(result_screen->field0_0x0 + 0x28) * 10 + 10 && (local_8 < 0x40));
            local_8 = local_8 + 1) {
          if (game_manager.catk_data[local_8].attempts == 0) {
            AnmManager::__draw_text_to_vm_left
                      (anm_manager_ptr,
                       (AnmVm *)(result_screen->field0_0x0 + (local_8 % 10) * 0x110 + 0x28a0),
                       0xffffff,0,"？？？？？");
          }
          else {
            AnmManager::__draw_text_to_vm_left
                      (anm_manager_ptr,
                       (AnmVm *)(result_screen->field0_0x0 + (local_8 % 10) * 0x110 + 0x28a0),
                       0xffffff,0,game_manager.catk_data[local_8].spell_name);
          }
        }
      }
      if (0x1d < *(int *)(result_screen->field0_0x0 + 4)) {
        iVar2 = __sub_42D18F((int)result_screen,7);
        if (iVar2 != 0) {
          *(undefined4 *)(result_screen->field0_0x0 + 4) = 0;
          local_c = (AnmVm *)(result_screen->field0_0x0 + 0x40);
          for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
            *(short *)((int)local_c + 0x8a) =
                 (short)*(undefined4 *)(result_screen->field0_0x0 + 0x2c) + 3;
            local_c = (AnmVm *)((int)local_c + 0x110);
          }
        }
        if (((input.currently_pressed & 10) != 0) &&
           ((input.currently_pressed & 10) != (input.word_4 & 10))) {
          SoundManager::play_sound_centered(&sound_manager,0xb,0);
          *(undefined4 *)(result_screen->field0_0x0 + 8) = 0;
          *(undefined4 *)(result_screen->field0_0x0 + 4) = 1;
          local_c = (AnmVm *)(result_screen->field0_0x0 + 0x40);
          for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
            *(undefined2 *)((int)local_c + 0x8a) = 1;
            local_c = (AnmVm *)((int)local_c + 0x110);
          }
          *(undefined4 *)(result_screen->field0_0x0 + 0x18) =
               *(undefined4 *)(result_screen->field0_0x0 + 0x10);
          *(undefined4 *)(result_screen->field0_0x0 + 0x10) =
               *(undefined4 *)(result_screen->field0_0x0 + 0x2c);
        }
      }
    }
    else {
      if (iVar2 == 0) {
        if (*(int *)(result_screen->field0_0x0 + 4) == 0) {
          local_c = (AnmVm *)(result_screen->field0_0x0 + 0x40);
          for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
            *(undefined2 *)((int)local_c + 0x8a) = 1;
            *(uint *)((int)local_c + 0x80) = *(uint *)((int)local_c + 0x80) | 8;
            if ((supervisor.config.flags & 1) == 0) {
              *(uint *)((int)local_c + 0x7c) = *(uint *)((int)local_c + 0x7c) & 0xff000000;
            }
            else {
              *(undefined4 *)((int)local_c + 0x7c) = *(undefined4 *)((int)local_c + 0x7c);
            }
            local_c = (AnmVm *)((int)local_c + 0x110);
          }
          local_c = (AnmVm *)(result_screen->field0_0x0 + 0x150);
          for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
            if (local_8 == *(int *)(result_screen->field0_0x0 + 0x10)) {
              if ((supervisor.config.flags & 1) == 0) {
                *(undefined4 *)((int)local_c + 0x7c) = 0xff505050;
              }
              else {
                *(undefined4 *)((int)local_c + 0x7c) = 0xffffffff;
              }
              fVar1 = _4_0f;
              *(float *)((int)local_c + 0xe4) = _4_0f;
              *(float *)((int)local_c + 0xe8) = fVar1;
              *(undefined4 *)((int)local_c + 0xec) = 0;
            }
            else {
              if ((supervisor.config.flags & 1) == 0) {
                *(undefined4 *)((int)local_c + 0x7c) = 0xb0000000;
              }
              else {
                *(undefined4 *)((int)local_c + 0x7c) = 0xb0ffffff;
              }
              *(undefined4 *)((int)local_c + 0xe4) = 0;
              *(undefined4 *)((int)local_c + 0xe8) = 0;
              *(undefined4 *)((int)local_c + 0xec) = 0;
            }
            local_c = (AnmVm *)((int)local_c + 0x110);
          }
        }
        if (*(int *)(result_screen->field0_0x0 + 4) < 0x14) goto LAB_0042e3fb;
        *(int *)(result_screen->field0_0x0 + 8) = *(int *)(result_screen->field0_0x0 + 8) + 1;
        *(undefined4 *)(result_screen->field0_0x0 + 4) = 0;
      }
      else if (iVar2 != 1) {
        if (iVar2 == 2) {
          if (0x3b < *(int *)(result_screen->field0_0x0 + 4)) {
            supervisor.dword_18C = 1;
            return 0;
          }
        }
        else if (2 < iVar2) {
          if (6 < iVar2) {
            if (iVar2 != 7) goto LAB_0042e3fb;
            if (((input.currently_pressed & 4) == 0) && ((input.currently_pressed & 0x100) == 0)) {
              *(undefined4 *)(result_screen->field0_0x0 + 0x30) = 0;
            }
            else if (*(int *)(result_screen->field0_0x0 + 0x30) < 5) {
              if (((input.currently_pressed & 0x800) == 0) ||
                 ((input.currently_pressed & 0x800) == (input.word_4 & 0x800))) {
                if (((input.currently_pressed & 0x160b) != 0) &&
                   ((input.currently_pressed & 0x160b) != (input.word_4 & 0x160b))) {
                  *(undefined4 *)(result_screen->field0_0x0 + 0x30) = 0;
                }
              }
              else {
                *(int *)(result_screen->field0_0x0 + 0x30) =
                     *(int *)(result_screen->field0_0x0 + 0x30) + 1;
              }
            }
            else if (*(int *)(result_screen->field0_0x0 + 0x30) < 7) {
              if (((input.currently_pressed & 0x200) == 0) ||
                 ((input.currently_pressed & 0x200) == (input.word_4 & 0x200))) {
                if (((input.currently_pressed & 0x160b) != 0) &&
                   ((input.currently_pressed & 0x160b) != (input.word_4 & 0x160b))) {
                  *(undefined4 *)(result_screen->field0_0x0 + 0x30) = 0;
                }
              }
              else {
                *(int *)(result_screen->field0_0x0 + 0x30) =
                     *(int *)(result_screen->field0_0x0 + 0x30) + 1;
              }
            }
            else if (*(int *)(result_screen->field0_0x0 + 0x30) < 10) {
              if (((input.currently_pressed & 0x400) == 0) ||
                 ((input.currently_pressed & 0x400) == (input.word_4 & 0x400))) {
                if (((input.currently_pressed & 0x160b) != 0) &&
                   ((input.currently_pressed & 0x160b) != (input.word_4 & 0x160b))) {
                  *(undefined4 *)(result_screen->field0_0x0 + 0x30) = 0;
                }
              }
              else {
                *(int *)(result_screen->field0_0x0 + 0x30) =
                     *(int *)(result_screen->field0_0x0 + 0x30) + 1;
              }
            }
            else {
              for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  *(undefined *)(local_10 * 0x18 + 0x69ccdc + local_14) = 99;
                  *(undefined *)(local_10 * 0x18 + 0x69cce1 + local_14) = 99;
                }
              }
              *(undefined4 *)(result_screen->field0_0x0 + 0x30) = 0;
              SoundManager::play_sound_centered(&sound_manager,0x1c,0);
            }
          }
          if ((*(int *)(result_screen->field0_0x0 + 0x24) !=
               *(int *)(result_screen->field0_0x0 + 0x10)) &&
             (*(int *)(result_screen->field0_0x0 + 4) == 0x14)) {
            *(undefined4 *)(result_screen->field0_0x0 + 0x24) =
                 *(undefined4 *)(result_screen->field0_0x0 + 0x10);
            AnmManager::__draw_text_to_vm_center
                      (anm_manager_ptr,(AnmVm *)(result_screen->field0_0x0 + 0x28a0),0xffffff,0,
                       *(char **)(&DAT_004784d8 + *(int *)(result_screen->field0_0x0 + 0x24) * 8));
            AnmManager::__draw_text_to_vm_center
                      (anm_manager_ptr,(AnmVm *)(result_screen->field0_0x0 + 0x29b0),0xffffff,0,
                       *(char **)(&DAT_004784dc + *(int *)(result_screen->field0_0x0 + 0x24) * 8));
          }
          if (0x1d < *(int *)(result_screen->field0_0x0 + 4)) {
            iVar2 = __sub_42D18F((int)result_screen,2);
            if (iVar2 != 0) {
              *(undefined4 *)(result_screen->field0_0x0 + 4) = 0;
              local_c = (AnmVm *)(result_screen->field0_0x0 + 0x40);
              for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
                *(short *)((int)local_c + 0x8a) =
                     (short)*(undefined4 *)(result_screen->field0_0x0 + 0x2c) + 3;
                local_c = (AnmVm *)((int)local_c + 0x110);
              }
            }
            if (((input.currently_pressed & 10) != 0) &&
               ((input.currently_pressed & 10) != (input.word_4 & 10))) {
              SoundManager::play_sound_centered(&sound_manager,0xb,0);
              *(undefined4 *)(result_screen->field0_0x0 + 8) = 0;
              *(undefined4 *)(result_screen->field0_0x0 + 4) = 1;
              local_c = (AnmVm *)(result_screen->field0_0x0 + 0x40);
              for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
                *(undefined2 *)((int)local_c + 0x8a) = 1;
                local_c = (AnmVm *)((int)local_c + 0x110);
              }
              *(undefined4 *)(result_screen->field0_0x0 + 0x14) =
                   *(undefined4 *)(result_screen->field0_0x0 + 0x10);
              *(undefined4 *)(result_screen->field0_0x0 + 0x10) =
                   *(undefined4 *)(result_screen->field0_0x0 + 0x2c);
            }
          }
        }
        goto LAB_0042e3fb;
      }
      __sub_42D0A4((int)result_screen,7);
      local_c = (AnmVm *)(result_screen->field0_0x0 + 0x150);
      for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
        if (local_8 == *(int *)(result_screen->field0_0x0 + 0x10)) {
          if ((supervisor.config.flags & 1) == 0) {
            *(undefined4 *)((int)local_c + 0x7c) = 0xff505050;
          }
          else {
            *(undefined4 *)((int)local_c + 0x7c) = 0xffffffff;
          }
          fVar1 = _4_0f;
          *(float *)((int)local_c + 0xe4) = _4_0f;
          *(float *)((int)local_c + 0xe8) = fVar1;
          *(undefined4 *)((int)local_c + 0xec) = 0;
        }
        else {
          if ((supervisor.config.flags & 1) == 0) {
            *(undefined4 *)((int)local_c + 0x7c) = 0xb0000000;
          }
          else {
            *(undefined4 *)((int)local_c + 0x7c) = 0xb0ffffff;
          }
          *(undefined4 *)((int)local_c + 0xe4) = 0;
          *(undefined4 *)((int)local_c + 0xe8) = 0;
          *(undefined4 *)((int)local_c + 0xec) = 0;
        }
        local_c = (AnmVm *)((int)local_c + 0x110);
      }
      if (((input.currently_pressed & 0x1001) != 0) &&
         ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) {
        local_c = (AnmVm *)(result_screen->field0_0x0 + 0x40);
        iVar2 = *(int *)(result_screen->field0_0x0 + 0x10);
        if (-1 < iVar2) {
          if (iVar2 < 5) {
            for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
              *(short *)((int)local_c + 0x8a) =
                   (short)*(undefined4 *)(result_screen->field0_0x0 + 0x10) + 3;
              local_c = (AnmVm *)((int)local_c + 0x110);
            }
            *(undefined4 *)(result_screen->field0_0x0 + 0x2c) =
                 *(undefined4 *)(result_screen->field0_0x0 + 0x10);
            *(int *)(result_screen->field0_0x0 + 8) = *(int *)(result_screen->field0_0x0 + 0x10) + 3
            ;
            *(undefined4 *)(result_screen->field0_0x0 + 0xc) =
                 *(undefined4 *)(result_screen->field0_0x0 + 8);
            *(undefined4 *)(result_screen->field0_0x0 + 4) = 0;
            *(undefined4 *)(result_screen->field0_0x0 + 0x10) =
                 *(undefined4 *)(result_screen->field0_0x0 + 0x14);
            *(undefined4 *)(result_screen->field0_0x0 + 0x24) = 0xffffffff;
            *(undefined4 *)(result_screen->field0_0x0 + 0x28) = 0xffffffff;
          }
          else if (iVar2 == 5) {
            for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
              *(short *)((int)local_c + 0x8a) =
                   (short)*(undefined4 *)(result_screen->field0_0x0 + 0x10) + 3;
              local_c = (AnmVm *)((int)local_c + 0x110);
            }
            *(undefined4 *)(result_screen->field0_0x0 + 0x2c) =
                 *(undefined4 *)(result_screen->field0_0x0 + 0x10);
            *(undefined4 *)(result_screen->field0_0x0 + 8) = 8;
            *(undefined4 *)(result_screen->field0_0x0 + 0xc) =
                 *(undefined4 *)(result_screen->field0_0x0 + 8);
            *(undefined4 *)(result_screen->field0_0x0 + 4) = 0;
            *(undefined4 *)(result_screen->field0_0x0 + 0x24) = 0xffffffff;
            *(undefined4 *)(result_screen->field0_0x0 + 0x10) =
                 *(undefined4 *)(result_screen->field0_0x0 + 0x18);
            *(undefined4 *)(result_screen->field0_0x0 + 0x28) = 0xffffffff;
          }
          else if (iVar2 == 6) {
            for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
              *(undefined2 *)((int)local_c + 0x8a) = 2;
              local_c = (AnmVm *)((int)local_c + 0x110);
            }
            *(undefined4 *)(result_screen->field0_0x0 + 8) = 2;
            SoundManager::play_sound_centered(&sound_manager,0xb,0);
          }
        }
      }
      if (((input.currently_pressed & 10) != 0) &&
         ((input.currently_pressed & 10) != (input.word_4 & 10))) {
        *(undefined4 *)(result_screen->field0_0x0 + 0x10) = 6;
        SoundManager::play_sound_centered(&sound_manager,0xb,0);
      }
    }
  }
  else if (iVar2 == 9) {
    __sub_42BC85(result_screen);
  }
  else if (9 < iVar2) {
    if (iVar2 < 0xf) {
      __sub_42C2D4(result_screen);
    }
    else if (0xe < iVar2) {
      if (iVar2 < 0x11) {
        __sub_42D292(result_screen);
      }
      else if (iVar2 == 0x11) {
        supervisor.dword_18C = 1;
        return 0;
      }
    }
  }
LAB_0042e3fb:
  local_c = (AnmVm *)(result_screen->field0_0x0 + 0x40);
  for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
    AnmManager::run_anm(anm_manager_ptr,local_c);
    local_c = local_c + 1;
  }
  *(int *)(result_screen->field0_0x0 + 4) = *(int *)(result_screen->field0_0x0 + 4) + 1;
  return 1;
}

