
undefined4 __cdecl _jpeg_finish_decompress(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[4];
  if (((iVar1 == 0xcd) || (iVar1 == 0xce)) && (*(char *)(param_1 + 0x10) == '\0')) {
    if ((uint)param_1[0x1e] < (uint)param_1[0x18]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x42;
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(param_1[0x5f] + 4))(param_1);
    param_1[4] = 0xd2;
  }
  else if (iVar1 == 0xcf) {
    param_1[4] = 0xd2;
  }
  else if (iVar1 != 0xd2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  do {
    if (*(char *)((int)(code **)param_1[99] + 0x11) != '\0') {
      (**(code **)(param_1[5] + 0x18))(param_1);
      uVar2 = _jpeg_abort_D3DX__YAXPAUjpeg_common_struct_1__Z((int)param_1);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    iVar1 = (**(code **)param_1[99])(param_1);
  } while (iVar1 != 0);
  return 0;
}

