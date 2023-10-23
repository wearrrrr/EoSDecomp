
/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2003 Release */

void __cdecl __lock_file(FILE *_File)

{
  if (((FILE *)0x47ad07 < _File) && (_File < (FILE *)0x47af69)) {
    __lock(((int)&_File[-0x23d69]._bufsiz >> 5) + 0x10);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}

