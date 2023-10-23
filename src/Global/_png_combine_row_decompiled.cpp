
void __cdecl _png_combine_row(int param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  
  puVar7 = param_2;
  bVar1 = *(byte *)(param_1 + 0xfb);
  uVar3 = (uint)bVar1;
  if (param_3 == 0xff) {
    uVar3 = uVar3 * *(int *)(param_1 + 0xb8) + 7;
    puVar7 = (undefined4 *)(*(int *)(param_1 + 0xdc) + 1);
    for (uVar4 = uVar3 >> 5; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_2 = *puVar7;
      puVar7 = puVar7 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar3 = uVar3 >> 3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)param_2 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
  }
  else if (uVar3 == 1) {
    iVar2 = *(int *)(param_1 + 0xb8);
    pbVar9 = (byte *)(*(int *)(param_1 + 0xdc) + 1);
    param_2 = (undefined4 *)0x80;
    iVar6 = 7;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (((uint)param_2 & param_3) != 0) {
        bVar1 = (byte)iVar6;
        *(byte *)puVar7 =
             (byte)(0x7f7f >> (7 - bVar1 & 0x1f)) & *(byte *)puVar7 |
             (*pbVar9 >> (bVar1 & 0x1f) & 1) << (bVar1 & 0x1f);
      }
      if (iVar6 == 0) {
        pbVar9 = pbVar9 + 1;
        iVar6 = 7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      else {
        iVar6 = iVar6 + -1;
      }
      if (param_2 == (undefined4 *)0x1) {
        param_2 = (undefined4 *)0x80;
      }
      else {
        param_2 = (undefined4 *)((int)param_2 >> 1);
      }
    }
  }
  else if (uVar3 == 2) {
    iVar2 = *(int *)(param_1 + 0xb8);
    pbVar9 = (byte *)(*(int *)(param_1 + 0xdc) + 1);
    param_2 = (undefined4 *)0x80;
    iVar6 = 6;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (((uint)param_2 & param_3) != 0) {
        bVar1 = (byte)iVar6;
        *(byte *)puVar7 =
             (byte)(0x3f3f >> (6 - bVar1 & 0x1f)) & *(byte *)puVar7 |
             (*pbVar9 >> (bVar1 & 0x1f) & 3) << (bVar1 & 0x1f);
      }
      if (iVar6 == 0) {
        pbVar9 = pbVar9 + 1;
        iVar6 = 6;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      else {
        iVar6 = iVar6 + -2;
      }
      if (param_2 == (undefined4 *)0x1) {
        param_2 = (undefined4 *)0x80;
      }
      else {
        param_2 = (undefined4 *)((int)param_2 >> 1);
      }
    }
  }
  else if (uVar3 == 4) {
    iVar2 = *(int *)(param_1 + 0xb8);
    pbVar9 = (byte *)(*(int *)(param_1 + 0xdc) + 1);
    param_2 = (undefined4 *)0x80;
    iVar6 = 4;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (((uint)param_2 & param_3) != 0) {
        bVar1 = (byte)iVar6;
        *(byte *)puVar7 =
             (byte)(0xf0f >> (4 - bVar1 & 0x1f)) & *(byte *)puVar7 |
             (*pbVar9 >> (bVar1 & 0x1f) & 0xf) << (bVar1 & 0x1f);
      }
      if (iVar6 == 0) {
        pbVar9 = pbVar9 + 1;
        iVar6 = 4;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      else {
        iVar6 = iVar6 + -4;
      }
      if (param_2 == (undefined4 *)0x1) {
        param_2 = (undefined4 *)0x80;
      }
      else {
        param_2 = (undefined4 *)((int)param_2 >> 1);
      }
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb8);
    uVar3 = (uint)(bVar1 >> 3);
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0xdc) + 1);
    param_2 = (undefined4 *)0x80000000;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      param_2._3_1_ = (byte)((uint)param_2 >> 0x18);
      if ((param_2._3_1_ & (byte)param_3) != 0) {
        puVar8 = puVar5;
        puVar10 = puVar7;
        for (uVar4 = (uint)(bVar1 >> 5); uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined *)puVar10 = *(undefined *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
      }
      puVar5 = (undefined4 *)((int)puVar5 + uVar3);
      puVar7 = (undefined4 *)((int)puVar7 + uVar3);
      if (param_2._3_1_ == 1) {
        uVar4 = 0x80;
      }
      else {
        uVar4 = (uint)(param_2._3_1_ >> 1);
      }
      param_2 = (undefined4 *)(uVar4 << 0x18);
    }
  }
  return;
}

