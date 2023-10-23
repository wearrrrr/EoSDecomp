
void __cdecl _png_do_read_interlace(uint *param_1,int *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  byte *pbVar8;
  byte *pbVar9;
  int local_18 [4];
  uint local_8;
  
  if ((param_2 != (int *)0x0) && (param_1 != (uint *)0x0)) {
    local_18[3] = *(int *)(&DAT_0046ec5c + param_3 * 4);
    uVar2 = *param_1;
    uVar3 = uVar2 * local_18[3];
    bVar1 = *(byte *)((int)param_1 + 0xb);
    if (bVar1 == 1) {
      local_18[2] = 0;
      pbVar9 = (byte *)((uVar2 - 1 >> 3) + (int)param_2);
      pbVar8 = (byte *)((uVar3 - 1 >> 3) + (int)param_2);
      local_8 = 7 - (uVar2 - 1 & 7);
      param_3 = 7 - (uVar3 - 1 & 7);
      if (uVar2 != 0) {
        do {
          bVar1 = *pbVar9;
          local_18[1] = local_18[3];
          if (0 < local_18[3]) {
            do {
              *pbVar8 = (byte)(0x7f7f >> (7 - (byte)param_3 & 0x1f)) & *pbVar8 |
                        (bVar1 >> ((byte)local_8 & 0x1f) & 1) << ((byte)param_3 & 0x1f);
              if (param_3 == 7) {
                param_3 = 0;
                pbVar8 = pbVar8 + -1;
              }
              else {
                param_3 = param_3 + 1;
              }
              local_18[1] = local_18[1] + -1;
            } while (local_18[1] != 0);
          }
          if (local_8 == 7) {
            local_8 = 0;
            pbVar9 = pbVar9 + -1;
          }
          else {
            local_8 = local_8 + 1;
          }
          local_18[2] = local_18[2] + 1;
        } while ((uint)local_18[2] < *param_1);
      }
    }
    else if (bVar1 == 2) {
      local_18[2] = 0;
      pbVar9 = (byte *)((uVar2 - 1 >> 2) + (int)param_2);
      pbVar8 = (byte *)((uVar3 - 1 >> 2) + (int)param_2);
      local_8 = (3 - (uVar2 - 1 & 3)) * 2;
      param_3 = (3 - (uVar3 - 1 & 3)) * 2;
      if (uVar2 != 0) {
        do {
          bVar1 = *pbVar9;
          local_18[1] = local_18[3];
          if (0 < local_18[3]) {
            do {
              *pbVar8 = (byte)(0x3f3f >> (6 - (byte)param_3 & 0x1f)) & *pbVar8 |
                        (bVar1 >> ((byte)local_8 & 0x1f) & 3) << ((byte)param_3 & 0x1f);
              if (param_3 == 6) {
                param_3 = 0;
                pbVar8 = pbVar8 + -1;
              }
              else {
                param_3 = param_3 + 2;
              }
              local_18[1] = local_18[1] + -1;
            } while (local_18[1] != 0);
          }
          if (local_8 == 6) {
            local_8 = 0;
            pbVar9 = pbVar9 + -1;
          }
          else {
            local_8 = local_8 + 2;
          }
          local_18[2] = local_18[2] + 1;
        } while ((uint)local_18[2] < *param_1);
      }
    }
    else if (bVar1 == 4) {
      local_18[2] = 0;
      pbVar9 = (byte *)((uVar2 - 1 >> 1) + (int)param_2);
      pbVar8 = (byte *)((uVar3 - 1 >> 1) + (int)param_2);
      local_8 = (uVar2 - 1 & 1) * -4 + 4;
      param_3 = (uVar3 - 1 & 1) * -4 + 4;
      if (uVar2 != 0) {
        do {
          bVar1 = *pbVar9;
          local_18[1] = local_18[3];
          if (0 < local_18[3]) {
            do {
              *pbVar8 = (byte)(0xf0f >> (4 - (byte)param_3 & 0x1f)) & *pbVar8 |
                        (bVar1 >> ((byte)local_8 & 0x1f) & 0xf) << ((byte)param_3 & 0x1f);
              if (param_3 == 4) {
                param_3 = 0;
                pbVar8 = pbVar8 + -1;
              }
              else {
                param_3 = param_3 + 4;
              }
              local_18[1] = local_18[1] + -1;
            } while (local_18[1] != 0);
          }
          if (local_8 == 4) {
            local_8 = 0;
            pbVar9 = pbVar9 + -1;
          }
          else {
            local_8 = local_8 + 4;
          }
          local_18[2] = local_18[2] + 1;
        } while ((uint)local_18[2] < *param_1);
      }
    }
    else {
      local_8 = 0;
      uVar5 = (uint)(bVar1 >> 3);
      piVar4 = (int *)((uVar2 - 1) * uVar5 + (int)param_2);
      param_2 = (int *)((uVar3 - 1) * uVar5 + (int)param_2);
      if (uVar2 != 0) {
        do {
          piVar6 = piVar4;
          piVar7 = local_18;
          for (uVar2 = (uint)(bVar1 >> 5); local_18[2] = local_18[3], uVar2 != 0; uVar2 = uVar2 - 1)
          {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          for (uVar2 = uVar5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined *)piVar7 = *(undefined *)piVar6;
            piVar6 = (int *)((int)piVar6 + 1);
            piVar7 = (int *)((int)piVar7 + 1);
          }
          if (0 < local_18[2]) {
            do {
              piVar6 = (int *)((int)param_2 - uVar5);
              piVar7 = local_18;
              for (uVar2 = (uint)(bVar1 >> 5); uVar2 != 0; uVar2 = uVar2 - 1) {
                *param_2 = *piVar7;
                piVar7 = piVar7 + 1;
                param_2 = param_2 + 1;
              }
              local_18[2] = local_18[2] + -1;
              for (uVar2 = uVar5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
                *(undefined *)param_2 = *(undefined *)piVar7;
                piVar7 = (int *)((int)piVar7 + 1);
                param_2 = (int *)((int)param_2 + 1);
              }
              param_2 = piVar6;
            } while (local_18[2] != 0);
          }
          piVar4 = (int *)((int)piVar4 - uVar5);
          local_8 = local_8 + 1;
        } while (local_8 < *param_1);
      }
    }
    *param_1 = uVar3;
    param_1[1] = *(byte *)((int)param_1 + 0xb) * uVar3 + 7 >> 3;
  }
  return;
}

