
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fcloseall
   
   Library: Visual Studio 2003 Release */

int __cdecl __fcloseall(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  
  local_20 = 0;
  __lock(1);
  for (iVar3 = 3; iVar3 < __nstream; iVar3 = iVar3 + 1) {
    iVar2 = iVar3 * 4;
    _File = *(FILE **)(iVar2 + ___piob);
    if (_File != (FILE *)0x0) {
      if ((*(byte *)&_File->_flag & 0x83) != 0) {
        iVar1 = _fclose(_File);
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      if (0x13 < iVar3) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar2 + ___piob) + 0x20));
        _free(*(void **)(iVar2 + ___piob));
        *(undefined4 *)(iVar2 + ___piob) = 0;
      }
    }
  }
  FUN_00467614();
  return local_20;
}

