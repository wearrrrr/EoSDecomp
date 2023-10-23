
/* WARNING: Removing unreachable block (ram,0x0040c27a) */
/* WARNING: Removing unreachable block (ram,0x0040c464) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl hardcoded_func_04_stage56(Enemy *this,EclRawInstr *instruction)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  undefined extraout_DL;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  AnmVm *local_18;
  int i;
  int local_10;
  
  if (instruction->args[1] < 2) {
    EffectManager::spawn_effect
              ((EffectManager *)((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),0xc,
               &this->position,1,0xffffffff);
    game_manager.__byte_2c = *(char *)(instruction->args + 1);
  }
  else {
    local_10 = 0xe;
    local_18 = (AnmVm *)bullet_manager.bullets;
    if (game_manager.difficulty < 2) {
      for (i = 0; i < 640; i = i + 1) {
        if (((*(short *)((int)&local_18[5].matrix.field0_0x0 + 0x32) != 0) &&
            (*(short *)((int)&local_18[5].matrix.field0_0x0 + 0x32) != 5)) &&
           ((local_18->sprite != (AnmLoadedSprite *)0x0 &&
            (((_0_0f <= local_18->sprite->height_px &&
              (*(short *)((int)&local_18[5].matrix.field0_0x0 + 0x2e) != 5)) &&
             (uVar3 = Rng::rand_word(&Rng), (uVar3 & 3) == 0)))))) {
          *(undefined2 *)((int)&local_18[5].matrix.field0_0x0 + 0x2e) = 5;
          AnmManager::set_vm_sprite
                    (anm_manager_ptr,local_18,
                     (int)local_18->sprite_number_duplicate +
                     (int)*(short *)((int)&local_18[5].matrix.field0_0x0 + 0x2e));
          fVar1 = local_18[5].angle_velocity.y - player.position.x;
          fVar2 = local_18[5].angle_velocity.z - player.position.y;
          fVar4 = (float10)_sqrt(local_18,extraout_DL,
                                 SUB81((double)(fVar1 * fVar1 + fVar2 * fVar2),0));
          if ((float)fVar4 <= _28_0f) {
            fVar6 = Rng::randf_0_to_1(&Rng);
            fVar4 = (float10)_Pi_2_f;
            fVar5 = Player::__sub_428680(&player,(Float3 *)&local_18[5].angle_velocity.y);
            local_18[5].matrix.field0_0x0.field0._12 =
                 (float)(fVar5 + (float10)_Pi_2_f + (float10)(float)(fVar6 * fVar4));
          }
          else {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_18[5].matrix.field0_0x0.field0._12 =
                 (float)(fVar4 * (float10)Pi_3_4_f + (float10)Pi_4_f);
          }
          fVar1 = local_18[5].current_time_in_script.subframe;
          fVar6 = (float10)local_18[5].matrix.field0_0x0.field0._12;
          fVar4 = (float10)fcos(fVar6);
          fVar6 = (float10)fsin(fVar6);
          local_18[5].scale_x = (float)(fVar4 * (float10)fVar1);
          local_18[5].scale_interp_final_y = (float)(fVar6 * (float10)fVar1);
          local_10 = local_10 + -1;
          if (local_10 == 0) break;
        }
        local_18 = (AnmVm *)(local_18[5].matrix.field0_0x0.m[3] + 2);
      }
    }
    else {
      local_10 = 52;
      for (i = 0; i < 640; i = i + 1) {
        if ((((*(short *)((int)&local_18[5].matrix.field0_0x0 + 0x32) != 0) &&
             (*(short *)((int)&local_18[5].matrix.field0_0x0 + 0x32) != 5)) &&
            (local_18->sprite != (AnmLoadedSprite *)0x0)) &&
           (((_0_0f <= local_18->sprite->height_px &&
             (*(short *)((int)&local_18[5].matrix.field0_0x0 + 0x2e) != 5)) &&
            (uVar3 = Rng::rand_word(&Rng), (uVar3 & 3) == 0)))) {
          *(undefined2 *)((int)&local_18[5].matrix.field0_0x0 + 0x2e) = 5;
          AnmManager::set_vm_sprite
                    (anm_manager_ptr,local_18,
                     (int)local_18->sprite_number_duplicate +
                     (int)*(short *)((int)&local_18[5].matrix.field0_0x0 + 0x2e));
          fVar1 = local_18[5].angle_velocity.y - player.position.x;
          fVar2 = local_18[5].angle_velocity.z - player.position.y;
          fVar4 = (float10)_sqrt(local_18,(char)local_18,
                                 SUB81((double)(fVar1 * fVar1 + fVar2 * fVar2),0));
          if ((float)fVar4 <= _28_0f) {
            fVar6 = Rng::randf_0_to_1(&Rng);
            fVar4 = (float10)_Pi_2_f;
            fVar5 = Player::__sub_428680(&player,(Float3 *)&local_18[5].angle_velocity.y);
            local_18[5].matrix.field0_0x0.field0._12 =
                 (float)(fVar5 + (float10)_Pi_2_f + (float10)(float)(fVar6 * fVar4));
          }
          else {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_18[5].matrix.field0_0x0.field0._12 = (float)(fVar4 * (float10)_Pi_2_f);
          }
          fVar1 = local_18[5].current_time_in_script.subframe;
          fVar6 = (float10)local_18[5].matrix.field0_0x0.field0._12;
          fVar4 = (float10)fcos(fVar6);
          fVar6 = (float10)fsin(fVar6);
          local_18[5].scale_x = (float)(fVar4 * (float10)fVar1);
          local_18[5].scale_interp_final_y = (float)(fVar6 * (float10)fVar1);
          local_10 = local_10 + -1;
          if (local_10 == 0) break;
        }
        local_18 = (AnmVm *)(local_18[5].matrix.field0_0x0.m[3] + 2);
      }
    }
  }
  (this->current_context).int_var_2 = 0;
  return;
}

