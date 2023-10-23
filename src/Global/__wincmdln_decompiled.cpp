
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __wincmdln(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  if (___mbctype_initialized == 0) {
    ___initmbctable();
  }
  if (__acmdln == (byte *)0x0) {
    pbVar3 = &DAT_0046bc09;
  }
  else {
    bVar1 = *__acmdln;
    pbVar3 = __acmdln;
    if (bVar1 != 0x22) {
      do {
        if (bVar1 < 0x21) goto LAB_00463fb6;
        bVar1 = pbVar3[1];
        pbVar3 = pbVar3 + 1;
      } while( true );
    }
    pbVar3 = __acmdln + 1;
    bVar1 = *pbVar3;
    if (bVar1 != 0x22) {
      do {
        if (bVar1 == 0) break;
        iVar2 = __ismbblead(bVar1);
        if (iVar2 != 0) {
          pbVar3 = pbVar3 + 1;
        }
        pbVar3 = pbVar3 + 1;
        bVar1 = *pbVar3;
      } while (bVar1 != 0x22);
      if (*pbVar3 != 0x22) goto LAB_00463fb6;
    }
    do {
      pbVar3 = pbVar3 + 1;
LAB_00463fb6:
    } while ((*pbVar3 != 0) && (*pbVar3 < 0x21));
  }
  return pbVar3;
}

