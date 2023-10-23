
undefined4 __cdecl Stage::on_draw_B(Stage *stage)

{
  AnmManager *this;
  int iVar1;
  Stage *stage_ptr;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  undefined4 local_8;
  
  if (stage->set_by_spellcard_ecl_80 < 2) {
    iVar1 = Gui::__sub_4172D3(&gui);
    if (iVar1 == 0) {
      draw_vms(stage,2);
      draw_vms(stage,3);
      if (stage->set_by_spellcard_ecl_80 == 1) {
        local_1c = 32.0;
        local_18 = 16.0;
        local_14 = 416.0;
        local_10 = 464.0;
        local_c = (stage->set_by_spellcard_ecl_84 * 0xff) / 0x3c;
        __sub_42F8B0(&local_1c,local_c << 0x18);
      }
    }
  }
  this = anm_manager_ptr;
  if (0 < stage->set_by_spellcard_ecl_80) {
    if (stage->set_by_spellcard_ecl_84 == (uint)supervisor.config.frameskip_settings ||
        stage->set_by_spellcard_ecl_84 < (int)(uint)supervisor.config.frameskip_settings) {
      (stage->vm_88).anm_file_index = 0x2b3;
      AnmManager::set_vm_script(this,&stage->vm_88,(AnmRawScript *)this->scripts[0x2b3]);
    }
    AnmManager::__draw_vm_2(anm_manager_ptr,&stage->vm_88);
    stage = stage_ptr;
  }
  supervisor.viewport.MinZ = 0.0;
  supervisor.viewport.MaxZ = 0.5;
  __sub_41C28C(stage,0.0);
  (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device,0x6c6de0);
  local_8 = 0x447a0000;
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0x24,0x447a0000);
  local_8 = 0x44fa0000;
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0x25,0x44fa0000);
  return 1;
}

