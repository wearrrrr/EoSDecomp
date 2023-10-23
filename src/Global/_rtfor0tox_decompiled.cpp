
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 _rtfor0tox(void)

{
  int iVar1;
  char extraout_CL;
  char extraout_CH;
  int unaff_EBP;
  float10 fVar2;
  
  iVar1 = _isintTOS();
  if (extraout_CL == '\0') {
    fVar2 = (float10)0;
    if ((iVar1 == 1) && (extraout_CH != '\0')) {
      fVar2 = -fVar2;
    }
  }
  else {
    *(undefined *)(unaff_EBP + -0x90) = 2;
    fVar2 = _DAT_0047b240;
    if ((iVar1 == 1) && (extraout_CH != '\0')) {
      fVar2 = (float10)zerotoxdone();
      return fVar2;
    }
  }
  return fVar2;
}

