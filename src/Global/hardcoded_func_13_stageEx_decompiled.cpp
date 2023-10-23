
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl hardcoded_func_13_stageEx(Enemy *this,EclRawInstr *instruction)

{
  float fVar1;
  float10 fVar2;
  uint16_t uVar3;
  EnemyBulletShooter *pEVar4;
  EnemyBulletShooter *pEVar5;
  float10 fVar6;
  float local_68;
  EnemyBulletShooter local_64;
  int local_8;
  int args;
  
  pEVar4 = &this->bullet_data;
  pEVar5 = &local_64;
  for (args = 0x15; args != 0; args = args + -1) {
    uVar3 = pEVar4->color;
    pEVar5->sprite = pEVar4->sprite;
    pEVar5->color = uVar3;
    pEVar4 = (EnemyBulletShooter *)&pEVar4->pos;
    pEVar5 = (EnemyBulletShooter *)&pEVar5->pos;
  }
  args = instruction->args[1];
  local_68 = (this->current_context).float_var_2;
  if ((this->current_context).int_var_3 % 6 == 0) {
    for (local_8 = 0; local_8 < args; local_8 = local_8 + 1) {
      fVar1 = (this->current_context).float_var_3;
      fVar2 = (float10)fcos((float10)local_68);
      fVar6 = (float10)fsin((float10)local_68);
      local_64.pos.x = (float)(fVar2 * (float10)fVar1) + _92_0f;
      local_64.pos.y = (float)(fVar6 * (float10)fVar1) + _24_0f;
      local_64.angle_1 = local_68 + (this->current_context).float_var_1;
      BulletManager::shoot_bullets(&bullet_manager,&local_64);
      local_68 = _Pi_2_f / (float)args + local_68;
    }
  }
  (this->current_context).int_var_3 = (this->current_context).int_var_3 + 1;
  return;
}

