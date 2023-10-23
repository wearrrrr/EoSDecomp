
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (___error_mode == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  (*_DAT_0047a6f0)(0xff);
  return;
}

