
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl ResultScreen::on_draw(ResultScreen *result_screen)

{
  float *pfVar1;
  uint unaff_retaddr;
  int local_d0;
  int local_8c;
  int local_84;
  char local_5c;
  undefined local_5b;
  float local_4c;
  float local_48;
  int local_44;
  Float3 vector1;
  int local_34;
  int local_30;
  int local_2c;
  AnmVm *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined local_1c;
  uint local_18;
  int local_14;
  Float3 vector2;
  
  local_18 = _DAT_0047a630 ^ unaff_retaddr;
  local_28 = (AnmVm *)(result_screen->field0_0x0 + 0x40);
  supervisor.viewport.X = 0;
  supervisor.viewport.Y = 0;
  supervisor.viewport.Width = 0x280;
  supervisor.viewport.Height = 0x1e0;
  (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device,0x6c6de0);
  AnmManager::__surface_copy_related(anm_manager_ptr,0,0,0,0,0);
  for (local_14 = 0; local_14 < 0x26; local_14 = local_14 + 1) {
    vector1.x = (local_28->pos).x;
    vector1.y = (local_28->pos).y;
    vector1.z = (local_28->pos).z;
    (local_28->pos).x = (local_28->pos).x + (local_28->pos_2).x;
    (local_28->pos).y = (local_28->pos).y + (local_28->pos_2).y;
    (local_28->pos).z = (local_28->pos).z + (local_28->pos_2).z;
    AnmManager::__draw_vm_1(anm_manager_ptr,local_28);
    (local_28->pos).x = vector1.x;
    (local_28->pos).y = vector1.y;
    (local_28->pos).z = vector1.z;
    local_28 = local_28 + 1;
  }
  local_28 = (AnmVm *)(result_screen->field0_0x0 + 0xf20);
  if (*(float *)(result_screen->field0_0x0 + 0xfb0) < _40_0f) {
    if (*(int *)(result_screen->field0_0x0 + 0xc) == 8) {
      vector1.x = *(float *)(result_screen->field0_0x0 + 0xfb0);
      vector1.z = *(float *)(result_screen->field0_0x0 + 0xfb8);
      vector1.y = *(float *)(result_screen->field0_0x0 + 0xfb4) + ram0x0046a2b4;
      for (local_14 = 0;
          (local_14 < 10 &&
          (local_44 = *(int *)(result_screen->field0_0x0 + 0x28) * 10 + local_14, local_44 < 0x40));
          local_14 = local_14 + 1) {
        pfVar1 = (float *)(result_screen->field0_0x0 + local_14 * 0x110 + 0x2930);
        *pfVar1 = vector1.x;
        pfVar1[1] = vector1.y;
        pfVar1[2] = vector1.z;
        if (game_manager.catk_data[local_44].attempts == 0) {
          ascii_manager.color = 0x80c0c0ff;
        }
        else if (game_manager.catk_data[local_44].captures == 0) {
          ascii_manager.color = 0xffc0a0a0;
        }
        else {
          ascii_manager.color = local_14 * -0x80800 - 0xf0f01;
        }
        AsciiManager::drawf(&ascii_manager,&vector1,"No.%.2d");
        *(float *)(result_screen->field0_0x0 + local_14 * 0x110 + 0x2930) =
             *(float *)(result_screen->field0_0x0 + local_14 * 0x110 + 0x2930) + _96_0f;
        AnmManager::__draw_vm_1
                  (anm_manager_ptr,(AnmVm *)(result_screen->field0_0x0 + local_14 * 0x110 + 0x28a0))
        ;
        vector1.x = vector1.x + _68_0f;
        AsciiManager::drawf(&ascii_manager,&vector1,"%3d/%3d");
        vector1.x = vector1.x - _68_0f;
        vector1.y = vector1.y + _0_0f;
      }
    }
    else {
      vector1.x = *(float *)(result_screen->field0_0x0 + 0xfb0);
      vector1.y = *(float *)(result_screen->field0_0x0 + 0xfb4);
      vector1.z = *(float *)(result_screen->field0_0x0 + 0xfb8);
      *(float *)(result_screen->field0_0x0 + 0x2930) = vector1.x;
      *(float *)(result_screen->field0_0x0 + 0x2934) = vector1.y;
      *(float *)(result_screen->field0_0x0 + 0x2938) = vector1.z;
      AnmManager::__draw_vm_1(anm_manager_ptr,(AnmVm *)(result_screen->field0_0x0 + 0x28a0));
      vector1.x = vector1.x + _20_0f;
      *(float *)(result_screen->field0_0x0 + 0x2a40) = vector1.x;
      *(float *)(result_screen->field0_0x0 + 0x2a44) = vector1.y;
      *(float *)(result_screen->field0_0x0 + 0x2a48) = vector1.z;
      AnmManager::__draw_vm_1(anm_manager_ptr,(AnmVm *)(result_screen->field0_0x0 + 0x29b0));
      vector1.x = vector1.x - _20_0f;
      vector1.y = vector1.y + _8_0f + _8_0f;
      local_2c = *(int *)(result_screen->field0_0x0 +
                         *(int *)(result_screen->field0_0x0 + 0x24) * 0x18 +
                         *(int *)(result_screen->field0_0x0 + 0x2c) * 0x30 + 0x3ab4);
      local_34 = *(int *)(result_screen->field0_0x0 +
                         *(int *)(result_screen->field0_0x0 + 0x24) * 0x18 +
                         *(int *)(result_screen->field0_0x0 + 0x2c) * 0x30 + 0x3ac0);
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        if (*(int *)(result_screen->field0_0x0 + 8) == 9) {
          if (game_manager.shottype == '\0') {
            if (*(char *)(*(int *)(local_2c + 8) + 9) == '\0') {
              ascii_manager.color = 0x80ffffc0;
            }
            else {
              ascii_manager.color = 0xfff0f0ff;
              local_24._0_1_ = ______[0];
              local_24._1_1_ = ______[1];
              local_24._2_1_ = ______[2];
              local_24._3_1_ = ______[3];
              local_20._0_1_ = ______[0];
              local_20._1_1_ = ______[1];
              local_20._2_1_ = ______[2];
              local_20._3_1_ = ______[3];
              local_1c = 0;
              if (*(int *)(result_screen->field0_0x0 + 0x10) < 8) {
                local_84 = *(int *)(result_screen->field0_0x0 + 0x10);
              }
              else {
                local_84 = 7;
              }
              *(undefined *)((int)&local_24 + local_84) = 0x5f;
              AsciiManager::drawf(&ascii_manager,&vector1,"   %8s");
            }
          }
          else {
            ascii_manager.color = 0x80ffc0c0;
          }
        }
        else {
          ascii_manager.color = 0xffffc0c0;
        }
        AsciiManager::drawf(&ascii_manager,&vector1,(char *)&__2d_);
        vector1.x = vector1.x + _6_0f;
        if (*(byte *)(*(int *)(local_2c + 8) + 0x12) < 7) {
          AsciiManager::drawf(&ascii_manager,&vector1,"%8s %9d(%d)");
        }
        else if (*(char *)(*(int *)(local_2c + 8) + 0x12) == '\a') {
          AsciiManager::drawf(&ascii_manager,&vector1,"%8s %9d(1)");
        }
        else {
          AsciiManager::drawf(&ascii_manager,&vector1,"%8s %9d(C)");
        }
        vector1.x = vector1.x + _00_0f;
        if (*(int *)(result_screen->field0_0x0 + 8) == 9) {
          if (game_manager.shottype == '\x01') {
            if (*(char *)(*(int *)(local_34 + 8) + 9) == '\0') {
              ascii_manager.color = 0xc0c0c0ff;
            }
            else {
              ascii_manager.color = 0xfffff0f0;
              local_24._0_1_ = ______[0];
              local_24._1_1_ = ______[1];
              local_24._2_1_ = ______[2];
              local_24._3_1_ = ______[3];
              local_20._0_1_ = ______[0];
              local_20._1_1_ = ______[1];
              local_20._2_1_ = ______[2];
              local_20._3_1_ = ______[3];
              local_1c = 0;
              if (*(int *)(result_screen->field0_0x0 + 0x10) < 8) {
                local_8c = *(int *)(result_screen->field0_0x0 + 0x10);
              }
              else {
                local_8c = 7;
              }
              *(undefined *)((int)&local_24 + local_8c) = 0x5f;
              AsciiManager::drawf(&ascii_manager,&vector1,"%8s");
            }
          }
          else {
            ascii_manager.color = 0x80c0c0ff;
          }
        }
        else {
          ascii_manager.color = 0xffc0c0ff;
        }
        if (*(byte *)(*(int *)(local_34 + 8) + 0x12) < 7) {
          AsciiManager::drawf(&ascii_manager,&vector1,"%8s %9d(%d)");
        }
        else if (*(char *)(*(int *)(local_34 + 8) + 0x12) == '\a') {
          AsciiManager::drawf(&ascii_manager,&vector1,"%8s %9d(1)");
        }
        else {
          AsciiManager::drawf(&ascii_manager,&vector1,"%8s %9d(C)");
        }
        vector1.x = vector1.x - _36_0f;
        vector1.y = vector1.y + _8_0f;
        local_2c = *(int *)(local_2c + 4);
        local_34 = *(int *)(local_34 + 4);
      }
    }
  }
  if ((*(int *)(result_screen->field0_0x0 + 8) == 9) ||
     (*(int *)(result_screen->field0_0x0 + 8) == 0xd)) {
    vector1.x = _60_0f;
    vector1.y = _56_0f;
    vector1.z = 0.0;
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      for (local_30 = 0; local_30 < 0x10; local_30 = local_30 + 1) {
        local_48 = 0.0;
        if (*(int *)(result_screen->field0_0x0 + 0x20) == local_14 * 0x10 + local_30) {
          ascii_manager.color = 0xffffffc0;
          if (*(int *)(result_screen->field0_0x0 + 4) % 0x40 < 0x20) {
            local_48 = (__8f * (float)(*(int *)(result_screen->field0_0x0 + 4) % 0x20)) / _32_0f +
                       __2f;
          }
          else {
            local_48 = _2_0f - (__8f * (float)(*(int *)(result_screen->field0_0x0 + 4) % 0x20)) /
                               _32_0f;
          }
          ascii_manager.scale.y = local_48;
          local_48 = -(local_48 - _1_0f) * _8_0f;
        }
        else {
          ascii_manager.color = 0x60c0c0c0;
          ascii_manager.scale.y = 1.0;
        }
        vector2.z = vector1.z;
        vector2.x = vector1.x + local_48;
        vector2.y = vector1.y + local_48;
        local_5c = *(char *)(_DAT_004784d4 + local_14 * 0x10 + local_30);
        local_5b = 0;
        if (local_14 == 5) {
          if (local_30 == 0xe) {
            local_5c = -0x80;
          }
          else if (local_30 == 0xf) {
            local_5c = -0x7f;
          }
        }
        ascii_manager.scale.x = ascii_manager.scale.y;
        local_4c = local_48;
        AsciiManager::draw(&ascii_manager,&vector2,&local_5c);
        vector1.x = vector1.x + _0_0f;
      }
      vector1.x = vector1.x - (float)(local_30 * 0x14);
      vector1.y = vector1.y + _8_0f;
    }
  }
  ascii_manager.scale.x = 1.0;
  ascii_manager.scale.y = 1.0;
  if ((9 < *(int *)(result_screen->field0_0x0 + 8)) &&
     (*(int *)(result_screen->field0_0x0 + 8) < 0xf)) {
    local_28 = (AnmVm *)(result_screen->field0_0x0 + 0x1030);
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      AnmManager::__draw_vm_1(anm_manager_ptr,local_28);
      local_28 = local_28 + 1;
    }
    vector1.x = *(float *)(result_screen->field0_0x0 + 0x1720);
    vector1.y = *(float *)(result_screen->field0_0x0 + 0x1724);
    vector1.z = *(float *)(result_screen->field0_0x0 + 0x1728);
    local_28 = (AnmVm *)(result_screen->field0_0x0 + 0x17a0);
    AsciiManager::drawf(&ascii_manager,&vector1,"No.   Name     Date     Player Score");
    for (local_14 = 0; local_14 < 0xf; local_14 = local_14 + 1) {
      vector1.x = *(float *)((int)local_28 + 0x90);
      vector1.y = *(float *)((int)local_28 + 0x94);
      vector1.z = *(float *)((int)local_28 + 0x98);
      local_28 = (AnmVm *)((int)local_28 + 0x110);
      if (local_14 == *(int *)(result_screen->field0_0x0 + 0x1c)) {
        ascii_manager.color = 0xffff8080;
      }
      else {
        ascii_manager.color = 0xff808080;
      }
      if (*(int *)(result_screen->field0_0x0 + 8) == 0xd) {
        AsciiManager::drawf(&ascii_manager,&vector1,"No.%.2d %8s %8s %7s %9d");
        ascii_manager.color = 0xfff0f0ff;
        local_24._0_1_ = ______[0];
        local_24._1_1_ = ______[1];
        local_24._2_1_ = ______[2];
        local_24._3_1_ = ______[3];
        local_20._0_1_ = ______[0];
        local_20._1_1_ = ______[1];
        local_20._2_1_ = ______[2];
        local_20._3_1_ = ______[3];
        local_1c = 0;
        if (*(int *)(result_screen->field0_0x0 + 0x10) < 8) {
          local_d0 = *(int *)(result_screen->field0_0x0 + 0x10);
        }
        else {
          local_d0 = 7;
        }
        *(undefined *)((int)&local_24 + local_d0) = 0x5f;
        AsciiManager::drawf(&ascii_manager,&vector1,"      %8s");
      }
      else if ((*(int *)(result_screen->field0_0x0 + local_14 * 0x50 + 0x51b0) == magic_T6RP._0_4_)
              && (*(short *)(result_screen->field0_0x0 + local_14 * 0x50 + 0x51b4) == 0x102)) {
        AsciiManager::drawf(&ascii_manager,&vector1,"No.%.2d %8s %8s %7s %9d");
      }
      else {
        AsciiManager::drawf(&ascii_manager,&vector1,"No.%.2d -------- --/--/-- -------         0");
      }
    }
  }
  ascii_manager.color = 0xffffffff;
  __print_results_screen((int)result_screen);
  ___security_check_cookie_4(local_18 ^ unaff_retaddr);
  return;
}

