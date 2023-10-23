
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2003 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  int local_20;
  
  if ((uint)_FileHandle < ___uNumber_1) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)(*(int *)(&DAT_006e68a0 + (_FileHandle >> 5) * 4) + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)(*(int *)(&DAT_006e68a0 + (_FileHandle >> 5) * 4) + 4 + iVar3) & 1) == 0) {
        piVar1 = __errno();
        *piVar1 = 9;
        puVar2 = ___doserrno();
        *puVar2 = 0;
        local_20 = -1;
      }
      else {
        local_20 = __write_lk(_FileHandle,(char *)_Buf,_MaxCharCount);
      }
      FUN_00463a82();
      return local_20;
    }
  }
  piVar1 = __errno();
  *piVar1 = 9;
  puVar2 = ___doserrno();
  *puVar2 = 0;
  return -1;
}

