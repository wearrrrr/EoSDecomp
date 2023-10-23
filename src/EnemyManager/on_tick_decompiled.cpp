
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl EnemyManager::on_tick(EnemyManager *enemy_manager)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  Enemy *enemies;
  int local_20;
  Float3 local_1c;
  uint local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  run_timeline(enemy_manager);
  enemies = enemy_manager->enemies;
  enemy_manager->enemy_count_real = 0;
  local_10 = 0;
  do {
    if (0xff < (int)local_10) {
      (enemy_manager->timeline_time).subframe = (float)enemy_manager[1].stg_ecl_anm_filename;
      Supervisor::tick_timer
                (&supervisor,(int *)(enemy_manager + 1),
                 (float *)&(enemy_manager->timeline_time).current);
      return 1;
    }
    if (-1 < enemies->flags_1) goto next_enemy;
    enemy_manager->enemy_count_real = enemy_manager->enemy_count_real + 1;
    Enemy::main_movement(enemies);
    Enemy::enforce_move_limit(enemies);
    if (((enemies->flags_2 >> 2 & 1) == 0) &&
       (iVar2 = GameManager::check_visibility
                          ((enemies->position).x,(enemies->position).y,
                           ((enemies->primary_vm).sprite)->width_px,
                           ((enemies->primary_vm).sprite)->height_px), iVar2 != 0)) {
      enemies->flags_2 = enemies->flags_2 | 4;
    }
    if (((enemies->flags_2 >> 2 & 1) == 1) &&
       (iVar2 = GameManager::check_visibility
                          ((enemies->position).x,(enemies->position).y,
                           ((enemies->primary_vm).sprite)->width_px,
                           ((enemies->primary_vm).sprite)->height_px), iVar2 == 0)) {
      enemies->flags_1 = enemies->flags_1 & 0x7f;
      Enemy::kill(enemies);
      goto next_enemy;
    }
    if (-1 < enemies->life_callback_threshold) {
      Enemy::check_life_callback(enemies);
    }
    if (-1 < enemies->timer_callback_threshold) {
      Enemy::__check_timer_callback(enemies);
    }
    iVar2 = EnemyController::run_ecl((EnemyController *)&::enemy_manager,enemies);
    if (iVar2 == -1) {
      enemies->flags_1 = enemies->flags_1 & 0x7f;
      Enemy::kill(enemies);
      goto next_enemy;
    }
    Enemy::enforce_move_limit(enemies);
    (enemies->primary_vm).color = enemies->color_CFC;
    AnmManager::run_anm(anm_manager_ptr,&enemies->primary_vm);
    enemies->color_CFC = (enemies->primary_vm).color;
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if ((-1 < enemies->vms[local_20].anm_file_index) &&
         (iVar2 = AnmManager::run_anm(anm_manager_ptr,enemies->vms + local_20), iVar2 != 0)) {
        enemies->vms[local_20].anm_file_index = -1;
      }
    }
    local_8 = 0;
    if (((enemies->flags_2 >> 2 & 1) == 0) || ((enemies->flags_3 >> 3 & 1) != 0)) goto LAB_00412dbc;
    iVar2 = enemies->life;
    if (((enemies->flags_2 >> 1 & 1) != 0) && ((enemies->flags_2 & 1) != 0)) {
      local_1c.x = _1_0f / __5f;
      local_1c.z = local_1c.x * (enemies->hitbox_dimensions).z;
      local_1c.y = local_1c.x * (enemies->hitbox_dimensions).y;
      local_1c.x = local_1c.x * (enemies->hitbox_dimensions).x;
      iVar3 = Player::__check_collision(&::player,&enemies->position,&local_1c);
      if (((iVar3 == 1) && ((enemies->flags_2 & 1) != 0)) && ((enemies->flags_2 >> 3 & 1) == 0)) {
        enemies->life = enemies->life + -10;
      }
    }
    if ((enemies->flags_2 & 1) != 0) {
      local_c = Player::check_bullet_collisions
                          (&::player,&enemies->position,&enemies->hitbox_dimensions,&local_8);
      if (0x45 < local_c) {
        local_c = 0x46;
      }
      game_manager.score = (local_c / 5) * 10 + game_manager.score;
      if (enemy_manager->spellcard_capture != 0) {
        if (local_8 == 0) {
          if (local_c < 8) {
            if (local_c != 0) {
              local_c = 1;
            }
          }
          else {
            local_c = local_c / 7;
          }
        }
        else if (*(int *)enemy_manager->field13_0xee5d4 == 0) {
          local_c = 0;
        }
        else if (local_c < 4) {
          if (local_c != 0) {
            local_c = 1;
          }
        }
        else {
          local_c = local_c / 3;
        }
      }
      if ((enemies->flags_2 >> 4 & 1) != 0) {
        enemies->life = enemies->life - local_c;
      }
      if (::player.position_of_last_enemy_hit.y < (enemies->position).y) {
        ::player.position_of_last_enemy_hit.x = (enemies->position).x;
        ::player.position_of_last_enemy_hit.y = (enemies->position).y;
        ::player.position_of_last_enemy_hit.z = (enemies->position).z;
      }
    }
    if ((0 < enemies->life) || ((enemies->flags_2 & 1) == 0)) goto LAB_00412ce2;
    enemies->life_callback_threshold = -1;
    enemies->timer_callback_threshold = -1;
    switch(enemies->flags_2 >> 5) {
    case '\0':
      game_manager.score = game_manager.score + enemies->score;
      enemies->flags_1 = enemies->flags_1 & 0x7f;
      goto LAB_00412a4d;
    case '\x01':
      game_manager.score = game_manager.score + enemies->score;
      enemies->flags_2 = enemies->flags_2 & 0xfe;
LAB_00412a4d:
      if ((enemies->flags_2 >> 3 & 1) != 0) {
        gui.boss_present = false;
        Enemy::__deactivate_effects(enemies);
      }
_switch_EnemyManager__on_tick_case_2:
      if ((char)enemies->item_drop < '\0') {
        if (enemies->item_drop == 0xff) {
          if ((uint)enemy_manager->random_item_spawn_index % 3 == 0) {
            EffectManager::spawn_effect
                      ((EffectManager *)
                       ((int)&::enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),
                       enemies->death_anm_two + 4,&enemies->position,6,0xffffffff);
            ItemManager::spawn_item
                      (&item_manager,&enemies->position,
                       (ushort)(byte)(&DAT_00476338)[enemy_manager->random_item_table_index],
                       SUB41(local_8,0));
            enemy_manager->random_item_table_index = enemy_manager->random_item_table_index + 1;
            if (0x1f < enemy_manager->random_item_table_index) {
              enemy_manager->random_item_table_index = 0;
            }
          }
          enemy_manager->random_item_spawn_index = enemy_manager->random_item_spawn_index + 1;
        }
      }
      else {
        EffectManager::spawn_effect
                  ((EffectManager *)((int)&::enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c)
                   ,enemies->death_anm_two + 4,&enemies->position,3,0xffffffff);
        ItemManager::spawn_item
                  (&item_manager,&enemies->position,(short)(char)enemies->item_drop,SUB41(local_8,0)
                  );
      }
      if (((enemies->flags_2 >> 3 & 1) != 0) && (_ENEMY_MANAGER___spellcard_capture == 0)) {
        BulletManager::cancel_bullets_spell_bonus(&bullet_manager,0x3200,0);
      }
      enemies->life = 0;
      break;
    case '\x02':
      goto _switch_EnemyManager__on_tick_case_2;
    case '\x03':
      enemies->life = 1;
      enemies->flags_2 = enemies->flags_2 & 0xef;
      enemies->flags_2 = enemies->flags_2 & 0x1f;
      gui.boss_present = false;
      EffectManager::spawn_effect
                ((EffectManager *)((int)&::enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),
                 (uint)enemies->death_anm_one,&enemies->position,1,0xffffffff);
      EffectManager::spawn_effect
                ((EffectManager *)((int)&::enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),
                 (uint)enemies->death_anm_one,&enemies->position,1,0xffffffff);
      EffectManager::spawn_effect
                ((EffectManager *)((int)&::enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),
                 (uint)enemies->death_anm_one,&enemies->position,1,0xffffffff);
    }
    uVar4 = local_10 & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    SoundManager::play_sound_centered(&sound_manager,uVar4 + 2,0);
    EffectManager::spawn_effect
              ((EffectManager *)((int)&::enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),
               (uint)enemies->death_anm_one,&enemies->position,1,0xffffffff);
    EffectManager::spawn_effect
              ((EffectManager *)((int)&::enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),
               enemies->death_anm_two + 4,&enemies->position,4,0xffffffff);
    if (-1 < enemies->death_callback_sub) {
      enemies->bullet_rank_speed_low = -0.5;
      enemies->bullet_rank_speed_high = 0.5;
      enemies->bullet_rank_amount1_low = 0;
      enemies->bullet_rank_amount1_high = 0;
      enemies->bullet_rank_amount2_low = 0;
      enemies->bullet_rank_amount2_high = 0;
      enemies->stack_depth = 0;
      EnemyController::init_sub_context
                ((EnemyController *)&::enemy_manager,&enemies->current_context,
                 *(short *)&enemies->death_callback_sub);
      enemies->death_callback_sub = -1;
    }
LAB_00412ce2:
    if (((enemies->flags_2 >> 3 & 1) != 0) &&
       (bVar1 = Gui::msg_is_active(&gui), CONCAT31(extraout_var,bVar1) == 0)) {
      gui.boss_healthbar_24 = (float)enemies->life / (float)enemies->max_life;
    }
    if (enemies->byte_E41 == '\0') {
      if (enemies->life < iVar2) {
        SoundManager::play_sound_centered(&sound_manager,0x14,0);
        (enemies->primary_vm).flags = (enemies->primary_vm).flags | 8;
        enemies->byte_E41 = '\x04';
      }
      else {
        (enemies->primary_vm).flags = (enemies->primary_vm).flags & 0xfffffff7;
      }
    }
    else {
      enemies->byte_E41 = enemies->byte_E41 + 0xff;
      (enemies->primary_vm).flags = (enemies->primary_vm).flags & 0xfffffff7;
    }
LAB_00412dbc:
    Enemy::spin_effects(enemies);
    if (game_manager.__byte_2c == '\0') {
      (enemies->boss_timer).previous = (enemies->boss_timer).current;
      Supervisor::tick_timer
                (&supervisor,&(enemies->boss_timer).current,&(enemies->boss_timer).subframe);
    }
next_enemy:
    local_10 = local_10 + 1;
    enemies = enemies + 1;
  } while( true );
}

