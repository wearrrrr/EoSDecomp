
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __CIpow(void)

{
  bool bVar1;
  uint in_MXCSR;
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  
  if (_DAT_006e688c != 0) {
    bVar1 = (in_MXCSR & 0x1f80) == 0x1f80;
    if (bVar1) {
      bVar1 = (in_FPUControlWord & 0x7f) == 0x7f;
    }
    if (bVar1) {
      __CIpow_pentium4();
      return;
    }
  }
  start_5(SUB84((double)in_ST1,0),(int)((ulonglong)(double)in_ST1 >> 0x20),SUB84((double)in_ST0,0));
  return;
}

