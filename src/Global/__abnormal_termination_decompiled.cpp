
/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(code **)((int)ExceptionList + 4) == __unwind_handler) {
    if (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc)) {
      iVar1 = 1;
    }
  }
  return iVar1;
}

