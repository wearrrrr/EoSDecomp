
void __fastcall Gui::on_tick_impl(Gui *gui)

{
  int iVar1;
  int local_c;
  int i;
  AnmManager *anm_mgr;
  GuiImpl *gui_impl;
  
  for (i = 0; anm_mgr = anm_manager_ptr, i < 26; i = i + 1) {
    if ((i == 19) && ((gui->impl->msg).current_msg_index < 0)) {
      if (gui->boss_present == false) {
        if (gui->impl->field1_0x1ba0[0] != '\0') {
          if ((byte)gui->impl->field1_0x1ba0[0] < 3) {
            gui_impl = gui->impl;
            gui_impl->vms[19].anm_file_index = 1556;
            AnmManager::set_vm_script
                      (anm_mgr,gui_impl->vms + 19,(AnmRawScript *)anm_mgr->scripts[1556]);
            gui->impl->field1_0x1ba0[0] = 3;
          }
          if (gui->uint_10 == 0) {
            gui->uint_10 = 0;
          }
          else {
            gui->uint_10 = gui->uint_10 - 4;
          }
          iVar1 = AnmManager::run_anm(anm_manager_ptr,gui->impl->vms + 0x13);
          if (iVar1 != 0) {
            gui->impl->field1_0x1ba0[0] = 0;
            gui->boss_healthbar_28 = 0.0;
            gui->uint_10 = 0;
          }
        }
      }
      else if (gui->impl->field1_0x1ba0[0] == '\0') {
        gui_impl = gui->impl;
        gui_impl->vms[0x13].anm_file_index = 0x613;
        AnmManager::set_vm_script
                  (anm_mgr,gui_impl->vms + 0x13,(AnmRawScript *)anm_mgr->scripts[0x613]);
        gui->impl->field1_0x1ba0[0] = 1;
        gui->uint_10 = 0;
      }
      else {
        iVar1 = AnmManager::run_anm(anm_manager_ptr,gui->impl->vms + 0x13);
        if (iVar1 != 0) {
          gui->impl->field1_0x1ba0[0] = 2;
        }
        if (gui->uint_10 < 0xfc) {
          gui->uint_10 = gui->uint_10 + 4;
        }
        else {
          gui->uint_10 = 0xff;
        }
      }
      if (1 < (byte)gui->impl->field1_0x1ba0[0]) {
        if (gui->boss_healthbar_24 <= gui->boss_healthbar_28) {
          if ((gui->boss_healthbar_24 < gui->boss_healthbar_28) &&
             (gui->boss_healthbar_28 = gui->boss_healthbar_28 - __02f,
             gui->boss_healthbar_28 < gui->boss_healthbar_24)) {
            gui->boss_healthbar_28 = gui->boss_healthbar_24;
          }
        }
        else {
          gui->boss_healthbar_28 = gui->boss_healthbar_28 + __01f;
          if (gui->boss_healthbar_24 < gui->boss_healthbar_28) {
            gui->boss_healthbar_28 = gui->boss_healthbar_24;
          }
        }
      }
    }
    else {
      AnmManager::run_anm(anm_manager_ptr,gui->impl->vms + i);
    }
  }
  AnmManager::run_anm(anm_manager_ptr,&gui->impl->vm_1);
  AnmManager::run_anm(anm_manager_ptr,&gui->impl->vm_2);
  AnmManager::run_anm(anm_manager_ptr,&gui->impl->vm_3);
  AnmManager::run_anm(anm_manager_ptr,&gui->impl->vm_5);
  AnmManager::run_anm(anm_manager_ptr,&gui->impl->vm_4);
  AnmManager::run_anm(anm_manager_ptr,&gui->impl->vm_6);
  if ((-1 < (gui->impl->vm_9).sprite_number) &&
     (iVar1 = AnmManager::run_anm(anm_manager_ptr,&gui->impl->vm_9), iVar1 != 0)) {
    (gui->impl->vm_9).sprite_number = -1;
  }
  if ((gui->impl->child_b_2BE4).field_10 != 0) {
    if ((gui->impl->child_b_2BE4).timer.current < 0x1e) {
      (gui->impl->child_b_2BE4).vec3.x =
           (((float)(gui->impl->child_b_2BE4).timer.current +
            (gui->impl->child_b_2BE4).timer.subframe) * _312_0f) / _0_0f + _16_0f;
    }
    else {
      (gui->impl->child_b_2BE4).vec3.x = _04_0f;
    }
    if (0xf9 < (gui->impl->child_b_2BE4).timer.current) {
      (gui->impl->child_b_2BE4).field_10 = 0;
    }
    Timer::tick(&(gui->impl->child_b_2BE4).timer);
  }
  if ((gui->impl->child_b_2C04).field_10 != 0) {
    if ((gui->impl->child_b_2C04).timer.current < 0x1e) {
      (gui->impl->child_b_2C04).vec3.x =
           (((float)(gui->impl->child_b_2C04).timer.current +
            (gui->impl->child_b_2C04).timer.subframe) * _312_0f) / _0_0f + _16_0f;
    }
    else {
      (gui->impl->child_b_2C04).vec3.x = _04_0f;
    }
    if (0xb3 < (gui->impl->child_b_2C04).timer.current) {
      (gui->impl->child_b_2C04).field_10 = 0;
    }
    Timer::tick(&(gui->impl->child_b_2C04).timer);
  }
  if ((gui->impl->child_b_2C24).field_10 != 0) {
    if (0x117 < (gui->impl->child_b_2C24).timer.current) {
      (gui->impl->child_b_2C24).field_10 = 0;
    }
    Timer::tick(&(gui->impl->child_b_2C24).timer);
  }
  if (gui->impl->dword_2BDC == 1) {
    local_c = (game_manager.current_stage * 1000 + game_manager.graze_in_stage * 10 +
              (uint)game_manager.current_power * 100) *
              (uint)game_manager.power_items_collected_stage;
    if (5 < game_manager.current_stage) {
      local_c = local_c + game_manager.lives_remaining * 3000000 +
                game_manager.bombs_remaining * 1000000;
    }
    if (game_manager.difficulty == 0) {
      local_c = local_c / 2 - (local_c / 2) % 10;
    }
    else if (game_manager.difficulty == 2) {
      local_c = (local_c * 0xc) / 10;
      local_c = local_c - local_c % 10;
    }
    else if (game_manager.difficulty == 3) {
      local_c = (local_c * 0xf) / 10;
      local_c = local_c - local_c % 10;
    }
    else if (game_manager.difficulty == 4) {
      local_c = local_c * 2 - (local_c * 2) % 10;
    }
    if (supervisor.config_defaults.starting_lives == '\x03') {
      local_c = (local_c * 5) / 10;
      local_c = local_c - local_c % 10;
    }
    else if (supervisor.config_defaults.starting_lives == '\x04') {
      local_c = (local_c << 1) / 10;
      local_c = local_c - local_c % 10;
    }
    gui->impl->stage_score = local_c;
    game_manager.score = game_manager.score + local_c;
    gui->impl->dword_2BDC = gui->impl->dword_2BDC + 1;
  }
  return;
}

