
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2003 Release */

void __cdecl _inconsistency(void)

{
  if (_DAT_0047abdc != (code *)0x0) {
    (*_DAT_0047abdc)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}

