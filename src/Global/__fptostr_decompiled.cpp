
void __cdecl __fptostr(char *param_1,int param_2,int param_3)

{
  char *_Str;
  char *_Dst;
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  char cVar4;
  
  _Dst = param_1;
  pcVar3 = *(char **)(param_3 + 0xc);
  _Str = param_1 + 1;
  *param_1 = '0';
  pcVar1 = _Str;
  if (0 < param_2) {
    param_1 = (char *)param_2;
    param_2 = 0;
    do {
      cVar4 = *pcVar3;
      if (cVar4 == '\0') {
        cVar4 = '0';
      }
      else {
        pcVar3 = pcVar3 + 1;
      }
      *pcVar1 = cVar4;
      pcVar1 = pcVar1 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (char *)0x0);
  }
  *pcVar1 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar3)) {
    while (pcVar1 = pcVar1 + -1, *pcVar1 == '9') {
      *pcVar1 = '0';
    }
    *pcVar1 = *pcVar1 + '\x01';
  }
  if (*_Dst == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    sVar2 = _strlen(_Str);
    _memcpy_0(_Dst,_Str,sVar2 + 1);
  }
  return;
}

