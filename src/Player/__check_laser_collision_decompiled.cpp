
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
Player::__check_laser_collision
          (Player *this,Float3 *param_1,Float3 *param_2,Float3 *position,float angle,
          bool allow_graze)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined3 in_stack_00000015;
  float player_x;
  float player_y;
  float player_z;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  player_z = (this->position).z - position->z;
  player_y = (this->position).y - position->y;
  player_x = (this->position).x - position->x;
  __sub_41E8D0((void *)angle,&local_1c,&player_x);
  local_18 = local_18 + position->y;
  local_1c = local_1c + position->x;
  local_8 = (position->z + 0.0) - (this->float3_488).z;
  local_c = local_18 - (this->float3_488).y;
  local_10 = local_1c - (this->float3_488).x;
  fVar1 = local_18 + (this->float3_488).y;
  fVar2 = local_1c + (this->float3_488).x;
  fVar3 = _1_0f / _2_0f;
  player_z = param_1->z - fVar3 * param_2->z;
  player_y = param_1->y - fVar3 * param_2->y;
  player_x = param_1->x - fVar3 * param_2->x;
  fVar3 = _1_0f / _2_0f;
  local_14 = fVar3 * param_2->z + param_1->z;
  local_18 = fVar3 * param_2->y + param_1->y;
  local_1c = fVar3 * param_2->x + param_1->x;
  if ((((local_1c < local_10) || (fVar2 < player_x)) || (local_18 < local_c)) || (fVar1 < player_y))
  {
    if (_allow_graze == 0) {
      uVar4 = 0;
    }
    else {
      player_x = player_x - _48_0f;
      player_y = player_y - _48_0f;
      local_1c = local_1c + _48_0f;
      local_18 = local_18 + _48_0f;
      if (((local_1c < local_10) || (fVar2 < player_x)) ||
         ((local_18 < local_c || (fVar1 < player_y)))) {
        uVar4 = 0;
      }
      else if ((this->byte_9E0 == '\x02') || (this->byte_9E0 == '\x01')) {
        uVar4 = 0;
      }
      else {
        __sub_427630(this,&this->position);
        uVar4 = 2;
      }
    }
  }
  else if (this->byte_9E0 == '\0') {
    die(this);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

