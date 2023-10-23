
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setenvp
   
   Library: Visual Studio 2003 Release */

int __cdecl __setenvp(void)

{
  char **ppcVar1;
  size_t sVar2;
  char *_Dest;
  char *pcVar3;
  int iVar4;
  
  if (___mbctype_initialized == 0) {
    ___initmbctable();
  }
  iVar4 = 0;
  pcVar3 = __aenvptr;
  if (__aenvptr != (char *)0x0) {
    for (; *pcVar3 != '\0'; pcVar3 = pcVar3 + sVar2 + 1) {
      if (*pcVar3 != '=') {
        iVar4 = iVar4 + 1;
      }
      sVar2 = _strlen(pcVar3);
    }
    ppcVar1 = (char **)_malloc(iVar4 * 4 + 4);
    pcVar3 = __aenvptr;
    __environ = ppcVar1;
    if (ppcVar1 != (char **)0x0) {
      do {
        if (*pcVar3 == '\0') {
          _free(__aenvptr);
          __aenvptr = (char *)0x0;
          *ppcVar1 = (char *)0x0;
          ___env_initialized = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar3);
        if (*pcVar3 != '=') {
          _Dest = (char *)_malloc(sVar2 + 1);
          *ppcVar1 = _Dest;
          if (_Dest == (char *)0x0) {
            _free(__environ);
            __environ = (char **)0x0;
            return -1;
          }
          _strcpy(_Dest,pcVar3);
          ppcVar1 = ppcVar1 + 1;
        }
        pcVar3 = pcVar3 + sVar2 + 1;
      } while( true );
    }
  }
  return -1;
}

