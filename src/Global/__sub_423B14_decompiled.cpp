
undefined4 __cdecl __sub_423B14(int param_1)

{
  LONG LVar1;
  undefined4 result;
  int iVar2;
  
  LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0x44),-6);
  if ((*(uint *)(param_1 + 0x148) >> 0xb & 1) == 0) {
    iVar2 = DirectInput8Create(LVar1,0x800,&g_directInputInstanceID,param_1 + 0xc,0);
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      LogBuffer::write(&LogBuffer,"DirectInput が使用できません\n");
      result = 0xffffffff;
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))
                        (*(undefined4 *)(param_1 + 0xc),&DAT_0046fe20,param_1 + 0x10,0);
      if (iVar2 < 0) {
        if (*(int *)(param_1 + 0xc) != 0) {
          (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(undefined4 *)(param_1 + 0xc));
          *(undefined4 *)(param_1 + 0xc) = 0;
        }
        LogBuffer::write(&LogBuffer,"DirectInput が使用できません\n");
        result = 0xffffffff;
      }
      else {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))
                          (*(undefined4 *)(param_1 + 0x10),&DAT_0046d004);
        if (iVar2 < 0) {
          if (*(int *)(param_1 + 0x10) != 0) {
            (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(undefined4 *)(param_1 + 0x10));
            *(undefined4 *)(param_1 + 0x10) = 0;
          }
          if (*(int *)(param_1 + 0xc) != 0) {
            (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(undefined4 *)(param_1 + 0xc));
            *(undefined4 *)(param_1 + 0xc) = 0;
          }
          LogBuffer::write(&LogBuffer,"DirectInput SetDataFormat が使用できません\n");
          result = 0xffffffff;
        }
        else {
          iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x34))
                            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x44),0x16);
          if (iVar2 < 0) {
            if (*(int *)(param_1 + 0x10) != 0) {
              (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(undefined4 *)(param_1 + 0x10));
              *(undefined4 *)(param_1 + 0x10) = 0;
            }
            if (*(int *)(param_1 + 0xc) != 0) {
              (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(undefined4 *)(param_1 + 0xc));
              *(undefined4 *)(param_1 + 0xc) = 0;
            }
            LogBuffer::write(&LogBuffer,"DirectInput SetCooperativeLevel が使用できません\n"
                            );
            result = 0xffffffff;
          }
          else {
            (**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(*(undefined4 *)(param_1 + 0x10));
            LogBuffer::write(&LogBuffer,"DirectInput は正常に初期化されました\n");
            (**(code **)(**(int **)(param_1 + 0xc) + 0x10))
                      (*(undefined4 *)(param_1 + 0xc),4,FUN_00423da0,0,1);
            if (*(int *)(param_1 + 0x14) != 0) {
              (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))
                        (*(undefined4 *)(param_1 + 0x14),&DAT_0046cdfc);
              (**(code **)(**(int **)(param_1 + 0x14) + 0x34))
                        (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x44),5);
              supervisor.field5_0x18._0_4_ = 44;
              (**(code **)(**(int **)(param_1 + 0x14) + 0xc))
                        (*(undefined4 *)(param_1 + 0x14),0x6c6d30);
              (**(code **)(**(int **)(param_1 + 0x14) + 0x10))
                        (*(undefined4 *)(param_1 + 0x14),FUN_00423801,0,0);
              LogBuffer::write(&LogBuffer,"有効なパッドを発見しました\n");
            }
            result = 0;
          }
        }
      }
    }
  }
  else {
    result = 0xffffffff;
  }
  return result;
}

