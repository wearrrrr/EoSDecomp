
void FUN_00461bd7(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  _FindAndUnlinkFrame(*(FrameInfo **)(unaff_EBP + -0x30));
  p_Var1 = __getptd();
  p_Var1->_terminate = *(void **)(unaff_EBP + -0x34);
  p_Var1 = __getptd();
  p_Var1->_unexpected = *(void **)(unaff_EBP + -0x38);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) && (unaff_ESI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x20) == 0 && (*(int *)(unaff_EBP + -0x1c) != 0)))) {
    iVar2 = _IsExceptionObjectToBeDestroyed__YAHPAX_Z(unaff_ESI[6]);
    if (iVar2 != 0) {
      __abnormal_termination();
      ___DestructExceptionObject((int)unaff_ESI);
    }
  }
  return;
}

