
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2003 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  ___hHeap_1 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (___hHeap_1 == (HANDLE)0x0) {
    return 0;
  }
  ___active_heap = ___heap_select();
  if ((___active_heap == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(___hHeap_1);
    return 0;
  }
  return 1;
}

