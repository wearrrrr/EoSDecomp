
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __cftoe(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  uint unaff_retaddr;
  char local_30 [24];
  int local_18 [4];
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  __fltout2(*param_1,param_1[1],local_18,local_30);
  __fptostr((char *)((uint)(0 < param_3) + param_2 + (uint)(local_18[0] == 0x2d)),param_3 + 1,
            (int)local_18);
  __cftoe2(param_3,param_4,'\0');
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

