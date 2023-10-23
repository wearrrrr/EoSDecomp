
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___heap_select
   
   Library: Visual Studio 2003 Release */

undefined4 ___heap_select(void)

{
  if ((__osplatform == 2) && (4 < __winmajor)) {
    return 1;
  }
  return 3;
}

