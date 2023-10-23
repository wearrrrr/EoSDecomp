
int __fastcall Enemy::check_life_callback(Enemy *enemy)

{
  int result;
  int i;
  Enemy *enemies;
  
  if (enemy->life < enemy->life_callback_threshold) {
    enemy->life = enemy->life_callback_threshold;
    EnemyController::init_sub_context
              ((EnemyController *)&enemy_manager,&enemy->current_context,
               *(short *)&enemy->life_callback_sub);
    enemy->life_callback_threshold = -1;
    enemy->timer_callback_sub = enemy->death_callback_sub;
    enemy->bullet_rank_speed_low = -0.5;
    enemy->bullet_rank_speed_high = 0.5;
    enemy->bullet_rank_amount1_low = 0;
    enemy->bullet_rank_amount1_high = 0;
    enemy->bullet_rank_amount2_low = 0;
    enemy->bullet_rank_amount2_high = 0;
    enemy->stack_depth = 0;
    enemies = (Enemy *)&enemy_manager.enemies[0x33].current_context.func_set_func;
    for (i = 0; i < 256; i = i + 1) {
      if ((((enemies->flags_1 < '\0') && ((enemies->flags_2 >> 3 & 1) == 0)) &&
          (enemies->life = 0, (enemies->flags_2 & 1) == 0)) && (-1 < enemies->death_callback_sub)) {
        EnemyController::init_sub_context
                  ((EnemyController *)&enemy_manager,&enemies->current_context,
                   *(short *)&enemies->death_callback_sub);
        enemies->death_callback_sub = -1;
      }
      enemies = enemies + 1;
    }
    result = 1;
  }
  else {
    result = 0;
  }
  return result;
}

