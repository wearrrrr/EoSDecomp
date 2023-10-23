
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __cftog(undefined4 *param_1,undefined *param_2,size_t param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint unaff_retaddr;
  char local_30 [24];
  int local_18;
  int local_14;
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  __fltout2(*param_1,param_1[1],&local_18,local_30);
  iVar2 = local_14 + -1;
  __fptostr(param_2 + (local_18 == 0x2d),param_3,(int)&local_18);
  local_14 = local_14 + -1;
  if ((local_14 < -4) || ((int)param_3 <= local_14)) {
    __cftoe2(param_3,param_4,'\x01');
  }
  else {
    pcVar1 = param_2 + (local_18 == 0x2d);
    if (iVar2 < local_14) {
      do {
        pcVar3 = pcVar1;
        pcVar1 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    __cftof2(param_2,param_3,'\x01');
  }
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

