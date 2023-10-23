
int __thiscall CSound::RestoreBuffer(CSound *this,int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint local_8;
  
  if (param_1 == (int *)0x0) {
    iVar1 = -0x7ffbfe10;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    iVar1 = (**(code **)(*param_1 + 0x24))(param_1,&local_8,this);
    if (-1 < iVar1) {
      if ((local_8 & 2) == 0) {
        iVar1 = 1;
      }
      else {
        do {
          iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
          if (iVar1 == -0x7787ff6a) {
            Sleep(10);
          }
          iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
        } while (iVar1 != 0);
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 1;
        }
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

