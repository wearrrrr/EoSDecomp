
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall Player::check_bullet_collision(Player *this,Float3 *position,Float2 *size)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  PlayerRect *player_rect;
  int local_14;
  
  fVar1 = (position->x - size->x / _2_0f) - _0_0f;
  fVar2 = (position->y - size->y / _2_0f) - _0_0f;
  fVar3 = size->x / _2_0f + position->x + _0_0f;
  fVar4 = size->y / _2_0f + position->y + _0_0f;
  player_rect = this->player_rect_array_8B8;
  local_14 = 0;
  do {
    if (15 < local_14) {
      if ((this->byte_9E0 == '\x02') || (this->byte_9E0 == '\x01')) {
        uVar5 = 0;
      }
      else if ((((fVar3 < (this->float3_458).x) || ((this->float3_464).x < fVar1)) ||
               (fVar4 < (this->float3_458).y)) || ((this->float3_464).y < fVar2)) {
        uVar5 = 0;
      }
      else {
        __sub_427630(this,position);
        uVar5 = 1;
      }
      return uVar5;
    }
    if ((player_rect->size).x != (float)__0f) {
      if ((((player_rect->pos).x - (player_rect->size).x / _2_0f <= fVar3) &&
          (fVar1 <= (player_rect->size).x / _2_0f + (player_rect->pos).x)) &&
         (((player_rect->pos).y - (player_rect->size).y / _2_0f <= fVar4 &&
          (fVar2 <= (player_rect->size).y / _2_0f + (player_rect->pos).y)))) {
        return 2;
      }
    }
    local_14 = local_14 + 1;
    player_rect = player_rect + 1;
  } while( true );
}

