
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __cftof(undefined4 *param_1,undefined *param_2,size_t param_3)

{
  uint unaff_retaddr;
  char local_30 [24];
  int local_18;
  int local_14;
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  __fltout2(*param_1,param_1[1],&local_18,local_30);
  __fptostr(param_2 + (local_18 == 0x2d),local_14 + param_3,(int)&local_18);
  __cftof2(param_2,param_3,'\0');
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

