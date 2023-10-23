
int D3DXLoadSurfaceFromSurface
              (int *param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
              int *param_6,int *param_7,undefined4 param_8)

{
  int iVar1;
  int local_3c [6];
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  if ((param_1 == (int *)0x0) || (param_4 == (int *)0x0)) {
LAB_0043ffcd:
    iVar1 = -0x7789f794;
  }
  else {
    (**(code **)(*param_4 + 0x20))(param_4,local_3c);
    if (param_6 == (int *)0x0) {
      local_14 = local_24;
      local_1c = 0;
      local_18 = 0;
      local_10 = local_20;
    }
    else {
      local_1c = *param_6;
      local_18 = param_6[1];
      local_14 = param_6[2];
      local_10 = param_6[3];
      if ((((local_1c < 0) || (local_24 < local_14)) || ((int)local_14 < local_1c)) ||
         (((local_18 < 0 || (local_20 < local_10)) || ((int)local_10 < local_18))))
      goto LAB_0043ffcd;
    }
    if (((local_3c[0] == 0x31545844) || (local_3c[0] == 0x32545844)) ||
       (((local_3c[0] == 0x32595559 ||
         (((local_3c[0] == 0x33545844 || (local_3c[0] == 0x34545844)) || (local_3c[0] == 0x35545844)
          ))) || (local_3c[0] == 0x59565955)))) {
      iVar1 = (**(code **)(*param_4 + 0x24))(param_4,&local_c,0,0x10);
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    else {
      iVar1 = (**(code **)(*param_4 + 0x24))(param_4,&local_c,&local_1c,0x10);
      if (iVar1 < 0) {
        return iVar1;
      }
      local_14 = local_14 - local_1c;
      local_10 = local_10 - local_18;
      local_1c = 0;
      local_18 = 0;
    }
    iVar1 = _D3DXLoadSurfaceFromMemory_40
                      (param_1,param_2,param_3,local_8,local_3c[0],local_c,param_5,&local_1c,param_7
                       ,param_8);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
    (**(code **)(*param_4 + 0x28))(param_4);
  }
  return iVar1;
}

