
float10 __cdecl __fFLN(undefined1 (*param_1) [10])

{
  int unaff_EBP;
  float10 extraout_ST0;
  float10 in_ST0;
  
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(in_ST0 < (float10)0) << 8 | (ushort)(in_ST0 == (float10)0) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 0x41) == 0) {
    return (float10)0.6931471805599453 * in_ST0;
  }
  __rtindfpop(param_1);
  return extraout_ST0;
}

