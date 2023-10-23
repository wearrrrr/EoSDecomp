
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sub_429BB0(int param_1)

{
  float10 fVar1;
  AnmVm *local_c;
  int local_8;
  
  local_c = (AnmVm *)(param_1 + 0xa28);
  for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
    if (*(short *)((int)&local_c[1].matrix.field0_0x0 + 2) == 2) {
      if (local_c->auto_rotate != 0) {
        fVar1 = reduce_angle(local_c[1].uv_scroll_pos.y,3.141593);
        (local_c->rotation).z = (float)((float10)_Pi_2_f - fVar1);
      }
      (local_c->pos).z = 0.4;
      AnmManager::__sub_433590(anm_manager_ptr,local_c);
    }
    local_c = (AnmVm *)(local_c[1].matrix.field0_0x0.m + 3);
  }
  return;
}

