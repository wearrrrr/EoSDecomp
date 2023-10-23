
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __onexit_lk
   
   Library: Visual Studio 2003 Release */

void __onexit_lk(void)

{
  size_t sVar1;
  void *pvVar2;
  size_t sVar3;
  undefined4 unaff_EDI;
  
  sVar1 = __msize(___onexitbegin);
  if (sVar1 < (uint)((int)___onexitend + (4 - (int)___onexitbegin))) {
    sVar3 = 0x800;
    if (sVar1 < 0x800) {
      sVar3 = sVar1;
    }
    pvVar2 = _realloc(___onexitbegin,sVar3 + sVar1);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = _realloc(___onexitbegin,sVar1 + 0x10);
      if (pvVar2 == (void *)0x0) {
        return;
      }
    }
    ___onexitend = (undefined4 *)((int)pvVar2 + ((int)___onexitend - (int)___onexitbegin >> 2) * 4);
    ___onexitbegin = pvVar2;
  }
  *___onexitend = unaff_EDI;
  ___onexitend = ___onexitend + 1;
  return;
}

