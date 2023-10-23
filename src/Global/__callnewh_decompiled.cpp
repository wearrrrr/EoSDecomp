
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if (_DAT_006e6398 != (code *)0x0) {
    iVar1 = (*_DAT_006e6398)(_Size);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

