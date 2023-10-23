
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2003 Release */

_ptiddata __cdecl __getptd(void)

{
  DWORD dwErrCode;
  _ptiddata lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = (_ptiddata)TlsGetValue(_DAT_0047abd4);
  if (lpTlsValue == (_ptiddata)0x0) {
    lpTlsValue = (_ptiddata)_calloc(1,0x88);
    if (lpTlsValue != (_ptiddata)0x0) {
      BVar1 = TlsSetValue(_DAT_0047abd4,lpTlsValue);
      if (BVar1 != 0) {
        lpTlsValue->_initaddr = &DAT_0047b1a8;
        lpTlsValue->_holdrand = 1;
        DVar2 = GetCurrentThreadId();
        lpTlsValue->_thandle = 0xffffffff;
        lpTlsValue->_tid = DVar2;
        goto LAB_0046187c;
      }
    }
    __amsg_exit(0x10);
  }
LAB_0046187c:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

