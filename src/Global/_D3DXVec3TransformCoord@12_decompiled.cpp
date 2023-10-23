
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * _D3DXVec3TransformCoord_12(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = *param_2;
  fVar2 = param_3[2];
  fVar3 = *param_2;
  fVar4 = param_3[1];
  fVar5 = param_2[1];
  fVar6 = param_3[6];
  fVar7 = param_2[1];
  fVar8 = param_3[5];
  fVar9 = param_2[2];
  fVar10 = param_3[10];
  fVar11 = param_2[2];
  fVar12 = param_3[9];
  fVar13 = param_3[0xd];
  fVar14 = param_3[0xe];
  fVar15 = param_3[0xf] +
           param_2[2] * param_3[0xb] + param_2[1] * param_3[7] + *param_2 * param_3[3];
  *param_1 = param_3[0xc] + param_2[2] * param_3[8] + param_2[1] * param_3[4] + *param_2 * *param_3;
  param_1[1] = fVar13 + fVar11 * fVar12 + fVar7 * fVar8 + fVar3 * fVar4;
  param_1[2] = fVar14 + fVar9 * fVar10 + fVar5 * fVar6 + fVar1 * fVar2;
  fVar1 = fVar15 - _1_0f;
  if ((__0_00001f < fVar1 == (__0_00001f == fVar1)) || (fVar1 < __00001f == (fVar1 == __00001f))) {
    fVar15 = 1.0 / fVar15;
    *param_1 = fVar15 * *param_1;
    param_1[1] = fVar15 * param_1[1];
    param_1[2] = fVar15 * param_1[2];
  }
  return param_1;
}

