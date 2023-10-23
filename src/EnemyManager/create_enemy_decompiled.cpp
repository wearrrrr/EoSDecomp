
float * __thiscall
EnemyManager::create_enemy
          (EnemyManager *this,word sub_id,Float3 *pos,int life,byte item_drop,int score)

{
  int i;
  Enemy *enemy_template;
  Enemy *enemy_ptr;
  Enemy *enemies;
  int local_8;
  
  enemies = this->enemies;
  local_8 = 0;
  while( true ) {
    if (0xff < local_8) {
      return (float *)enemies;
    }
    if (-1 < enemies->flags_1) break;
    local_8 = local_8 + 1;
    enemies = enemies + 1;
  }
  enemy_template = &this->template;
  enemy_ptr = enemies;
  for (i = 946; i != 0; i = i + -1) {
    (enemy_ptr->primary_vm).rotation.x = (enemy_template->primary_vm).rotation.x;
    enemy_template = (Enemy *)&(enemy_template->primary_vm).rotation.y;
    enemy_ptr = (Enemy *)&(enemy_ptr->primary_vm).rotation.y;
  }
  if (-1 < (short)life) {
    enemies->life = (int)(short)life;
  }
  (enemies->position).x = pos->x;
  (enemies->position).y = pos->y;
  (enemies->position).z = pos->z;
  EnemyController::init_sub_context
            ((EnemyController *)&enemy_manager,&enemies->current_context,sub_id);
  EnemyController::run_ecl((EnemyController *)&enemy_manager,enemies);
  enemies->color_CFC = (enemies->primary_vm).color;
  enemies->item_drop = item_drop;
  if (-1 < (short)life) {
    enemies->life = (int)(short)life;
  }
  if (-1 < score) {
    enemies->score = score;
  }
  enemies->max_life = enemies->life;
  return (float *)enemies;
}

