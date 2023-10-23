
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl hardcoded_func_00_stage2(Enemy *this,EclRawInstr *instruction)

{
  float10 fVar1;
  float10 fVar2;
  Enemy *enemy;
  int local_8;
  int args;
  
  enemy = (Enemy *)bullet_manager.bullets;
  args = instruction->args[1];
  EffectManager::spawn_effect
            ((EffectManager *)((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),12,
             &this->position,1,0xffffffff);
  for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
    if ((*(short *)((int)&enemy->vms[4].matrix.field0_0x0 + 0x32) != 0) &&
       (*(short *)((int)&enemy->vms[4].matrix.field0_0x0 + 0x32) != 5)) {
      *(undefined2 *)((int)&enemy->vms[4].matrix.field0_0x0 + 0x2e) = 0xf;
      AnmManager::set_vm_sprite
                (anm_manager_ptr,&enemy->primary_vm,
                 (int)(enemy->primary_vm).sprite_number_duplicate +
                 (int)*(short *)((int)&enemy->vms[4].matrix.field0_0x0 + 0x2e));
      if (args == 0) {
        enemy->vms[4].current_time_in_script.subframe = 0.0;
        enemy->vms[4].scale_x = 0.0;
        enemy->vms[4].scale_interp_final_y = 0.0;
        enemy->vms[4].scale_interp_final_x = 0.0;
      }
      else if (args == 1) {
        *(ushort *)((int)&enemy->vms[4].matrix.field0_0x0 + 0x2c) =
             *(ushort *)((int)&enemy->vms[4].matrix.field0_0x0 + 0x2c) | 0x10;
        enemy->vms[4].matrix.field0_0x0.field0._24 = 3.082857e-43;
        enemy->vms[4].matrix.field0_0x0.field0._23 = 0.0;
        enemy->vms[4].matrix.field0_0x0.field0._22 = 0.0;
        enemy->vms[4].matrix.field0_0x0.field0._21 = -NAN;
        fVar1 = Rng::randf_0_to_1(&Rng);
        fVar2 = (float10)(float)(fVar1 * (float10)_Pi_2_f - (float10)_Pi_f);
        fVar1 = (float10)fcos(fVar2);
        fVar2 = (float10)fsin(fVar2);
        enemy->vms[4].uv_scroll_pos.x = (float)(fVar1 * (float10)0.01);
        enemy->vms[4].uv_scroll_pos.y = (float)(fVar2 * (float10)0.01);
      }
    }
    enemy = (Enemy *)((int)&enemy->vms[4].matrix.field0_0x0 + 0x38);
  }
  return;
}

