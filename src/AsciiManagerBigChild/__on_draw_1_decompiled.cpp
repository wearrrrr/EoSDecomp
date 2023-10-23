
void __thiscall AsciiManagerBigChild::__on_draw_1(AsciiManagerBigChild *this)

{
  int iVar1;
  AnmVm *pAVar2;
  AnmVm *pAVar3;
  longlong lVar4;
  AnmVm local_11c;
  int local_8;
  
  if (game_manager.__byte_181f != '\0') {
    lVar4 = __ftol2((double)game_manager.arcade_region_top_left_pos.x);
    supervisor.viewport.X = (DWORD)lVar4;
    lVar4 = __ftol2((double)game_manager.arcade_region_top_left_pos.y);
    supervisor.viewport.Y = (DWORD)lVar4;
    lVar4 = __ftol2((double)game_manager.arcade_region_size.x);
    supervisor.viewport.Width = (DWORD)lVar4;
    lVar4 = __ftol2((double)game_manager.arcade_region_size.y);
    supervisor.viewport.Height = (DWORD)lVar4;
    (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device,0x6c6de0);
    if ((supervisor._1021_1_ != '\0') && (this->index_0 != 0)) {
      pAVar2 = &this->vm_668;
      pAVar3 = &local_11c;
      for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pAVar3->rotation).x = (pAVar2->rotation).x;
        pAVar2 = (AnmVm *)&(pAVar2->rotation).y;
        pAVar3 = (AnmVm *)&(pAVar3->rotation).y;
      }
      local_11c.flags = local_11c.flags | 0x1000;
      AnmManager::__draw_vm_1(anm_manager_ptr,&local_11c);
    }
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((this->vms_8[local_8].flags & 1) != 0) {
        AnmManager::__draw_vm_1(anm_manager_ptr,this->vms_8 + local_8);
      }
    }
  }
  return;
}

