
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl hardcoded_func_15_stageEx(Enemy *this)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  int j;
  int local_74;
  AnmVm *local_68;
  int i;
  int local_60;
  undefined4 local_5c [22];
  
  local_60 = 0;
  local_74 = 0x5ab5f8;
  puVar4 = local_5c;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (i = 0; i < 640; i = i + 1) {
    if ((((*(short *)(local_74 + 1470) != 0) && (*(short *)(local_74 + 1470) != 5)) &&
        (*(int *)(local_74 + 192) != 0)) && (_0_0f <= *(float *)(*(int *)(local_74 + 192) + 0x2c)))
    {
      local_60 = local_60 + 1;
      dVar1 = (double)(*(float *)(local_74 + 0x560) - (this->position).x);
      dVar2 = (double)(*(float *)(local_74 + 0x564) - (this->position).y);
      fVar5 = (float10)_atan2(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),
                              (int)((ulonglong)dVar1 >> 0x20));
      local_68 = (AnmVm *)bullet_manager.bullets;
      for (j = 0; j < 640; j = j + 1) {
        if ((((*(short *)((int)&local_68[5].matrix.field0_0x0 + 0x32) != 0) &&
             (*(short *)((int)&local_68[5].matrix.field0_0x0 + 0x32) != 5)) &&
            ((local_68->sprite != (AnmLoadedSprite *)0x0 &&
             ((local_68->sprite->height_px < _0_0f &&
              (local_68[5].current_time_in_script.subframe == (float)__0f)))))) &&
           (fVar6 = (float10)_sqrt(local_74,(char)local_74,
                                   SUB81((double)((local_68[5].angle_velocity.y -
                                                  *(float *)(local_74 + 0x560)) *
                                                  (local_68[5].angle_velocity.y -
                                                  *(float *)(local_74 + 0x560)) +
                                                 (local_68[5].angle_velocity.z -
                                                 *(float *)(local_74 + 0x564)) *
                                                 (local_68[5].angle_velocity.z -
                                                 *(float *)(local_74 + 0x564))),0)),
           (float)fVar6 < _64_0f)) {
          *(ushort *)((int)&local_68[5].matrix.field0_0x0 + 0x2c) =
               *(ushort *)((int)&local_68[5].matrix.field0_0x0 + 0x2c) | 0x10;
          local_68[5].current_time_in_script.subframe = 0.01;
          local_68[5].matrix.field0_0x0.field0._23 = 0.0;
          local_68[5].matrix.field0_0x0.field0._22 = 0.0;
          local_68[5].matrix.field0_0x0.field0._21 = -NAN;
          local_68[5].matrix.field0_0x0.field0._24 = 1.681558e-43;
          dVar1 = (double)(local_68[5].angle_velocity.y - (this->position).x);
          dVar2 = (double)(local_68[5].angle_velocity.z - (this->position).y);
          fVar6 = (float10)_atan2(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),
                                  (int)((ulonglong)dVar1 >> 0x20));
          local_68[5].matrix.field0_0x0.field0._12 =
               ((float)fVar6 - (float)fVar5) * __2f + (float)fVar5;
          fVar7 = (float10)local_68[5].matrix.field0_0x0.field0._12;
          fVar6 = (float10)fcos(fVar7);
          fVar7 = (float10)fsin(fVar7);
          local_68[5].uv_scroll_pos.x = (float)(fVar6 * (float10)0.01);
          local_68[5].uv_scroll_pos.y = (float)(fVar7 * (float10)0.01);
          *(short *)((int)&local_68[5].matrix.field0_0x0 + 0x2e) =
               *(short *)((int)&local_68[5].matrix.field0_0x0 + 0x2e) + 1;
          AnmManager::set_vm_sprite
                    (anm_manager_ptr,local_68,
                     (int)local_68->sprite_number_duplicate +
                     (int)*(short *)((int)&local_68[5].matrix.field0_0x0 + 0x2e));
        }
        local_68 = (AnmVm *)(local_68[5].matrix.field0_0x0.m[3] + 2);
      }
    }
    local_74 = local_74 + 0x5c4;
  }
  hardcoded_func_10_stage6Ex(this);
  (this->current_context).int_var_3 = local_60;
  return;
}

