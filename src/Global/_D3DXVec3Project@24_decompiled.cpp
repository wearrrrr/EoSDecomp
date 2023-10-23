
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * _D3DXVec3Project_24(float *param_1,float *param_2,uint *param_3,float *param_4,
                           float *param_5,float *param_6)

{
  D3DMATRIX *pDVar1;
  D3DMATRIX local_4c;
  
  pDVar1 = &local_4c;
  switch(((uint)(param_6 != (float *)0x0) << 1 | (uint)(param_5 != (float *)0x0)) << 1 |
         (uint)(param_4 != (float *)0x0)) {
  case 0:
    D3DMATRIX::set_identity(&local_4c);
    break;
  case 1:
    pDVar1 = (D3DMATRIX *)param_4;
    break;
  case 2:
    pDVar1 = (D3DMATRIX *)param_5;
    break;
  case 3:
    param_6 = param_5;
    goto _switch___sub_43F245_break;
  case 4:
    pDVar1 = (D3DMATRIX *)param_6;
    break;
  case 5:
    goto _switch___sub_43F245_break;
  case 6:
    param_4 = param_5;
    goto _switch___sub_43F245_break;
  case 7:
    D3DMATRIX::_x86_D3DXMatrixMultiply__YGPAUD3DXMATRIX__PAU1_PBU1_1_Z
              (&local_4c,(D3DMATRIX *)param_6,(D3DMATRIX *)param_5);
    param_6 = (float *)&local_4c;
_switch___sub_43F245_break:
    D3DMATRIX::_x86_D3DXMatrixMultiply__YGPAUD3DXMATRIX__PAU1_PBU1_1_Z
              (&local_4c,(D3DMATRIX *)param_6,(D3DMATRIX *)param_4);
  }
  _D3DXVec3TransformCoord_12(param_1,param_2,(float *)pDVar1);
  if (param_3 != (uint *)0x0) {
    *param_1 = (float)(ulonglong)*param_3 + (float)(ulonglong)param_3[2] * (*param_1 + _1_0f) * __5f
    ;
    param_1[1] = (float)(ulonglong)param_3[1] +
                 (float)(ulonglong)param_3[3] * (1.0 - param_1[1]) * __5f;
    param_1[2] = ((float)param_3[5] - (float)param_3[4]) * param_1[2] + (float)param_3[4];
  }
  return param_1;
}

