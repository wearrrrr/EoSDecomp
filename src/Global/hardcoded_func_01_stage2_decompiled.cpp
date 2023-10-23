
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl hardcoded_func_01_stage2(Enemy *this,EclRawInstr *instruction)

{
  float10 fVar1;
  int args;
  float yOffset;
  float yPos;
  float zOffset;
  float zPos;
  
  args = instruction->args[1];
  zPos = (this->position).z;
  zOffset = (this->shoot_offset).z;
  yPos = (this->position).y;
  yOffset = (this->shoot_offset).y;
  (this->bullet_data).pos.x = (this->position).x + (this->shoot_offset).x;
  (this->bullet_data).pos.y = yPos + yOffset;
  (this->bullet_data).pos.z = zPos + zOffset;
  fVar1 = Rng::randf_0_to_1(&Rng);
  (this->bullet_data).pos.x =
       (float)((fVar1 * (float10)args + (float10)(this->position).x) -
              (float10)args / (float10)_2_0f);
  zPos = (float)args * ram0x0046a518;
  fVar1 = Rng::randf_0_to_1(&Rng);
  (this->bullet_data).pos.y =
       (float)((fVar1 * (float10)zPos + (float10)(this->position).y) -
              (float10)zPos / (float10)_2_0f);
  BulletManager::shoot_bullets(&bullet_manager,&this->bullet_data);
  return;
}

