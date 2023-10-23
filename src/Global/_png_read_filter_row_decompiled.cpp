
void __cdecl _png_read_filter_row(int param_1,int param_2,byte *param_3,byte *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  
  if (param_5 != 0) {
    if (param_5 == 1) {
      uVar4 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
      pbVar8 = param_3 + uVar4;
      if (uVar4 < *(uint *)(param_2 + 4)) {
        pbVar11 = pbVar8 + -uVar4;
        iVar6 = *(uint *)(param_2 + 4) - uVar4;
        do {
          *pbVar8 = *pbVar8 + *pbVar11;
          pbVar8 = pbVar8 + 1;
          pbVar11 = pbVar11 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else if (param_5 == 2) {
      uVar4 = *(uint *)(param_2 + 4);
      uVar7 = 0;
      if (uVar4 != 0) {
        do {
          *param_3 = *param_3 + param_4[uVar7];
          param_3 = param_3 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
    }
    else if (param_5 == 3) {
      iVar6 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
      iVar3 = *(int *)(param_2 + 4) - iVar6;
      pbVar8 = param_3;
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pbVar8 = *pbVar8 + (*param_4 >> 1);
        param_4 = param_4 + 1;
        pbVar8 = pbVar8 + 1;
      }
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pbVar8 = *pbVar8 + (char)(((uint)*param_3 + (uint)*param_4) / 2);
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        pbVar8 = pbVar8 + 1;
      }
    }
    else if (param_5 == 4) {
      iVar3 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
      iVar6 = *(int *)(param_2 + 4) - iVar3;
      pbVar8 = param_3;
      pbVar11 = param_4;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pbVar8 = *pbVar8 + *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar8 = pbVar8 + 1;
      }
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        bVar5 = *param_3;
        bVar1 = *pbVar11;
        bVar2 = *param_4;
        param_3 = param_3 + 1;
        pbVar11 = pbVar11 + 1;
        param_4 = param_4 + 1;
        iVar3 = (uint)bVar1 - (uint)bVar2;
        iVar9 = (uint)bVar5 - (uint)bVar2;
        param_2 = iVar3;
        if (iVar3 < 0) {
          param_2 = -iVar3;
        }
        iVar10 = iVar9;
        if (iVar9 < 0) {
          iVar10 = -iVar9;
        }
        iVar3 = iVar3 + iVar9;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (((iVar10 < param_2) || (iVar3 < param_2)) && (bVar5 = bVar1, iVar3 < iVar10)) {
          bVar5 = bVar2;
        }
        *pbVar8 = *pbVar8 + bVar5;
        pbVar8 = pbVar8 + 1;
      }
    }
    else {
      _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z(param_1,"Ignoring bad adaptive filter type");
      *param_3 = 0;
    }
  }
  return;
}

