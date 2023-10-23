
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2003 Release */

uint __fastcall _siglookup(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int unaff_ESI;
  
  uVar1 = param_2;
  do {
    if (*(int *)(uVar1 + 4) == unaff_ESI) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < param_2 + _DAT_0047b22c * 0xc);
  if ((param_2 + _DAT_0047b22c * 0xc <= uVar1) || (*(int *)(uVar1 + 4) != unaff_ESI)) {
    uVar1 = 0;
  }
  return uVar1;
}

