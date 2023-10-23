
int D3DXCreateTextureFromFileInMemoryEx
              (int *param_1,uint *param_2,uint param_3,dword param_4,dword param_5,uint param_6,
              uint param_7,uint param_8,uint param_9,int *param_10,int *param_11,uint param_12,
              undefined4 *param_13,uint *param_14,int **param_15)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  cls_0x44422c *pcVar8;
  uint *puVar9;
  uint local_440 [256];
  cls_0x44422c local_40;
  uint *local_10;
  uint *local_c;
  int *local_8;
  
  OOAnalyzer::cls_0x44422c::__0CD3DXImage__QAE_XZ(&local_40);
  local_8 = (int *)0x0;
  local_c = (uint *)0x0;
  local_10 = (uint *)0x0;
  if ((((param_1 == (int *)0x0) || (param_2 == (uint *)0x0)) || (param_3 == 0)) ||
     (param_15 == (int **)0x0)) {
    iVar6 = -0x7789f794;
LAB_00440216:
    OOAnalyzer::cls_0x44422c::__1CD3DXImage__QAE_XZ(&local_40);
    return iVar6;
  }
  iVar6 = _Load_CD3DXImage__QAEJPBXKPAU_D3DXIMAGE_INFO___Z(&local_40,param_2,param_3,param_13);
  uVar4 = param_12;
  if (iVar6 < 0) goto LAB_00440216;
  param_3 = 1;
  for (; local_40.mbr_0x28 != 0; local_40.mbr_0x28 = *(dword *)(local_40.mbr_0x28 + 0x28)) {
    param_3 = param_3 + 1;
  }
  if ((param_4 == 0) || (param_4 == 0xffffffff)) {
    param_4 = local_40.mbr_0x14;
  }
  if ((param_5 == 0) || (param_5 == 0xffffffff)) {
    param_5 = local_40.mbr_0x18;
  }
  if (param_8 == 0) {
    if (param_12 == 0) {
      param_8 = 0x16;
      if (local_40.mbr_0x0 != 0x14) {
LAB_004402b5:
        param_8 = local_40.mbr_0x0;
      }
    }
    else {
      if (local_40.mbr_0x0 != 0x14) {
        if ((int)local_40.mbr_0x0 < 0x16) goto LAB_004402b5;
        if (0x17 < (int)local_40.mbr_0x0) {
          if (((local_40.mbr_0x0 == 0x18) || (local_40.mbr_0x0 == 0x1b)) ||
             (local_40.mbr_0x0 == 0x1e)) {
            param_8 = 0x19;
          }
          else {
            if (local_40.mbr_0x0 != 0x32) goto LAB_004402b5;
            param_8 = 0x33;
          }
          goto LAB_004402b8;
        }
      }
      param_8 = 0x15;
    }
  }
LAB_004402b8:
  if (param_10 == (int *)0xffffffff) {
    piVar2 = _FI_Find__YAPAUFormatInfo__W4_D3DFORMAT___Z(local_40.mbr_0x0);
    param_10 = (int *)((uint)(piVar2[1] != 3) * 2 + 0x80002);
  }
  if (param_11 == (int *)0xffffffff) {
    piVar2 = _FI_Find__YAPAUFormatInfo__W4_D3DFORMAT___Z(local_40.mbr_0x0);
    param_11 = (int *)(((piVar2[1] != 3) - 1 & 0xfffffffd) + 5);
  }
  if ((((char)param_10 == '\x01') || (((uint)param_11 & 0xff) == 2)) ||
     (param_13 = (undefined4 *)0x0, ((uint)param_11 & 0xff) == 5)) {
    param_13 = (undefined4 *)0x1;
  }
  if (local_40.mbr_0x1c == 0) {
    puVar7 = local_440;
    for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    uVar5 = 0;
    do {
      uVar1 = *(uint *)(local_40.mbr_0x1c + uVar5 * 4);
      if (uVar1 == (param_12 >> 0x10 & 0xff | (uVar4 & 0xff) << 0x10 | uVar4 & 0xff00ff00)) {
        local_440[uVar5] = 0;
      }
      else {
        local_440[uVar5] = uVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x100);
    param_12 = 0;
  }
  if (param_14 == (uint *)0x0) {
    if (param_8 == 0x28) {
LAB_004403c8:
      param_8 = 0x15;
    }
    else if (param_8 == 0x29) {
      uVar4 = 0;
      param_8 = 0x16;
      pcVar3 = (char *)(local_40.mbr_0x1c + 3);
      do {
        if (*pcVar3 != -1) goto LAB_004403c8;
        uVar4 = uVar4 + 1;
        pcVar3 = pcVar3 + 4;
      } while (uVar4 < 0x100);
    }
  }
  else {
    puVar7 = local_440;
    puVar9 = param_14;
    for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  iVar6 = _D3DXCheckTextureRequirements_28
                    (param_1,&param_4,&param_5,&param_6,param_7,(int *)&param_8,param_9);
  if ((-1 < iVar6) &&
     (iVar6 = (**(code **)(*param_1 + 0x50))
                        (param_1,param_4,param_5,param_6,param_7,param_8,param_9,&local_c),
     -1 < iVar6)) {
    param_2 = local_c;
    param_9 = (uint)(param_9 == 0);
    if (param_9 != 0) {
      iVar6 = (**(code **)(*param_1 + 0x50))(param_1,param_4,param_5,param_6,0,param_8,2,&local_10);
      if (iVar6 < 0) goto LAB_0044052c;
      param_2 = local_10;
    }
    param_8 = 0;
    pcVar8 = &local_40;
    if (param_3 != 0) {
      while (param_8 < param_6) {
        iVar6 = (**(code **)(*param_2 + 0x3c))(param_2,param_8,&local_8);
        if (iVar6 < 0) goto LAB_0044052c;
        iVar6 = _D3DXLoadSurfaceFromMemory_40
                          (local_8,param_14,(int *)0x0,pcVar8->mbr_0x4,pcVar8->mbr_0x0,
                           pcVar8->mbr_0x8,local_440,&pcVar8->mbr_0xc,param_10,param_12);
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
        if (iVar6 < 0) goto LAB_0044052c;
        param_8 = param_8 + 1;
        if (param_3 <= param_8) break;
        pcVar8 = (cls_0x44422c *)pcVar8->mbr_0x28;
      }
    }
    if (param_13 == (undefined4 *)0x0) {
      for (; param_8 < param_6; param_8 = param_8 + 1) {
        iVar6 = (**(code **)(*param_2 + 0x3c))(param_2,param_8,&local_8);
        if (iVar6 < 0) goto LAB_0044052c;
        iVar6 = _D3DXLoadSurfaceFromMemory_40
                          (local_8,param_14,(int *)0x0,pcVar8->mbr_0x4,pcVar8->mbr_0x0,
                           pcVar8->mbr_0x8,local_440,&pcVar8->mbr_0xc,param_11,param_12);
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
        if (iVar6 < 0) goto LAB_0044052c;
      }
    }
    else if ((param_3 < param_6) &&
            (iVar6 = _D3DXFilterTexture_16((int *)param_2,local_440,param_3 - 1,param_11), iVar6 < 0
            )) goto LAB_0044052c;
    if ((param_9 == 0) ||
       (iVar6 = (**(code **)(*param_1 + 0x74))(param_1,local_10,local_c), -1 < iVar6)) {
      puVar7 = local_c;
      local_c = (uint *)0x0;
      *param_15 = (int *)puVar7;
      iVar6 = 0;
    }
  }
LAB_0044052c:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (uint *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (uint *)0x0;
  }
  if (local_10 != (uint *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
    local_10 = (uint *)0x0;
  }
  OOAnalyzer::cls_0x44422c::__1CD3DXImage__QAE_XZ(&local_40);
  return iVar6;
}

