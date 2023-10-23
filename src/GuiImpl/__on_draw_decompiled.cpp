
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall GuiImpl::__on_draw(GuiImpl *gui_impl)

{
  int result;
  int local_94;
  float local_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_8;
  
  if ((gui_impl->msg).current_msg_index < 0) {
    result = -1;
  }
  else if ((game_manager.current_stage == 6) &&
          (((gui_impl->msg).current_msg_index == 1 || ((gui_impl->msg).current_msg_index == 0xb))))
  {
    result = 0;
  }
  else {
    if ((gui_impl->msg).script_time.current < 0x3c) {
      local_8 = (((float)(gui_impl->msg).script_time.current + (gui_impl->msg).script_time.subframe)
                * _48_0f) / _60_0f;
    }
    else {
      local_8 = _48_0f;
    }
    local_94 = 4;
    do {
      local_94 = local_94 + -1;
    } while (-1 < local_94);
    local_5c = ((game_manager.arcade_region_size.x - _56_0f) / _2_0f +
               game_manager.arcade_region_top_left_pos.x) - ram0x0046a2b4;
    fStack_58 = _84_0f;
    uStack_54 = 0;
    local_48 = (game_manager.arcade_region_size.x - _56_0f) / _2_0f +
               game_manager.arcade_region_top_left_pos.x + _56_0f + ram0x0046a2b4;
    fStack_44 = _84_0f;
    uStack_40 = 0;
    local_34 = ((game_manager.arcade_region_size.x - _56_0f) / _2_0f +
               game_manager.arcade_region_top_left_pos.x) - ram0x0046a2b4;
    fStack_30 = _84_0f + local_8;
    uStack_2c = 0;
    local_20 = (game_manager.arcade_region_size.x - _56_0f) / _2_0f +
               game_manager.arcade_region_top_left_pos.x + _56_0f + ram0x0046a2b4;
    fStack_1c = _84_0f + local_8;
    uStack_18 = 0;
    local_38 = 0xd0000000;
    local_4c = 0xd0000000;
    local_10 = 0x90000000;
    local_24 = 0x90000000;
    local_14 = 0x3f800000;
    local_28 = 0x3f800000;
    local_3c = 0x3f800000;
    local_50 = 0x3f800000;
    AnmManager::__draw_vm_1(anm_manager_ptr,(gui_impl->msg).portraits);
    AnmManager::__draw_vm_1(anm_manager_ptr,(gui_impl->msg).portraits + 1);
    if ((supervisor.config.flags >> 8 & 1) == 0) {
      (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,4,2);
      (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,1,2);
    }
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,5,0);
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,2,0);
    if ((supervisor.config.flags >> 6 & 1) == 0) {
      (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0xe,0);
    }
    (*(code *)(supervisor.d3d_device)->vtable->SetVertexShader)(supervisor.d3d_device,0x44);
    (*(code *)(supervisor.d3d_device)->vtable->DrawPrimitiveUP)
              (supervisor.d3d_device,5,2,&local_5c,0x14);
    anm_manager_ptr->current_unknown = 0xff;
    anm_manager_ptr->current_colorop = 0xff;
    anm_manager_ptr->current_blend_mode = 0xff;
    anm_manager_ptr->current_zwrite_disable = 0xff;
    if ((supervisor.config.flags >> 8 & 1) == 0) {
      (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,4,4);
      (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,1,4);
    }
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,5,2);
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,2,2);
    AnmManager::__draw_vm_1(anm_manager_ptr,(gui_impl->msg).dialogue_lines);
    AnmManager::__draw_vm_1(anm_manager_ptr,(gui_impl->msg).dialogue_lines + 1);
    AnmManager::__draw_vm_1(anm_manager_ptr,(gui_impl->msg).intro_lines);
    AnmManager::__draw_vm_1(anm_manager_ptr,(gui_impl->msg).intro_lines + 1);
    result = 0;
  }
  return result;
}

