
void __fastcall Enemy::main_movement(Enemy *enemy)

{
  if (((byte)enemy->flags_1 >> 6 & 1) == 0) {
    (enemy->position).x = supervisor.game_speed * (enemy->axis_speed).x + (enemy->position).x;
  }
  else {
    (enemy->position).x = (enemy->position).x - supervisor.game_speed * (enemy->axis_speed).x;
  }
  (enemy->position).y = supervisor.game_speed * (enemy->axis_speed).y + (enemy->position).y;
  (enemy->position).z = supervisor.game_speed * (enemy->axis_speed).z + (enemy->position).z;
  return;
}

