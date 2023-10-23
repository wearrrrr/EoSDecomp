
int D3DXCreateTexture(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                     uint param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 == (int *)0x0) || (param_8 == 0)) {
    iVar1 = -0x7789f794;
  }
  else {
    uVar2 = param_5;
    if (param_5 == 0xffffffff) {
      uVar2 = 0;
    }
    iVar1 = _D3DXCheckTextureRequirements_28
                      (param_1,&param_2,&param_3,&param_4,uVar2,&param_6,param_7);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_1 + 0x50))
                        (param_1,param_2,param_3,param_4,uVar2,param_6,param_7,param_8);
      if (-1 < iVar1) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

