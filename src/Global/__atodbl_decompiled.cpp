
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __atodbl(_CRT_DOUBLE *param_1,byte *param_2)

{
  uint unaff_retaddr;
  _LDBL12 local_18;
  byte *local_c;
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  ___strgtold12((undefined2 *)&local_18,&local_c,param_2,0,0,0,0);
  __ld12tod(&local_18,param_1);
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

