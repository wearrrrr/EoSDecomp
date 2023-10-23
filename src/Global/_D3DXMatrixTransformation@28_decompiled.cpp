
float * _D3DXMatrixTransformation_28
                  (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  float fVar1;
  D3DMATRIX local_c4;
  D3DMATRIX local_84;
  D3DMATRIX local_44;
  
  if (param_4 == (float *)0x0) {
    D3DMATRIX::set_identity((D3DMATRIX *)param_1);
  }
  else if (param_3 == (float *)0x0) {
    param_1[0xe] = 0.0;
    param_1[0xd] = 0.0;
    param_1[0xc] = 0.0;
    param_1[0xb] = 0.0;
    param_1[9] = 0.0;
    param_1[8] = 0.0;
    param_1[7] = 0.0;
    param_1[6] = 0.0;
    param_1[4] = 0.0;
    param_1[3] = 0.0;
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = *param_4;
    param_1[5] = param_4[1];
    fVar1 = param_4[2];
    param_1[0xf] = 1.0;
    param_1[10] = fVar1;
  }
  else {
    local_44.field0_0x0.field0._43 = 0.0;
    local_44.field0_0x0.field0._11 = *param_4;
    local_44.field0_0x0.field0._42 = 0.0;
    local_44.field0_0x0.field0._22 = param_4[1];
    local_44.field0_0x0.field0._41 = 0.0;
    local_44.field0_0x0.field0._33 = param_4[2];
    local_44.field0_0x0.field0._34 = 0.0;
    local_44.field0_0x0.field0._32 = 0.0;
    local_44.field0_0x0.field0._31 = 0.0;
    local_44.field0_0x0.field0._24 = 0.0;
    local_44.field0_0x0.field0._23 = 0.0;
    local_44.field0_0x0.field0._21 = 0.0;
    local_44.field0_0x0.field0._14 = 0.0;
    local_44.field0_0x0.field0._13 = 0.0;
    local_44.field0_0x0.field0._12 = 0.0;
    local_44.field0_0x0.field0._44 = 1.0;
    _c_D3DXMatrixRotationQuaternion__YGPAUD3DXMATRIX__PAU1_PBUD3DXQUATERNION___Z
              ((float *)&local_84,param_3);
    if (param_2 == (float *)0x0) {
      _c_D3DXMatrixTranspose__YGPAUD3DXMATRIX__PAU1_PBU1__Z(param_1,(undefined4 *)&local_84);
      D3DMATRIX::_x86_D3DXMatrixMultiply__YGPAUD3DXMATRIX__PAU1_PBU1_1_Z
                ((D3DMATRIX *)param_1,(D3DMATRIX *)param_1,&local_44);
      D3DMATRIX::_x86_D3DXMatrixMultiply__YGPAUD3DXMATRIX__PAU1_PBU1_1_Z
                ((D3DMATRIX *)param_1,(D3DMATRIX *)param_1,&local_84);
    }
    else {
      _c_D3DXMatrixTranspose__YGPAUD3DXMATRIX__PAU1_PBU1__Z
                ((undefined4 *)&local_c4,(undefined4 *)&local_84);
      D3DMATRIX::set_identity((D3DMATRIX *)param_1);
      param_1[0xc] = param_1[0xc] - *param_2;
      param_1[0xd] = param_1[0xd] - param_2[1];
      param_1[0xe] = param_1[0xe] - param_2[2];
      D3DMATRIX::_x86_D3DXMatrixMultiply__YGPAUD3DXMATRIX__PAU1_PBU1_1_Z
                ((D3DMATRIX *)param_1,(D3DMATRIX *)param_1,&local_c4);
      D3DMATRIX::_x86_D3DXMatrixMultiply__YGPAUD3DXMATRIX__PAU1_PBU1_1_Z
                ((D3DMATRIX *)param_1,(D3DMATRIX *)param_1,&local_44);
      D3DMATRIX::_x86_D3DXMatrixMultiply__YGPAUD3DXMATRIX__PAU1_PBU1_1_Z
                ((D3DMATRIX *)param_1,(D3DMATRIX *)param_1,&local_84);
      param_1[0xc] = param_1[0xc] + *param_2;
      param_1[0xd] = param_2[1] + param_1[0xd];
      param_1[0xe] = param_2[2] + param_1[0xe];
    }
  }
  if (param_6 != (float *)0x0) {
    _c_D3DXMatrixRotationQuaternion__YGPAUD3DXMATRIX__PAU1_PBUD3DXQUATERNION___Z
              ((float *)&local_84,param_6);
    if (param_5 == (float *)0x0) {
      D3DMATRIX::_x86_D3DXMatrixMultiply__YGPAUD3DXMATRIX__PAU1_PBU1_1_Z
                ((D3DMATRIX *)param_1,(D3DMATRIX *)param_1,&local_84);
    }
    else {
      param_1[0xc] = param_1[0xc] - *param_5;
      param_1[0xd] = param_1[0xd] - param_5[1];
      param_1[0xe] = param_1[0xe] - param_5[2];
      D3DMATRIX::_x86_D3DXMatrixMultiply__YGPAUD3DXMATRIX__PAU1_PBU1_1_Z
                ((D3DMATRIX *)param_1,(D3DMATRIX *)param_1,&local_84);
      param_1[0xc] = param_1[0xc] + *param_5;
      param_1[0xd] = param_1[0xd] + param_5[1];
      param_1[0xe] = param_1[0xe] + param_5[2];
    }
  }
  if (param_7 != (float *)0x0) {
    param_1[0xc] = param_1[0xc] + *param_7;
    param_1[0xd] = param_7[1] + param_1[0xd];
    param_1[0xe] = param_7[2] + param_1[0xe];
  }
  return param_1;
}

