
void _D3DXMatrixPerspectiveFovLH_20
               (float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float10 fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = (float10)fcos((float10)(param_2 * __5f));
  fVar3 = (float10)fsin((float10)(param_2 * __5f));
  *param_1 = ((float)fVar1 / (float)fVar3) / param_3;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = (float)fVar1 / (float)fVar3;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  fVar2 = param_5 / (param_5 - param_4);
  param_1[10] = fVar2;
  param_1[0xb] = 1.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = -(fVar2 * param_4);
  param_1[0xf] = 0.0;
  return;
}

