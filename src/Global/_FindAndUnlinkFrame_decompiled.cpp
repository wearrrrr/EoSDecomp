
/* Library Function - Single Match
    void __cdecl _FindAndUnlinkFrame(struct FrameInfo *)
   
   Library: Visual Studio 2003 Release */

void __cdecl _FindAndUnlinkFrame(FrameInfo *param_1)

{
  FrameInfo *pFVar1;
  _ptiddata p_Var2;
  FrameInfo *pFVar3;
  
  p_Var2 = __getptd();
  if (param_1 == (FrameInfo *)p_Var2->_purecall) {
    p_Var2 = __getptd();
    p_Var2->_purecall = *(void **)(param_1 + 4);
    return;
  }
  p_Var2 = __getptd();
  pFVar1 = (FrameInfo *)p_Var2->_purecall;
  do {
    pFVar3 = pFVar1;
    if (*(int *)(pFVar3 + 4) == 0) {
      _inconsistency();
      return;
    }
    pFVar1 = *(FrameInfo **)(pFVar3 + 4);
  } while (param_1 != *(FrameInfo **)(pFVar3 + 4));
  *(undefined4 *)(pFVar3 + 4) = *(undefined4 *)(param_1 + 4);
  return;
}

