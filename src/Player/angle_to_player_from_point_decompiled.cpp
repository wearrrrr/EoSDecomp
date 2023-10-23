
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall Player::angle_to_player_from_point(Player *this,Float3 *position)

{
  double dVar1;
  double dVar2;
  float10 result;
  float player_x;
  float player_y;
  
  player_x = (this->position).x - position->x;
  player_y = (this->position).y - position->y;
  if ((player_y == (float)__0f) && (player_x == (float)__0f)) {
    result = (float10)_Pi_2_f;
  }
  else {
    dVar1 = (double)player_x;
    dVar2 = (double)player_y;
    result = (float10)_atan2(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),
                             (int)((ulonglong)dVar1 >> 0x20));
    result = (float10)(float)result;
  }
  return result;
}

