
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _isintTOS
   
   Library: Visual Studio */

undefined4 _isintTOS(void)

{
  undefined4 uVar1;
  float10 in_ST0;
  
  if (ROUND(in_ST0) != in_ST0) {
    uVar1 = _isintTOSret();
    return uVar1;
  }
  if (ROUND(in_ST0 * (float10)_DAT_0047b272) != in_ST0 * (float10)_DAT_0047b272) {
    return 1;
  }
  uVar1 = _isintTOSret();
  return uVar1;
}

