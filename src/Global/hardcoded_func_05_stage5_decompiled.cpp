
void __cdecl hardcoded_func_05_stage5(Enemy *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined extraout_DL;
  undefined extraout_DL_00;
  EnemyBulletShooter *pEVar4;
  float10 fVar5;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  EnemyBulletShooter local_64;
  int local_c;
  uint local_8;
  
  if ((this->current_context).int_var_2 % 9 == 0) {
    pEVar4 = &local_64;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      pEVar4->sprite = 0;
      pEVar4->color = 0;
      pEVar4 = (EnemyBulletShooter *)&pEVar4->pos;
    }
    local_8 = (this->current_context).int_var_2 / 9;
    local_64.sprite = 8;
    local_64.aim_mode = 0;
    if (game_manager.difficulty < 2) {
      local_64.count_1 = 1;
    }
    else {
      local_64.count_1 = 3;
    }
    local_64.count_2 = 1;
    local_64.angle_2 = 0.5235988;
    local_64.field13_0x4a = (undefined  [2])0x0;
    local_64.flags = 0;
    local_78 = __5f - ((float)local_8 * __5f) / __0f;
    local_94 = player.position.z - (this->position).z;
    local_98 = player.position.y - (this->position).y;
    local_9c = player.position.x - (this->position).x;
    _D3DXVec3Normalize_8(&local_84,&local_9c);
    if ((local_8 & 1) == 0) {
      local_90 = 256.0;
    }
    else {
      local_90 = -256.0;
    }
    local_9c = local_9c * local_78;
    local_98 = local_98 * local_78;
    local_94 = local_94 * local_78;
    local_6c = local_94 + local_7c * local_90;
    local_70 = local_98 + local_80 * local_90;
    local_74 = local_9c + local_84 * local_90;
    local_7c = -(local_7c * local_90);
    local_80 = -(local_80 * local_90);
    local_84 = -(local_84 * local_90);
    local_78 = 0.7853982;
    fVar5 = (float10)_cos(local_80,SUB41(local_7c,0),0);
    local_8c = (float)fVar5;
    fVar5 = (float10)_sin(extraout_ECX,extraout_DL,SUB81((double)local_78,0));
    fVar2 = local_80;
    local_68 = (float)fVar5;
    local_9c = local_84;
    local_98 = local_80;
    local_94 = local_7c;
    fVar1 = local_80 * local_68;
    local_80 = local_80 * local_8c + -local_84 * local_68;
    local_78 = -0.1745329;
    local_84 = fVar1 + local_84 * local_8c;
    fVar5 = (float10)_cos(fVar2,SUB41(local_7c,0),0);
    local_8c = (float)fVar5;
    fVar5 = (float10)_sin(extraout_ECX_00,extraout_DL_00,SUB81((double)local_78,0));
    local_68 = (float)fVar5;
    local_64.angle_1 = 0.0;
    local_88 = -0.7853982;
    for (local_c = 0; local_c < 9; local_c = local_c + 1) {
      local_9c = local_84;
      local_98 = local_80;
      local_94 = local_7c;
      fVar1 = local_80 * local_68 + local_84 * local_8c;
      local_80 = local_80 * local_8c + -local_84 * local_68;
      local_64.pos.z = local_7c + (this->position).z + local_6c;
      local_64.pos.y = local_80 + (this->position).y + local_70;
      local_64.pos.x = fVar1 + (this->position).x + local_74;
      local_64.speed_1 = 2.0;
      if (((local_8 & 1) != 0) && (game_manager.difficulty < 2)) {
        local_64.angle_1 = local_88;
      }
      local_64.color = 3;
      local_84 = fVar1;
      BulletManager::shoot_bullets(&bullet_manager,&local_64);
      local_88 = local_88 + _10?_r_f;
    }
    SoundManager::play_sound_centered(&sound_manager,7,0);
  }
  (this->current_context).int_var_2 = (this->current_context).int_var_2 + 1;
  return;
}

