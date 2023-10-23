
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Gui::__sub_41ADF3(Gui *gui)

{
  longlong uVar3;
  Float3 vec;
  GuiImpl *gui_impl;
  GuiImpl *gui_impl2;
  
  if (((gui->impl->vm_1).flags & 1) != 0) {
    vec.x = _68_0f;
    vec.y = _98_0f;
    vec.z = 0.0;
    if (game_manager.demoplay_mode == '\0') {
      AnmManager::__sub_433590(anm_manager_ptr,&gui->impl->vm_1);
      ascii_manager.color = (gui->impl->vm_1).color & 0xff000000 | 0xffff40;
      if (game_manager.current_stage < 6) {
        vec.x = _68_0f;
        AsciiManager::drawf(&ascii_manager,&vec,"STAGE %d");
      }
      else if (game_manager.current_stage == 6) {
        vec.x = _36_0f;
        AsciiManager::drawf(&ascii_manager,&vec,"FINAL STAGE");
      }
      else {
        vec.x = _36_0f;
        AsciiManager::drawf(&ascii_manager,&vec,"EXTRA STAGE");
      }
    }
    else {
      ascii_manager.color = (gui->impl->vm_1).color & 0xff000000 | 0xffff40;
      vec.x = _36_0f;
                    /* "DEMO PLAY" */
      AsciiManager::drawf(&ascii_manager,&vec," DEMO PLAY");
    }
    ascii_manager.color = 0xffffffff;
  }
  if ((((gui->impl->vm_2).flags & 1) != 0) && (game_manager.demoplay_mode == '\0')) {
    AnmManager::__sub_433590(anm_manager_ptr,&gui->impl->vm_2);
  }
  if (((gui->impl->vm_3).flags & 1) != 0) {
    AnmManager::__draw_vm_1(anm_manager_ptr,&gui->impl->vm_3);
  }
  if (((gui->impl->vm_4).flags & 1) != 0) {
    AnmManager::__draw_vm_1(anm_manager_ptr,&gui->impl->vm_4);
  }
  if (((gui->impl->vm_5).flags & 1) != 0) {
    gui_impl = gui->impl;
    gui_impl2 = gui->impl;
    (gui_impl2->vm_7).pos.x = (gui_impl->vm_5).pos.x;
    (gui_impl2->vm_7).pos.y = (gui_impl->vm_5).pos.y;
    (gui_impl2->vm_7).pos.z = (gui_impl->vm_5).pos.z;
    (gui->impl->vm_7).pos.x =
         ((((gui->float_8 * ram0x0046a2b4) / _5_0f) / _2_0f + _128_0f) - ram0x0046a2b4) +
         (gui->impl->vm_7).pos.x;
    (gui->impl->vm_7).scale_x = gui->float_8 / _14_0f;
    AnmManager::__draw_vm_1(anm_manager_ptr,&gui->impl->vm_7);
    AnmManager::__draw_vm_1(anm_manager_ptr,&gui->impl->vm_5);
  }
  if (((gui->impl->vm_6).flags & 1) != 0) {
    gui_impl = gui->impl;
    gui_impl2 = gui->impl;
    (gui_impl2->vm_8).pos.x = (gui_impl->vm_6).pos.x;
    (gui_impl2->vm_8).pos.y = (gui_impl->vm_6).pos.y;
    (gui_impl2->vm_8).pos.z = (gui_impl->vm_6).pos.z;
    (gui->impl->vm_8).pos.x =
         (_28_0f - ((gui->blue_spellcard_bar_length * ram0x0046a2b4) / _5_0f) / _2_0f) +
         (gui->impl->vm_8).pos.x;
    (gui->impl->vm_8).scale_x = gui->blue_spellcard_bar_length / _14_0f;
    AnmManager::__draw_vm_1(anm_manager_ptr,&gui->impl->vm_8);
    AnmManager::__draw_vm_1(anm_manager_ptr,&gui->impl->vm_6);
  }
  if (-1 < (gui->impl->vm_9).sprite_number) {
    uVar3 = __ftol2((double)game_manager.arcade_region_top_left_pos.x);
    supervisor.viewport.X = (DWORD)uVar3;
    uVar3 = __ftol2((double)game_manager.arcade_region_top_left_pos.y);
    supervisor.viewport.Y = (DWORD)uVar3;
    uVar3 = __ftol2((double)game_manager.arcade_region_size.x);
    supervisor.viewport.Width = (DWORD)uVar3;
    uVar3 = __ftol2((double)game_manager.arcade_region_size.y);
    supervisor.viewport.Height = (DWORD)uVar3;
    (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device,0x6c6de0);
    AnmManager::__draw_vm_1(anm_manager_ptr,&gui->impl->vm_9);
  }
  return;
}

