
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2003 Release */

int __cdecl __setmbcp(int _CodePage)

{
  int *_Memory;
  int iVar1;
  int local_20;
  
  local_20 = -1;
  __lock(0xd);
  _DAT_006e655c = 0;
  if (_CodePage == -2) {
    _DAT_006e655c = 1;
    _CodePage = GetOEMCP();
  }
  else if (_CodePage == -3) {
    _DAT_006e655c = 1;
    _CodePage = GetACP();
  }
  else if (_CodePage == -4) {
    _DAT_006e655c = 1;
    _CodePage = _DAT_006e6530;
  }
  if (_CodePage == _CodePage_006e6764) {
    local_20 = 0;
  }
  else {
    if ((_DAT_006e6654 == (int *)0x0) || (_Memory = _DAT_006e6654, *_DAT_006e6654 != 0)) {
      _Memory = (int *)_malloc(0x220);
    }
    if ((_Memory != (int *)0x0) && (local_20 = __setmbcp_lk(_CodePage), local_20 == 0)) {
      *_Memory = 0;
      _Memory[1] = _CodePage_006e6764;
      _Memory[2] = _DAT_006e6658;
      _Memory[3] = _DAT_006e6650;
      for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
        *(undefined2 *)((int)_Memory + iVar1 * 2 + 0x10) =
             *(undefined2 *)(&DAT_006e6770 + iVar1 * 2);
      }
      for (iVar1 = 0; iVar1 < 0x101; iVar1 = iVar1 + 1) {
        *(undefined *)(iVar1 + 0x1c + (int)_Memory) = (&DAT_006e6660)[iVar1];
      }
      for (iVar1 = 0; _DAT_006e6654 = _Memory, iVar1 < 0x100; iVar1 = iVar1 + 1) {
        *(undefined *)(iVar1 + 0x11d + (int)_Memory) = (&DAT_006e6780)[iVar1];
      }
    }
    if ((local_20 == -1) && (_Memory != _DAT_006e6654)) {
      _free(_Memory);
    }
  }
  FUN_00467116();
  return local_20;
}

