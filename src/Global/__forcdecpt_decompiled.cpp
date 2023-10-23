
/* Library Function - Single Match
    __forcdecpt
   
   Library: Visual Studio 2003 Release */

void __cdecl __forcdecpt(char *_Buf)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = _tolower((int)*_Buf);
  bVar4 = iVar3 == 0x65;
  while (!bVar4) {
    _Buf = _Buf + 1;
    iVar3 = _isdigit((int)*_Buf);
    bVar4 = iVar3 == 0;
  }
  cVar2 = *_Buf;
  *_Buf = DAT_0047b2a0;
  do {
    _Buf = _Buf + 1;
    cVar1 = *_Buf;
    *_Buf = cVar2;
    cVar2 = cVar1;
  } while (*_Buf != '\0');
  return;
}

