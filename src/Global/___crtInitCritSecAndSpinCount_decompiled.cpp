
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2003 Release */

void __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  HMODULE hModule;
  
  if (_DAT_006e64e0 == (FARPROC)0x0) {
    if (__osplatform != 1) {
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        _DAT_006e64e0 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
        if (_DAT_006e64e0 != (FARPROC)0x0) goto LAB_00466440;
      }
    }
    _DAT_006e64e0 = ___crtInitCritSecNoSpinCount;
  }
LAB_00466440:
  (*_DAT_006e64e0)(param_1,param_2);
  return;
}

