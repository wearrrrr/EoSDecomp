
undefined4 __cdecl __HSCR_related_1(int param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  int *local_8;
  
  if (param_2 == 0) {
    __free_HSCR_chain(*(void **)(param_1 + 0xc));
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = 0;
    **(undefined4 **)(param_1 + 0xc) = 0;
  }
  local_8 = (int *)(param_1 + *(int *)(param_1 + 8));
  for (local_c = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8); 0 < local_c;
      local_c = local_c - (uint)*(ushort *)piVar1) {
    if ((((*local_8 == 0x52435348) && (*(char *)(local_8 + 2) == '\x10')) &&
        (*(byte *)(local_8 + 4) == param_3)) && (*(byte *)((int)local_8 + 0x11) == param_4)) {
      if (param_2 == 0) {
        __HSCR_related_2(*(int *)(param_1 + 0xc),(int)local_8);
      }
      else {
        __HSCR_related_2(param_2,(int)local_8);
      }
    }
    piVar1 = local_8 + 1;
    local_8 = (int *)((int)local_8 + (uint)*(ushort *)(local_8 + 1));
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 4) == 0) {
    local_18 = 1000000;
  }
  else {
    if (*(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 8) + 0xc) < 0xf4241) {
      local_14 = 1000000;
    }
    else {
      local_14 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 8) + 0xc);
    }
    local_18 = local_14;
  }
  return local_18;
}

