
undefined4 __cdecl __PSCR_related_1(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  undefined4 *local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_8 = param_2;
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
        for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
          _memset(local_8,0,0x14);
          *local_8 = 0x52435350;
          *(undefined2 *)((int)local_8 + 6) = 0x14;
          *(undefined2 *)(local_8 + 1) = 0x14;
          *(undefined *)(local_8 + 2) = 0x10;
          *(undefined *)(local_8 + 4) = (undefined)local_10;
          *(undefined *)((int)local_8 + 0x11) = (undefined)local_1c;
          *(undefined *)((int)local_8 + 0x12) = (undefined)local_14;
          local_8 = local_8 + 5;
        }
      }
    }
    local_c = (int *)(param_1 + *(int *)(param_1 + 8));
    for (local_18 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8); 0 < local_18;
        local_18 = local_18 - (uint)*(ushort *)piVar3) {
      if ((*local_c == 0x52435350) && (*(char *)(local_c + 2) == '\x10')) {
        if ((3 < *(byte *)(local_c + 4)) ||
           ((4 < *(byte *)((int)local_c + 0x11) || (6 < *(byte *)((int)local_c + 0x12))))) break;
        piVar3 = local_c;
        piVar4 = param_2 + ((uint)*(byte *)((int)local_c + 0x12) * 4 +
                            (uint)*(byte *)(local_c + 4) * 0x18 +
                           (uint)*(byte *)((int)local_c + 0x11)) * 5;
        for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        }
      }
      piVar3 = local_c + 1;
      local_c = (int *)((int)local_c + (uint)*(ushort *)(local_c + 1));
    }
    uVar1 = 0;
  }
  return uVar1;
}

