
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall fFYTOX(undefined4 param_1,undefined param_2,undefined1 (*param_3) [10])

{
  int iVar1;
  ushort uVar2;
  undefined4 extraout_ECX;
  byte bVar3;
  byte extraout_DL;
  undefined extraout_DL_00;
  int unaff_EBP;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  unkbyte10 extraout_ST1;
  float10 fVar4;
  unkbyte10 extraout_ST1_00;
  unkbyte10 Var5;
  undefined5 uVar6;
  
  *(undefined *)(unaff_EBP + -0x90) = 0xfe;
  if ((char)((uint)param_1 >> 8) != '\0') {
    iVar1 = _isintTOS();
    if (iVar1 == 0) {
      __rtindfpop(param_3);
      return;
    }
    uVar2 = (ushort)(byte)extraout_ECX;
    if (iVar1 != 2) {
      uVar2 = CONCAT11(0xff,(byte)extraout_ECX);
    }
    param_1 = CONCAT22((short)((uint)extraout_ECX >> 0x10),uVar2);
    param_2 = extraout_DL_00;
  }
  uVar6 = __ffexpm1(param_1,param_2);
  bVar3 = (byte)((uint5)uVar6 >> 0x20);
  fVar4 = (float10)1 + extraout_ST0;
  Var5 = extraout_ST1;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) != 0) {
    if (_DAT_006e61ec == 1) {
      __safe_fdivr();
      bVar3 = extraout_DL;
      fVar4 = extraout_ST0_00;
      Var5 = extraout_ST1_00;
    }
    else {
      fVar4 = (float10)1 / fVar4;
    }
  }
  if ((bVar3 & 0x40) == 0) {
    fscale(fVar4,Var5);
  }
  FUN_00460238();
  return;
}

