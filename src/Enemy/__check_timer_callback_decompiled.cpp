
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Enemy::__check_timer_callback(Enemy *enemy)

{
  undefined4 uVar1;
  int local_c;
  int local_8;
  
  if ((enemy->flags_2 >> 3 & 1) != 0) {
    gui.read_by_spellcard_ecl =
         (enemy->timer_callback_threshold - (enemy->boss_timer).current) / 0x3c;
  }
  if ((enemy->boss_timer).current < enemy->timer_callback_threshold) {
    uVar1 = 0;
  }
  else {
    if (0 < enemy->life_callback_threshold) {
      enemy->life = enemy->life_callback_threshold;
      enemy->life_callback_threshold = -1;
    }
    EnemyController::init_sub_context
              ((EnemyController *)&enemy_manager,&enemy->current_context,
               *(short *)&enemy->timer_callback_sub);
    enemy->timer_callback_threshold = -1;
    enemy->timer_callback_sub = enemy->death_callback_sub;
    (enemy->boss_timer).current = 0;
    (enemy->boss_timer).subframe = 0.0;
    (enemy->boss_timer).previous = -999;
    if ((enemy->flags_3 >> 4 & 1) == 0) {
      _enemy_manager = 0;
      if (_ENEMY_MANAGER___spellcard_capture != 0) {
        _ENEMY_MANAGER___spellcard_capture = _ENEMY_MANAGER___spellcard_capture + 1;
      }
      BulletManager::cancel_bullets(&bullet_manager,0);
    }
    local_8 = 0x4b8898;
    for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
      if ((((*(char *)(local_8 + 0xe50) < '\0') && ((*(byte *)(local_8 + 0xe51) >> 3 & 1) == 0)) &&
          (*(undefined4 *)(local_8 + 0xce4) = 0, (*(byte *)(local_8 + 0xe51) & 1) == 0)) &&
         (-1 < *(int *)(local_8 + 0xc44))) {
        EnemyController::init_sub_context
                  ((EnemyController *)&enemy_manager,(EnemyEclContext *)(local_8 + 0x990),
                   *(short *)(local_8 + 0xc44));
        *(undefined4 *)(local_8 + 0xc44) = 0xffffffff;
      }
      local_8 = local_8 + 0xec8;
    }
    enemy->bullet_rank_speed_low = -0.5;
    enemy->bullet_rank_speed_high = 0.5;
    enemy->bullet_rank_amount1_low = 0;
    enemy->bullet_rank_amount1_high = 0;
    enemy->bullet_rank_amount2_low = 0;
    enemy->bullet_rank_amount2_high = 0;
    enemy->stack_depth = 0;
    uVar1 = 1;
  }
  return uVar1;
}

