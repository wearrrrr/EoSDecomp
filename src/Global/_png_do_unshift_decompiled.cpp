
int ** __cdecl _png_do_unshift(int *param_1,int **param_2,int **param_3)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 in_EAX;
  int **ppiVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int **ppiVar10;
  int iVar11;
  int **ppiVar12;
  uint uVar13;
  int *local_14;
  int local_10;
  int local_c;
  
  ppiVar10 = param_2;
  bVar2 = *(byte *)(param_1 + 2);
  ppiVar4 = (int **)CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
  if (bVar2 != 3) {
    bVar1 = false;
    iVar11 = *param_1;
    if ((bVar2 & 2) == 0) {
      piVar8 = (int *)((uint)*(byte *)((int)param_1 + 9) - (uint)*(byte *)((int)param_3 + 3));
      uVar9 = 1;
    }
    else {
      piVar8 = (int *)((uint)*(byte *)((int)param_1 + 9) - (uint)*(byte *)param_3);
      local_10 = (uint)*(byte *)((int)param_1 + 9) - (uint)*(byte *)((int)param_3 + 1);
      local_c = (uint)*(byte *)((int)param_1 + 9) - (uint)*(byte *)((int)param_3 + 2);
      uVar9 = 3;
    }
    local_14 = piVar8;
    ppiVar4 = param_3;
    if ((*(byte *)(param_1 + 2) & 4) != 0) {
      ppiVar4 = (int **)((uint)*(byte *)((int)param_1 + 9) - (uint)*(byte *)(param_3 + 1));
      (&local_14)[uVar9] = (int *)ppiVar4;
      uVar9 = uVar9 + 1;
    }
    iVar7 = 0;
    if (uVar9 != 0) {
      do {
        ppiVar4 = &local_14 + iVar7;
        if ((int)*ppiVar4 < 1) {
          *ppiVar4 = (int *)0x0;
          piVar8 = local_14;
        }
        else {
          bVar1 = true;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar9);
      if (bVar1) {
        uVar5 = (uint)*(byte *)((int)param_1 + 9);
        if (uVar5 == 2) {
          ppiVar4 = param_2;
          for (iVar11 = param_1[1]; iVar11 != 0; iVar11 = iVar11 + -1) {
            *(byte *)ppiVar4 = *(byte *)ppiVar4 >> 1 & 0x55;
            ppiVar4 = (int **)((int)ppiVar4 + 1);
          }
        }
        else if (uVar5 == 4) {
          bVar6 = (byte)piVar8;
          uVar9 = 0xf0 >> (bVar6 & 0x1f) & 0xfffffff0;
          bVar2 = (byte)uVar9 | (byte)(0xf >> (bVar6 & 0x1f));
          ppiVar4 = (int **)CONCAT31((int3)(uVar9 >> 8),bVar2);
          for (iVar11 = param_1[1]; iVar11 != 0; iVar11 = iVar11 + -1) {
            *(byte *)param_2 = *(byte *)param_2 >> (bVar6 & 0x1f) & bVar2;
            param_2 = (int **)((int)param_2 + 1);
          }
        }
        else if (uVar5 == 8) {
          uVar5 = iVar11 * uVar9;
          uVar13 = 0;
          ppiVar4 = (int **)0x0;
          if (uVar5 != 0) {
            do {
              ppiVar4 = (int **)(uVar13 / uVar9);
              *(byte *)param_2 = *(byte *)param_2 >> (*(byte *)(&local_14 + uVar13 % uVar9) & 0x1f);
              param_2 = (int **)((int)param_2 + 1);
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar5);
          }
        }
        else {
          ppiVar4 = (int **)(uVar5 - 0x10);
          if (ppiVar4 == (int **)0x0) {
            ppiVar12 = (int **)(iVar11 * uVar9);
            param_2 = (int **)0x0;
            if (ppiVar12 != (int **)0x0) {
              do {
                uVar3 = (ushort)((ushort)*(byte *)ppiVar10 * 0x100 +
                                (ushort)*(byte *)((int)ppiVar10 + 1)) >>
                        ((byte)*(undefined2 *)(&local_14 + (uint)param_2 % uVar9) & 0x1f);
                *(byte *)ppiVar10 = (byte)(uVar3 >> 8);
                *(byte *)((int)ppiVar10 + 1) = (byte)uVar3;
                ppiVar10 = (int **)((int)ppiVar10 + 2);
                ppiVar4 = (int **)((int)param_2 + 1);
                param_2 = ppiVar4;
              } while (ppiVar4 < ppiVar12);
            }
          }
        }
      }
    }
  }
  return ppiVar4;
}

