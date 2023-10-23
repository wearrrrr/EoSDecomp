
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((___error_mode == 1) || ((___error_mode == 0 && (_DAT_0047a6f4 == 1)))) {
    __NMSG_WRITE(0xfc);
    if (_DAT_006e63bc != (code *)0x0) {
      (*_DAT_006e63bc)();
    }
    __NMSG_WRITE(0xff);
  }
  return;
}

