
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  uint unaff_retaddr;
  CHAR local_10 [6];
  undefined local_a;
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

