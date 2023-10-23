
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl UNUSED_0040edb0(int param_1)

{
  float fVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined extraout_DL;
  float10 fVar2;
  
  if ((*(int *)(param_1 + 0x16c) == 0) && (*(int *)(param_1 + 0x16c) != *(int *)(param_1 + 0x164)))
  {
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x118);
    fVar2 = Rng::randf_0_to_1(&Rng);
    fVar1 = (float)(fVar2 * (float10)_Pi_2_f - (float10)_Pi_f);
    fVar2 = (float10)_cos(extraout_ECX,extraout_DL,SUB81((double)fVar1,0));
    *(float *)(param_1 + 0x140) = (float)fVar2;
    fVar2 = (float10)_sin(extraout_ECX_00,(char)param_1,SUB81((double)fVar1,0));
    *(float *)(param_1 + 0x144) = (float)fVar2;
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  fVar1 = _56_0f - (((float)*(int *)(param_1 + 0x16c) + *(float *)(param_1 + 0x168)) * _56_0f) /
                   _40_0f;
  *(float *)(param_1 + 0x110) = fVar1 * *(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x134);
  *(float *)(param_1 + 0x114) = fVar1 * *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x138);
  *(float *)(param_1 + 0x118) = fVar1 * *(float *)(param_1 + 0x148) + *(float *)(param_1 + 0x13c);
  return 1;
}

