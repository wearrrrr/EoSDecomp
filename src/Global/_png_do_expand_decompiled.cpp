
void __cdecl _png_do_expand(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte bVar8;
  ushort uVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  iVar2 = *param_1;
  if (*(char *)(param_1 + 2) == '\0') {
    uVar9 = 0;
    if (param_3 != 0) {
      uVar9 = *(ushort *)(param_3 + 8);
    }
    bVar8 = *(byte *)((int)param_1 + 9);
    if (bVar8 < 8) {
      if (bVar8 == 1) {
        uVar9 = uVar9 * 0xff;
        pcVar1 = (char *)(iVar2 + -1 + param_2);
        iVar4 = 7 - (iVar2 - 1U & 7);
        pbVar5 = (byte *)((iVar2 - 1U >> 3) + param_2);
        for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pcVar1 = -((*pbVar5 >> ((byte)iVar4 & 0x1f) & 1) != 0);
          if (iVar4 == 7) {
            iVar4 = 0;
            pbVar5 = pbVar5 + -1;
          }
          else {
            iVar4 = iVar4 + 1;
          }
          pcVar1 = pcVar1 + -1;
        }
      }
      else if (bVar8 == 2) {
        uVar9 = uVar9 * 0x55;
        pbVar5 = (byte *)(iVar2 + -1 + param_2);
        iVar4 = (3 - (iVar2 - 1U & 3)) * 2;
        pbVar6 = (byte *)((iVar2 - 1U >> 2) + param_2);
        for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
          bVar8 = *pbVar6 >> ((byte)iVar4 & 0x1f) & 3;
          *pbVar5 = ((bVar8 << 2 | bVar8) << 2 | bVar8) << 2 | bVar8;
          if (iVar4 == 6) {
            iVar4 = 0;
            pbVar6 = pbVar6 + -1;
          }
          else {
            iVar4 = iVar4 + 2;
          }
          pbVar5 = pbVar5 + -1;
        }
      }
      else if (bVar8 == 4) {
        uVar9 = uVar9 * 0x11;
        pbVar5 = (byte *)(iVar2 + -1 + param_2);
        pbVar6 = (byte *)((iVar2 - 1U >> 1) + param_2);
        iVar4 = (iVar2 - 1U & 1) * -4 + 4;
        for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
          bVar8 = *pbVar6 >> ((byte)iVar4 & 0x1f) & 0xf;
          *pbVar5 = bVar8 << 4 | bVar8;
          iVar3 = 4;
          if (iVar4 == 4) {
            iVar3 = 0;
            pbVar6 = pbVar6 + -1;
          }
          pbVar5 = pbVar5 + -1;
          iVar4 = iVar3;
        }
      }
      *(undefined *)((int)param_1 + 9) = 8;
      *(undefined *)((int)param_1 + 0xb) = 8;
      param_1[1] = iVar2;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar5 = (byte *)(iVar2 + -1 + param_2);
      puVar10 = (undefined *)(param_2 + -1 + iVar2 * 2);
      for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*pbVar5 == uVar9) {
          *puVar10 = 0;
        }
        else {
          *puVar10 = 0xff;
        }
        puVar10[-1] = *pbVar5;
        puVar10 = puVar10 + -2;
        pbVar5 = pbVar5 + -1;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      puVar10 = (undefined *)(param_1[1] + -1 + param_2);
      puVar11 = (undefined *)(param_2 + -1 + param_1[1] * 2);
      for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (CONCAT11(puVar10[-1],*puVar10) == uVar9) {
          *puVar11 = 0;
          puVar11[-1] = 0;
        }
        else {
          *puVar11 = 0xff;
          puVar11[-1] = 0xff;
        }
        puVar11[-2] = *puVar10;
        puVar11[-3] = puVar10[-1];
        puVar11 = puVar11 + -4;
        puVar10 = puVar10 + -2;
      }
    }
    *(undefined *)(param_1 + 2) = 4;
    *(undefined *)((int)param_1 + 10) = 2;
    bVar8 = *(char *)((int)param_1 + 9) << 1;
  }
  else {
    if (*(char *)(param_1 + 2) != '\x02') {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar5 = (byte *)(param_1[1] + -1 + param_2);
      puVar10 = (undefined *)(param_2 + -1 + iVar2 * 4);
      for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
        if ((((ushort)pbVar5[-2] == *(ushort *)(param_3 + 2)) &&
            ((ushort)pbVar5[-1] == *(ushort *)(param_3 + 4))) &&
           ((ushort)*pbVar5 == *(ushort *)(param_3 + 6))) {
          *puVar10 = 0;
        }
        else {
          *puVar10 = 0xff;
        }
        puVar10[-1] = *pbVar5;
        puVar10[-2] = pbVar5[-1];
        puVar10[-3] = pbVar5[-2];
        puVar10 = puVar10 + -4;
        pbVar5 = pbVar5 + -3;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      puVar10 = (undefined *)(param_1[1] + -1 + param_2);
      puVar11 = (undefined *)(param_2 + -1 + iVar2 * 8);
      for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (((CONCAT11(puVar10[-5],puVar10[-4]) == *(short *)(param_3 + 2)) &&
            (CONCAT11(puVar10[-3],puVar10[-2]) == *(short *)(param_3 + 4))) &&
           (CONCAT11(puVar10[-1],*puVar10) == *(short *)(param_3 + 6))) {
          *puVar11 = 0;
          puVar11[-1] = 0;
        }
        else {
          *puVar11 = 0xff;
          puVar11[-1] = 0xff;
        }
        puVar11[-2] = *puVar10;
        puVar11[-3] = puVar10[-1];
        puVar11[-4] = puVar10[-2];
        puVar11[-5] = puVar10[-3];
        puVar11[-6] = puVar10[-4];
        puVar11[-7] = puVar10[-5];
        puVar11 = puVar11 + -8;
        puVar10 = puVar10 + -6;
      }
    }
    *(undefined *)(param_1 + 2) = 6;
    *(undefined *)((int)param_1 + 10) = 4;
    bVar8 = *(char *)((int)param_1 + 9) << 2;
  }
  *(byte *)((int)param_1 + 0xb) = bVar8;
  param_1[1] = (uint)bVar8 * iVar2 >> 3;
  return;
}

