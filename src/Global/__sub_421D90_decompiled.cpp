
int __cdecl __sub_421D90(byte **param_1)

{
  byte bVar1;
  int iVar2;
  undefined3 uStack_8;
  undefined uStack_5;
  
  uStack_8 = 0;
  uStack_5 = 0;
  do {
    bVar1 = **param_1;
    *param_1 = *param_1 + 1;
    iVar2 = CONCAT13(uStack_5,uStack_8) * 0x80 + (bVar1 & 0x7f);
    uStack_8 = (undefined3)iVar2;
    uStack_5 = (undefined)((uint)iVar2 >> 0x18);
  } while ((bVar1 & 0x80) != 0);
  return iVar2;
}

