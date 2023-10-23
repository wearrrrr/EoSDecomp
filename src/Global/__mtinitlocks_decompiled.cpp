
/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2003 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_006e6248;
  do {
    if (*(int *)(&DAT_0047a744 + iVar2 * 8) == 1) {
      *(undefined **)(&DAT_0047a740 + iVar2 * 8) = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount(*(undefined4 *)(&DAT_0047a740 + iVar2 * 8),4000);
      if (iVar1 == 0) {
        *(undefined4 *)(&DAT_0047a740 + iVar2 * 8) = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}

