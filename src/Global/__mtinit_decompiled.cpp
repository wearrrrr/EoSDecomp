
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __mtinit(void)

{
  int iVar1;
  DWORD *lpTlsValue;
  BOOL BVar2;
  DWORD DVar3;
  
  iVar1 = __mtinitlocks();
  if (iVar1 != 0) {
    _DAT_0047abd4 = TlsAlloc();
    if (_DAT_0047abd4 != 0xffffffff) {
      lpTlsValue = (DWORD *)_calloc(1,0x88);
      if (lpTlsValue != (DWORD *)0x0) {
        BVar2 = TlsSetValue(_DAT_0047abd4,lpTlsValue);
        if (BVar2 != 0) {
          lpTlsValue[0x15] = (DWORD)&DAT_0047b1a8;
          lpTlsValue[5] = 1;
          DVar3 = GetCurrentThreadId();
          lpTlsValue[1] = 0xffffffff;
          *lpTlsValue = DVar3;
          return 1;
        }
      }
      __mtterm();
      return 0;
    }
  }
  __mtterm();
  return 0;
}

