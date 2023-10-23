
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 2003 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  int iVar1;
  int iVar2;
  undefined local_14 [8];
  byte local_c;
  undefined local_8 [4];
  
  iVar2 = 0;
  if (_DAT_006e64cc == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (_DAT_006e64cc = GetProcAddress(hModule,"MessageBoxA"), _DAT_006e64cc == (FARPROC)0x0)) {
      return 0;
    }
    _DAT_006e64d0 = GetProcAddress(hModule,"GetActiveWindow");
    _DAT_006e64d4 = GetProcAddress(hModule,"GetLastActivePopup");
    if ((__osplatform == 2) &&
       (_DAT_006e64dc = GetProcAddress(hModule,"GetUserObjectInformationA"),
       _DAT_006e64dc != (FARPROC)0x0)) {
      _DAT_006e64d8 = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((_DAT_006e64d8 == (FARPROC)0x0) ||
     (((iVar1 = (*_DAT_006e64d8)(), iVar1 != 0 &&
       (iVar1 = (*_DAT_006e64dc)(iVar1,1,local_14,0xc,local_8), iVar1 != 0)) && ((local_c & 1) != 0)
      ))) {
    if (((_DAT_006e64d0 != (FARPROC)0x0) && (iVar2 = (*_DAT_006e64d0)(), iVar2 != 0)) &&
       (_DAT_006e64d4 != (FARPROC)0x0)) {
      iVar2 = (*_DAT_006e64d4)(iVar2);
    }
  }
  else if (__winmajor < 4) {
    _UType = _UType | 0x40000;
  }
  else {
    _UType = _UType | 0x200000;
  }
  iVar2 = (*_DAT_006e64cc)(iVar2,_LpText,_LpCaption,_UType);
  return iVar2;
}

