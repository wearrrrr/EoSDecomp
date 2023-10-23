
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cinit(void)

{
  int iVar1;
  code **ppcVar2;
  
  if (_DAT_0047a624 != (code *)0x0) {
    (*_DAT_0047a624)();
  }
  iVar1 = 0;
  ppcVar2 = (code **)&DAT_004760a8;
  do {
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*ppcVar2 != (code *)0x0) {
      iVar1 = (**ppcVar2)();
    }
    ppcVar2 = ppcVar2 + 1;
  } while (ppcVar2 < &DAT_004760c0);
  if (iVar1 == 0) {
    _atexit(__RTC_Terminate);
    ppcVar2 = (code **)&DAT_00476000;
    do {
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)();
      }
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 < &DAT_004760a4);
    iVar1 = 0;
  }
  return iVar1;
}

