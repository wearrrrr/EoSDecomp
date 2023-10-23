
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Player::bomb_on_draw(Player *player)

{
  float fVar1;
  longlong lVar2;
  int local_38;
  int local_2c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_18 = 0x42000000;
  local_14 = 0x41800000;
  local_10 = 0x43d00000;
  local_c = 0x43e80000;
  if ((player->player_inner).timer.current < 60) {
    fVar1 = (((float)(player->player_inner).timer.current + (player->player_inner).timer.subframe) *
            _176_0f) / _60_0f;
    if (fVar1 < _176_0f) {
      lVar2 = __ftol2((double)fVar1);
      local_2c = (int)lVar2;
    }
    else {
      local_2c = 176;
    }
    local_8 = local_2c;
  }
  else if ((player->player_inner).timer.current < (player->player_inner).dword_4 + -60) {
    local_8 = 176;
  }
  else {
    fVar1 = (((float)(player->player_inner).dword_4 -
             ((float)(player->player_inner).timer.current + (player->player_inner).timer.subframe))
            * _176_0f) / _60_0f;
    if ((float)__0f <= fVar1) {
      lVar2 = __ftol2((double)fVar1);
      local_38 = (int)lVar2;
    }
    else {
      local_38 = 0;
    }
    local_8 = local_38;
  }
  __sub_42F8B0(&local_18,local_8 << 0x18);
  return;
}

