
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sub_4291B0(int param_1)

{
  float fVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  AnmVm *pAVar5;
  int iVar6;
  float *pfVar7;
  undefined uVar8;
  float10 fVar9;
  float local_38;
  AnmVm *local_18;
  float local_14;
  int local_10;
  
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    if (*(int *)(param_1 + 0x9c0 + local_10 * 0xc) != 0) {
      Timer::sub((Timer *)(param_1 + 0x9b8 + local_10 * 0xc),1);
    }
  }
  local_18 = (AnmVm *)(param_1 + 0xa28);
  for (local_10 = 0; local_10 < 0x50; local_10 = local_10 + 1) {
    if (*(short *)((int)&local_18[1].matrix.field0_0x0 + 2) != 0) {
      sVar2 = *(short *)((int)&local_18[1].matrix.field0_0x0 + 4);
      if (sVar2 == 1) {
        if (*(short *)((int)&local_18[1].matrix.field0_0x0 + 2) == 1) {
          uVar8 = SUB41(local_18,0);
          if (((*(float *)(param_1 + 0xa1c) <= __100_0f) ||
              (0x27 < local_18[1].current_time_in_script.current)) ||
             (local_18[1].current_time_in_script.current ==
              local_18[1].current_time_in_script.previous)) {
            if (local_18[1].uv_scroll_pos.x < _10_0f) {
              local_18[1].uv_scroll_pos.x = local_18[1].uv_scroll_pos.x + __3_f;
              fVar1 = local_18[1].scale_y;
              fVar3 = local_18[1].scale_x;
              fVar9 = (float10)_sqrt(fVar1,uVar8,SUB81((double)(fVar1 * fVar1 + fVar3 * fVar3),0));
              local_18[1].scale_y = (fVar1 * local_18[1].uv_scroll_pos.x) / (float)fVar9;
              local_18[1].scale_x = (fVar3 * local_18[1].uv_scroll_pos.x) / (float)fVar9;
            }
          }
          else {
            fVar1 = *(float *)(param_1 + 0xa1c) - local_18[1].rotation.x;
            fVar3 = *(float *)(param_1 + 0xa20) - local_18[1].rotation.y;
            fVar9 = (float10)_sqrt(param_1,uVar8,SUB81((double)(fVar1 * fVar1 + fVar3 * fVar3),0));
            local_14 = (float)fVar9 / (local_18[1].uv_scroll_pos.x / __0f);
            if (local_14 < _1_0f) {
              local_14 = 1.0;
            }
            fVar4 = fVar1 / local_14 + local_18[1].scale_y;
            fVar3 = fVar3 / local_14 + local_18[1].scale_x;
            fVar9 = (float10)_sqrt(local_18,uVar8,SUB81((double)(fVar4 * fVar4 + fVar3 * fVar3),0));
            fVar1 = (float)fVar9;
            local_38 = fVar1;
            if (_10_0f < fVar1) {
              local_38 = 10.0;
            }
            local_18[1].uv_scroll_pos.x = local_38;
            if (local_18[1].uv_scroll_pos.x < _1_0f) {
              local_18[1].uv_scroll_pos.x = 1.0;
            }
            local_18[1].scale_y = (fVar4 * local_18[1].uv_scroll_pos.x) / fVar1;
            local_18[1].scale_x = (fVar3 * local_18[1].uv_scroll_pos.x) / fVar1;
          }
        }
      }
      else if (sVar2 == 2) {
        if (*(short *)((int)&local_18[1].matrix.field0_0x0 + 2) == 1) {
          local_18[1].scale_x = local_18[1].scale_x - _0_3f;
        }
      }
      else if (sVar2 == 3) {
        if (*(int *)(param_1 + 0x9c0 + *(short *)((int)&local_18[1].matrix.field0_0x0 + 6) * 0xc) ==
            0x46) {
          local_18->pending_interrupt = 1;
        }
        else if (*(int *)(param_1 + 0x9c0 +
                         *(short *)((int)&local_18[1].matrix.field0_0x0 + 6) * 0xc) == 1) {
          local_18->pending_interrupt = 1;
        }
        pfVar7 = (float *)(param_1 + 0x4a0 +
                          (*(short *)((int)&local_18[1].matrix.field0_0x0 + 8) + -1) * 0xc);
        local_18[1].rotation.x = *pfVar7;
        local_18[1].rotation.y = pfVar7[1];
        local_18[1].rotation.z = pfVar7[2];
        local_18[1].rotation.x = local_18[1].rotation.x + local_18[1].scale_interp_final_y;
        local_18[1].rotation.y = local_18[1].rotation.y / _2_0f;
        local_18[1].rotation.z = 0.44;
        fVar1 = local_18[1].rotation.y;
        local_18->scale_y = (fVar1 + fVar1) / _14_0f;
        fVar1 = local_18[1].rotation.y;
        local_18[1].angle_velocity.y = fVar1 + fVar1;
      }
      pAVar5 = local_18 + 1;
      (pAVar5->rotation).x = supervisor.game_speed * local_18[1].scale_y + (pAVar5->rotation).x;
      (local_18->pos).x = (pAVar5->rotation).x;
      pfVar7 = &local_18[1].rotation.y;
      *pfVar7 = supervisor.game_speed * local_18[1].scale_x + *pfVar7;
      (local_18->pos).y = *pfVar7;
      (local_18->pos).z = local_18[1].rotation.z;
      if ((*(short *)((int)&local_18[1].matrix.field0_0x0 + 4) != 3) &&
         (iVar6 = GameManager::check_visibility
                            (local_18[1].rotation.x,local_18[1].rotation.y,
                             local_18->sprite->width_px,local_18->sprite->height_px), iVar6 == 0)) {
        *(undefined2 *)((int)&local_18[1].matrix.field0_0x0 + 2) = 0;
      }
      iVar6 = AnmManager::run_anm(anm_manager_ptr,local_18);
      if (iVar6 != 0) {
        *(undefined2 *)((int)&local_18[1].matrix.field0_0x0 + 2) = 0;
      }
      local_18[1].current_time_in_script.previous = local_18[1].current_time_in_script.current;
      Supervisor::tick_timer
                (&supervisor,&local_18[1].current_time_in_script.current,
                 &local_18[1].current_time_in_script.subframe);
    }
    local_18 = (AnmVm *)(local_18[1].matrix.field0_0x0.m + 3);
  }
  return;
}

