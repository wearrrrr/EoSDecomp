
undefined4 AugmentSinCos(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  float10 in_ST0;
  float10 fVar1;
  undefined4 unaff_retaddr;
  
  fVar1 = ((float10)1 + ABS(in_ST0)) * ((float10)1 - ABS(in_ST0));
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(fVar1 < (float10)0) << 8 | (ushort)(fVar1 == (float10)0) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) == 0) {
    return in_EAX;
  }
  if (*(char *)(unaff_EBP + -0x90) < '\x01') {
    *(undefined *)(unaff_EBP + -0x90) = 1;
  }
  return unaff_retaddr;
}

