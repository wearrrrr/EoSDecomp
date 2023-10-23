
undefined4 __cdecl Ending::on_draw(int param_1)

{
  long DstY;
  longlong lVar1;
  int local_8;
  long Height;
  long Width;
  
  Height = 480;
  Width = 640;
  lVar1 = __ftol2((double)*(float *)(param_1 + 0xc));
  DstY = (long)lVar1;
  lVar1 = __ftol2((double)*(float *)(param_1 + 8));
  AnmManager::__surface_copy_ex_idk_how_to_name_this
            (anm_manager_ptr,0,0,0,(long)lVar1,DstY,Width,Height);
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    if (*(short *)(param_1 + 200 + local_8 * 0x110) != 0) {
      AnmManager::__draw_vm_1(anm_manager_ptr,(AnmVm *)(param_1 + 0x14 + local_8 * 0x110));
    }
  }
  __sub_40F550(param_1);
  return 1;
}

