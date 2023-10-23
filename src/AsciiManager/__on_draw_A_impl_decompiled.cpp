
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AsciiManager * __thiscall AsciiManager::__on_draw_A_impl(AsciiManager *this)

{
  float fVar1;
  longlong lVar2;
  int local_18;
  AsciiManagerString *local_14;
  AsciiManagerString *local_10;
  int local_c;
  
  local_18 = 1;
  local_10 = this->strings;
  (this->vm_1).flags = (this->vm_1).flags | 1;
  (this->vm_1).flags = (this->vm_1).flags | 0x300;
  for (local_c = 0; local_c < this->num_strings; local_c = local_c + 1) {
    (this->vm_1).pos.x = (local_10->position).x;
    (this->vm_1).pos.y = (local_10->position).y;
    (this->vm_1).pos.z = (local_10->position).z;
    local_14 = local_10;
    (this->vm_1).scale_x = (local_10->scale).x;
    (this->vm_1).scale_y = (local_10->scale).y;
    fVar1 = _14_0f * (local_10->scale).x;
    if (local_18 != *(int *)(local_10->field4_0x58 + 4)) {
      local_18 = *(int *)(local_10->field4_0x58 + 4);
      if (local_18 == 0) {
        supervisor.viewport.X = 0;
        supervisor.viewport.Y = 0;
        supervisor.viewport.Width = 0x280;
        supervisor.viewport.Height = 0x1e0;
        (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device,0x6c6de0);
      }
      else {
        lVar2 = __ftol2((double)game_manager.arcade_region_top_left_pos.x);
        supervisor.viewport.X = (DWORD)lVar2;
        lVar2 = __ftol2((double)game_manager.arcade_region_top_left_pos.y);
        supervisor.viewport.Y = (DWORD)lVar2;
        lVar2 = __ftol2((double)game_manager.arcade_region_size.x);
        supervisor.viewport.Width = (DWORD)lVar2;
        lVar2 = __ftol2((double)game_manager.arcade_region_size.y);
        supervisor.viewport.Height = (DWORD)lVar2;
        (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device,0x6c6de0);
      }
    }
    for (; local_14->text[0] != '\0'; local_14 = (AsciiManagerString *)(local_14->text + 1)) {
      if (local_14->text[0] == '\n') {
        (this->vm_1).pos.y = ram0x0046a2b4 * (local_10->scale).y + (this->vm_1).pos.y;
        (this->vm_1).pos.x = (local_10->position).x;
      }
      else if (local_14->text[0] == ' ') {
        (this->vm_1).pos.x = fVar1 + (this->vm_1).pos.x;
      }
      else {
        if (*(int *)local_10->field4_0x58 == 0) {
          (this->vm_1).sprite =
               (AnmLoadedSprite *)((int)anm_manager_ptr + ((byte)local_14->text[0] - 0x15) * 0x38);
          (this->vm_1).color = local_10->color;
        }
        else {
          (this->vm_1).sprite = anm_manager_ptr->sprites + (byte)local_14->text[0] + 0x61;
          (this->vm_1).color = 0xffffffff;
        }
        AnmManager::__draw_vm_1(anm_manager_ptr,&this->vm_1);
        (this->vm_1).pos.x = fVar1 + (this->vm_1).pos.x;
      }
    }
    local_10 = local_10 + 1;
  }
  return this;
}

