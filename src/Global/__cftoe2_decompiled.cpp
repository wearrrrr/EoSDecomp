
/* Library Function - Single Match
    __cftoe2
   
   Library: Visual Studio 2003 Release */

void __cdecl __cftoe2(int param_1,int param_2,char param_3)

{
  int *in_EAX;
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined *unaff_EBX;
  
  if (param_3 != '\0') {
    __shift();
  }
  if (*in_EAX == 0x2d) {
    *unaff_EBX = 0x2d;
    unaff_EBX = unaff_EBX + 1;
  }
  puVar1 = unaff_EBX;
  if (0 < param_1) {
    puVar1 = unaff_EBX + 1;
    *unaff_EBX = *puVar1;
    *puVar1 = DAT_0047b2a0;
  }
  pcVar2 = _strcpy(puVar1 + param_1 + (uint)(param_3 == '\0'),"e+000");
  if (param_2 != 0) {
    *pcVar2 = 'E';
  }
  if (*(char *)in_EAX[3] != '0') {
    iVar3 = in_EAX[1] + -1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      pcVar2[1] = '-';
    }
    if (99 < iVar3) {
      iVar4 = iVar3 / 100;
      iVar3 = iVar3 % 100;
      pcVar2[2] = pcVar2[2] + (char)iVar4;
    }
    if (9 < iVar3) {
      iVar4 = iVar3 / 10;
      iVar3 = iVar3 % 10;
      pcVar2[3] = pcVar2[3] + (char)iVar4;
    }
    pcVar2[4] = pcVar2[4] + (char)iVar3;
  }
  return;
}

