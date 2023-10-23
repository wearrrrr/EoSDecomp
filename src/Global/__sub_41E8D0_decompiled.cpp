
void __thiscall __sub_41E8D0(void *this,float *param_1,float *param_2)

{
  undefined4 extraout_ECX;
  undefined in_DL;
  undefined extraout_DL;
  float10 fVar1;
  float10 fVar2;
  float in_stack_0000000c;
  
  fVar1 = (float10)_sin(this,in_DL,SUB81((double)in_stack_0000000c,0));
  fVar2 = (float10)_cos(extraout_ECX,extraout_DL,SUB81((double)in_stack_0000000c,0));
  *param_1 = (float)fVar1 * param_2[1] + (float)fVar2 * *param_2;
  param_1[1] = (float)fVar2 * param_2[1] - (float)fVar1 * *param_2;
  return;
}

