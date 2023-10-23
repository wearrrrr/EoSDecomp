
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall EnemyController::run_ecl(EnemyController *this,Enemy *enemy)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  short sVar10;
  EclRawInstr instruction;
  EclRawInstr instruction_00;
  EclRawInstr instruction_01;
  EclRawInstr instruction_02;
  AnmManager *pAVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  Laser *pLVar15;
  int32_t *piVar16;
  Effect *pEVar17;
  int *piVar18;
  float *pfVar19;
  int iVar20;
  int iVar21;
  undefined4 unaff_ESI;
  EnemyEclContext *pEVar22;
  undefined4 unaff_EDI;
  EnemyEclContext *pEVar23;
  int32_t *piVar24;
  float10 fVar25;
  float10 fVar26;
  undefined4 in_stack_fffffd04;
  undefined4 in_stack_fffffd08;
  undefined4 in_stack_fffffd0c;
  undefined4 in_stack_fffffd10;
  undefined4 in_stack_fffffd14;
  byte bVar27;
  undefined4 in_stack_fffffd18;
  float *in_stack_fffffd1c;
  Float3 *in_stack_fffffd20;
  int in_stack_fffffd24;
  int in_stack_fffffd28;
  char *local_2cc;
  char *local_2c0;
  int32_t *local_2bc;
  int32_t local_2ac;
  int32_t local_2a8;
  int local_2a4;
  uint local_2a0;
  float local_29c;
  short local_288;
  short local_280;
  short local_278;
  short local_270;
  short local_268;
  uint local_184;
  short local_144;
  short local_13c;
  float local_bc;
  int local_b8;
  int local_b4;
  int32_t local_b0;
  Float3 local_ac;
  undefined2 local_a0;
  undefined2 local_9e;
  int local_9c;
  Float3 local_98;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int32_t *local_6c;
  int local_68;
  int32_t *local_64;
  EnemyLaserShooter *local_60;
  int32_t *local_5c;
  EnemyBulletShooter *local_58;
  int32_t *local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  EclRawInstr *local_20;
  int32_t *local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int32_t local_8;
  
ecl_start:
  while (local_20 = (enemy->current_context).current_instr, -1 < enemy->run_interrupts) {
ecl_interrupt:
    (enemy->current_context).current_instr =
         (EclRawInstr *)((int)local_20->args + local_20->offset_to_next + -0xc);
    if ((enemy->flags_3 >> 2 & 1) == 0) {
      pEVar22 = &enemy->current_context;
      pEVar23 = enemy->saved_context_stack + enemy->stack_depth;
      for (iVar20 = 0x13; iVar20 != 0; iVar20 = iVar20 + -1) {
        pEVar23->current_instr = pEVar22->current_instr;
        pEVar22 = (EnemyEclContext *)&pEVar22->time;
        pEVar23 = (EnemyEclContext *)&pEVar23->time;
      }
    }
    init_sub_context((EnemyController *)&enemy_manager,&enemy->current_context,
                     *(short *)(enemy->interrupts + enemy->run_interrupts));
    if (enemy->stack_depth < 7) {
      enemy->stack_depth = enemy->stack_depth + 1;
    }
    enemy->run_interrupts = -1;
  }
ecl_next:
  pAVar11 = anm_manager_ptr;
  if ((enemy->current_context).time.current != local_20->time) {
    bVar27 = enemy->flags_1 & 3;
    if (bVar27 == 1) {
      fVar26 = reduce_angle(enemy->angle,supervisor.game_speed * enemy->angular_velocity);
      enemy->angle = (float)fVar26;
      enemy->speed = supervisor.game_speed * enemy->acceleration + enemy->speed;
      fVar3 = enemy->speed;
      fVar26 = (float10)fcos((float10)enemy->angle);
      fVar25 = (float10)fsin((float10)enemy->angle);
      (enemy->axis_speed).x = (float)(fVar26 * (float10)fVar3);
      (enemy->axis_speed).y = (float)(fVar25 * (float10)fVar3);
      (enemy->axis_speed).z = 0.0;
    }
    else if (bVar27 == 2) {
      Timer::sub(&enemy->move_interp_timer,1);
      local_bc = ((float)(enemy->move_interp_timer).current + (enemy->move_interp_timer).subframe) /
                 (float)enemy->move_interp_start_time;
      if (_1_0f <= local_bc) {
        local_bc = 1.0;
      }
      switch((byte)enemy->flags_1 >> 2 & 7) {
      case 0:
        local_bc = _1_0f - local_bc;
        break;
      case 1:
        local_bc = _1_0f - local_bc * local_bc;
        break;
      case 2:
        local_bc = _1_0f - local_bc * local_bc * local_bc * local_bc;
        break;
      case 3:
        local_bc = (_1_0f - local_bc) * (_1_0f - local_bc);
        break;
      case 4:
        local_bc = _1_0f - local_bc;
        local_bc = local_bc * local_bc * local_bc * local_bc;
      }
      fVar3 = (enemy->move_interp).z;
      fVar4 = (enemy->move_interp).y;
      fVar5 = (enemy->move_interp_start_pos).z;
      fVar6 = (enemy->move_interp_start_pos).y;
      fVar1 = (enemy->position).z;
      fVar2 = (enemy->position).y;
      (enemy->axis_speed).x =
           (local_bc * (enemy->move_interp).x + (enemy->move_interp_start_pos).x) -
           (enemy->position).x;
      (enemy->axis_speed).y = (local_bc * fVar4 + fVar6) - fVar2;
      (enemy->axis_speed).z = (local_bc * fVar3 + fVar5) - fVar1;
      dVar7 = (double)(enemy->axis_speed).x;
      dVar8 = (double)(enemy->axis_speed).y;
      fVar26 = (float10)_atan2(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),SUB84(dVar7,0),
                               (int)((ulonglong)dVar7 >> 0x20));
      enemy->angle = (float)fVar26;
      if ((enemy->move_interp_timer).current < 1) {
        enemy->flags_1 = enemy->flags_1 & 0xfc;
        fVar3 = (enemy->move_interp_start_pos).z;
        fVar4 = (enemy->move_interp).z;
        fVar5 = (enemy->move_interp_start_pos).y;
        fVar6 = (enemy->move_interp).y;
        (enemy->position).x = (enemy->move_interp_start_pos).x + (enemy->move_interp).x;
        (enemy->position).y = fVar5 + fVar6;
        (enemy->position).z = fVar3 + fVar4;
        (enemy->axis_speed).x = 0.0;
        (enemy->axis_speed).y = 0.0;
        (enemy->axis_speed).z = 0.0;
      }
    }
    if (0 < enemy->life) {
      if (0 < enemy->shoot_interval) {
        (enemy->shoot_interval_timer).previous = (enemy->shoot_interval_timer).current;
        Supervisor::tick_timer
                  (&supervisor,&(enemy->shoot_interval_timer).current,
                   &(enemy->shoot_interval_timer).subframe);
        if (enemy->shoot_interval <= (enemy->shoot_interval_timer).current) {
          fVar3 = (enemy->position).z;
          fVar4 = (enemy->shoot_offset).z;
          fVar5 = (enemy->position).y;
          fVar6 = (enemy->shoot_offset).y;
          (enemy->bullet_data).pos.x = (enemy->position).x + (enemy->shoot_offset).x;
          (enemy->bullet_data).pos.y = fVar5 + fVar6;
          (enemy->bullet_data).pos.z = fVar3 + fVar4;
          BulletManager::shoot_bullets(&bullet_manager,&enemy->bullet_data);
          (enemy->shoot_interval_timer).current = 0;
          (enemy->shoot_interval_timer).subframe = 0.0;
          (enemy->shoot_interval_timer).previous = -999;
        }
      }
      pAVar11 = anm_manager_ptr;
      if (-1 < enemy->anm_ex_left) {
        cVar9 = '\0';
        if ((float)__0f <= (enemy->axis_speed).x) {
          if ((float)__0f < (enemy->axis_speed).x) {
            cVar9 = '\x02';
          }
        }
        else {
          cVar9 = '\x01';
        }
        if (enemy->anm_ex_flags != cVar9) {
          if (cVar9 == '\0') {
            if (enemy->anm_ex_flags == -1) {
              sVar10 = enemy->anm_ex_default;
              local_268 = sVar10 + 0x100;
              (enemy->primary_vm).anm_file_index = local_268;
              AnmManager::set_vm_script
                        (pAVar11,&enemy->primary_vm,(AnmRawScript *)pAVar11->scripts[sVar10 + 0x100]
                        );
            }
            else if (enemy->anm_ex_flags == '\x01') {
              sVar10 = enemy->anm_ex_far_left;
              local_270 = sVar10 + 0x100;
              (enemy->primary_vm).anm_file_index = local_270;
              AnmManager::set_vm_script
                        (pAVar11,&enemy->primary_vm,(AnmRawScript *)pAVar11->scripts[sVar10 + 0x100]
                        );
            }
            else {
              sVar10 = enemy->anm_ex_far_right;
              local_278 = sVar10 + 0x100;
              (enemy->primary_vm).anm_file_index = local_278;
              AnmManager::set_vm_script
                        (pAVar11,&enemy->primary_vm,(AnmRawScript *)pAVar11->scripts[sVar10 + 0x100]
                        );
            }
          }
          else if (cVar9 == '\x01') {
            sVar10 = enemy->anm_ex_left;
            local_280 = sVar10 + 0x100;
            (enemy->primary_vm).anm_file_index = local_280;
            AnmManager::set_vm_script
                      (pAVar11,&enemy->primary_vm,(AnmRawScript *)pAVar11->scripts[sVar10 + 0x100]);
          }
          else if (cVar9 == '\x02') {
            sVar10 = enemy->anm_ex_right;
            local_288 = sVar10 + 0x100;
            (enemy->primary_vm).anm_file_index = local_288;
            AnmManager::set_vm_script
                      (pAVar11,&enemy->primary_vm,(AnmRawScript *)pAVar11->scripts[sVar10 + 0x100]);
          }
          enemy->anm_ex_flags = cVar9;
        }
      }
      if ((enemy->current_context).func_set_func != (void *)0x0) {
        (*(code *)(enemy->current_context).func_set_func)((char)enemy,0);
      }
    }
    (enemy->current_context).current_instr = local_20;
    (enemy->current_context).time.previous = (enemy->current_context).time.current;
    Supervisor::tick_timer
              (&supervisor,&(enemy->current_context).time.current,
               &(enemy->current_context).time.subframe);
    return 0;
  }
  if (((uint)local_20->difficulty_mask & 1 << ((byte)game_manager.difficulty & 0x1f)) == 0)
  goto ecl_break;
  local_1c = local_20->args;
  switch(local_20->opcode) {
  case 1:
    return 0xffffffff;
  case 2:
    goto ecl_2__jump;
  case 3:
    piVar18 = ecl_get_var((int)enemy,local_20->args + 2,(undefined4 *)0x0);
    local_14 = (float)(*piVar18 - 1);
    ecl_write_var((int)enemy,local_1c[2],&local_14);
    fVar3 = local_14;
    goto joined_r0x00407ab4;
  case 4:
  case 5:
    ecl_write_var((int)enemy,local_20->args[0],local_20->args + 1);
    break;
  case 6:
    puVar13 = ecl_get_var((int)enemy,local_20->args + 1,(undefined4 *)0x0);
    local_24 = *puVar13;
    if (local_24 == 0) {
      local_29c = 0.0;
    }
    else {
      uVar12 = Rng::rand_dword(&Rng);
      local_29c = (float)(uVar12 % local_24);
    }
    local_14 = local_29c;
    ecl_write_var((int)enemy,local_20->args[0],&local_14);
    break;
  case 7:
    puVar13 = ecl_get_var((int)enemy,local_20->args + 1,(undefined4 *)0x0);
    local_28 = *puVar13;
    piVar18 = ecl_get_var((int)enemy,local_1c + 2,(undefined4 *)0x0);
    local_2c = *piVar18;
    if (local_28 == 0) {
      local_2a0 = 0;
    }
    else {
      local_2a0 = Rng::rand_dword(&Rng);
      local_2a0 = local_2a0 % local_28;
    }
    local_14 = (float)(local_2a0 + local_2c);
    ecl_write_var((int)enemy,local_20->args[0],&local_14);
    break;
  case 8:
    pfVar19 = (float *)ecl_get_float((int)enemy,local_20->args + 1,(undefined4 *)0x0);
    local_30 = *pfVar19;
    fVar26 = Rng::randf_0_to_1(&Rng);
    local_18 = (float)(fVar26 * (float10)local_30);
    ecl_write_var((int)enemy,local_20->args[0],&local_18);
    break;
  case 9:
    pfVar19 = (float *)ecl_get_float((int)enemy,local_20->args + 1,(undefined4 *)0x0);
    local_34 = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_1c + 2,(undefined4 *)0x0);
    local_38 = *pfVar19;
    fVar26 = Rng::randf_0_to_1(&Rng);
    local_18 = (float)(fVar26 * (float10)local_34) + local_38;
    ecl_write_var((int)enemy,local_20->args[0],&local_18);
    break;
  case 10:
    ecl_write_var((int)enemy,local_20->args[0],&(enemy->position).x);
    break;
  case 0xb:
    ecl_write_var((int)enemy,local_20->args[0],&(enemy->position).y);
    break;
  case 0xc:
    ecl_write_var((int)enemy,local_20->args[0],&(enemy->position).z);
    break;
  case 0xd:
  case 0x14:
    ins_13_add_imp((int)enemy,local_20->args[0],local_20->args + 1,local_20->args + 2);
    break;
  case 0xe:
  case 0x15:
    ins_14_sub_impl((int)enemy,local_20->args[0],local_20->args + 1,local_20->args + 2);
    break;
  case 0xf:
  case 0x16:
    ins_15_mul_impl((int)enemy,local_20->args[0],local_20->args + 1,local_20->args + 2);
    break;
  case 0x10:
  case 0x17:
    ins_16_div_impl((int)enemy,local_20->args[0],local_20->args + 1,local_20->args + 2);
    break;
  case 0x11:
  case 0x18:
    ins_17_mod_impl((int)enemy,local_20->args[0],local_20->args + 1,local_20->args + 2);
    break;
  case 0x12:
    local_3c = ecl_get_var((int)enemy,local_20->args,(undefined4 *)0x0);
    *local_3c = *local_3c + 1;
    break;
  case 0x13:
    local_40 = ecl_get_var((int)enemy,local_20->args,(undefined4 *)0x0);
    *local_40 = *local_40 + -1;
    break;
  case 0x19:
    ins_25_fatan2_impl((int)enemy,local_20->args[0],local_20->args + 1,local_20->args + 2,
                       local_20->args + 3,local_20->args + 4);
    break;
  case 0x1a:
    pfVar19 = (float *)ecl_get_var((int)enemy,local_20->args,(undefined4 *)0x0);
    local_18 = *pfVar19;
    fVar26 = reduce_angle(local_18,0.0);
    local_18 = (float)fVar26;
    ecl_write_var((int)enemy,local_20->args[0],&local_18);
    break;
  case 0x1b:
    piVar18 = ecl_get_var((int)enemy,local_20->args,(undefined4 *)0x0);
    local_48 = *piVar18;
    piVar18 = ecl_get_var((int)enemy,local_20->args + 1,(undefined4 *)0x0);
    local_44 = *piVar18;
    if (local_48 == local_44) {
      local_2a4 = 0;
    }
    else {
      local_2a4 = (uint)(local_44 <= local_48) * 2 + -1;
    }
    (enemy->current_context).compare_register = local_2a4;
    break;
  case 0x1c:
    pfVar19 = (float *)ecl_get_float((int)enemy,local_20->args,(undefined4 *)0x0);
    local_4c = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_20->args + 1,(undefined4 *)0x0);
    local_50 = *pfVar19;
    if (local_4c == local_50) {
      local_2a8 = 0;
    }
    else {
      if (local_50 <= local_4c) {
        local_2ac = 1;
      }
      else {
        local_2ac = -1;
      }
      local_2a8 = local_2ac;
    }
    (enemy->current_context).compare_register = local_2a8;
    break;
  case 0x1d:
    if (-1 < (enemy->current_context).compare_register) break;
    goto ecl_2__jump;
  case 0x1e:
    if (0 < (enemy->current_context).compare_register) break;
    goto ecl_2__jump;
  case 0x1f:
    if ((enemy->current_context).compare_register != 0) break;
    goto ecl_2__jump;
  case 0x20:
    fVar3 = (float)(enemy->current_context).compare_register;
joined_r0x00407ab4:
    if ((int)fVar3 < 1) break;
    goto ecl_2__jump;
  case 0x21:
    if ((enemy->current_context).compare_register < 0) break;
    goto ecl_2__jump;
  case 0x22:
    if ((enemy->current_context).compare_register == 0) break;
ecl_2__jump:
    (enemy->current_context).time.current = local_20->args[0];
    local_20 = (EclRawInstr *)((int)local_20->args + local_1c[1] + -0xc);
    goto ecl_next;
  case 0x23:
    goto ecl_35__call;
  case 0x24:
    goto ecl_36__return;
  case 0x25:
    pfVar19 = (float *)ecl_get_var((int)enemy,local_20->args + 3,(undefined4 *)0x0);
    local_14 = *pfVar19;
    if ((int)local_14 < local_1c[4]) goto ecl_35__call;
    break;
  case 0x26:
    pfVar19 = (float *)ecl_get_var((int)enemy,local_20->args + 3,(undefined4 *)0x0);
    local_14 = *pfVar19;
    if ((int)local_14 <= local_1c[4]) goto ecl_35__call;
    break;
  case 0x27:
    pfVar19 = (float *)ecl_get_var((int)enemy,local_20->args + 3,(undefined4 *)0x0);
    local_14 = *pfVar19;
    if (local_14 == (float)local_1c[4]) goto ecl_35__call;
    break;
  case 0x28:
    pfVar19 = (float *)ecl_get_var((int)enemy,local_20->args + 3,(undefined4 *)0x0);
    local_14 = *pfVar19;
    if (local_1c[4] < (int)local_14) goto ecl_35__call;
    break;
  case 0x29:
    pfVar19 = (float *)ecl_get_var((int)enemy,local_20->args + 3,(undefined4 *)0x0);
    local_14 = *pfVar19;
    if (local_1c[4] <= (int)local_14) goto ecl_35__call;
    break;
  case 0x2a:
    pfVar19 = (float *)ecl_get_var((int)enemy,local_20->args + 3,(undefined4 *)0x0);
    local_14 = *pfVar19;
    if (local_14 != (float)local_1c[4]) goto ecl_35__call;
    break;
  case 0x2b:
    (enemy->position).x = (float)local_20->args[0];
    (enemy->position).y = (float)local_20->args[1];
    (enemy->position).z = (float)local_20->args[2];
    pfVar19 = (float *)ecl_get_float((int)enemy,&(enemy->position).x,(undefined4 *)0x0);
    (enemy->position).x = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,&(enemy->position).y,(undefined4 *)0x0);
    (enemy->position).y = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,&(enemy->position).z,(undefined4 *)0x0);
    (enemy->position).z = *pfVar19;
    Enemy::enforce_move_limit(enemy);
    break;
  case 0x2c:
    (enemy->axis_speed).x = (float)local_20->args[0];
    (enemy->axis_speed).y = (float)local_20->args[1];
    (enemy->axis_speed).z = (float)local_20->args[2];
    pfVar19 = (float *)ecl_get_float((int)enemy,&(enemy->axis_speed).x,(undefined4 *)0x0);
    (enemy->axis_speed).x = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,&(enemy->axis_speed).y,(undefined4 *)0x0);
    (enemy->axis_speed).y = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,&(enemy->axis_speed).z,(undefined4 *)0x0);
    (enemy->axis_speed).z = *pfVar19;
    enemy->flags_1 = enemy->flags_1 & 0xfc;
    break;
  case 0x2d:
    local_10 = (float)local_20->args[0];
    local_c = (float)local_20->args[1];
    local_8 = local_20->args[2];
    pfVar19 = (float *)ecl_get_float((int)enemy,&local_10,(undefined4 *)0x0);
    enemy->angle = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,&local_c,(undefined4 *)0x0);
    enemy->speed = *pfVar19;
    enemy->flags_1 = enemy->flags_1 & 0xfcU | 1;
    break;
  case 0x2e:
    local_10 = (float)local_20->args[0];
    local_c = (float)local_20->args[1];
    local_8 = local_20->args[2];
    pfVar19 = (float *)ecl_get_float((int)enemy,&local_10,(undefined4 *)0x0);
    enemy->angular_velocity = *pfVar19;
    enemy->flags_1 = enemy->flags_1 & 0xfcU | 1;
    break;
  case 0x2f:
    local_10 = (float)local_20->args[0];
    local_c = (float)local_20->args[1];
    local_8 = local_20->args[2];
    pfVar19 = (float *)ecl_get_float((int)enemy,&local_10,(undefined4 *)0x0);
    enemy->speed = *pfVar19;
    enemy->flags_1 = enemy->flags_1 & 0xfcU | 1;
    break;
  case 0x30:
    local_10 = (float)local_20->args[0];
    local_c = (float)local_20->args[1];
    local_8 = local_20->args[2];
    pfVar19 = (float *)ecl_get_float((int)enemy,&local_10,(undefined4 *)0x0);
    enemy->acceleration = *pfVar19;
    enemy->flags_1 = enemy->flags_1 & 0xfcU | 1;
    break;
  case 0x31:
    local_10 = (float)local_20->args[0];
    local_c = (float)local_20->args[1];
    local_8 = local_20->args[2];
    fVar3 = local_c - local_10;
    fVar26 = Rng::randf_0_to_1(&Rng);
    enemy->angle = (float)(fVar26 * (float10)fVar3 + (float10)local_10);
    break;
  case 0x32:
    local_10 = (float)local_20->args[0];
    local_c = (float)local_20->args[1];
    local_8 = local_20->args[2];
    fVar3 = local_c - local_10;
    fVar26 = Rng::randf_0_to_1(&Rng);
    enemy->angle = (float)(fVar26 * (float10)fVar3 + (float10)local_10);
    if ((enemy->position).x < (enemy->lower_move_limit).x + _96_0f) {
      if (enemy->angle <= _Pi_2_f) {
        if (enemy->angle < __Pi_2_f) {
          enemy->angle = __Pi_f - enemy->angle;
        }
      }
      else {
        enemy->angle = _Pi_f - enemy->angle;
      }
    }
    if ((enemy->upper_move_limit).x - _96_0f < (enemy->position).x) {
      if ((_Pi_2_f <= enemy->angle) || (enemy->angle < (float)__0f)) {
        if ((__Pi_2_f < enemy->angle) &&
           (enemy->angle < (float)__0f != (enemy->angle == (float)__0f))) {
          enemy->angle = __Pi_f - enemy->angle;
        }
      }
      else {
        enemy->angle = _Pi_f - enemy->angle;
      }
    }
    if (((enemy->position).y < (enemy->lower_move_limit).y + _48_0f) && (enemy->angle < (float)__0f)
       ) {
      enemy->angle = -enemy->angle;
    }
    if (((enemy->upper_move_limit).y - _48_0f < (enemy->position).y) && ((float)__0f < enemy->angle)
       ) {
      enemy->angle = -enemy->angle;
    }
    break;
  case 0x33:
    local_10 = (float)local_20->args[0];
    local_c = (float)local_20->args[1];
    local_8 = local_20->args[2];
    fVar26 = Player::angle_to_player_from_point(&::player,&enemy->position);
    enemy->angle = (float)(fVar26 + (float10)local_10);
    pfVar19 = (float *)ecl_get_float((int)enemy,&local_c,(undefined4 *)0x0);
    enemy->speed = *pfVar19;
    enemy->flags_1 = enemy->flags_1 & 0xfcU | 1;
    break;
  case 0x34:
    instruction.opcode = (short)unaff_EDI;
    instruction.offset_to_next = (short)((uint)unaff_EDI >> 0x10);
    instruction.time = (int32_t)local_20;
    instruction.unused = (char)unaff_ESI;
    instruction.difficulty_mask = (char)((uint)unaff_ESI >> 8);
    instruction.param_mask = (short)((uint)unaff_ESI >> 0x10);
    instruction.args[0] = in_stack_fffffd04;
    instruction.args[1] = in_stack_fffffd08;
    instruction.args[2] = in_stack_fffffd0c;
    instruction.args[3] = in_stack_fffffd10;
    instruction.args[4] = in_stack_fffffd14;
    instruction.args[5] = in_stack_fffffd18;
    instruction.args[6] = (int32_t)in_stack_fffffd1c;
    instruction.args[7] = (int32_t)in_stack_fffffd20;
    instruction.args[8] = in_stack_fffffd24;
    instruction.args[9] = in_stack_fffffd28;
    Enemy::move_velocity_interp(enemy,instruction);
    enemy->flags_1 = enemy->flags_1 & 0xe3U | 4;
    break;
  case 0x35:
    instruction_00.opcode = (short)unaff_EDI;
    instruction_00.offset_to_next = (short)((uint)unaff_EDI >> 0x10);
    instruction_00.time = (int32_t)local_20;
    instruction_00.unused = (char)unaff_ESI;
    instruction_00.difficulty_mask = (char)((uint)unaff_ESI >> 8);
    instruction_00.param_mask = (short)((uint)unaff_ESI >> 0x10);
    instruction_00.args[0] = in_stack_fffffd04;
    instruction_00.args[1] = in_stack_fffffd08;
    instruction_00.args[2] = in_stack_fffffd0c;
    instruction_00.args[3] = in_stack_fffffd10;
    instruction_00.args[4] = in_stack_fffffd14;
    instruction_00.args[5] = in_stack_fffffd18;
    instruction_00.args[6] = (int32_t)in_stack_fffffd1c;
    instruction_00.args[7] = (int32_t)in_stack_fffffd20;
    instruction_00.args[8] = in_stack_fffffd24;
    instruction_00.args[9] = in_stack_fffffd28;
    Enemy::move_velocity_interp(enemy,instruction_00);
    enemy->flags_1 = enemy->flags_1 & 0xe3U | 8;
    break;
  case 0x36:
    instruction_01.opcode = (short)unaff_EDI;
    instruction_01.offset_to_next = (short)((uint)unaff_EDI >> 0x10);
    instruction_01.time = (int32_t)local_20;
    instruction_01.unused = (char)unaff_ESI;
    instruction_01.difficulty_mask = (char)((uint)unaff_ESI >> 8);
    instruction_01.param_mask = (short)((uint)unaff_ESI >> 0x10);
    instruction_01.args[0] = in_stack_fffffd04;
    instruction_01.args[1] = in_stack_fffffd08;
    instruction_01.args[2] = in_stack_fffffd0c;
    instruction_01.args[3] = in_stack_fffffd10;
    instruction_01.args[4] = in_stack_fffffd14;
    instruction_01.args[5] = in_stack_fffffd18;
    instruction_01.args[6] = (int32_t)in_stack_fffffd1c;
    instruction_01.args[7] = (int32_t)in_stack_fffffd20;
    instruction_01.args[8] = in_stack_fffffd24;
    instruction_01.args[9] = in_stack_fffffd28;
    Enemy::move_velocity_interp(enemy,instruction_01);
    enemy->flags_1 = enemy->flags_1 & 0xe3U | 0xc;
    break;
  case 0x37:
    instruction_02.opcode = (short)unaff_EDI;
    instruction_02.offset_to_next = (short)((uint)unaff_EDI >> 0x10);
    instruction_02.time = (int32_t)local_20;
    instruction_02.unused = (char)unaff_ESI;
    instruction_02.difficulty_mask = (char)((uint)unaff_ESI >> 8);
    instruction_02.param_mask = (short)((uint)unaff_ESI >> 0x10);
    instruction_02.args[0] = in_stack_fffffd04;
    instruction_02.args[1] = in_stack_fffffd08;
    instruction_02.args[2] = in_stack_fffffd0c;
    instruction_02.args[3] = in_stack_fffffd10;
    instruction_02.args[4] = in_stack_fffffd14;
    instruction_02.args[5] = in_stack_fffffd18;
    instruction_02.args[6] = (int32_t)in_stack_fffffd1c;
    instruction_02.args[7] = (int32_t)in_stack_fffffd20;
    instruction_02.args[8] = in_stack_fffffd24;
    instruction_02.args[9] = in_stack_fffffd28;
    Enemy::move_velocity_interp(enemy,instruction_02);
    enemy->flags_1 = enemy->flags_1 & 0xe3U | 0x10;
    break;
  case 0x38:
    Enemy::move_position_interp(enemy,local_20);
    enemy->flags_1 = enemy->flags_1 & 0xe3;
    break;
  case 0x39:
    Enemy::move_position_interp(enemy,local_20);
    enemy->flags_1 = enemy->flags_1 & 0xe3U | 4;
    break;
  case 0x3a:
    Enemy::move_position_interp(enemy,local_20);
    enemy->flags_1 = enemy->flags_1 & 0xe3U | 8;
    break;
  case 0x3b:
    Enemy::move_position_interp(enemy,local_20);
    enemy->flags_1 = enemy->flags_1 & 0xe3U | 0xc;
    break;
  case 0x3c:
    Enemy::move_position_interp(enemy,local_20);
    enemy->flags_1 = enemy->flags_1 & 0xe3U | 0x10;
    break;
  case 0x3d:
    Enemy::move_as_interp(enemy,local_20);
    enemy->flags_1 = enemy->flags_1 & 0xe3U | 4;
    break;
  case 0x3e:
    Enemy::move_as_interp(enemy,local_20);
    enemy->flags_1 = enemy->flags_1 & 0xe3U | 8;
    break;
  case 0x3f:
    Enemy::move_as_interp(enemy,local_20);
    enemy->flags_1 = enemy->flags_1 & 0xe3U | 0xc;
    break;
  case 0x40:
    Enemy::move_as_interp(enemy,local_20);
    enemy->flags_1 = enemy->flags_1 & 0xe3U | 0x10;
    break;
  case 0x41:
    (enemy->lower_move_limit).x = (float)local_20->args[0];
    (enemy->lower_move_limit).y = (float)local_20->args[1];
    (enemy->upper_move_limit).x = (float)local_20->args[2];
    (enemy->upper_move_limit).y = (float)local_20->args[3];
    enemy->flags_3 = enemy->flags_3 | 1;
    break;
  case 0x42:
    enemy->flags_3 = enemy->flags_3 & 0xfe;
    break;
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
    local_54 = local_20->args;
    local_58 = &enemy->bullet_data;
    local_58->sprite = *(uint16_t *)local_54;
    (enemy->bullet_data).aim_mode = local_20->opcode - 0x43;
    puVar14 = ecl_get_var((int)enemy,local_20->args + 1,(undefined4 *)0x0);
    local_58->count_1 = *(uint16_t *)puVar14;
    iVar20 = ((int)(short)enemy->bullet_rank_amount1_high -
             (int)(short)enemy->bullet_rank_amount1_low) * game_manager.rank;
    local_58->count_1 =
         (short)((int)(iVar20 + (iVar20 >> 0x1f & 0x1fU)) >> 5) +
         local_58->count_1 + enemy->bullet_rank_amount1_low;
    if ((short)local_58->count_1 < 1) {
      local_58->count_1 = 1;
    }
    puVar14 = ecl_get_var((int)enemy,local_54 + 2,(undefined4 *)0x0);
    local_58->count_2 = *(uint16_t *)puVar14;
    iVar20 = ((int)(short)enemy->bullet_rank_amount2_high -
             (int)(short)enemy->bullet_rank_amount2_low) * game_manager.rank;
    local_58->count_2 =
         (short)((int)(iVar20 + (iVar20 >> 0x1f & 0x1fU)) >> 5) +
         local_58->count_2 + enemy->bullet_rank_amount2_low;
    if ((short)local_58->count_2 < 1) {
      local_58->count_2 = 1;
    }
    fVar3 = (enemy->position).z;
    fVar4 = (enemy->shoot_offset).z;
    fVar5 = (enemy->position).y;
    fVar6 = (enemy->shoot_offset).y;
    (local_58->pos).x = (enemy->position).x + (enemy->shoot_offset).x;
    (local_58->pos).y = fVar5 + fVar6;
    (local_58->pos).z = fVar3 + fVar4;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_54 + 5,(undefined4 *)0x0);
    local_58->angle_1 = *pfVar19;
    fVar26 = reduce_angle(local_58->angle_1,0.0);
    local_58->angle_1 = (float)fVar26;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_54 + 3,(undefined4 *)0x0);
    local_58->speed_1 = *pfVar19;
    if ((local_58->speed_1 != (float)__0f) &&
       (local_58->speed_1 =
             ((enemy->bullet_rank_speed_high - enemy->bullet_rank_speed_low) *
             (float)game_manager.rank) / _32_0f + enemy->bullet_rank_speed_low + local_58->speed_1,
       local_58->speed_1 < _0_3f)) {
      local_58->speed_1 = 0.3;
    }
    pfVar19 = (float *)ecl_get_float((int)enemy,local_54 + 6,(undefined4 *)0x0);
    local_58->angle_2 = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_54 + 4,(undefined4 *)0x0);
    local_58->speed_2 = *pfVar19;
    local_58->speed_2 =
         (((enemy->bullet_rank_speed_high - enemy->bullet_rank_speed_low) * (float)game_manager.rank
          ) / _32_0f + enemy->bullet_rank_speed_low) / _2_0f + local_58->speed_2;
    if (local_58->speed_2 < _0_3f) {
      local_58->speed_2 = 0.3;
    }
    *(undefined2 *)local_58->field13_0x4a = 0;
    local_58->flags = local_54[7];
    local_14 = (float)(int)*(short *)((int)local_54 + 2);
    puVar14 = ecl_get_var((int)enemy,&local_14,(undefined4 *)0x0);
    local_58->color = *(uint16_t *)puVar14;
    if (((byte)enemy->flags_1 >> 5 & 1) == 0) {
      BulletManager::shoot_bullets(&bullet_manager,local_58);
    }
    break;
  case 0x4c:
    enemy->shoot_interval = local_20->args[0];
    iVar20 = enemy->shoot_interval / 5;
    iVar21 = (-enemy->shoot_interval / 5 - iVar20) * game_manager.rank;
    enemy->shoot_interval =
         ((int)(iVar21 + (iVar21 >> 0x1f & 0x1fU)) >> 5) + iVar20 + enemy->shoot_interval;
    (enemy->shoot_interval_timer).current = 0;
    (enemy->shoot_interval_timer).subframe = 0.0;
    (enemy->shoot_interval_timer).previous = -999;
    break;
  case 0x4d:
    enemy->shoot_interval = local_20->args[0];
    iVar20 = enemy->shoot_interval / 5;
    iVar21 = (-enemy->shoot_interval / 5 - iVar20) * game_manager.rank;
    enemy->shoot_interval =
         ((int)(iVar21 + (iVar21 >> 0x1f & 0x1fU)) >> 5) + iVar20 + enemy->shoot_interval;
    if (enemy->shoot_interval != 0) {
      uVar12 = enemy->shoot_interval;
      if (uVar12 == 0) {
        local_184 = 0;
      }
      else {
        local_184 = Rng::rand_dword(&Rng);
        local_184 = local_184 % uVar12;
      }
      (enemy->shoot_interval_timer).current = local_184;
      (enemy->shoot_interval_timer).subframe = 0.0;
      (enemy->shoot_interval_timer).previous = -999;
    }
    break;
  case 0x4e:
    enemy->flags_1 = enemy->flags_1 | 0x20;
    break;
  case 0x4f:
    enemy->flags_1 = enemy->flags_1 & 0xdf;
    break;
  case 0x50:
    fVar3 = (enemy->position).z;
    fVar4 = (enemy->shoot_offset).z;
    fVar5 = (enemy->position).y;
    fVar6 = (enemy->shoot_offset).y;
    (enemy->bullet_data).pos.x = (enemy->position).x + (enemy->shoot_offset).x;
    (enemy->bullet_data).pos.y = fVar5 + fVar6;
    (enemy->bullet_data).pos.z = fVar3 + fVar4;
    BulletManager::shoot_bullets(&bullet_manager,&enemy->bullet_data);
    break;
  case 0x51:
    pfVar19 = (float *)ecl_get_float((int)enemy,local_1c,(undefined4 *)0x0);
    (enemy->shoot_offset).x = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_1c + 1,(undefined4 *)0x0);
    (enemy->shoot_offset).y = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_1c + 2,(undefined4 *)0x0);
    (enemy->shoot_offset).z = *pfVar19;
    break;
  case 0x52:
    piVar16 = ecl_get_var((int)enemy,local_1c,(undefined4 *)0x0);
    (enemy->bullet_data).ex_ints[0] = *piVar16;
    piVar16 = ecl_get_var((int)enemy,local_1c + 1,(undefined4 *)0x0);
    (enemy->bullet_data).ex_ints[1] = *piVar16;
    piVar16 = ecl_get_var((int)enemy,local_1c + 2,(undefined4 *)0x0);
    (enemy->bullet_data).ex_ints[2] = *piVar16;
    piVar16 = ecl_get_var((int)enemy,local_1c + 3,(undefined4 *)0x0);
    (enemy->bullet_data).ex_ints[3] = *piVar16;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_1c + 4,(undefined4 *)0x0);
    (enemy->bullet_data).ex_floats[0] = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_1c + 5,(undefined4 *)0x0);
    (enemy->bullet_data).ex_floats[1] = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_1c + 6,(undefined4 *)0x0);
    (enemy->bullet_data).ex_floats[2] = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_1c + 7,(undefined4 *)0x0);
    (enemy->bullet_data).ex_floats[3] = *pfVar19;
    break;
  case 0x53:
    BulletManager::cancel_bullets_to_star_items(&bullet_manager);
    break;
  case 0x54:
    if (local_20->args[0] < 0) {
      (enemy->bullet_data).flags = (enemy->bullet_data).flags & 0xfffffdff;
    }
    else {
      (enemy->bullet_data).sfx = local_20->args[0];
      (enemy->bullet_data).flags = (enemy->bullet_data).flags | 0x200;
    }
    break;
  case 0x55:
  case 0x56:
    local_64 = local_20->args;
    local_60 = &enemy->laser_props;
    fVar3 = (enemy->position).z;
    fVar4 = (enemy->shoot_offset).z;
    fVar5 = (enemy->position).y;
    fVar6 = (enemy->shoot_offset).y;
    (enemy->laser_props).position.x = (enemy->position).x + (enemy->shoot_offset).x;
    (enemy->laser_props).position.y = fVar5 + fVar6;
    (enemy->laser_props).position.z = fVar3 + fVar4;
    local_60->sprite = *(uint16_t *)local_64;
    (enemy->laser_props).color = *(uint16_t *)((int)local_20->args + 2);
    pfVar19 = (float *)ecl_get_float((int)enemy,local_20->args + 1,(undefined4 *)0x0);
    local_60->angle = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_64 + 2,(undefined4 *)0x0);
    local_60->speed = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_64 + 3,(undefined4 *)0x0);
    local_60->start_offset = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_64 + 4,(undefined4 *)0x0);
    local_60->end_offset = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,local_64 + 5,(undefined4 *)0x0);
    local_60->start_length = *pfVar19;
    local_60->width = (float)local_64[6];
    local_60->start_time = local_64[7];
    local_60->duration = local_64[8];
    local_60->stop_time = local_64[9];
    local_60->graze_delay = local_64[10];
    local_60->graze_distance = local_64[0xb];
    local_60->dword_4C = local_64[0xc];
    if (local_20->opcode == 0x56) {
      local_60->type = 0;
    }
    else {
      local_60->type = 1;
    }
    pLVar15 = (Laser *)BulletManager::shoot_lasers(&bullet_manager,local_60);
    enemy->lasers[enemy->laser_store] = pLVar15;
    break;
  case 0x57:
    piVar16 = ecl_get_var((int)enemy,local_20->args,(undefined4 *)0x0);
    enemy->laser_store = *piVar16;
    break;
  case 0x58:
    if (enemy->lasers[local_20->args[0]] != (Laser *)0x0) {
      pLVar15 = enemy->lasers[local_20->args[0]];
      pfVar19 = (float *)ecl_get_float((int)enemy,local_20->args + 1,(undefined4 *)0x0);
      enemy->lasers[local_20->args[0]]->angle = pLVar15->angle + *pfVar19;
    }
    break;
  case 0x59:
    if (enemy->lasers[local_20->args[0]] != (Laser *)0x0) {
      fVar26 = Player::angle_to_player_from_point
                         (&::player,&enemy->lasers[local_20->args[0]]->position);
      pfVar19 = (float *)ecl_get_float((int)enemy,local_20->args + 1,(undefined4 *)0x0);
      enemy->lasers[local_20->args[0]]->angle = (float)fVar26 + *pfVar19;
    }
    break;
  case 0x5a:
    if (enemy->lasers[local_20->args[0]] != (Laser *)0x0) {
      fVar3 = (enemy->position).z;
      fVar4 = (float)local_20->args[3];
      fVar5 = (enemy->position).y;
      fVar6 = (float)local_20->args[2];
      pLVar15 = enemy->lasers[local_20->args[0]];
      (pLVar15->position).x = (enemy->position).x + (float)local_20->args[1];
      (pLVar15->position).y = fVar5 + fVar6;
      (pLVar15->position).z = fVar3 + fVar4;
    }
    break;
  case 0x5b:
    if ((enemy->lasers[local_20->args[0]] == (Laser *)0x0) ||
       (enemy->lasers[local_20->args[0]]->in_use == 0)) {
      (enemy->current_context).compare_register = 1;
    }
    else {
      (enemy->current_context).compare_register = 0;
    }
    break;
  case 0x5c:
    if (((enemy->lasers[local_20->args[0]] != (Laser *)0x0) &&
        (enemy->lasers[local_20->args[0]]->in_use != 0)) &&
       (enemy->lasers[local_20->args[0]]->state < 2)) {
      enemy->lasers[local_20->args[0]]->state = '\x02';
      pLVar15 = enemy->lasers[local_20->args[0]];
      (pLVar15->timer).current = 0;
      (pLVar15->timer).subframe = 0.0;
      (pLVar15->timer).previous = -999;
    }
    break;
  case 0x5d:
    Gui::spawn_spellcard_effects(&gui,(int)*(short *)local_20->args,(char *)(local_20->args + 1));
    _enemy_manager = 1;
    _ENEMY_MANAGER___spellcard_capture = 1;
    _ENEMY_MANAGER___spellcard_number = (int)*(short *)((int)local_20->args + 2);
    _ENEMY_MANAGER___spellcard_points =
         *(int32_t *)(&DAT_00476120 + _ENEMY_MANAGER___spellcard_number * 4);
    BulletManager::cancel_bullets_to_star_items(&bullet_manager);
    Stage.set_by_spellcard_ecl_80 = 1;
    Stage.set_by_spellcard_ecl_84 = 0;
    enemy->bullet_rank_speed_low = -0.5;
    enemy->bullet_rank_speed_high = 0.5;
    enemy->bullet_rank_amount1_low = 0;
    enemy->bullet_rank_amount1_high = 0;
    enemy->bullet_rank_amount2_low = 0;
    enemy->bullet_rank_amount2_high = 0;
    iVar20 = _ENEMY_MANAGER___spellcard_number;
    iVar21 = _ENEMY_MANAGER___spellcard_number * 0x40;
    local_70 = iVar21 + 0x69bcd0;
    local_78 = 0;
    if (game_manager.__spellcard_related_1 == 0) {
      local_2bc = local_20->args + 1;
      local_2c0 = game_manager.catk_data[_ENEMY_MANAGER___spellcard_number].spell_name;
      do {
        cVar9 = *(char *)local_2bc;
        *local_2c0 = cVar9;
        local_2bc = (int32_t *)((int)local_2bc + 1);
        local_2c0 = local_2c0 + 1;
      } while (cVar9 != '\0');
      local_2cc = game_manager.catk_data[iVar20].spell_name;
      do {
        cVar9 = *local_2cc;
        local_2cc = local_2cc + 1;
      } while (cVar9 != '\0');
      in_stack_fffffd28 = (int)local_2cc - (iVar21 + 0x69bce9);
      local_74 = in_stack_fffffd28;
      while (0 < local_74) {
        local_74 = local_74 + -1;
        local_78 = local_78 + (int)*(char *)(local_70 + local_74 + 0x18);
      }
      if ((uint)game_manager.catk_data[iVar20].spell_name_hash != (local_78 & 0xff)) {
        game_manager.catk_data[iVar20].captures = 0;
        game_manager.catk_data[iVar20].attempts = 0;
        game_manager.catk_data[iVar20].spell_name_hash = (uint8_t)local_78;
      }
      game_manager.catk_data[iVar20].highscore = _ENEMY_MANAGER___spellcard_points;
      if ((ushort)game_manager.catk_data[iVar20].attempts < 9999) {
        game_manager.catk_data[iVar20].attempts = game_manager.catk_data[iVar20].attempts + 1;
      }
    }
    break;
  case 0x5e:
    if (_ENEMY_MANAGER___spellcard_capture != 0) {
      Gui::__sub_41732C(&gui);
      if ((_ENEMY_MANAGER___spellcard_capture == 1) &&
         (local_7c = BulletManager::cancel_bullets_spell_bonus(&bullet_manager,0x3200,1),
         _enemy_manager != 0)) {
        local_80 = _ENEMY_MANAGER___spellcard_number * 0x40 + 0x69bcd0;
        if (_ENEMY_MANAGER___spellcard_points < 500000) {
          in_stack_fffffd24 = _ENEMY_MANAGER___spellcard_points / 10;
        }
        else {
          in_stack_fffffd24 = 50000;
        }
        local_7c = _ENEMY_MANAGER___spellcard_points +
                   (_ENEMY_MANAGER___spellcard_points * gui.read_by_spellcard_ecl) / 10;
        local_88 = in_stack_fffffd24;
        Gui::__sub_417458(&gui,local_7c);
        game_manager.score = game_manager.score + local_7c;
        if (game_manager.__spellcard_related_1 == 0) {
          *(short *)(local_80 + 0x3e) = *(short *)(local_80 + 0x3e) + 1;
          for (local_84 = 4; 0 < local_84; local_84 = local_84 + -1) {
            *(undefined *)(local_80 + local_84 + 0x13) = *(undefined *)(local_80 + local_84 + 0x12);
          }
          *(char *)(local_80 + 0x13) = game_manager.shottype + game_manager.character * '\x02';
        }
        game_manager.__dword_28 = game_manager.__dword_28 + 1;
      }
      _ENEMY_MANAGER___spellcard_capture = 0;
    }
    Stage.set_by_spellcard_ecl_80 = 0;
    break;
  case 0x5f:
    piVar16 = local_20->args;
    piVar24 = &local_b0;
    for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
      *piVar24 = *piVar16;
      piVar16 = piVar16 + 1;
      piVar24 = piVar24 + 1;
    }
    pfVar19 = (float *)ecl_get_float((int)enemy,&local_ac.x,(undefined4 *)0x0);
    local_ac.x = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,&local_ac.y,(undefined4 *)0x0);
    local_ac.y = *pfVar19;
    pfVar19 = (float *)ecl_get_float((int)enemy,&local_ac.z,(undefined4 *)0x0);
    local_ac.z = *pfVar19;
    EnemyManager::create_enemy
              ((EnemyManager *)&enemy_manager.enemies[0x32].current_context.time.subframe,
               (word)local_b0,&local_ac,CONCAT22((short)((uint)local_ac.z >> 0x10),local_a0),
               (byte)local_9e,local_9c);
    break;
  case 0x60:
    local_b4 = 0x4b8898;
    for (local_b8 = 0; local_b8 < 0x100; local_b8 = local_b8 + 1) {
      if ((((*(char *)(local_b4 + 0xe50) < '\0') && ((*(byte *)(local_b4 + 0xe51) >> 3 & 1) == 0))
          && (*(undefined4 *)(local_b4 + 0xce4) = 0, (*(byte *)(local_b4 + 0xe51) & 1) == 0)) &&
         (-1 < *(int *)(local_b4 + 0xc44))) {
        init_sub_context((EnemyController *)&enemy_manager,(EnemyEclContext *)(local_b4 + 0x990),
                         *(short *)(local_b4 + 0xc44));
        *(undefined4 *)(local_b4 + 0xc44) = 0xffffffff;
      }
      local_b4 = local_b4 + 0xec8;
    }
    break;
  case 0x61:
    iVar20 = local_20->args[0];
    local_13c = (short)iVar20 + 0x100;
    (enemy->primary_vm).anm_file_index = local_13c;
    AnmManager::set_vm_script
              (pAVar11,&enemy->primary_vm,(AnmRawScript *)pAVar11->scripts[iVar20 + 0x100]);
    break;
  case 0x62:
    enemy->anm_ex_default = *(int16_t *)local_20->args;
    enemy->anm_ex_far_left = *(int16_t *)((int)local_20->args + 2);
    enemy->anm_ex_far_right = *(int16_t *)(local_20->args + 1);
    enemy->anm_ex_left = *(int16_t *)((int)local_20->args + 6);
    enemy->anm_ex_right = *(int16_t *)(local_20->args + 2);
    enemy->anm_ex_flags = -1;
    break;
  case 99:
    if (7 < local_20->args[0]) {
      __stub_3();
    }
    pAVar11 = anm_manager_ptr;
    iVar20 = local_1c[1];
    local_144 = (short)iVar20 + 0x100;
    iVar21 = local_20->args[0];
    enemy->vms[iVar21].anm_file_index = local_144;
    AnmManager::set_vm_script
              (pAVar11,enemy->vms + iVar21,(AnmRawScript *)pAVar11->scripts[iVar20 + 0x100]);
    break;
  case 100:
    local_5c = local_20->args;
    enemy->death_anm_one = *(uint8_t *)local_5c;
    enemy->death_anm_two = *(uint8_t *)((int)local_20->args + 1);
    enemy->death_anm_three = *(uint8_t *)((int)local_20->args + 2);
    break;
  case 0x65:
    if (local_20->args[0] < 0) {
      gui.boss_present = false;
      *(undefined4 *)(&ENEMY_MANAGER_bosses + (uint)(byte)enemy->boss_id * 4) = 0;
      enemy->flags_2 = enemy->flags_2 & 0xf7;
    }
    else {
      *(Enemy **)(&ENEMY_MANAGER_bosses + local_20->args[0] * 4) = enemy;
      gui.boss_present = true;
      gui.boss_healthbar_24 = 1.0;
      enemy->flags_2 = enemy->flags_2 | 8;
      enemy->boss_id = *(char *)local_20->args;
    }
    break;
  case 0x66:
    local_6c = local_20->args;
    pEVar17 = EffectManager::spawn_effect
                        ((EffectManager *)
                         ((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),0xd,
                         &enemy->position,1,*(D3DCOLOR *)(_DAT_00476438 + *local_6c * 4));
    enemy->effect_array[enemy->effect_index] = pEVar17;
    pEVar17 = enemy->effect_array[enemy->effect_index];
    (pEVar17->pos).x = (float)local_6c[1];
    (pEVar17->pos).y = (float)local_6c[2];
    (pEVar17->pos).z = (float)local_6c[3];
    enemy->effect_distance = (float)local_6c[4];
    enemy->effect_index = enemy->effect_index + 1;
    break;
  case 0x67:
    (enemy->hitbox_dimensions).x = (float)local_20->args[0];
    (enemy->hitbox_dimensions).y = (float)local_20->args[1];
    (enemy->hitbox_dimensions).z = (float)local_20->args[2];
    break;
  case 0x68:
    enemy->flags_2 = enemy->flags_2 & 0xfd | (*(byte *)local_20->args & 1) << 1;
    break;
  case 0x69:
    enemy->flags_2 = enemy->flags_2 & 0xef | (*(byte *)local_20->args & 1) << 4;
    break;
  case 0x6a:
    SoundManager::play_sound_centered(&sound_manager,local_20->args[0],0);
    break;
  case 0x6b:
    enemy->flags_2 = enemy->flags_2 & 0x1f | *(char *)local_20->args << 5;
    break;
  case 0x6c:
    enemy->death_callback_sub = local_20->args[0];
    break;
  case 0x6d:
    enemy->interrupts[local_20->args[1]] = *local_1c;
    break;
  case 0x6e:
    enemy->run_interrupts = local_20->args[0];
    goto ecl_interrupt;
  case 0x6f:
    enemy->max_life = local_20->args[0];
    enemy->life = enemy->max_life;
    break;
  case 0x70:
    (enemy->boss_timer).current = local_20->args[0];
    (enemy->boss_timer).subframe = 0.0;
    (enemy->boss_timer).previous = -999;
    break;
  case 0x71:
    enemy->life_callback_threshold = local_20->args[0];
    break;
  case 0x72:
    enemy->life_callback_sub = local_20->args[0];
    break;
  case 0x73:
    enemy->timer_callback_threshold = local_20->args[0];
    (enemy->boss_timer).current = 0;
    (enemy->boss_timer).subframe = 0.0;
    (enemy->boss_timer).previous = -999;
    break;
  case 0x74:
    enemy->timer_callback_sub = local_20->args[0];
    break;
  case 0x75:
    enemy->flags_2 = enemy->flags_2 & 0xfe | *(byte *)local_20->args & 1;
    break;
  case 0x76:
    EffectManager::spawn_effect
              ((EffectManager *)((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),
               local_20->args[0],&enemy->position,local_20->args[1],local_20->args[2]);
    break;
  case 0x77:
    for (local_8c = 0; local_8c < local_20->args[0]; local_8c = local_8c + 1) {
      local_98.x = (enemy->position).x;
      local_98.y = (enemy->position).y;
      local_98.z = (enemy->position).z;
      in_stack_fffffd20 = &local_98;
      fVar26 = Rng::randf_0_to_1(&Rng);
      in_stack_fffffd20->x =
           (float)((fVar26 * (float10)_144_0f - (float10)_72_0f) + (float10)in_stack_fffffd20->x);
      in_stack_fffffd1c = &local_98.y;
      fVar26 = Rng::randf_0_to_1(&Rng);
      *in_stack_fffffd1c =
           (float)((fVar26 * (float10)_144_0f - (float10)_72_0f) + (float10)*in_stack_fffffd1c);
      if (game_manager.current_power < 0x80) {
        ItemManager::spawn_item
                  (&item_manager,&local_98,(-(ushort)(local_8c != 0) & 0xfffe) + BigPowerItem,false)
        ;
      }
      else {
        ItemManager::spawn_item(&item_manager,&local_98,PointItem,false);
      }
    }
    break;
  case 0x78:
    enemy->flags_3 = enemy->flags_3 & 0xfd | (*(byte *)local_20->args & 1) << 1;
    break;
  case 0x79:
    (**(code **)(&DAT_00476220 + local_20->args[0] * 4))((char)enemy,(char)local_20);
    break;
  case 0x7a:
    if (local_20->args[0] < 0) {
      (enemy->current_context).func_set_func = (void *)0x0;
    }
    else {
      (enemy->current_context).func_set_func = *(void **)(&DAT_00476220 + local_20->args[0] * 4);
    }
    break;
  case 0x7b:
    piVar18 = ecl_get_var((int)enemy,local_20->args,(undefined4 *)0x0);
    Timer::add(&(enemy->current_context).time,*piVar18);
    break;
  case 0x7c:
    ItemManager::spawn_item(&item_manager,&enemy->position,(ItemID)local_20->args[0],false);
    break;
  case 0x7d:
    Stage.unpause_flag = '\x01';
    break;
  case 0x7e:
    gui.ecl_set_lives = local_20->args[0];
    game_manager.__int_1a6c = game_manager.__int_1a6c + 0x708;
    break;
  case 0x80:
    (enemy->primary_vm).pending_interrupt = *(int16_t *)local_20->args;
    break;
  case 0x81:
    enemy->vms[*local_1c].pending_interrupt = *(int16_t *)(local_20->args + 1);
    break;
  case 0x82:
    enemy->flags_3 = enemy->flags_3 & 0xfb | (*(byte *)local_20->args & 1) << 2;
    break;
  case 0x83:
    enemy->bullet_rank_speed_low = (float)*local_1c;
    enemy->bullet_rank_speed_high = (float)local_20->args[1];
    enemy->bullet_rank_amount1_low = *(uint16_t *)(local_20->args + 2);
    enemy->bullet_rank_amount1_high = *(uint16_t *)(local_20->args + 3);
    enemy->bullet_rank_amount2_low = *(uint16_t *)(local_20->args + 4);
    enemy->bullet_rank_amount2_high = *(uint16_t *)(local_20->args + 5);
    break;
  case 0x84:
    enemy->flags_3 = enemy->flags_3 & 0xf7 | (*(byte *)local_20->args & 1) << 3;
    break;
  case 0x85:
    enemy->timer_callback_sub = enemy->death_callback_sub;
    (enemy->boss_timer).current = 0;
    (enemy->boss_timer).subframe = 0.0;
    (enemy->boss_timer).previous = -999;
    break;
  case 0x86:
    for (local_68 = 0; local_68 < 0x20; local_68 = local_68 + 1) {
      enemy->lasers[local_68] = (Laser *)0x0;
    }
    break;
  case 0x87:
    enemy->flags_3 = enemy->flags_3 & 0xef | (*(byte *)local_20->args & 1) << 4;
  }
ecl_break:
  local_20 = (EclRawInstr *)((int)local_20->args + local_20->offset_to_next + -0xc);
  goto ecl_next;
ecl_36__return:
  if ((enemy->flags_3 >> 2 & 1) != 0) {
    __stub_3();
  }
  enemy->stack_depth = enemy->stack_depth + -1;
  pEVar22 = enemy->saved_context_stack + enemy->stack_depth;
  pEVar23 = &enemy->current_context;
  for (iVar20 = 0x13; iVar20 != 0; iVar20 = iVar20 + -1) {
    pEVar23->current_instr = pEVar22->current_instr;
    pEVar22 = (EnemyEclContext *)&pEVar22->time;
    pEVar23 = (EnemyEclContext *)&pEVar23->time;
  }
  goto ecl_start;
ecl_35__call:
  local_14 = (float)local_20->args[0];
  (enemy->current_context).current_instr =
       (EclRawInstr *)((int)local_20->args + local_20->offset_to_next + -0xc);
  if ((enemy->flags_3 >> 2 & 1) == 0) {
    pEVar22 = &enemy->current_context;
    pEVar23 = enemy->saved_context_stack + enemy->stack_depth;
    for (iVar20 = 0x13; iVar20 != 0; iVar20 = iVar20 + -1) {
      pEVar23->current_instr = pEVar22->current_instr;
      pEVar22 = (EnemyEclContext *)&pEVar22->time;
      pEVar23 = (EnemyEclContext *)&pEVar23->time;
    }
  }
  init_sub_context((EnemyController *)&enemy_manager,&enemy->current_context,local_14._0_2_);
  if (((enemy->flags_3 >> 2 & 1) == 0) && (enemy->stack_depth < 7)) {
    enemy->stack_depth = enemy->stack_depth + 1;
  }
  (enemy->current_context).int_var_0 = local_20->args[1];
  (enemy->current_context).float_var_0 = (float)local_20->args[2];
  goto ecl_start;
}

