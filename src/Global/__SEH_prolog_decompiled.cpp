
/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog
   
   Library: Visual Studio */

void __cdecl __SEH_prolog(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 auStack_18 [4];
  undefined local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_18 + iVar1 + 0xc) = unaff_EBX;
  *(undefined4 *)((int)auStack_18 + iVar1 + 8) = unaff_ESI;
  *(undefined4 *)((int)auStack_18 + iVar1 + 4) = unaff_EDI;
  *(undefined4 *)((int)auStack_18 + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}

