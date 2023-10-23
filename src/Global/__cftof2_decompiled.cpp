
undefined * __cdecl __cftof2(undefined *param_1,size_t param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  undefined *puVar3;
  
  iVar1 = in_EAX[1];
  if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
    iVar2 = *in_EAX;
    param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = 0x30;
    (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = 0;
  }
  puVar3 = param_1;
  if (*in_EAX == 0x2d) {
    *param_1 = 0x2d;
    puVar3 = param_1 + 1;
  }
  if (in_EAX[1] < 1) {
    __shift();
    *puVar3 = 0x30;
    puVar3 = puVar3 + 1;
  }
  else {
    puVar3 = puVar3 + in_EAX[1];
  }
  if (0 < (int)param_2) {
    __shift();
    *puVar3 = DAT_0047b2a0;
    iVar1 = in_EAX[1];
    if (iVar1 < 0) {
      if ((param_3 != '\0') || (SBORROW4(param_2,-iVar1) == (int)(param_2 + iVar1) < 0)) {
        param_2 = -iVar1;
      }
      __shift();
      _memset(puVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}

