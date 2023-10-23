
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ffexpm1
   
   Library: Visual Studio */

undefined5 __fastcall __ffexpm1(undefined4 param_1,undefined param_2)

{
  undefined4 in_EAX;
  undefined extraout_DL;
  int unaff_EBP;
  float10 in_ST0;
  float10 fVar1;
  undefined4 unaff_retaddr;
  
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(_DAT_0047b25e < ABS(in_ST0)) << 8 | (ushort)(_DAT_0047b25e == ABS(in_ST0)) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 0x41) == 0) {
    fVar1 = ROUND(in_ST0);
    *(ushort *)(unaff_EBP + -0xa0) =
         (ushort)(fVar1 < (float10)0) << 8 | (ushort)(fVar1 == (float10)0) << 0xe;
    fVar1 = in_ST0 - fVar1;
    *(ushort *)(unaff_EBP + -0xa0) =
         (ushort)(fVar1 < (float10)0) << 8 | (ushort)(fVar1 == (float10)0) << 0xe;
    f2xm1(ABS(fVar1));
    return CONCAT14(*(undefined *)(unaff_EBP + -0x9f),in_EAX);
  }
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(in_ST0 < (float10)0) << 8 | (ushort)(in_ST0 == (float10)0) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) == 0) {
    return CONCAT14(param_2,unaff_retaddr);
  }
  *(undefined *)(unaff_EBP + -0x90) = 4;
  FUN_00460246();
  return CONCAT14(extraout_DL,unaff_retaddr);
}

