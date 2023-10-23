
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ___initstdio(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  size_t sVar5;
  
  sVar5 = 0x14;
  if (__nstream == 0) {
    sVar5 = 0x200;
  }
  else if (0x13 < (int)__nstream) goto LAB_00462d8f;
  __nstream = sVar5;
LAB_00462d8f:
  ___piob = _calloc(__nstream,4);
  if (___piob == (void *)0x0) {
    __nstream = 0x14;
    ___piob = _calloc(0x14,4);
    if (___piob == (void *)0x0) {
      return 0x1a;
    }
  }
  iVar3 = 0;
  puVar1 = &DAT_0047ad08;
  do {
    *(undefined **)(iVar3 + (int)___piob) = puVar1;
    puVar1 = puVar1 + 0x20;
    iVar3 = iVar3 + 4;
  } while ((int)puVar1 < 0x47af88);
  uVar2 = 0;
  puVar4 = (undefined4 *)&DAT_0047ad18;
  do {
    iVar3 = *(int *)(*(int *)(&DAT_006e68a0 + ((int)uVar2 >> 5) * 4) + (uVar2 & 0x1f) * 0x24);
    if ((iVar3 == -1) || (iVar3 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar2 = uVar2 + 1;
  } while ((int)puVar4 < 0x47ad78);
  return 0;
}

