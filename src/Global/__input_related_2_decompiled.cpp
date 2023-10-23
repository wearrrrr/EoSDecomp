
ushort __cdecl __input_related_2(ushort *param_1,short param_2,ushort param_3,int param_4)

{
  ushort uVar1;
  
  if (param_2 < 0) {
    param_3 = 0;
  }
  else {
    uVar1 = param_3;
    if ((*(byte *)(param_4 + param_2) & 0x80) == 0) {
      uVar1 = 0;
    }
    *param_1 = *param_1 | uVar1;
    if ((*(byte *)(param_4 + param_2) & 0x80) == 0) {
      param_3 = 0;
    }
  }
  return param_3;
}

