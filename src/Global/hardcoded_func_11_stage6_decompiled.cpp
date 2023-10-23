
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl hardcoded_func_11_stage6(Enemy *this)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  AnmVm *local_64;
  int local_60;
  undefined4 local_5c [22];
  
  local_64 = (AnmVm *)bullet_manager.bullets;
  puVar2 = local_5c;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  Rng::randf_0_to_1(&Rng);
  EffectManager::spawn_effect
            ((EffectManager *)((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),0xc,
             &this->position,1,0xffffffff);
  for (local_60 = 0; local_60 < 0x280; local_60 = local_60 + 1) {
    if ((((*(short *)((int)&local_64[5].matrix.field0_0x0 + 0x32) != 0) &&
         (*(short *)((int)&local_64[5].matrix.field0_0x0 + 0x32) != 5)) &&
        (local_64->sprite != (AnmLoadedSprite *)0x0)) &&
       ((local_64->sprite->height_px < _0_0f &&
        (local_64[5].current_time_in_script.subframe == (float)__0f)))) {
      *(ushort *)((int)&local_64[5].matrix.field0_0x0 + 0x2c) =
           *(ushort *)((int)&local_64[5].matrix.field0_0x0 + 0x2c) | 0x10;
      *(undefined2 *)((int)&local_64[5].matrix.field0_0x0 + 0x2e) = 2;
      AnmManager::set_vm_sprite
                (anm_manager_ptr,local_64,
                 (int)local_64->sprite_number_duplicate +
                 (int)*(short *)((int)&local_64[5].matrix.field0_0x0 + 0x2e));
      local_64[5].current_time_in_script.subframe = 0.01;
      local_64[5].matrix.field0_0x0.field0._23 = 0.0;
      local_64[5].matrix.field0_0x0.field0._22 = 0.0;
      local_64[5].matrix.field0_0x0.field0._21 = -NAN;
      local_64[5].matrix.field0_0x0.field0._24 = 1.681558e-43;
      fVar3 = Rng::randf_0_to_1(&Rng);
      fVar4 = (float10)(float)(fVar3 * (float10)_Pi_2_f - (float10)_Pi_f);
      fVar3 = (float10)fcos(fVar4);
      fVar4 = (float10)fsin(fVar4);
      local_64[5].uv_scroll_pos.x = (float)(fVar3 * (float10)0.01);
      local_64[5].uv_scroll_pos.y = (float)(fVar4 * (float10)0.01);
    }
    local_64 = (AnmVm *)(local_64[5].matrix.field0_0x0.m[3] + 2);
  }
  return;
}

