
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall Player::__sub_428680(Player *this,Float3 *position)

{
  float10 fVar1;
  double double_x;
  double double_y;
  float player_x;
  float player_y;
  
  player_x = position->x - (this->position).x;
  player_y = position->y - (this->position).y;
  if ((player_y == (float)__0f) && (player_x == (float)__0f)) {
    fVar1 = (float10)_Pi_2_f;
  }
  else {
    double_x = (double)player_x;
    double_y = (double)player_y;
    fVar1 = (float10)_atan2(SUB84(double_y,0),(int)((ulonglong)double_y >> 0x20),SUB84(double_x,0),
                            (int)((ulonglong)double_x >> 0x20));
    fVar1 = (float10)(float)fVar1;
  }
  return fVar1;
}

