
void __fastcall Enemy::enforce_move_limit(Enemy *enemy)

{
  if ((enemy->flags_3 & 1) != 0) {
    if ((enemy->lower_move_limit).x <= (enemy->position).x) {
      if ((enemy->upper_move_limit).x < (enemy->position).x) {
        (enemy->position).x = (enemy->upper_move_limit).x;
      }
    }
    else {
      (enemy->position).x = (enemy->lower_move_limit).x;
    }
    if ((enemy->lower_move_limit).y <= (enemy->position).y) {
      if ((enemy->upper_move_limit).y < (enemy->position).y) {
        (enemy->position).y = (enemy->upper_move_limit).y;
      }
    }
    else {
      (enemy->position).y = (enemy->lower_move_limit).y;
    }
  }
  return;
}

