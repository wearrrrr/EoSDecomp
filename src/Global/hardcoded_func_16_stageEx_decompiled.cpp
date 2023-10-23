
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl hardcoded_func_16_stageEx(Enemy *this,EclRawInstr *instruction)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  int32_t enemy_life;
  
  enemy_life = this->life;
  if (0x1c1f < (this->boss_timer).current) {
    enemy_life = 0;
  }
  if (instruction->args[1] == 0) {
    (this->current_context).float_var_3 = _2_0f - ((float)enemy_life * _1_0f) / _000_0f;
    (this->current_context).int_var_5 = (enemy_life * 0xf0) / 6000 + 0x28;
  }
  else {
    fVar1 = _20_0f - ((float)enemy_life * _60_0f) / _000_0f;
    fVar2 = _92_0f - fVar1 / _2_0f;
    fVar3 = Rng::randf_0_to_1(&Rng);
    (this->current_context).float_var_2 = (float)(fVar3 * (float10)fVar1 + (float10)fVar2);
    fVar1 = _28_0f - ((float)enemy_life * _64_0f) / _000_0f;
    fVar2 = _96_0f - fVar1 / _2_0f;
    fVar3 = Rng::randf_0_to_1(&Rng);
    (this->current_context).float_var_3 = (float)(fVar3 * (float10)fVar1 + (float10)fVar2);
  }
  return;
}

