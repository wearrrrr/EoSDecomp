
/* Library Function - Single Match
    __RoundMan
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __RoundMan(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  iVar2 = param_2 / 0x20;
  bVar4 = 0x1f - (char)(param_2 % 0x20);
  if (((*(uint *)(param_1 + iVar2 * 4) & 1 << (bVar4 & 0x1f)) != 0) &&
     (iVar3 = __ZeroTail(param_1,param_2), iVar3 == 0)) {
    local_8 = __IncMan(param_1,param_2 + -1);
  }
  puVar1 = (uint *)(param_1 + iVar2 * 4);
  *puVar1 = *puVar1 & -1 << (bVar4 & 0x1f);
  iVar2 = iVar2 + 1;
  if (iVar2 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar2 * 4);
    for (iVar3 = 3 - iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_8;
}

