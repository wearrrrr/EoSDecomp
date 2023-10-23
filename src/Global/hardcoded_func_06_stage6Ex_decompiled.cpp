
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl hardcoded_func_06_stage6Ex(Enemy *this)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined extraout_DL;
  undefined extraout_DL_00;
  float10 fVar4;
  int local_a0;
  Float3 posX;
  float local_14;
  float effect;
  uint local_c;
  Effect *local_8;
  
  if ((this->flags_3 >> 3 & 1) != 0) {
    Enemy::__deactivate_effects(this);
    return;
  }
  this->float_eb8 = this->float_eb8 + Pi_180_f;
  if (Pi_4_f <= this->float_eb8) {
    this->float_eb8 = this->float_eb8 - _Pi_2_f;
  }
  if ((this->timer_ebc).current == (this->timer_ebc).previous) goto tick_timer;
  if ((this->timer_ebc).current < 0x79) {
    if (0x3c < (this->timer_ebc).current) {
      uVar3 = (this->timer_ebc).current & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      if (uVar3 == 0) goto LAB_0040cc18;
    }
    if (0x1e < (this->timer_ebc).current) {
      uVar3 = (this->timer_ebc).current & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      if (uVar3 == 0) goto LAB_0040cc18;
    }
    uVar3 = (this->timer_ebc).current & 0x80000007;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
    }
    if (uVar3 != 0) goto tick_timer;
  }
LAB_0040cc18:
  local_c = (this->timer_ebc).current & 0x8000000f;
  if ((int)local_c < 0) {
    local_c = (local_c - 1 | 0xfffffff0) + 1;
  }
  uVar3 = (int)local_c / 2;
  if ((short)uVar3 == 0) {
    local_a0 = 0;
  }
  else {
    uVar2 = Rng::rand_word(&Rng);
    local_a0 = (int)((ulonglong)uVar2 % (ulonglong)(longlong)(int)(uVar3 & 0xffff));
  }
  local_c = local_a0 + (int)local_c / 2;
  effect = ((float)local_c * _60_0f) / ram0x0046a2b4 + _32_0f;
  local_14 = this->float_eb8 - ((float)local_c * _Pi_f) / _0_0f;
  if (effect < _Pi_4_f) {
    effect = effect + _Pi_2_f;
  }
  posX.x = (this->position).x;
  posX.y = (this->position).y;
  posX.z = (this->position).z;
  fVar4 = (float10)_cos(posX.x,SUB41(posX.y,0),SUB81((double)local_14,0));
  posX.x = (float)fVar4 * effect + posX.x;
  fVar4 = (float10)_sin(extraout_ECX,extraout_DL,SUB81((double)local_14,0));
  posX.y = (float)fVar4 * effect + posX.y;
  local_8 = EffectManager::spawn_effect
                      ((EffectManager *)
                       ((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),0x13,&posX,1,
                       0xff3030ff);
  fVar4 = Rng::randf_0_to_1(&Rng);
  *(float *)local_8->field2_0x11c =
       (float)((fVar4 * (float10)_0_0f - (float10)_0_0f) / (float10)_60_0f);
  *(float *)(local_8->field2_0x11c + 4) = (_8_0f * (float)local_c) / _60_0f - __15_f;
  *(undefined4 *)(local_8->field2_0x11c + 8) = 0;
  fVar1 = _1_0f / _20_0f;
  *(float *)(local_8->field2_0x11c + 0xc) = -*(float *)local_8->field2_0x11c * fVar1;
  *(float *)(local_8->field2_0x11c + 0x10) = -*(float *)(local_8->field2_0x11c + 4) * fVar1;
  *(float *)(local_8->field2_0x11c + 0x14) = -*(float *)(local_8->field2_0x11c + 8) * fVar1;
  posX.x = (this->position).x;
  posX.y = (this->position).y;
  posX.z = (this->position).z;
  fVar4 = (float10)_cos(posX.y,SUB41(posX.z,0),SUB81((double)local_14,0));
  posX.x = posX.x - (float)fVar4 * effect;
  fVar4 = (float10)_sin(extraout_ECX_00,extraout_DL_00,SUB81((double)local_14,0));
  posX.y = (float)fVar4 * effect + posX.y;
  local_8 = EffectManager::spawn_effect
                      ((EffectManager *)
                       ((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),0x13,&posX,1,
                       0xff3030ff);
  fVar4 = Rng::randf_0_to_1(&Rng);
  *(float *)local_8->field2_0x11c =
       (float)((fVar4 * (float10)_0_0f - (float10)_0_0f) / (float10)_60_0f);
  *(float *)(local_8->field2_0x11c + 4) = (_8_0f * (float)local_c) / _60_0f - __15_f;
  *(undefined4 *)(local_8->field2_0x11c + 8) = 0;
  fVar1 = _1_0f / _20_0f;
  *(float *)(local_8->field2_0x11c + 0xc) = -*(float *)local_8->field2_0x11c * fVar1;
  *(float *)(local_8->field2_0x11c + 0x10) = -*(float *)(local_8->field2_0x11c + 4) * fVar1;
  *(float *)(local_8->field2_0x11c + 0x14) = -*(float *)(local_8->field2_0x11c + 8) * fVar1;
tick_timer:
  (this->timer_ebc).previous = (this->timer_ebc).current;
  Supervisor::tick_timer(&supervisor,&(this->timer_ebc).current,&(this->timer_ebc).subframe);
  return;
}

