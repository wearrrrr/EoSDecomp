
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl _fast_error_exit(DWORD param_1)

{
  if (___error_mode == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
                    /* WARNING: Subroutine does not return */
  ___crtExitProcess(0xff);
}

