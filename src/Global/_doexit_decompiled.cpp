
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _doexit(UINT terminationCode,int param_2,int param_3)

{
  HANDLE currentProcess;
  code **ppcVar1;
  bool bVar2;
  UINT exitCode;
  
  __lock(8);
  if (__C_Exit_Done == 1) {
    exitCode = terminationCode;
    currentProcess = GetCurrentProcess();
    TerminateProcess(currentProcess,exitCode);
  }
  __C_Termination_Done = 1;
  _exitflag = (undefined)param_3;
  if (param_2 == 0) {
    if (___onexitbegin != (code **)0x0) {
      ___onexitend = ___onexitend + -1;
      bVar2 = ___onexitend < ___onexitbegin;
      while (!bVar2) {
        if (*___onexitend != (code *)0x0) {
          (**___onexitend)();
        }
        ___onexitend = ___onexitend + -1;
        bVar2 = ___onexitend < ___onexitbegin;
      }
    }
    ppcVar1 = (code **)&DAT_004760c4;
    do {
      if (*ppcVar1 != (code *)0x0) {
        (**ppcVar1)();
      }
      ppcVar1 = ppcVar1 + 1;
    } while (ppcVar1 < &DAT_004760cc);
  }
  ppcVar1 = (code **)&DAT_004760d0;
  do {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
    ppcVar1 = ppcVar1 + 1;
  } while (ppcVar1 < &DAT_004760d8);
  if (param_3 == 0) {
    __C_Exit_Done = 1;
                    /* WARNING: Subroutine does not return */
    ___crtExitProcess(terminationCode);
  }
  __unlock(8);
  return;
}

