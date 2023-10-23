
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

BOOL __resetstkoflw(void)

{
  SIZE_T SVar1;
  BOOL BVar2;
  LPVOID lpAddress;
  undefined4 uStack_5c;
  _SYSTEM_INFO local_4c;
  undefined local_28 [28];
  DWORD local_c;
  SIZE_T local_8;
  
  uStack_5c = 0x467deb;
  SVar1 = VirtualQuery(&uStack_5c,(PMEMORY_BASIC_INFORMATION)local_28,0x1c);
  if (SVar1 != 0) {
    GetSystemInfo(&local_4c);
    lpAddress = (LPVOID)((~(local_4c.dwPageSize - 1) & (uint)&uStack_5c) - local_4c.dwPageSize);
    local_8 = local_4c.dwPageSize;
    if ((LPVOID)((-(uint)(__osplatform != 1) & 0xffff1000) + 0x11000 + local_28._4_4_) <= lpAddress)
    {
      if (__osplatform != 1) {
        do {
          SVar1 = VirtualQuery((LPCVOID)local_28._4_4_,(PMEMORY_BASIC_INFORMATION)local_28,0x1c);
          if (SVar1 == 0) {
            return 0;
          }
          local_28._4_4_ = local_28._4_4_ + local_28._12_4_;
        } while ((local_28._16_4_ & 0x1000) == 0);
        if ((local_28[21] & 1) != 0) {
          return 1;
        }
        if (lpAddress < (uint)local_28._0_4_) {
          return 0;
        }
        VirtualAlloc((LPVOID)local_28._0_4_,local_8,0x1000,4);
        lpAddress = (LPVOID)local_28._0_4_;
      }
      BVar2 = VirtualProtect(lpAddress,local_8,(-(uint)(__osplatform != 1) & 0x103) + 1,&local_c);
      return BVar2;
    }
  }
  return 0;
}

