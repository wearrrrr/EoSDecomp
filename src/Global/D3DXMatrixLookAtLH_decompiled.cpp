
void D3DXMatrixLookAtLH(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = *param_3 - *param_2;
  local_c = param_3[1] - param_2[1];
  local_8 = param_3[2] - param_2[2];
  _D3DXVec3Normalize_8(&local_10,&local_10);
  _D3DXVec3Cross__YAPAUD3DXVECTOR3__PAU1_PBU1_1_Z(&local_1c,param_4,&local_10);
  _D3DXVec3Normalize_8(&local_1c,&local_1c);
  _D3DXVec3Cross__YAPAUD3DXVECTOR3__PAU1_PBU1_1_Z(&local_28,&local_10,&local_1c);
  *param_1 = local_1c;
  param_1[4] = local_18;
  param_1[8] = local_14;
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  param_1[1] = local_28;
  param_1[5] = local_24;
  param_1[9] = local_20;
  param_1[0xc] = -(local_14 * fVar3 + local_1c * fVar2 + local_18 * fVar1);
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  param_1[2] = local_10;
  param_1[6] = local_c;
  param_1[10] = local_8;
  param_1[0xd] = -(local_20 * fVar3 + local_28 * fVar2 + local_24 * fVar1);
  param_1[0xe] = -(local_8 * param_2[2] + local_10 * *param_2 + local_c * param_2[1]);
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  return;
}

