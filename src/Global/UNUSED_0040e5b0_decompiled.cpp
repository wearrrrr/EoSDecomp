
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl UNUSED_0040e5b0(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  if ((*(int *)(param_1 + 0x16c) == 0) && (*(int *)(param_1 + 0x16c) != *(int *)(param_1 + 0x164)))
  {
    fVar3 = Rng::randf_0_to_1(&Rng);
    *(float *)(param_1 + 0x11c) =
         (float)(((fVar3 * (float10)_56_0f - (float10)_28_0f) * (float10)__0f) / (float10)_3_0f);
    fVar3 = Rng::randf_0_to_1(&Rng);
    *(float *)(param_1 + 0x120) =
         (float)(((fVar3 * (float10)_56_0f - (float10)_28_0f) * (float10)__0f) / (float10)_3_0f);
    *(undefined4 *)(param_1 + 0x124) = 0;
    fVar1 = _1_0f / _0_0f;
    *(float *)(param_1 + 0x128) = -*(float *)(param_1 + 0x11c) * fVar1;
    *(float *)(param_1 + 300) = -*(float *)(param_1 + 0x120) * fVar1;
    *(float *)(param_1 + 0x130) = -*(float *)(param_1 + 0x124) * fVar1;
  }
  fVar1 = supervisor.game_speed * *(float *)(param_1 + 0x124);
  fVar2 = supervisor.game_speed * *(float *)(param_1 + 0x120);
  *(float *)(param_1 + 0x110) =
       supervisor.game_speed * *(float *)(param_1 + 0x11c) + *(float *)(param_1 + 0x110);
  *(float *)(param_1 + 0x114) = fVar2 + *(float *)(param_1 + 0x114);
  *(float *)(param_1 + 0x118) = fVar1 + *(float *)(param_1 + 0x118);
  fVar1 = supervisor.game_speed * *(float *)(param_1 + 0x130);
  fVar2 = supervisor.game_speed * *(float *)(param_1 + 300);
  *(float *)(param_1 + 0x11c) =
       supervisor.game_speed * *(float *)(param_1 + 0x128) + *(float *)(param_1 + 0x11c);
  *(float *)(param_1 + 0x120) = fVar2 + *(float *)(param_1 + 0x120);
  *(float *)(param_1 + 0x124) = fVar1 + *(float *)(param_1 + 0x124);
  return 1;
}

