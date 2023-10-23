
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __msize
   
   Library: Visual Studio 2003 Release */

size_t __cdecl __msize(void *_Memory)

{
  LPVOID pvVar1;
  SIZE_T SVar2;
  size_t local_24;
  
  if (___active_heap == 3) {
    __lock(4);
    pvVar1 = ___sbh_find_block((int)_Memory);
    if (pvVar1 != (LPVOID)0x0) {
      local_24 = *(int *)((int)_Memory + -4) - 9;
    }
    FUN_0045e469();
    if (pvVar1 != (LPVOID)0x0) {
      return local_24;
    }
  }
  SVar2 = HeapSize(___hHeap_1,0,_Memory);
  return SVar2;
}

