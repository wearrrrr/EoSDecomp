
int _D3DXFilterTexture_16(int *param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_30 [8];
  uint local_10;
  int local_c;
  int *local_8;
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    if (param_4 == (int *)0xffffffff) {
      (**(code **)(*param_1 + 0x38))(param_1,0,local_30);
      piVar2 = _FI_Find__YAPAUFormatInfo__W4_D3DFORMAT___Z(local_30[0]);
      param_4 = (int *)(((piVar2[1] != 3) - 1 & 0xfffffffd) + 5);
    }
    local_10 = (**(code **)(*piVar1 + 0x34))(piVar1);
    uVar4 = param_3;
    if (param_3 == 0xffffffff) {
      uVar4 = 0;
    }
    if (uVar4 < local_10) {
      local_8 = (int *)0x0;
      param_1 = (int *)0x0;
      if ((((uint)param_4 & 0xff) == 2) || (local_c = 0, ((uint)param_4 & 0xff) == 5)) {
        local_c = 1;
      }
      iVar3 = (**(code **)(*piVar1 + 0x3c))(piVar1,uVar4,&local_8);
      if (-1 < iVar3) {
        param_3 = uVar4 + 1;
        if (param_3 < local_10) {
          do {
            iVar3 = (**(code **)(*piVar1 + 0x3c))(piVar1,param_3,&param_1);
            if ((iVar3 < 0) ||
               (iVar3 = D3DXLoadSurfaceFromSurface
                                  (param_1,param_2,(int *)0x0,local_8,param_2,(int *)0x0,param_4,0),
               iVar3 < 0)) goto LAB_0044019f;
            if (local_c == 0) {
              if (param_1 != (int *)0x0) {
                (**(code **)(*param_1 + 8))(param_1);
                goto LAB_0044018f;
              }
            }
            else {
              if (local_8 != (int *)0x0) {
                (**(code **)(*local_8 + 8))(local_8);
              }
              local_8 = param_1;
LAB_0044018f:
              param_1 = (int *)0x0;
            }
            param_3 = param_3 + 1;
          } while (param_3 < local_10);
        }
        iVar3 = 0;
      }
LAB_0044019f:
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
      if (param_1 == (int *)0x0) {
        return iVar3;
      }
      (**(code **)(*param_1 + 8))(param_1);
      return iVar3;
    }
  }
  return -0x7789f794;
}

