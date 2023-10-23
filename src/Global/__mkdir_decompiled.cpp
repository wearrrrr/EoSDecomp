
undefined4 __cdecl __mkdir(LPCSTR folderName)

{
  BOOL createDir;
  ulong result;
  
  createDir = CreateDirectoryA(folderName,(LPSECURITY_ATTRIBUTES)0x0);
  if (createDir == 0) {
    result = GetLastError();
  }
  else {
    result = 0;
  }
  if (result != 0) {
    __dosmaperr(result);
    return 0xffffffff;
  }
  return 0;
}

