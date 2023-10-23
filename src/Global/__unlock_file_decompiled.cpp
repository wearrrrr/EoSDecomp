
/* Library Function - Single Match
    __unlock_file
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)0x47ad07 < _File) && (_File < (FILE *)0x47af69)) {
    __unlock(((int)&_File[-0x23d69]._bufsiz >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}

