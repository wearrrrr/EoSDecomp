
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AsciiManagerBigChild * __thiscall AsciiManagerBigChild::__on_draw_2(AsciiManagerBigChild *this)

{
  AsciiManagerBigChild *ambc;
  int i;
  AnmVm *vm1;
  AnmVm *vm2;
  longlong lVar1;
  AsciiManagerBigChild *ambc2;
  
  ambc = (AsciiManagerBigChild *)(uint)(byte)game_manager.__byte_1820;
  if (ambc != (AsciiManagerBigChild *)0x0) {
    lVar1 = __ftol2((double)game_manager.arcade_region_top_left_pos.x);
    supervisor.viewport.X = (DWORD)lVar1;
    lVar1 = __ftol2((double)game_manager.arcade_region_top_left_pos.y);
    supervisor.viewport.Y = (DWORD)lVar1;
    lVar1 = __ftol2((double)game_manager.arcade_region_size.x);
    supervisor.viewport.Width = (DWORD)lVar1;
    lVar1 = __ftol2((double)game_manager.arcade_region_size.y);
    supervisor.viewport.Height = (DWORD)lVar1;
    (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device,0x6c6de0);
    if ((supervisor._1021_1_ != '\0') && ((this->index_0 != 0 || (2 < this->dword_4)))) {
      AnmManager::__draw_vm_1(anm_manager_ptr,&this->vm_668);
    }
    if ((this->index_0 == 1) || (ambc = this, this->index_0 == 2)) {
      vm1 = this->vms_8 + 1;
      vm2 = this->vms_8 + 4;
      for (i = 68; i != 0; i = i + -1) {
        (vm2->rotation).x = (vm1->rotation).x;
        vm1 = (AnmVm *)&(vm1->rotation).y;
        vm2 = (AnmVm *)&(vm2->rotation).y;
      }
      this->vms_8[4].pos.x = _8_0f * this->vms_8[4].scale_x + this->vms_8[4].pos.x;
      this->vms_8[4].sprite =
           (AnmLoadedSprite *)
           ((int)anm_manager_ptr + (0x1e - (uint)(byte)game_manager.__byte_1818) * 0x38);
      ambc = (AsciiManagerBigChild *)AnmManager::__draw_vm_1(anm_manager_ptr,this->vms_8 + 4);
    }
    ambc2 = (AsciiManagerBigChild *)0x0;
    while ((int)ambc2 < 4) {
      if ((this->vms_8[(int)ambc2].flags & 1) != 0) {
        AnmManager::__draw_vm_1(anm_manager_ptr,this->vms_8 + (int)ambc2);
      }
      ambc = (AsciiManagerBigChild *)((int)&ambc2->index_0 + 1);
      ambc2 = ambc;
    }
  }
  return ambc;
}

