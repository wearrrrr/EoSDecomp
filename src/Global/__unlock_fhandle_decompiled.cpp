
/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             (*(int *)(&DAT_006e68a0 + (_Filehandle >> 5) * 4) + 0xc + (_Filehandle & 0x1fU) * 0x24)
            );
  return;
}

