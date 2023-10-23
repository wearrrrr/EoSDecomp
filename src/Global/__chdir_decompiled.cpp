
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __chdir(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  uint unaff_retaddr;
  byte local_114;
  byte local_113;
  CHAR local_c;
  undefined local_b;
  undefined local_a;
  undefined local_9;
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  BVar1 = SetCurrentDirectoryA(param_1);
  if ((BVar1 != 0) && (DVar2 = GetCurrentDirectoryA(0x105,(LPSTR)&local_114), DVar2 != 0)) {
    if (((local_114 == 0x5c) || (local_114 == 0x2f)) && (local_114 == local_113)) goto LAB_0045d688;
    local_c = '=';
    uVar3 = __mbctoupper((uint)local_114);
    local_9 = 0;
    local_b = (undefined)uVar3;
    local_a = 0x3a;
    BVar1 = SetEnvironmentVariableA(&local_c,(LPCSTR)&local_114);
    if (BVar1 != 0) goto LAB_0045d688;
  }
  DVar2 = GetLastError();
  __dosmaperr(DVar2);
LAB_0045d688:
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

