
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2003 Release */

int __cdecl __stbuf(FILE *_File)

{
  char **ppcVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = __isatty(_File->_file);
  if (iVar2 == 0) {
    return 0;
  }
  if (_File == (FILE *)&DAT_0047ad28) {
    iVar2 = 0;
  }
  else {
    if (_File != (FILE *)&DAT_0047ad48) {
      return 0;
    }
    iVar2 = 1;
  }
  __cflush = __cflush + 1;
  if ((*(ushort *)&_File->_flag & 0x10c) != 0) {
    return 0;
  }
  ppcVar1 = (char **)(&_stdbuf + iVar2 * 4);
  if (*ppcVar1 == (char *)0x0) {
    pcVar3 = (char *)_malloc(0x1000);
    *ppcVar1 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_00463b83;
    }
  }
  pcVar3 = *ppcVar1;
  _File->_base = pcVar3;
  _File->_ptr = pcVar3;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_00463b83:
  *(ushort *)&_File->_flag = *(ushort *)&_File->_flag | 0x1102;
  return 1;
}

