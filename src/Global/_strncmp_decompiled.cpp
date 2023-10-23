
/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  
  sVar4 = _MaxCount;
  pcVar7 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar4 == 0) break;
      sVar4 = sVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar5 = _MaxCount - sVar4;
    do {
      pcVar7 = _Str2;
      pcVar8 = _Str1;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar8 = _Str1 + 1;
      pcVar7 = _Str2 + 1;
      cVar1 = *_Str2;
      cVar2 = *_Str1;
      _Str2 = pcVar7;
      _Str1 = pcVar8;
    } while (cVar1 == cVar2);
    bVar3 = pcVar7[-1];
    uVar6 = 0;
    bVar9 = bVar3 == pcVar8[-1];
    if (bVar3 < (byte)pcVar8[-1] || bVar9) {
      if (bVar9) {
        return 0;
      }
      uVar6 = 0xfffffffe;
    }
    _MaxCount = ~uVar6;
  }
  return _MaxCount;
}

