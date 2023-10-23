
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2003 Release */

int __cdecl __commit(int _FileHandle)

{
  HANDLE hFile;
  BOOL BVar1;
  ulong *puVar2;
  int *piVar3;
  int iVar4;
  DWORD local_20;
  
  if (___uNumber_1 <= (uint)_FileHandle) {
LAB_0046756e:
    piVar3 = __errno();
    *piVar3 = 9;
    return -1;
  }
  iVar4 = (_FileHandle & 0x1fU) * 0x24;
  if ((*(byte *)(*(int *)(&DAT_006e68a0 + (_FileHandle >> 5) * 4) + 4 + iVar4) & 1) == 0)
  goto LAB_0046756e;
  __lock_fhandle(_FileHandle);
  if ((*(byte *)(*(int *)(&DAT_006e68a0 + (_FileHandle >> 5) * 4) + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      local_20 = GetLastError();
    }
    else {
      local_20 = 0;
    }
    if (local_20 == 0) goto LAB_00467555;
    puVar2 = ___doserrno();
    *puVar2 = local_20;
  }
  piVar3 = __errno();
  *piVar3 = 9;
  local_20 = 0xffffffff;
LAB_00467555:
  FUN_00467566();
  return local_20;
}

