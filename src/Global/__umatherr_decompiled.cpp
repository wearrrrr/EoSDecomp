
/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 2003 Release */

float10 __cdecl __umatherr(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_0047abe0 + iVar1 * 8) == param_2) {
      iVar1 = *(int *)(&DAT_0047abe4 + iVar1 * 8);
      goto LAB_00462754;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  iVar1 = 0;
LAB_00462754:
  if (iVar1 != 0) {
    __ctrlfp();
    iVar1 = __matherr();
    if (iVar1 == 0) {
      __set_errno(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  __ctrlfp();
  __set_errno(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}

