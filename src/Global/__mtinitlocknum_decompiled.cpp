
undefined4 __cdecl __mtinitlocknum(int param_1)

{
  void **ppvVar1;
  void *_Memory;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  ppvVar1 = (void **)(&DAT_0047a740 + param_1 * 8);
  if (*ppvVar1 != (void *)0x0) {
    return 1;
  }
  _Memory = _malloc(0x18);
  if (_Memory == (void *)0x0) {
LAB_0045f56f:
    piVar2 = __errno();
    *piVar2 = 0xc;
    uVar3 = 0;
  }
  else {
    __lock(10);
    if (*ppvVar1 == (void *)0x0) {
      iVar4 = ___crtInitCritSecAndSpinCount(_Memory,4000);
      if (iVar4 == 0) {
        _free(_Memory);
        __unlock(10);
        goto LAB_0045f56f;
      }
      *ppvVar1 = _Memory;
    }
    else {
      _free(_Memory);
    }
    __unlock(10);
    uVar3 = 1;
  }
  return uVar3;
}

