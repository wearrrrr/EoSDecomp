
float10 fFASN(void)

{
  char extraout_CL;
  char extraout_CH;
  unkbyte10 extraout_ST0;
  unkbyte10 extraout_ST1;
  float10 fVar1;
  
  AugmentSinCos();
  fVar1 = (float10)fpatan(extraout_ST1,extraout_ST0);
  if (extraout_CH != '\0') {
    fVar1 = (float10)3.141592653589793 - fVar1;
  }
  if (extraout_CL != '\0') {
    fVar1 = -fVar1;
  }
  return fVar1;
}

