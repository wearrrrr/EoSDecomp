
/* Library Function - Single Match
    __lock
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if (*(LPCRITICAL_SECTION *)(&DAT_0047a740 + _File * 8) == (LPCRITICAL_SECTION)0x0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_0047a740 + _File * 8));
  return;
}

