
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl UNUSED_0040e920(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  float10 fVar3;
  longlong lVar4;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [16];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  _D3DXVec3Normalize_8(&local_64,(float *)(param_1 + 0x140));
  fVar3 = (float10)_sin(extraout_ECX,(char)param_1,SUB81((double)*(float *)(param_1 + 0x160),0));
  local_14 = (float)fVar3;
  fVar3 = (float10)_cos(param_1,SUB41(*(float *)(param_1 + 0x160),0),
                        SUB81((double)*(float *)(param_1 + 0x160),0));
  local_58 = (float)fVar3;
  *(float *)(param_1 + 0x14c) = local_64 * local_14;
  *(float *)(param_1 + 0x150) = local_60 * local_14;
  *(float *)(param_1 + 0x154) = local_5c * local_14;
  *(float *)(param_1 + 0x158) = local_58;
  _c_D3DXMatrixRotationQuaternion__YGPAUD3DXMATRIX__PAU1_PBUD3DXQUATERNION___Z
            (local_54,(float *)(param_1 + 0x14c));
  local_10 = local_60 * _1_0f - local_5c * (float)__0f;
  local_c = local_5c * (float)__0f - local_64 * _1_0f;
  local_8 = local_64 * (float)__0f - local_60 * (float)__0f;
  if (__00001f <= local_10 * local_10 + local_c * local_c + local_8 * local_8) {
    _D3DXVec3Normalize_8(&local_10,&local_10);
  }
  else {
    local_64 = 1.0;
    local_60 = 0.0;
    local_5c = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x15c);
  local_10 = local_10 * fVar1;
  local_c = local_c * fVar1;
  local_8 = local_8 * fVar1;
  _D3DXVec3TransformCoord_12(&local_10,&local_10,local_54);
  local_8 = local_8 * _6_0f;
  *(float *)(param_1 + 0x110) = local_10 + *(float *)(param_1 + 0x134);
  *(float *)(param_1 + 0x114) = local_c + *(float *)(param_1 + 0x138);
  *(float *)(param_1 + 0x118) = local_8 + *(float *)(param_1 + 0x13c);
  if (*(char *)(param_1 + 0x17a) != '\0') {
    *(char *)(param_1 + 0x17b) = *(char *)(param_1 + 0x17b) + '\x01';
    if ('\x0f' < *(char *)(param_1 + 0x17b)) {
      return 0;
    }
    fVar1 = _1_0f - (float)(int)*(char *)(param_1 + 0x17b) / ram0x0046a2b4;
    uVar2 = *(uint *)(param_1 + 0x7c);
    lVar4 = __ftol2((double)(fVar1 * _55_0f));
    *(uint *)(param_1 + 0x7c) = uVar2 & 0xffffff | (int)lVar4 << 0x18;
    *(float *)(param_1 + 0x18) = _2_0f - fVar1;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  }
  return 1;
}

