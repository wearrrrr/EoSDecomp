
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _D3DXVec3Normalize_8(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float local_10;
  float local_c;
  float local_8;
  
  fVar2 = param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2;
  fVar3 = fVar2 - _1_0f;
  if ((__0_00001f < fVar3 == (__0_00001f == fVar3)) || (fVar3 < __00001f == (fVar3 == __00001f))) {
    if (fVar2 <= _9_999999__11_f) {
      *param_1 = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      return;
    }
    fVar2 = _1_0f / SQRT(fVar2);
    local_10 = fVar2 * *param_2;
    local_c = fVar2 * param_2[1];
    pfVar1 = param_2 + 2;
    param_2 = &local_10;
    local_8 = fVar2 * *pfVar1;
  }
  else if (param_1 == param_2) {
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}

