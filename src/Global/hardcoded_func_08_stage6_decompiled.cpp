
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl hardcoded_func_08_stage6(Enemy *this)

{
  int i;
  EnemyBulletShooter *pEVar1;
  float10 fVar2;
  int local_68;
  int j;
  int context;
  EnemyBulletShooter local_5c;
  
  context = 0;
  local_68 = 0x5ab5f8;
  pEVar1 = &local_5c;
  for (i = 21; i != 0; i = i + -1) {
    pEVar1->sprite = 0;
    pEVar1->color = 0;
    pEVar1 = (EnemyBulletShooter *)&pEVar1->pos;
  }
  for (j = 0; j < 640; j = j + 1) {
    if ((((*(short *)(local_68 + 0x5be) != 0) && (*(short *)(local_68 + 0x5be) != 5)) &&
        (*(int *)(local_68 + 0xc0) != 0)) && (_0_0f <= *(float *)(*(int *)(local_68 + 0xc0) + 0x2c))
       ) {
      local_5c.pos.x = *(float *)(local_68 + 0x560);
      local_5c.pos.y = *(float *)(local_68 + 0x564);
      local_5c.pos.z = *(float *)(local_68 + 0x568);
      local_5c.sprite = 3;
      local_5c.color = 1;
      fVar2 = Rng::randf_0_to_1(&Rng);
      local_5c.angle_1 = (float)(fVar2 * (float10)_Pi_2_f - (float10)_Pi_f);
      local_5c.speed_1 = 0.0;
      local_5c.count_1 = 1;
      local_5c.count_2 = 1;
      local_5c.flags = 8;
      local_5c.aim_mode = 1;
      BulletManager::shoot_bullets(&bullet_manager,&local_5c);
      context = context + 1;
    }
    local_68 = local_68 + 1476;
  }
  (this->current_context).int_var_3 = context;
  return;
}

