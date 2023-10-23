
undefined4 __cdecl __CLRD_related_1(int param_1,int param_2)

{
  undefined4 result;
  int l;
  int *piVar1;
  int *piVar2;
  int j;
  int k;
  int i;
  int *local_8;
  
  if (param_2 == 0) {
    result = 0xffffffff;
  }
  else {
    for (i = 0; i < 4; i = i + 1) {
      _memset((void *)(param_2 + i * 0x18),0,0x18);
      *(undefined4 *)(param_2 + i * 0x18) = 0x44524c43;
      *(undefined2 *)(param_2 + 6 + i * 0x18) = 0x18;
      *(undefined2 *)(param_2 + 4 + i * 0x18) = 0x18;
      *(undefined *)(param_2 + 8 + i * 0x18) = 0x10;
      *(undefined *)(param_2 + 0x16 + i * 0x18) = (undefined)i;
      for (j = 0; j < 5; j = j + 1) {
        *(undefined *)(param_2 + i * 0x18 + 0xc + j) = 1;
        *(undefined *)(param_2 + i * 0x18 + 0x11 + j) = 1;
      }
    }
    local_8 = (int *)(param_1 + *(int *)(param_1 + 8));
    for (k = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8); 0 < k;
        k = k - (uint)*(ushort *)piVar1) {
      if ((*local_8 == 0x44524c43) && (*(char *)(local_8 + 2) == '\x10')) {
        if (3 < *(byte *)((int)local_8 + 0x16)) break;
        piVar1 = local_8;
        piVar2 = (int *)(param_2 + (uint)*(byte *)((int)local_8 + 0x16) * 0x18);
        for (l = 6; l != 0; l = l + -1) {
          *piVar2 = *piVar1;
          piVar1 = piVar1 + 1;
          piVar2 = piVar2 + 1;
        }
      }
      piVar1 = local_8 + 1;
      local_8 = (int *)((int)local_8 + (uint)*(ushort *)(local_8 + 1));
    }
    result = 0;
  }
  return result;
}

