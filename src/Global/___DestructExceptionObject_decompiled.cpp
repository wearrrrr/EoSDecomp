
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2003 Release */

void __cdecl ___DestructExceptionObject(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    __CallMemberFunction0__YGXPAX0_Z(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  return;
}

