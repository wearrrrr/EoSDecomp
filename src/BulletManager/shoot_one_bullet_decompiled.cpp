
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
BulletManager::shoot_one_bullet
          (BulletManager *this,EnemyBulletShooter *bullet_data,int count1,int count2,
          float angle_to_player)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  BulletTypeVms *bullet_type_vms;
  AnmVm *vm3;
  AnmVm *vm2;
  float10 fVar6;
  float10 fVar7;
  float bullet_angle;
  AnmVm *vm1;
  int i;
  float calc_bullet_speed;
  
  vm1 = (AnmVm *)(this->bullets + this->next_bullet_index);
  for (i = 0; i < 0x280; i = i + 1) {
    this->next_bullet_index = this->next_bullet_index + 1;
    if (0x27f < this->next_bullet_index) {
      this->next_bullet_index = 0;
    }
    if (*(short *)((int)&vm1[5].matrix.field0_0x0 + 0x32) == 0) break;
    vm1 = (AnmVm *)(vm1[5].matrix.field0_0x0.m[3] + 2);
    if (this->next_bullet_index == 0) {
      vm1 = (AnmVm *)this->bullets;
    }
  }
  if (i < 0x280) {
    bullet_angle = 0.0;
    calc_bullet_speed =
         bullet_data->speed_1 -
         ((bullet_data->speed_1 - bullet_data->speed_2) * (float)count2) /
         (float)(int)(short)bullet_data->count_2;
    switch(bullet_data->aim_mode) {
    case 0:
    case 1:
      if ((bullet_data->count_1 & 1) == 0) {
        bullet_angle = bullet_data->angle_2 * __5f + (float)(count1 / 2) * bullet_data->angle_2;
      }
      else {
        bullet_angle = (float)((count1 + 1) / 2) * bullet_data->angle_2;
      }
      bullet_angle = bullet_angle + 0.0;
      if ((count1 & 1U) != 0) {
        bullet_angle = bullet_angle * _1_0f;
      }
      if (bullet_data->aim_mode == 0) {
        bullet_angle = bullet_angle + angle_to_player;
      }
      bullet_angle = bullet_angle + bullet_data->angle_1;
      break;
    case 2:
      bullet_angle = angle_to_player + 0.0;
    case 3:
      bullet_angle = (float)count2 * bullet_data->angle_2 + bullet_data->angle_1 +
                     ((float)count1 * _Pi_2_f) / (float)(int)(short)bullet_data->count_1 +
                     bullet_angle;
      break;
    case 4:
      bullet_angle = angle_to_player + 0.0;
    case 5:
      bullet_angle = ((float)count1 * _Pi_2_f) / (float)(int)(short)bullet_data->count_1 +
                     _Pi_f / (float)(int)(short)bullet_data->count_1 + bullet_angle +
                     bullet_data->angle_1;
      break;
    case 6:
      fVar3 = bullet_data->angle_1;
      fVar2 = bullet_data->angle_2;
      fVar6 = Rng::randf_0_to_1(&Rng);
      bullet_angle = (float)(fVar6 * (float10)(fVar3 - fVar2) + (float10)bullet_data->angle_2);
      break;
    case 7:
      fVar3 = bullet_data->speed_1;
      fVar2 = bullet_data->speed_2;
      fVar6 = Rng::randf_0_to_1(&Rng);
      calc_bullet_speed = (float)(fVar6 * (float10)(fVar3 - fVar2) + (float10)bullet_data->speed_2);
      bullet_angle = (float)count2 * bullet_data->angle_2 + bullet_data->angle_1 +
                     ((float)count1 * _Pi_2_f) / (float)(int)(short)bullet_data->count_1 + 0.0;
      break;
    case 8:
      fVar3 = bullet_data->angle_1;
      fVar2 = bullet_data->angle_2;
      fVar6 = Rng::randf_0_to_1(&Rng);
      bullet_angle = (float)(fVar6 * (float10)(fVar3 - fVar2) + (float10)bullet_data->angle_2);
      fVar3 = bullet_data->speed_1;
      fVar2 = bullet_data->speed_2;
      fVar6 = Rng::randf_0_to_1(&Rng);
      calc_bullet_speed = (float)(fVar6 * (float10)(fVar3 - fVar2) + (float10)bullet_data->speed_2);
    }
    *(undefined2 *)((int)&vm1[5].matrix.field0_0x0 + 0x32) = 1;
    *(undefined *)((int)&vm1[5].matrix.field0_0x0 + 0x36) = 1;
    vm1[5].current_time_in_script.subframe = calc_bullet_speed;
    fVar6 = reduce_angle(bullet_angle,0.0);
    vm1[5].matrix.field0_0x0.field0._12 = (float)fVar6;
    vm1[5].angle_velocity.y = (bullet_data->pos).x;
    vm1[5].angle_velocity.z = (bullet_data->pos).y;
    vm1[5].scale_y = (bullet_data->pos).z;
    vm1[5].scale_y = 0.1;
    fVar7 = (float10)vm1[5].matrix.field0_0x0.field0._12;
    fVar6 = (float10)fcos(fVar7);
    fVar7 = (float10)fsin(fVar7);
    vm1[5].scale_x = (float)(fVar6 * (float10)calc_bullet_speed);
    vm1[5].scale_interp_final_y = (float)(fVar7 * (float10)calc_bullet_speed);
    *(undefined2 *)((int)&vm1[5].matrix.field0_0x0 + 0x2c) = *(undefined2 *)&bullet_data->flags;
    *(uint16_t *)((int)&vm1[5].matrix.field0_0x0 + 0x2e) = bullet_data->color;
    bullet_type_vms = this->bullet_types_templates + (short)bullet_data->sprite;
    vm3 = vm1;
    for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
      (vm3->rotation).x = (bullet_type_vms->vm_0).rotation.x;
      bullet_type_vms = (BulletTypeVms *)&(bullet_type_vms->vm_0).rotation.y;
      vm3 = (AnmVm *)&(vm3->rotation).y;
    }
    vm3 = &this->bullet_types_templates[(short)bullet_data->sprite].vm_5;
    vm2 = vm1 + 4;
    for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
      (vm2->rotation).x = (vm3->rotation).x;
      vm3 = (AnmVm *)&(vm3->rotation).y;
      vm2 = (AnmVm *)&(vm2->rotation).y;
    }
    pfVar1 = &this->bullet_types_templates[(short)bullet_data->sprite].field5_0x550;
    vm1[5].rotation.x = *pfVar1;
    vm1[5].rotation.y = pfVar1[1];
    vm1[5].rotation.z = pfVar1[2];
    *(uint8_t *)&vm1[5].angle_velocity.x =
         this->bullet_types_templates[(short)bullet_data->sprite].field_55c;
    *(uint8_t *)((int)&vm1[5].angle_velocity.x + 1) =
         this->bullet_types_templates[(short)bullet_data->sprite].field_55d;
    if ((*(ushort *)((int)&vm1[5].matrix.field0_0x0 + 0x2c) & 2) == 0) {
      if ((*(ushort *)((int)&vm1[5].matrix.field0_0x0 + 0x2c) & 4) == 0) {
        if ((*(ushort *)((int)&vm1[5].matrix.field0_0x0 + 0x2c) & 8) != 0) {
          vm3 = &this->bullet_types_templates[(short)bullet_data->sprite].spawn_effect_long;
          vm2 = vm1 + 3;
          for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
            (vm2->rotation).x = (vm3->rotation).x;
            vm3 = (AnmVm *)&(vm3->rotation).y;
            vm2 = (AnmVm *)&(vm2->rotation).y;
          }
          fVar3 = vm1->sprite->height_px;
          if (fVar3 < ram0x0046a2b4 == (fVar3 == ram0x0046a2b4)) {
            fVar3 = vm1->sprite->height_px;
            if (fVar3 < _32_0f == (fVar3 == _32_0f)) {
              AnmManager::set_vm_sprite
                        (anm_manager_ptr,vm1 + 3,
                         (int)vm1[3].sprite_number + (int)(short)bullet_data->color);
            }
            else if (vm1->anm_file_index == 0x207) {
              AnmManager::set_vm_sprite(anm_manager_ptr,vm1 + 3,vm1[3].sprite_number + 1);
            }
            else {
              AnmManager::set_vm_sprite
                        (anm_manager_ptr,vm1 + 3,
                         (int)vm1[3].sprite_number +
                         *(int *)(&DAT_00476480 + (short)bullet_data->color * 4));
            }
          }
          else {
            AnmManager::set_vm_sprite
                      (anm_manager_ptr,vm1 + 3,
                       (int)vm1[3].sprite_number +
                       *(int *)(&DAT_00476440 + (short)bullet_data->color * 4));
          }
          *(undefined2 *)((int)&vm1[5].matrix.field0_0x0 + 0x32) = 4;
        }
      }
      else {
        vm3 = &this->bullet_types_templates[(short)bullet_data->sprite].spawn_effect_medium;
        vm2 = vm1 + 2;
        for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
          (vm2->rotation).x = (vm3->rotation).x;
          vm3 = (AnmVm *)&(vm3->rotation).y;
          vm2 = (AnmVm *)&(vm2->rotation).y;
        }
        fVar3 = vm1->sprite->height_px;
        if (fVar3 < ram0x0046a2b4 == (fVar3 == ram0x0046a2b4)) {
          fVar3 = vm1->sprite->height_px;
          if (fVar3 < _32_0f == (fVar3 == _32_0f)) {
            AnmManager::set_vm_sprite
                      (anm_manager_ptr,vm1 + 2,
                       (int)vm1[2].sprite_number + (int)(short)bullet_data->color);
          }
          else if (vm1->anm_file_index == 0x207) {
            AnmManager::set_vm_sprite(anm_manager_ptr,vm1 + 2,vm1[2].sprite_number + 1);
          }
          else {
            AnmManager::set_vm_sprite
                      (anm_manager_ptr,vm1 + 2,
                       (int)vm1[2].sprite_number +
                       *(int *)(&DAT_00476480 + (short)bullet_data->color * 4));
          }
        }
        else {
          AnmManager::set_vm_sprite
                    (anm_manager_ptr,vm1 + 2,
                     (int)vm1[2].sprite_number +
                     *(int *)(&DAT_00476440 + (short)bullet_data->color * 4));
        }
        *(undefined2 *)((int)&vm1[5].matrix.field0_0x0 + 0x32) = 3;
      }
    }
    else {
      vm3 = &this->bullet_types_templates[(short)bullet_data->sprite].spawn_effect_short;
      vm2 = vm1 + 1;
      for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
        (vm2->rotation).x = (vm3->rotation).x;
        vm3 = (AnmVm *)&(vm3->rotation).y;
        vm2 = (AnmVm *)&(vm2->rotation).y;
      }
      fVar3 = vm1->sprite->height_px;
      if (fVar3 < ram0x0046a2b4 == (fVar3 == ram0x0046a2b4)) {
        fVar3 = vm1->sprite->height_px;
        if (fVar3 < _32_0f == (fVar3 == _32_0f)) {
          AnmManager::set_vm_sprite
                    (anm_manager_ptr,vm1 + 1,
                     (int)vm1[1].sprite_number + (int)(short)bullet_data->color);
        }
        else if (vm1->anm_file_index == 0x207) {
          AnmManager::set_vm_sprite(anm_manager_ptr,vm1 + 1,vm1[1].sprite_number + 1);
        }
        else {
          AnmManager::set_vm_sprite
                    (anm_manager_ptr,vm1 + 1,
                     (int)vm1[1].sprite_number +
                     *(int *)(&DAT_00476480 + (short)bullet_data->color * 4));
        }
      }
      else {
        AnmManager::set_vm_sprite
                  (anm_manager_ptr,vm1 + 1,
                   (int)vm1[1].sprite_number +
                   *(int *)(&DAT_00476440 + (short)bullet_data->color * 4));
      }
      *(undefined2 *)((int)&vm1[5].matrix.field0_0x0 + 0x32) = 2;
    }
    AnmManager::set_vm_sprite
              (anm_manager_ptr,vm1,(int)vm1->sprite_number + (int)(short)bullet_data->color);
    fVar3 = vm1->sprite->height_px;
    if (fVar3 < ram0x0046a2b4 == (fVar3 == ram0x0046a2b4)) {
      fVar3 = vm1->sprite->height_px;
      if (fVar3 < _32_0f == (fVar3 == _32_0f)) {
        AnmManager::set_vm_sprite
                  (anm_manager_ptr,vm1 + 4,
                   (int)vm1[4].sprite_number + (int)(short)bullet_data->color);
      }
      else if (vm1->anm_file_index == 0x207) {
        AnmManager::set_vm_sprite(anm_manager_ptr,vm1 + 4,vm1[4].sprite_number + 1);
      }
      else {
        AnmManager::set_vm_sprite
                  (anm_manager_ptr,vm1 + 4,
                   (int)vm1[4].sprite_number +
                   *(int *)(&DAT_00476480 + (short)bullet_data->color * 4));
      }
    }
    else {
      AnmManager::set_vm_sprite
                (anm_manager_ptr,vm1 + 4,
                 (int)vm1[4].sprite_number + *(int *)(&DAT_00476440 + (short)bullet_data->color * 4)
                );
    }
    if ((*(ushort *)((int)&vm1[5].matrix.field0_0x0 + 0x2c) & 0x10) == 0) {
      if ((*(ushort *)((int)&vm1[5].matrix.field0_0x0 + 0x2c) & 0x20) != 0) {
        vm1[5].current_time_in_script.current = (int32_t)bullet_data->ex_floats[0];
        vm1[5].matrix.field0_0x0.field0._13 = bullet_data->ex_floats[1];
        vm1[5].matrix.field0_0x0.field0._24 = (float)bullet_data->ex_ints[0];
      }
    }
    else {
      if (bullet_data->ex_floats[1] < _999_0f == (bullet_data->ex_floats[1] == _999_0f)) {
        fVar3 = bullet_data->ex_floats[0];
        fVar6 = (float10)fcos((float10)bullet_data->ex_floats[1]);
        fVar7 = (float10)fsin((float10)bullet_data->ex_floats[1]);
        vm1[5].uv_scroll_pos.x = (float)(fVar6 * (float10)fVar3);
        vm1[5].uv_scroll_pos.y = (float)(fVar7 * (float10)fVar3);
      }
      else {
        fVar3 = bullet_data->ex_floats[0];
        fVar6 = (float10)fcos((float10)bullet_angle);
        fVar7 = (float10)fsin((float10)bullet_angle);
        vm1[5].uv_scroll_pos.x = (float)(fVar6 * (float10)fVar3);
        vm1[5].uv_scroll_pos.y = (float)(fVar7 * (float10)fVar3);
      }
      if (bullet_data->ex_ints[0] < 1) {
        vm1[5].matrix.field0_0x0.field0._24 = 1.401284e-40;
      }
      else {
        vm1[5].matrix.field0_0x0.field0._24 = (float)bullet_data->ex_ints[0];
      }
      vm1[5].current_time_in_script.previous = 0;
    }
    if ((*(ushort *)((int)&vm1[5].matrix.field0_0x0 + 0x2c) & 0x1c0) != 0) {
      vm1[5].matrix.field0_0x0.field0._14 = bullet_data->ex_floats[0];
      if (bullet_data->ex_floats[1] < (float)__0f) {
        vm1[5].matrix.field0_0x0.field0._11 = calc_bullet_speed;
      }
      else {
        vm1[5].matrix.field0_0x0.field0._11 = bullet_data->ex_floats[1];
      }
      vm1[5].matrix.field0_0x0.field0._31 = (float)bullet_data->ex_ints[0];
      vm1[5].matrix.field0_0x0.field0._33 = (float)bullet_data->ex_ints[1];
      vm1[5].matrix.field0_0x0.field0._32 = 0.0;
    }
    if ((*(ushort *)((int)&vm1[5].matrix.field0_0x0 + 0x2c) & 0xc00) != 0) {
      if (bullet_data->ex_floats[0] < (float)__0f) {
        vm1[5].matrix.field0_0x0.field0._11 = calc_bullet_speed;
      }
      else {
        vm1[5].matrix.field0_0x0.field0._11 = bullet_data->ex_floats[0];
      }
      vm1[5].matrix.field0_0x0.field0._33 = (float)bullet_data->ex_ints[0];
      vm1[5].matrix.field0_0x0.field0._32 = 0.0;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

