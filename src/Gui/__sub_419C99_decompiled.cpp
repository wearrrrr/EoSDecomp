
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Gui doesn't seem to be the correct struct to use here, but I'm not completely sure. */

void __fastcall Gui::__sub_419C99(Gui *gui)

{
  float fVar1;
  float fVar2;
  int32_t local_1e8;
  int local_1c0;
  Float3 local_190;
  float local_184;
  float local_180;
  undefined4 local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  Float3 local_88;
  float local_7c;
  float fStack_78;
  float fStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 local_34;
  undefined4 local_30;
  Float3 local_28;
  uint local_1c;
  int local_18;
  AnmVm *local_14;
  int i;
  float local_c;
  float local_8;
  GuiImpl *gui_impl;
  
  if (((gui->impl->msg).current_msg_index < 0) &&
     ((uint)gui->boss_present + (uint)(byte)gui->impl->field1_0x1ba0[0] != 0)) {
    local_14 = gui->impl->vms + 0x13;
    AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
    gui_impl = gui->impl;
    local_14 = gui_impl->vms + 0x15;
    gui_impl->vms[0x15].flags = gui_impl->vms[0x15].flags | 0x300;
    gui_impl->vms[0x15].scale_x = (gui->boss_healthbar_28 * _88_0f) / _14_0f;
    gui_impl->vms[0x15].pos.x = _96_0f;
    gui_impl->vms[0x15].pos.y = _4_0f;
    gui_impl->vms[0x15].pos.z = 0.0;
    AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
    local_28.x = _0_0f;
    local_28.y = ram0x0046a2b4;
    local_28.z = 0.0;
    ascii_manager.color = gui->uint_10 << 0x18 | 0xffff80;
    AsciiManager::drawf(&ascii_manager,&local_28,"%d");
    local_94 = _84_0f;
    local_90 = ram0x0046a2b4;
    local_8c = 0;
    local_28.x = _84_0f;
    local_28.y = ram0x0046a2b4;
    local_28.z = 0.0;
    if (gui->read_by_spellcard_ecl < 0x14) {
      if (gui->read_by_spellcard_ecl < 10) {
        if (gui->read_by_spellcard_ecl < 5) {
          local_1c = _DAT_004764ac;
        }
        else {
          local_1c = _DAT_004764a8;
        }
      }
      else {
        local_1c = _DAT_004764a4;
      }
    }
    else {
      local_1c = _DAT_004764a0;
    }
    ascii_manager.color = gui->uint_10 << 0x18 | local_1c;
    if (gui->read_by_spellcard_ecl < 100) {
      local_1e8 = gui->read_by_spellcard_ecl;
    }
    else {
      local_1e8 = 99;
    }
    local_18 = local_1e8;
    if ((local_1e8 < 10) && (*(int *)gui->field7_0x1c != gui->read_by_spellcard_ecl)) {
      SoundManager::play_sound_centered(&sound_manager,0x1d,0);
    }
    AsciiManager::drawf(&ascii_manager,&local_28,"%.2d");
    ascii_manager.color = 0xffffffff;
    *(int32_t *)gui->field7_0x1c = gui->read_by_spellcard_ecl;
  }
  supervisor.viewport.X = 0;
  supervisor.viewport.Y = 0;
  supervisor.viewport.Width = 0x280;
  supervisor.viewport.Height = 0x1e0;
  (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device,0x6c6de0);
  local_14 = gui->impl->vms + 6;
  if (((supervisor.config.flags >> 4 & 1) == 0) &&
     (((gui->impl->vms[6].current_instruction != (AnmRawInstr *)0x0 ||
       (supervisor.frames_to_disable_something != 0)) ||
      ((supervisor.config.flags >> 3 & 1 | supervisor.config.flags >> 4 & 1) != 0)))) {
    for (local_8 = 0.0; fVar1 = __49f, local_8 < _64_0f; local_8 = local_8 + _32_0f) {
      local_a0 = 0;
      local_9c = local_8;
      local_98 = __49f;
      (local_14->pos).x = 0.0;
      (local_14->pos).y = local_8;
      (local_14->pos).z = fVar1;
      AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
    }
    for (local_c = _16_0f; local_c < _24_0f; local_c = local_c + _32_0f) {
      for (local_8 = 0.0; fVar1 = __49f, local_8 < _64_0f; local_8 = local_8 + _32_0f) {
        local_ac = local_c;
        local_a8 = local_8;
        local_a4 = __49f;
        (local_14->pos).x = local_c;
        (local_14->pos).y = local_8;
        (local_14->pos).z = fVar1;
        AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
      }
    }
    local_14 = gui->impl->vms + 7;
    for (local_c = _32_0f; fVar1 = __49f, local_c < _16_0f; local_c = local_c + _32_0f) {
      local_b8 = local_c;
      local_b4 = 0;
      local_b0 = __49f;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 0.0;
      (local_14->pos).z = fVar1;
      AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
    }
    local_14 = gui->impl->vms + 8;
    for (local_c = _32_0f; fVar2 = _64_0f, fVar1 = __49f, local_c < _16_0f;
        local_c = local_c + _32_0f) {
      local_c4 = local_c;
      local_c0 = _64_0f;
      local_bc = __49f;
      (local_14->pos).x = local_c;
      (local_14->pos).y = fVar2;
      (local_14->pos).z = fVar1;
      AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
    }
    AnmManager::__draw_vm_2(anm_manager_ptr,gui->impl->vms + 5);
    AnmManager::__draw_vm_2(anm_manager_ptr,gui->impl->vms);
    AnmManager::__draw_vm_2(anm_manager_ptr,gui->impl->vms + 1);
    AnmManager::__draw_vm_2(anm_manager_ptr,gui->impl->vms + 3);
    AnmManager::__draw_vm_2(anm_manager_ptr,gui->impl->vms + 4);
    AnmManager::__draw_vm_2(anm_manager_ptr,gui->impl->vms + 2);
    AnmManager::__draw_vm_1(anm_manager_ptr,gui->impl->vms + 9);
    AnmManager::__draw_vm_1(anm_manager_ptr,gui->impl->vms + 10);
    AnmManager::__draw_vm_1(anm_manager_ptr,gui->impl->vms + 0xb);
    AnmManager::__draw_vm_1(anm_manager_ptr,gui->impl->vms + 0xc);
    AnmManager::__draw_vm_1(anm_manager_ptr,gui->impl->vms + 0xd);
    AnmManager::__draw_vm_1(anm_manager_ptr,gui->impl->vms + 0xe);
    AnmManager::__draw_vm_1(anm_manager_ptr,gui->impl->vms + 0xf);
    gui->flags_0 = gui->flags_0 & 0xfffffffc | 2;
    gui->flags_0 = gui->flags_0 & 0xfffffff3 | 8;
    gui->flags_0 = gui->flags_0 & 0xffffff3f | 0x80;
    gui->flags_0 = gui->flags_0 & 0xfffffcff | 0x200;
    gui->flags_0 = gui->flags_0 & 0xffffffcf | 0x20;
  }
  fVar2 = __49f;
  fVar1 = _8_0f;
  if ((supervisor.config.flags >> 4 & 1) == 0) {
    gui_impl = gui->impl;
    local_14 = gui_impl->vms + 0x16;
    local_c = _96_0f;
    local_d0 = _96_0f;
    local_cc = _8_0f;
    local_c8 = __49f;
    gui_impl->vms[0x16].pos.x = _96_0f;
    gui_impl->vms[0x16].pos.y = fVar1;
    gui_impl->vms[0x16].pos.z = fVar2;
    AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
    fVar2 = __49f;
    fVar1 = _2_0f;
    local_dc = local_c;
    local_d8 = _2_0f;
    local_d4 = __49f;
    (local_14->pos).x = local_c;
    (local_14->pos).y = fVar1;
    (local_14->pos).z = fVar2;
    AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
    fVar2 = __49f;
    fVar1 = _22_0f;
    if ((gui->flags_0 & 3) != 0) {
      local_e8 = local_c;
      local_e4 = _22_0f;
      local_e0 = __49f;
      (local_14->pos).x = local_c;
      (local_14->pos).y = fVar1;
      (local_14->pos).z = fVar2;
      AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
    }
    fVar2 = __49f;
    fVar1 = _46_0f;
    if ((gui->flags_0 >> 2 & 3) != 0) {
      local_f4 = local_c;
      local_f0 = _46_0f;
      local_ec = __49f;
      (local_14->pos).x = local_c;
      (local_14->pos).y = fVar1;
      (local_14->pos).z = fVar2;
      AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
    }
    fVar2 = __49f;
    fVar1 = _86_0f;
    if ((gui->flags_0 >> 4 & 3) != 0) {
      local_100 = local_c;
      local_fc = _86_0f;
      local_f8 = __49f;
      (local_14->pos).x = local_c;
      (local_14->pos).y = fVar1;
      (local_14->pos).z = fVar2;
      AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
    }
    fVar2 = __49f;
    fVar1 = _06_0f;
    if ((gui->flags_0 >> 6 & 3) != 0) {
      local_10c = local_c;
      local_108 = _06_0f;
      local_104 = __49f;
      (local_14->pos).x = local_c;
      (local_14->pos).y = fVar1;
      (local_14->pos).z = fVar2;
      AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
    }
    fVar2 = __49f;
    fVar1 = _26_0f;
    if ((gui->flags_0 >> 8 & 3) != 0) {
      local_118 = local_c;
      local_114 = _26_0f;
      local_110 = __49f;
      (local_14->pos).x = local_c;
      (local_14->pos).y = fVar1;
      (local_14->pos).z = fVar2;
      AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
    }
    fVar2 = _64_0f;
    fVar1 = __49f;
    local_124 = _88_0f;
    local_120 = _64_0f;
    local_11c = __49f;
    (local_14->pos).x = _88_0f;
    (local_14->pos).y = fVar2;
    (local_14->pos).z = fVar1;
    AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
    fVar2 = _64_0f;
    fVar1 = __49f;
    local_130 = 0;
    local_12c = _64_0f;
    local_128 = __49f;
    (local_14->pos).x = 0.0;
    (local_14->pos).y = fVar2;
    (local_14->pos).z = fVar1;
    AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
  }
  if (((gui->flags_0 & 3) != 0) || ((supervisor.config.flags >> 4 & 1) != 0)) {
    local_14 = gui->impl->vms + 0x10;
    local_c = _96_0f;
    for (i = 0; fVar2 = __49f, fVar1 = _22_0f, i < game_manager.lives_remaining; i = i + 1) {
      local_13c = local_c;
      local_138 = _22_0f;
      local_134 = __49f;
      (local_14->pos).x = local_c;
      (local_14->pos).y = fVar1;
      (local_14->pos).z = fVar2;
      AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
      local_c = local_c + ram0x0046a2b4;
    }
  }
  if (((gui->flags_0 >> 2 & 3) != 0) || ((supervisor.config.flags >> 4 & 1) != 0)) {
    local_14 = gui->impl->vms + 0x11;
    local_c = _96_0f;
    for (i = 0; fVar2 = __49f, fVar1 = _46_0f, i < game_manager.bombs_remaining; i = i + 1) {
      local_148 = local_c;
      local_144 = _46_0f;
      local_140 = __49f;
      (local_14->pos).x = local_c;
      (local_14->pos).y = fVar1;
      (local_14->pos).z = fVar2;
      AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
      local_c = local_c + ram0x0046a2b4;
    }
  }
  if (((gui->flags_0 >> 4 & 3) != 0) || ((supervisor.config.flags >> 4 & 1) != 0)) {
    local_1c0 = 4;
    do {
      local_1c0 = local_1c0 + -1;
    } while (-1 < local_1c0);
    if (game_manager.current_power != 0) {
      local_154 = _96_0f;
      local_150 = _86_0f;
      local_14c = __1f;
      local_7c = _96_0f;
      fStack_78 = _86_0f;
      fStack_74 = __1f;
      local_160 = (float)(game_manager.current_power + 0x1f0) + (float)__0f;
      local_15c = _86_0f;
      local_158 = __1f;
      fStack_64 = _86_0f;
      fStack_60 = __1f;
      local_16c = _96_0f;
      local_168 = _02_0f;
      local_164 = __1f;
      local_54 = _96_0f;
      fStack_50 = _02_0f;
      fStack_4c = __1f;
      local_178 = (float)(game_manager.current_power + 0x1f0) + (float)__0f;
      local_174 = _02_0f;
      local_170 = __1f;
      fStack_3c = _02_0f;
      fStack_38 = __1f;
      local_44 = 0xe0e0e0ff;
      local_6c = 0xe0e0e0ff;
      local_30 = 0x80e0e0ff;
      local_58 = 0x80e0e0ff;
      local_34 = 0x3f800000;
      local_48 = 0x3f800000;
      local_5c = 0x3f800000;
      local_70 = 0x3f800000;
      local_68 = local_160;
      local_40 = local_178;
      if ((supervisor.config.flags >> 8 & 1) == 0) {
        (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
                  (supervisor.d3d_device,0,4,2);
        (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
                  (supervisor.d3d_device,0,1,2);
      }
      (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,5,0);
      (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,2,0);
      if ((supervisor.config.flags >> 6 & 1) == 0) {
        (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0x17,8);
        (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0xe,0);
      }
      (*(code *)(supervisor.d3d_device)->vtable->SetVertexShader)(supervisor.d3d_device,0x44);
      (*(code *)(supervisor.d3d_device)->vtable->DrawPrimitiveUP)
                (supervisor.d3d_device,5,2,&local_7c,0x14);
      anm_manager_ptr->current_unknown = 0xff;
      anm_manager_ptr->current_colorop = 0xff;
      anm_manager_ptr->current_blend_mode = 0xff;
      anm_manager_ptr->current_zwrite_disable = 0xff;
      if ((supervisor.config.flags >> 8 & 1) == 0) {
        (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
                  (supervisor.d3d_device,0,4,4);
        (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
                  (supervisor.d3d_device,0,1,4);
      }
      (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,5,2);
      (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,2,2);
      fVar1 = _86_0f;
      if (0x7f < game_manager.current_power) {
        gui_impl = gui->impl;
        local_14 = gui_impl->vms + 0x12;
        local_184 = _96_0f;
        local_180 = _86_0f;
        local_17c = 0;
        gui_impl->vms[0x12].pos.x = _96_0f;
        gui_impl->vms[0x12].pos.y = fVar1;
        gui_impl->vms[0x12].pos.z = 0.0;
        AnmManager::__draw_vm_1(anm_manager_ptr,local_14);
      }
    }
    if (game_manager.current_power < 0x80) {
      local_190.x = _96_0f;
      local_190.y = _86_0f;
      local_190.z = 0.0;
      AsciiManager::drawf(&ascii_manager,&local_190,"%d");
    }
  }
  local_88.x = _96_0f;
  local_88.y = _2_0f;
  local_88.z = 0.0;
  AsciiManager::drawf(&ascii_manager,&local_88,"%.9d");
  local_88.x = _96_0f;
  local_88.y = _8_0f;
  local_88.z = 0.0;
  AsciiManager::drawf(&ascii_manager,&local_88,"%.9d");
  if (((gui->flags_0 >> 6 & 3) != 0) || ((supervisor.config.flags >> 4 & 1) != 0)) {
    local_88.x = _96_0f;
    local_88.y = _06_0f;
    local_88.z = 0.0;
    AsciiManager::drawf(&ascii_manager,&local_88,"%d");
  }
  if (((gui->flags_0 >> 8 & 3) != 0) || ((supervisor.config.flags >> 4 & 1) != 0)) {
    local_88.x = _96_0f;
    local_88.y = _26_0f;
    local_88.z = 0.0;
    AsciiManager::drawf(&ascii_manager,&local_88,"%d");
  }
  if ((gui->flags_0 & 3) != 0) {
    gui->flags_0 = gui->flags_0 & 0xfffffffc | (gui->flags_0 & 3) - 1 & 3;
  }
  if ((gui->flags_0 >> 4 & 3) != 0) {
    gui->flags_0 = gui->flags_0 & 0xffffffcf | ((gui->flags_0 >> 4 & 3) - 1 & 3) << 4;
  }
  if ((gui->flags_0 >> 2 & 3) != 0) {
    gui->flags_0 = gui->flags_0 & 0xfffffff3 | ((gui->flags_0 >> 2 & 3) - 1 & 3) << 2;
  }
  if ((gui->flags_0 >> 6 & 3) != 0) {
    gui->flags_0 = gui->flags_0 & 0xffffff3f | ((gui->flags_0 >> 6 & 3) - 1 & 3) << 6;
  }
  if ((gui->flags_0 >> 8 & 3) != 0) {
    gui->flags_0 = gui->flags_0 & 0xfffffcff | ((gui->flags_0 >> 8 & 3) - 1 & 3) << 8;
  }
  return;
}

