
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall AsciiManager::__on_draw_B_impl_1(AsciiManager *this)

{
  longlong lVar1;
  char *local_14;
  int local_10;
  uint local_c;
  AsciiManagerPopup *local_8;
  
  local_8 = this->popups_1;
  lVar1 = __ftol2((double)game_manager.arcade_region_top_left_pos.x);
  supervisor.viewport.X = (DWORD)lVar1;
  lVar1 = __ftol2((double)game_manager.arcade_region_top_left_pos.y);
  supervisor.viewport.Y = (DWORD)lVar1;
  lVar1 = __ftol2((double)game_manager.arcade_region_size.x);
  supervisor.viewport.Width = (DWORD)lVar1;
  lVar1 = __ftol2((double)game_manager.arcade_region_size.y);
  supervisor.viewport.Height = (DWORD)lVar1;
  (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device,0x6c6de0);
  for (local_10 = 0; local_10 < 0x203; local_10 = local_10 + 1) {
    if (local_8->in_use != '\0') {
      (this->vm_2).pos.x = (local_8->position).x - (float)((uint)local_8->characters << 2);
      (this->vm_2).pos.y = (local_8->position).y;
      (this->vm_2).color = local_8->color;
      local_14 = local_8->digits + (local_8->characters - 1);
      for (local_c = (uint)local_8->characters; 0 < (int)local_c; local_c = local_c - 1) {
        (this->vm_2).sprite = anm_manager_ptr->sprites + (byte)*local_14;
        if ((byte)*local_14 < 10) {
          AnmManager::__sub_433590(anm_manager_ptr,&this->vm_2);
        }
        else {
          (this->vm_2).matrix.field0_0x0.field0._11 = 0.1875;
          (this->vm_2).matrix.field0_0x0.field0._22 = 0.03125;
          AnmManager::__sub_433590(anm_manager_ptr,&this->vm_2);
          (this->vm_2).matrix.field0_0x0.field0._11 = 0.03125;
          (this->vm_2).matrix.field0_0x0.field0._22 = 0.03125;
        }
        (this->vm_2).pos.x = (this->vm_2).pos.x + _8_0f;
        local_14 = local_14 + -1;
      }
    }
    local_8 = local_8 + 1;
  }
  return;
}

