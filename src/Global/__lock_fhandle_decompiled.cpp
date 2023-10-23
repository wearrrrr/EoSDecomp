
undefined4 __cdecl __lock_fhandle(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_1 & 0x1f) * 0x24;
  iVar2 = *(int *)(&DAT_006e68a0 + ((int)param_1 >> 5) * 4) + iVar3;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      if (iVar1 == 0) {
        __unlock(10);
        return 0;
      }
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    __unlock(10);
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)(*(int *)(&DAT_006e68a0 + ((int)param_1 >> 5) * 4) + 0xc + iVar3));
  return 1;
}

