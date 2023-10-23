
undefined4 __cdecl __sub_42A140(int *param_1,int param_2)

{
  undefined4 result;
  byte *local_1c;
  int local_18;
  char *local_14;
  char local_d;
  int i;
  
  if (param_1 == (int *)0x0) {
    result = 0xffffffff;
  }
  else if (*param_1 == magic_T6RP._0_4_) {
    local_14 = (char *)((int)param_1 + 0xf);
    local_d = *(char *)((int)param_1 + 0xe);
    for (i = 0; i < param_2 + -0xf; i = i + 1) {
      *local_14 = *local_14 - local_d;
      local_d = local_d + '\a';
      local_14 = local_14 + 1;
    }
    local_1c = (byte *)((int)param_1 + 0xe);
    local_18 = 0x3f000318;
    for (i = 0; i < param_2 + -0xe; i = i + 1) {
      local_18 = local_18 + (uint)*local_1c;
      local_1c = local_1c + 1;
    }
    if (local_18 == param_1[2]) {
      if (*(short *)(param_1 + 1) == 0x102) {
        result = 0;
      }
      else {
        result = 0xffffffff;
      }
    }
    else {
      result = 0xffffffff;
    }
  }
  else {
    result = 0xffffffff;
  }
  return result;
}

