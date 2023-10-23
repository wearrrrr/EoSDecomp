
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl BulletManager::on_tick(BulletManager *this)

{
  double dVar1;
  double dVar2;
  char cVar3;
  float fVar4;
  int vm;
  Bullet *bullet2;
  Bullet *pBVar5;
  float10 bullet_angle_sin;
  float10 bullet_angle_cos;
  longlong lVar6;
  float laser_start_time;
  Float3 local_38;
  AnmVm *lasers;
  int bullet_color;
  Bullet *bullets;
  Float3 local_20;
  float local_14;
  float local_10;
  int i;
  int local_8;
  float bullet_speed;
  float bullet_velocity;
  
  bullets = this->bullets;
  if (game_manager.__byte_2c == 0) {
    ItemManager::on_tick(&item_manager);
    this->bullet_count = 0;
    for (i = 0; i < 640; i = i + 1) {
      if (bullets->state == 0) goto isLaser;
      this->bullet_count = this->bullet_count + 1;
      switch(bullets->state) {
      case 1:
        goto BulletState_1;
      case 2:
        fVar4 = _1_0f / _2_0f;
        bullet_speed = fVar4 * (bullets->velocity).z * supervisor.game_speed;
        bullet_velocity = fVar4 * (bullets->velocity).y * supervisor.game_speed;
        (bullets->pos).x = fVar4 * (bullets->velocity).x * supervisor.game_speed + (bullets->pos).x;
        (bullets->pos).y = bullet_velocity + (bullets->pos).y;
        (bullets->pos).z = bullet_speed + (bullets->pos).z;
        vm = AnmManager::run_anm(anm_manager_ptr,&(bullets->vms).spawn_effect_short);
        break;
      case 3:
        fVar4 = _1_0f / __5f;
        bullet_speed = fVar4 * (bullets->velocity).z * supervisor.game_speed;
        bullet_velocity = fVar4 * (bullets->velocity).y * supervisor.game_speed;
        (bullets->pos).x = fVar4 * (bullets->velocity).x * supervisor.game_speed + (bullets->pos).x;
        (bullets->pos).y = bullet_velocity + (bullets->pos).y;
        (bullets->pos).z = bullet_speed + (bullets->pos).z;
        vm = AnmManager::run_anm(anm_manager_ptr,&(bullets->vms).spawn_effect_medium);
        break;
      case 4:
        fVar4 = _1_0f / _3_0f;
        bullet_speed = fVar4 * (bullets->velocity).z * supervisor.game_speed;
        bullet_velocity = fVar4 * (bullets->velocity).y * supervisor.game_speed;
        (bullets->pos).x = fVar4 * (bullets->velocity).x * supervisor.game_speed + (bullets->pos).x;
        (bullets->pos).y = bullet_velocity + (bullets->pos).y;
        (bullets->pos).z = bullet_speed + (bullets->pos).z;
        vm = AnmManager::run_anm(anm_manager_ptr,&(bullets->vms).spawn_effect_long);
        break;
      case 5:
        fVar4 = _1_0f / _2_0f;
        bullet_speed = fVar4 * (bullets->velocity).z * supervisor.game_speed;
        bullet_velocity = fVar4 * (bullets->velocity).y * supervisor.game_speed;
        (bullets->pos).x = fVar4 * (bullets->velocity).x * supervisor.game_speed + (bullets->pos).x;
        (bullets->pos).y = bullet_velocity + (bullets->pos).y;
        (bullets->pos).z = bullet_speed + (bullets->pos).z;
        vm = AnmManager::run_anm(anm_manager_ptr,&(bullets->vms).vm_5);
        if (vm != 0) {
          pBVar5 = bullets;
          for (vm = 369; vm != 0; vm = vm + -1) {
            (pBVar5->vms).vm_0.rotation.x = 0.0;
            pBVar5 = (Bullet *)&(pBVar5->vms).vm_0.rotation.y;
          }
          goto isLaser;
        }
      default:
        goto BulletState_default;
      }
      if (vm == 0) {
BulletState_default:
        (bullets->timer).previous = (bullets->timer).current;
        Supervisor::tick_timer(&supervisor,&(bullets->timer).current,&(bullets->timer).subframe);
      }
      else {
        bullets->state = 1;
        (bullets->timer).current = 0;
        (bullets->timer).subframe = 0.0;
        (bullets->timer).previous = -999;
BulletState_1:
        if (bullets->ex_flags != 0) {
          if ((bullets->ex_flags & 1) == 0) {
            if ((bullets->ex_flags & 0x10) == 0) {
              if ((bullets->ex_flags & 0x20) != 0) {
                if ((bullets->timer).current < bullets->ex_5_int_0) {
                  bullet_angle_cos =
                       reduce_angle(bullets->angle,supervisor.game_speed * bullets->ex_5_float_1);
                  bullets->angle = (float)bullet_angle_cos;
                  bullets->speed = supervisor.game_speed * bullets->ex_5_float_0 + bullets->speed;
                  bullet_speed = bullets->speed;
                  bullet_angle_cos = (float10)fcos((float10)bullets->angle);
                  bullet_angle_sin = (float10)fsin((float10)bullets->angle);
                  (bullets->velocity).x = (float)(bullet_angle_cos * (float10)bullet_speed);
                  (bullets->velocity).y = (float)(bullet_angle_sin * (float10)bullet_speed);
                }
                else {
                  bullets->ex_flags = bullets->ex_flags & 0xffdf;
                }
              }
            }
            else if ((bullets->timer).current < bullets->ex_5_int_0) {
              bullet_speed = supervisor.game_speed * (bullets->ex_4_acceleration).z;
              bullet_velocity = supervisor.game_speed * (bullets->ex_4_acceleration).y;
              (bullets->velocity).x =
                   supervisor.game_speed * (bullets->ex_4_acceleration).x + (bullets->velocity).x;
              (bullets->velocity).y = bullet_velocity + (bullets->velocity).y;
              (bullets->velocity).z = bullet_speed + (bullets->velocity).z;
              dVar1 = (double)(bullets->velocity).x;
              dVar2 = (double)(bullets->velocity).y;
              bullet_angle_cos =
                   (float10)_atan2(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),
                                   (int)((ulonglong)dVar1 >> 0x20));
              bullets->angle = (float)bullet_angle_cos;
            }
            else {
              bullets->ex_flags = bullets->ex_flags & 0xffef;
            }
          }
          else if ((bullets->timer).current < 0x11) {
            local_10 = __0f - (((float)(bullets->timer).current + (bullets->timer).subframe) * __0f)
                              / ram0x0046a2b4;
            bullet_speed = local_10 + bullets->speed;
            bullet_angle_cos = (float10)fcos((float10)bullets->angle);
            bullet_angle_sin = (float10)fsin((float10)bullets->angle);
            (bullets->velocity).x = (float)(bullet_angle_cos * (float10)bullet_speed);
            (bullets->velocity).y = (float)(bullet_angle_sin * (float10)bullet_speed);
          }
          else {
            bullets->ex_flags = bullets->ex_flags ^ 1;
          }
          if ((bullets->ex_flags & 0x40) == 0) {
            if ((bullets->ex_flags & 0x100) == 0) {
              if ((bullets->ex_flags & 0x80) == 0) {
                if ((bullets->ex_flags & 0x400) == 0) {
                  if (((bullets->ex_flags & 0x800) != 0) &&
                     (vm = GameManager::check_visibility
                                     ((bullets->pos).x,(bullets->pos).y,
                                      ((bullets->vms).vm_0.sprite)->width_px,
                                      ((bullets->vms).vm_0.sprite)->height_px), vm == 0)) {
                    if (((bullets->pos).x < (float)__0f) || (_84_0f <= (bullets->pos).x)) {
                      bullets->angle = -bullets->angle - _Pi_f;
                      bullet_angle_cos = reduce_angle(bullets->angle,0.0);
                      bullets->angle = (float)bullet_angle_cos;
                    }
                    if ((bullets->pos).y < (float)__0f) {
                      bullets->angle = -bullets->angle;
                    }
                    bullets->speed = bullets->dir_change_speed_arg;
                    local_10 = bullets->speed;
                    bullet_angle_cos = (float10)fcos((float10)bullets->angle);
                    bullet_angle_sin = (float10)fsin((float10)bullets->angle);
                    (bullets->velocity).x = (float)(bullet_angle_cos * (float10)local_10);
                    (bullets->velocity).y = (float)(bullet_angle_sin * (float10)local_10);
                    bullets->dir_change_num_times = bullets->dir_change_num_times + 1;
                    if (bullets->dir_change_max_times <= bullets->dir_change_num_times) {
                      bullets->ex_flags = bullets->ex_flags & 0xf7ff;
                    }
                  }
                }
                else {
                  vm = GameManager::check_visibility
                                 ((bullets->pos).x,(bullets->pos).y,
                                  ((bullets->vms).vm_0.sprite)->width_px,
                                  ((bullets->vms).vm_0.sprite)->height_px);
                  if (vm == 0) {
                    if (((bullets->pos).x < (float)__0f) || (_84_0f <= (bullets->pos).x)) {
                      bullets->angle = -bullets->angle - _Pi_f;
                      bullet_angle_cos = reduce_angle(bullets->angle,0.0);
                      bullets->angle = (float)bullet_angle_cos;
                    }
                    if (((bullets->pos).y < (float)__0f) || (_48_0f <= (bullets->pos).y)) {
                      bullets->angle = -bullets->angle;
                    }
                    bullets->speed = bullets->dir_change_speed_arg;
                    local_10 = bullets->speed;
                    bullet_angle_cos = (float10)fcos((float10)bullets->angle);
                    bullet_angle_sin = (float10)fsin((float10)bullets->angle);
                    (bullets->velocity).x = (float)(bullet_angle_cos * (float10)local_10);
                    (bullets->velocity).y = (float)(bullet_angle_sin * (float10)local_10);
                    bullets->dir_change_num_times = bullets->dir_change_num_times + 1;
                    if (bullets->dir_change_max_times <= bullets->dir_change_num_times) {
                      bullets->ex_flags = bullets->ex_flags & 0xfbff;
                    }
                  }
                }
              }
              else {
                if ((bullets->timer).current <
                    bullets->dir_change_interval * (bullets->dir_change_num_times + 1)) {
                  local_10 = bullets->speed -
                             ((((float)(bullets->timer).current + (bullets->timer).subframe) -
                              (float)(bullets->dir_change_interval * bullets->dir_change_num_times))
                             * bullets->speed) / (float)bullets->dir_change_interval;
                }
                else {
                  bullets->dir_change_num_times = bullets->dir_change_num_times + 1;
                  if (bullets->dir_change_max_times <= bullets->dir_change_num_times) {
                    bullets->ex_flags = bullets->ex_flags & 0xff7f;
                  }
                  bullet_angle_cos = Player::angle_to_player_from_point(&::player,&bullets->pos);
                  bullets->angle =
                       (float)(bullet_angle_cos + (float10)bullets->dir_change_rotation_arg);
                  bullets->speed = bullets->dir_change_speed_arg;
                  local_10 = bullets->speed;
                }
                bullet_angle_cos = (float10)fcos((float10)bullets->angle);
                bullet_angle_sin = (float10)fsin((float10)bullets->angle);
                (bullets->velocity).x = (float)(bullet_angle_cos * (float10)local_10);
                (bullets->velocity).y = (float)(bullet_angle_sin * (float10)local_10);
              }
            }
            else {
              if ((bullets->timer).current <
                  bullets->dir_change_interval * (bullets->dir_change_num_times + 1)) {
                local_10 = bullets->speed -
                           ((((float)(bullets->timer).current + (bullets->timer).subframe) -
                            (float)(bullets->dir_change_interval * bullets->dir_change_num_times)) *
                           bullets->speed) / (float)bullets->dir_change_interval;
              }
              else {
                bullets->dir_change_num_times = bullets->dir_change_num_times + 1;
                if (bullets->dir_change_max_times <= bullets->dir_change_num_times) {
                  bullets->ex_flags = bullets->ex_flags & 0xfeff;
                }
                bullets->angle = bullets->dir_change_rotation_arg;
                bullets->speed = bullets->dir_change_speed_arg;
                local_10 = bullets->speed;
              }
              bullet_angle_cos = (float10)fcos((float10)bullets->angle);
              bullet_angle_sin = (float10)fsin((float10)bullets->angle);
              (bullets->velocity).x = (float)(bullet_angle_cos * (float10)local_10);
              (bullets->velocity).y = (float)(bullet_angle_sin * (float10)local_10);
            }
          }
          else {
            if ((bullets->timer).current <
                bullets->dir_change_interval * (bullets->dir_change_num_times + 1)) {
              local_10 = bullets->speed -
                         ((((float)(bullets->timer).current + (bullets->timer).subframe) -
                          (float)(bullets->dir_change_interval * bullets->dir_change_num_times)) *
                         bullets->speed) / (float)bullets->dir_change_interval;
            }
            else {
              bullets->dir_change_num_times = bullets->dir_change_num_times + 1;
              if (bullets->dir_change_max_times <= bullets->dir_change_num_times) {
                bullets->ex_flags = bullets->ex_flags & 0xffbf;
              }
              bullets->angle = bullets->angle + bullets->dir_change_rotation_arg;
              bullets->speed = bullets->dir_change_speed_arg;
              local_10 = bullets->speed;
            }
            bullet_angle_cos = (float10)fcos((float10)bullets->angle);
            bullet_angle_sin = (float10)fsin((float10)bullets->angle);
            (bullets->velocity).x = (float)(bullet_angle_cos * (float10)local_10);
            (bullets->velocity).y = (float)(bullet_angle_sin * (float10)local_10);
          }
        }
        bullet_speed = supervisor.game_speed * (bullets->velocity).z;
        bullet_velocity = supervisor.game_speed * (bullets->velocity).y;
        (bullets->pos).x = supervisor.game_speed * (bullets->velocity).x + (bullets->pos).x;
        (bullets->pos).y = bullet_velocity + (bullets->pos).y;
        (bullets->pos).z = bullet_speed + (bullets->pos).z;
        vm = GameManager::check_visibility
                       ((bullets->pos).x,(bullets->pos).y,((bullets->vms).vm_0.sprite)->width_px,
                        ((bullets->vms).vm_0.sprite)->height_px);
        if (vm != 0) {
          bullets->field_5c0 = 0;
LAB_00415b6c:
          if (bullets->field_5c3 == 0) {
            local_8 = Player::check_bullet_collision
                                (&::player,&bullets->pos,(Float2 *)&(bullets->vms).field5_0x550);
            if (local_8 == 1) {
              bullets->field_5c3 = 1;
LAB_00415be8:
              local_8 = Player::__check_collision
                                  (&::player,&bullets->pos,(Float3 *)&(bullets->vms).field5_0x550);
              if ((local_8 != 0) && (bullets->state = 5, local_8 == 2)) {
                ItemManager::spawn_item(&item_manager,&bullets->pos,StarItem,true);
              }
            }
            else if (local_8 == 2) {
              bullets->state = 5;
              ItemManager::spawn_item(&item_manager,&bullets->pos,StarItem,true);
            }
          }
          else if (bullets->field_5c3 == '\x01') goto LAB_00415be8;
          AnmManager::run_anm(anm_manager_ptr,(AnmVm *)bullets);
          goto BulletState_default;
        }
        if ((((((bullets->ex_flags & 0x40) == 0) && ((bullets->ex_flags & 0x100) == 0)) &&
             ((bullets->ex_flags & 0x80) == 0)) &&
            (((bullets->ex_flags & 0x400) == 0 && ((bullets->ex_flags & 0x800) == 0)))) &&
           (bullets->field_5c0 == 0)) {
          bullet2 = bullets;
          for (vm = 0x171; vm != 0; vm = vm + -1) {
            (bullet2->vms).vm_0.rotation.x = 0.0;
            bullet2 = (Bullet *)&(bullet2->vms).vm_0.rotation.y;
          }
        }
        else {
          bullets->field_5c0 = bullets->field_5c0 + 1;
          if (bullets->field_5c0 < 0x100) goto LAB_00415b6c;
          pBVar5 = bullets;
          for (vm = 0x171; vm != 0; vm = vm + -1) {
            (pBVar5->vms).vm_0.rotation.x = 0.0;
            pBVar5 = (Bullet *)&(pBVar5->vms).vm_0.rotation.y;
          }
        }
      }
isLaser:
      bullets = bullets + 1;
    }
    lasers = (AnmVm *)this->lasers;
    for (i = 0; i < 64; i = i + 1) {
      if (lasers[2].current_time_in_script.current != 0) {
        lasers[2].angle_velocity.z =
             supervisor.game_speed * lasers[2].scale_interp_final_y + lasers[2].angle_velocity.z;
        if (lasers[2].scale_y < lasers[2].angle_velocity.z - lasers[2].angle_velocity.y) {
          lasers[2].angle_velocity.y = lasers[2].angle_velocity.z - lasers[2].scale_y;
        }
        if (lasers[2].angle_velocity.y < (float)__0f) {
          lasers[2].angle_velocity.y = 0.0;
        }
        local_20.y = lasers[2].scale_x / _2_0f;
        local_20.x = lasers[2].angle_velocity.z - lasers[2].angle_velocity.y;
        local_38.x = (lasers[2].angle_velocity.z - lasers[2].angle_velocity.y) / _2_0f +
                     lasers[2].angle_velocity.y + lasers[2].rotation.x;
        local_38.y = lasers[2].rotation.y;
        lasers->scale_x = lasers[2].scale_x / lasers->sprite->width_px;
        local_14 = lasers[2].angle_velocity.z - lasers[2].angle_velocity.y;
        lasers->scale_y = local_14 / lasers->sprite->height_px;
        (((AnmVm *)&lasers->rotation)->rotation).z = _Pi_2_f - lasers[2].angle_velocity.x;
        cVar3 = *(char *)((int)&lasers[2].matrix.field0_0x0 + 0x10);
        if (cVar3 == '\0') {
          if ((*(ushort *)((int)&lasers[2].matrix.field0_0x0 + 0xc) & 1) == 0) {
            if ((int)lasers[2].scale_interp_final_x < 0x1f) {
              laser_start_time = lasers[2].scale_interp_final_x;
            }
            else {
              laser_start_time = 4.203895e-44;
            }
            if ((int)lasers[2].scale_interp_final_x - (int)laser_start_time <
                (int)lasers[2].matrix.field0_0x0.field0._13) {
              local_14 = (((float)*(int32_t *)((int)&lasers[2].matrix.field0_0x0 + 8) +
                          lasers[2].matrix.field0_0x0.field0._12) * lasers[2].scale_x) /
                         (float)(int)lasers[2].scale_interp_final_x;
            }
            else {
              local_14 = 1.2;
            }
            lasers->scale_x = local_14 / ram0x0046a2b4;
            local_20.x = local_14 / _2_0f;
          }
          else {
            lVar6 = __ftol2((double)((((float)*(int32_t *)((int)&lasers[2].matrix.field0_0x0 + 8) +
                                      lasers[2].matrix.field0_0x0.field0._12) * _55_0f) /
                                    (float)(int)lasers[2].scale_interp_final_x));
            bullet_color = (int)lVar6;
            if (255 < bullet_color) {
              bullet_color = 255;
            }
            lasers->color = bullet_color << 0x18;
          }
          if ((int)lasers[2].uv_scroll_pos.x <= (int)lasers[2].matrix.field0_0x0.field0._13) {
            Player::__check_laser_collision
                      (&::player,&local_38,&local_20,&lasers[2].rotation,lasers[2].angle_velocity.x,
                       *(int32_t *)((int)&lasers[2].matrix.field0_0x0 + 8) % 0xc == 0);
          }
          if ((int)lasers[2].scale_interp_final_x <= (int)lasers[2].matrix.field0_0x0.field0._13) {
            lasers[2].matrix.field0_0x0.field0._13 = 0.0;
            lasers[2].matrix.field0_0x0.field0._12 = 0.0;
            lasers[2].matrix.field0_0x0.field0._11 = -NAN;
            *(char *)((int)&lasers[2].matrix.field0_0x0 + 0x10) =
                 *(char *)((int)&lasers[2].matrix.field0_0x0 + 0x10) + 1;
            goto LaserState_1;
          }
        }
        else {
          if (cVar3 == 1) {
LaserState_1:
            Player::__check_laser_collision
                      (&::player,&local_38,&local_20,&lasers[2].rotation,lasers[2].angle_velocity.x,
                       *(int32_t *)((int)&lasers[2].matrix.field0_0x0 + 8) % 0xc == 0);
            if ((int)lasers[2].matrix.field0_0x0.field0._13 < (int)lasers[2].uv_scroll_pos.y)
            goto LaserState_default;
            lasers[2].matrix.field0_0x0.field0._13 = 0.0;
            lasers[2].matrix.field0_0x0.field0._12 = 0.0;
            lasers[2].matrix.field0_0x0.field0._11 = -NAN;
            *(char *)((int)&lasers[2].matrix.field0_0x0 + 0x10) =
                 *(char *)((int)&lasers[2].matrix.field0_0x0 + 0x10) + 1;
            if (lasers[2].current_time_in_script.previous == 0) {
              lasers[2].current_time_in_script.current = 0;
              goto LAB_00415e08;
            }
          }
          else if (cVar3 != 2) goto LaserState_default;
          if ((*(ushort *)((int)&lasers[2].matrix.field0_0x0 + 0xc) & 1) == 0) {
            if (0 < lasers[2].current_time_in_script.previous) {
              local_14 = lasers[2].scale_x -
                         (((float)*(int32_t *)((int)&lasers[2].matrix.field0_0x0 + 8) +
                          lasers[2].matrix.field0_0x0.field0._12) * lasers[2].scale_x) /
                         (float)lasers[2].current_time_in_script.previous;
              lasers->scale_x = local_14 / ram0x0046a2b4;
              local_20.x = local_14 / _2_0f;
            }
          }
          else {
            lVar6 = __ftol2((double)((((float)*(int32_t *)((int)&lasers[2].matrix.field0_0x0 + 8) +
                                      lasers[2].matrix.field0_0x0.field0._12) * _55_0f) /
                                    (float)(int)lasers[2].scale_interp_final_x));
            bullet_color = (int)lVar6;
            if (0xff < bullet_color) {
              bullet_color = 0xff;
            }
            lasers->color = bullet_color << 0x18;
          }
          if ((int)lasers[2].matrix.field0_0x0.field0._13 <
              (int)lasers[2].current_time_in_script.subframe) {
            Player::__check_laser_collision
                      (&::player,&local_38,&local_20,&lasers[2].rotation,lasers[2].angle_velocity.x,
                       *(int32_t *)((int)&lasers[2].matrix.field0_0x0 + 8) % 0xc == 0);
          }
          if (lasers[2].current_time_in_script.previous <=
              (int)lasers[2].matrix.field0_0x0.field0._13) {
            lasers[2].current_time_in_script.current = 0;
            goto LAB_00415e08;
          }
        }
LaserState_default:
        if (_40_0f <= lasers[2].angle_velocity.y) {
          lasers[2].current_time_in_script.current = 0;
        }
        lasers[2].matrix.field0_0x0.field0._11 = lasers[2].matrix.field0_0x0.field0._13;
        Supervisor::tick_timer
                  (&supervisor,(int *)&lasers[2].matrix.field0_0x0.field0._13,
                   &lasers[2].matrix.field0_0x0.field0._12);
        AnmManager::run_anm(anm_manager_ptr,lasers);
      }
LAB_00415e08:
      lasers = (AnmVm *)(lasers[2].matrix.field0_0x0.m[1] + 1);
    }
    (this->timer).previous = (this->timer).current;
    Supervisor::tick_timer(&supervisor,&(this->timer).current,&(this->timer).subframe);
  }
  return 1;
}

