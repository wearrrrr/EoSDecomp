
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl hardcoded_func_07_stage6(Enemy *this,EclRawInstr *instruction)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int i;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  undefined4 extraout_ECX_02;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined uVar5;
  undefined extraout_DL_01;
  EnemyLaserShooter *pEVar6;
  float10 fVar7;
  int local_e0;
  float local_dc [24];
  float local_7c;
  float local_78;
  int local_74;
  float local_70;
  int k;
  int32_t args;
  float local_64;
  int j;
  EnemyLaserShooter local_5c;
  
  pEVar6 = &local_5c;
  for (i = 21; i != 0; i = i + -1) {
    pEVar6->sprite = 0;
    pEVar6->color = 0;
    pEVar6 = (EnemyLaserShooter *)&pEVar6->position;
  }
  local_e0 = 8;
  do {
    local_e0 = local_e0 + -1;
  } while (-1 < local_e0);
  args = instruction->args[1];
  fVar7 = Rng::randf_0_to_1(&Rng);
  local_7c = (float)(fVar7 * (float10)_Pi_2_f);
  for (local_74 = 0; local_74 < 2; local_74 = local_74 + 1) {
    if (local_74 == 0) {
      local_70 = 0.7853982;
      local_78 = __Pi_f;
    }
    else {
      local_70 = -0.7853982;
      local_78 = _Pi_7_8_f;
    }
    local_78 = local_78 + local_7c;
    local_64 = 32.0;
    for (j = 0; i = j, j < 8; j = j + 1) {
      local_dc[j * 3] = (this->position).x;
      fVar1 = (this->position).y;
      local_dc[i * 3 + 1] = fVar1;
      fVar2 = (this->position).z;
      local_dc[i * 3 + 2] = fVar2;
      i = j;
      fVar7 = (float10)_cos(fVar2,SUB41(fVar1,0),SUB81((double)local_78,0));
      cVar3 = (char)j;
      local_dc[j * 3] = (float)fVar7 * local_64 + local_dc[i * 3];
      i = j;
      fVar7 = (float10)_sin(extraout_ECX,cVar3 * '\f',SUB81((double)local_78,0));
      local_dc[j * 3 + 1] = (float)fVar7 * local_64 + local_dc[i * 3 + 1];
      local_78 = local_78 + Pi_4_f;
    }
    if (local_74 == 0) {
      local_78 = __Pi_f + local_7c;
    }
    else {
      local_78 = _Pi_7_8_f + local_7c;
    }
    for (k = 0; k < 3; k = k + 1) {
      if (k < 2) {
        local_64 = 112.0;
      }
      else {
        local_64 = 480.0;
      }
      for (j = 0; j < 8; j = j + 1) {
        local_5c.position.x = local_dc[j * 3];
        local_5c.position.y = local_dc[j * 3 + 1];
        local_5c.position.z = local_dc[j * 3 + 2];
        local_5c.sprite = 1;
        if (args == 0) {
          if (game_manager.difficulty < 2) {
            local_5c.color = 2;
          }
          else {
            local_5c.color = 8;
          }
          local_5c.angle = local_78;
          local_5c.speed = 0.0;
          local_5c.start_offset = 0.0;
          if (game_manager.difficulty < 2) {
            local_5c.width = 28.0;
            local_5c.end_offset = local_64;
          }
          else {
            local_5c.start_length = 440.0;
            local_5c.width = 20.0;
            local_5c.end_offset = local_5c.start_length;
          }
          local_5c.start_time = k * 16 + 60;
          local_5c.duration = k * -16 + 90;
          local_5c.stop_time = 0x10;
          local_5c.graze_delay = 0x32;
          local_5c.graze_distance = 0x10;
          local_5c.dword_4C = 2;
          local_5c.type = 1;
          local_5c.start_length = local_5c.end_offset;
          BulletManager::shoot_lasers(&bullet_manager,&local_5c);
          uVar4 = extraout_ECX_00;
          uVar5 = extraout_DL;
        }
        else {
          (this->bullet_data).pos.x = local_dc[j * 3];
          (this->bullet_data).pos.y = local_5c.position.y;
          (this->bullet_data).pos.z = local_5c.position.z;
          BulletManager::shoot_bullets(&bullet_manager,&this->bullet_data);
          uVar4 = extraout_ECX_01;
          uVar5 = extraout_DL_00;
        }
        i = j;
        fVar7 = (float10)_cos(uVar4,uVar5,SUB81((double)local_78,0));
        local_dc[j * 3] = (float)fVar7 * local_64 + local_dc[i * 3];
        i = j;
        fVar7 = (float10)_sin(extraout_ECX_02,extraout_DL_01,SUB81((double)local_78,0));
        local_dc[j * 3 + 1] = (float)fVar7 * local_64 + local_dc[i * 3 + 1];
        local_78 = local_78 + Pi_4_f;
      }
      local_78 = (local_70 - _Pi_2_f) + local_78;
    }
  }
  return;
}

