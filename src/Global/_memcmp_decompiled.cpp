
uint _memcmp(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  
  uVar2 = param_3;
  if (param_3 != 0) {
    if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
      uVar2 = param_3 & 3;
      uVar5 = param_3 >> 2;
      bVar9 = uVar5 == 0;
      puVar7 = param_1;
      puVar8 = param_2;
      if (!bVar9) {
        do {
          param_1 = puVar7;
          param_2 = puVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          param_2 = puVar8 + 1;
          param_1 = puVar7 + 1;
          bVar9 = *puVar7 == *puVar8;
          puVar7 = param_1;
          puVar8 = param_2;
        } while (bVar9);
        if (!bVar9) {
          uVar2 = param_1[-1];
          uVar5 = param_2[-1];
          bVar9 = (byte)uVar2 < (byte)uVar5;
          if ((((byte)uVar2 == (byte)uVar5) &&
              (bVar4 = (byte)(uVar2 >> 8), bVar6 = (byte)(uVar5 >> 8), bVar9 = bVar4 < bVar6,
              bVar4 == bVar6)) &&
             (bVar4 = (byte)(uVar2 >> 0x10), bVar6 = (byte)(uVar5 >> 0x10), bVar9 = bVar4 < bVar6,
             bVar4 == bVar6)) {
            bVar9 = (byte)(uVar2 >> 0x18) < (byte)(uVar5 >> 0x18);
          }
          goto code_r0x00466b60;
        }
      }
      if (uVar2 != 0) {
        uVar5 = *param_1;
        uVar1 = *param_2;
        bVar9 = (byte)uVar5 < (byte)uVar1;
        if ((byte)uVar5 != (byte)uVar1) {
code_r0x00466b60:
          return (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        uVar3 = uVar2 - 1;
        if (uVar3 != 0) {
          bVar4 = (byte)(uVar1 >> 8);
          bVar6 = (byte)(uVar5 >> 8);
          bVar9 = bVar6 < bVar4;
          if (bVar6 != bVar4) goto code_r0x00466b60;
          uVar3 = uVar2 - 2;
          if (uVar3 != 0) {
            bVar9 = (uVar5 & 0xff0000) < (uVar1 & 0xff0000);
            if ((uVar5 & 0xff0000) != (uVar1 & 0xff0000)) goto code_r0x00466b60;
            uVar3 = uVar2 - 3;
          }
        }
        return uVar3;
      }
    }
    else {
      if ((param_3 & 1) == 0) goto code_r0x00466b13;
      bVar9 = *(byte *)param_1 < *(byte *)param_2;
      if (*(byte *)param_1 != *(byte *)param_2) goto code_r0x00466b60;
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      for (param_3 = param_3 - 1; uVar2 = param_3, param_3 != 0; param_3 = param_3 - 2) {
code_r0x00466b13:
        bVar9 = *(byte *)param_1 < *(byte *)param_2;
        if ((*(byte *)param_1 != *(byte *)param_2) ||
           (bVar9 = *(byte *)((int)param_1 + 1) < *(byte *)((int)param_2 + 1),
           *(byte *)((int)param_1 + 1) != *(byte *)((int)param_2 + 1))) goto code_r0x00466b60;
        param_2 = (uint *)((int)param_2 + 2);
        param_1 = (uint *)((int)param_1 + 2);
      }
    }
  }
  return uVar2;
}

