
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl hardcoded_func_02_stage3(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float10 fVar9;
  int local_8;
  
  if (*(int *)(param_1 + 0x9ac) < *(int *)(param_1 + 0x9b0)) {
    if (*(int *)(param_1 + 0x9ac) == 0) {
      enemy_manager.template.primary_vm.alpha_interp_time.subframe = *(float *)(param_1 + 0xc6c);
      enemy_manager.template.primary_vm.alpha_interp_time.current = *(int32_t *)(param_1 + 0xc70);
      enemy_manager.template.primary_vm._268_4_ = *(undefined4 *)(param_1 + 0xc74);
      enemy_manager.template.vms[0].rotation.x = player.position.x;
      enemy_manager.template.vms[0].rotation.y = player.position.y;
      enemy_manager.template.vms[0].rotation.z = player.position.z;
      fVar8 = Rng::randf_0_to_1(&Rng);
      enemy_manager.template.primary_vm._132_4_ =
           (undefined4)(fVar8 * (float10)_Pi_2_f - (float10)_Pi_f);
      fVar8 = reduce_angle((float)enemy_manager.template.primary_vm._132_4_,2.513274);
      enemy_manager.template.primary_vm._136_4_ = (undefined4)fVar8;
    }
    if (*(int *)(param_1 + 0x9ac) % 0x1e == 0) {
      enemy_manager.template.primary_vm.alpha_interp_end_time =
           enemy_manager.template.primary_vm.auto_rotate;
      enemy_manager.template.primary_vm.scale_interp_end_time =
           enemy_manager.template.primary_vm.pending_interrupt;
      fVar8 = reduce_angle((float)enemy_manager.template.primary_vm._136_4_,2.513274);
      enemy_manager.template.primary_vm._136_4_ = (undefined4)fVar8;
      fVar8 = reduce_angle((float)enemy_manager.template.primary_vm._136_4_,2.513274);
      enemy_manager.template.primary_vm._140_4_ = (undefined4)fVar8;
      fVar8 = reduce_angle((float)enemy_manager.template.primary_vm._140_4_,2.513274);
      enemy_manager.template.primary_vm.pos.x = (float)fVar8;
      fVar8 = reduce_angle(enemy_manager.template.primary_vm.pos.x,2.513274);
      enemy_manager.template.primary_vm.pos.y = (float)fVar8;
      fVar8 = reduce_angle(enemy_manager.template.primary_vm.pos.y,2.513274);
      enemy_manager.template.primary_vm.pos.z = (float)fVar8;
    }
    if (*(int *)(param_1 + 0x9ac) % 6 == 0) {
      fVar4 = (float)*(int *)(param_1 + 0x9ac) / (float)*(int *)(param_1 + 0x9b0);
      fVar5 = fVar4 * __1f;
      fVar6 = (enemy_manager.template.vms[0].rotation.y -
              (float)enemy_manager.template.primary_vm.alpha_interp_time.current) * fVar5 +
              (float)enemy_manager.template.primary_vm.alpha_interp_time.current;
      fVar5 = (enemy_manager.template.vms[0].rotation.x -
              enemy_manager.template.primary_vm.alpha_interp_time.subframe) * fVar5 +
              enemy_manager.template.primary_vm.alpha_interp_time.subframe;
      fVar4 = fVar4 + __5f;
      *(float *)(param_1 + 0xd10) = Pi_3_f * fVar4;
      for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
        fVar7 = (float)(*(int *)(param_1 + 0x9ac) % 0x1e) / _0_0f;
        fVar9 = (float10)*(float *)(enemy_manager.template.primary_vm.field16_0x8e +
                                   local_8 * 4 + -10);
        fVar8 = (float10)fcos(fVar9);
        fVar9 = (float10)fsin(fVar9);
        fVar1 = (float)(fVar8 * (float10)*(float *)(param_1 + 0x9c0));
        fVar2 = (float)(fVar9 * (float10)*(float *)(param_1 + 0x9c0));
        fVar9 = (float10)*(float *)(enemy_manager.template.primary_vm.field16_0x8e +
                                   local_8 * 4 + -6);
        fVar8 = (float10)fcos(fVar9);
        fVar9 = (float10)fsin(fVar9);
        *(float *)(param_1 + 0xd04) =
             fVar5 + ((float)(fVar8 * (float10)*(float *)(param_1 + 0x9c0)) - fVar1) * fVar7 + fVar1
        ;
        *(float *)(param_1 + 0xd08) =
             fVar6 + ((float)(fVar9 * (float10)*(float *)(param_1 + 0x9c0)) - fVar2) * fVar7 + fVar2
        ;
        *(undefined4 *)(param_1 + 0xd0c) = 0;
        uVar3 = *(undefined4 *)(param_1 + 0xd18);
        fVar1 = *(float *)(param_1 + 0xd1c);
        fVar8 = Rng::randf_0_to_1(&Rng);
        *(float *)(param_1 + 0xd18) =
             (float)(fVar8 * (float10)fVar1 + (float10)*(float *)(param_1 + 0xd18));
        BulletManager::shoot_bullets(&bullet_manager,(EnemyBulletShooter *)(param_1 + 0xd00));
        *(undefined4 *)(param_1 + 0xd18) = uVar3;
        *(float *)(param_1 + 0xd10) = *(float *)(param_1 + 0xd10) - Pi_6_f * fVar4;
      }
      SoundManager::play_sound_centered(&sound_manager,0x16,0);
    }
    *(int *)(param_1 + 0x9ac) = *(int *)(param_1 + 0x9ac) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x9a0) = 0;
  }
  return;
}

