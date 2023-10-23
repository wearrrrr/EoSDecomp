
/* Library Function - Single Match
    ___ascii_stricmp
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = 0xff;
  do {
    do {
      if (bVar3 == 0) goto LAB_00468b56;
      bVar3 = *_Str2;
      _Str2 = (char *)((byte *)_Str2 + 1);
      bVar2 = *_Str1;
      _Str1 = (char *)((byte *)_Str1 + 1);
    } while (bVar2 == bVar3);
    bVar1 = bVar3 + 0xbf + (-((byte)(bVar3 + 0xbf) < 0x1a) & 0x20U) + 0x41;
    bVar2 = bVar2 + 0xbf;
    bVar3 = bVar2 + (-(bVar2 < 0x1a) & 0x20U) + 0x41;
  } while (bVar3 == bVar1);
  bVar3 = (bVar3 < bVar1) * -2 + 1;
LAB_00468b56:
  return (int)(char)bVar3;
}

