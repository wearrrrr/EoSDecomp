
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl hardcoded_func_09_stage6(Enemy *this)

{
  float10 fVar1;
  float10 fVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  AnmVm *local_68;
  float local_64;
  int local_60;
  undefined4 local_5c [22];
  float pos;
  
  local_68 = (AnmVm *)bullet_manager.bullets;
  puVar4 = local_5c;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  fVar5 = Rng::randf_0_to_1(&Rng);
  fVar1 = (float10)_Pi_2_f;
  fVar2 = (float10)_Pi_f;
  EffectManager::spawn_effect
            ((EffectManager *)((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),0xc,
             &this->position,1,0xffffffff);
  for (local_60 = 0; local_60 < 0x280; local_60 = local_60 + 1) {
    if ((((*(short *)((int)&local_68[5].matrix.field0_0x0 + 0x32) != 0) &&
         (*(short *)((int)&local_68[5].matrix.field0_0x0 + 0x32) != 5)) &&
        (local_68->sprite != (AnmLoadedSprite *)0x0)) &&
       ((local_68->sprite->height_px < _0_0f &&
        (local_68[5].current_time_in_script.subframe == (float)__0f)))) {
      *(ushort *)((int)&local_68[5].matrix.field0_0x0 + 0x2c) =
           *(ushort *)((int)&local_68[5].matrix.field0_0x0 + 0x2c) | 0x10;
      *(undefined2 *)((int)&local_68[5].matrix.field0_0x0 + 0x2e) = 2;
      AnmManager::set_vm_sprite
                (anm_manager_ptr,local_68,
                 (int)local_68->sprite_number_duplicate +
                 (int)*(short *)((int)&local_68[5].matrix.field0_0x0 + 0x2e));
      local_68[5].current_time_in_script.subframe = 0.01;
      local_68[5].matrix.field0_0x0.field0._23 = 0.0;
      local_68[5].matrix.field0_0x0.field0._22 = 0.0;
      local_68[5].matrix.field0_0x0.field0._21 = -NAN;
      local_68[5].matrix.field0_0x0.field0._24 = 1.681558e-43;
      pos = ((this->position).y - local_68[5].angle_velocity.z) *
            ((this->position).y - local_68[5].angle_velocity.z) +
            ((this->position).x - local_68[5].angle_velocity.y) *
            ((this->position).x - local_68[5].angle_velocity.y);
      if (pos <= __1f) {
        local_64 = 0.0;
      }
      else {
        fVar6 = (float10)_sqrt(local_68,(char)this,SUB81((double)pos,0));
        local_64 = (float)fVar6;
      }
      fVar7 = (float10)((local_64 * _Pi_f) / _56_0f + (float)(fVar5 * fVar1 - fVar2));
      fVar6 = (float10)fcos(fVar7);
      fVar7 = (float10)fsin(fVar7);
      local_68[5].uv_scroll_pos.x = (float)(fVar6 * (float10)0.01);
      local_68[5].uv_scroll_pos.y = (float)(fVar7 * (float10)0.01);
    }
    local_68 = (AnmVm *)(local_68[5].matrix.field0_0x0.m[3] + 2);
  }
  return;
}

