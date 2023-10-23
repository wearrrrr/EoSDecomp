
int D3DXLoadSurfaceFromFileInMemory
              (int *param_1,undefined4 param_2,int *param_3,uint *param_4,uint param_5,
              dword *param_6,int *param_7,undefined4 param_8,undefined4 *param_9)

{
  int iVar1;
  cls_0x44422c local_44;
  dword local_14;
  dword local_10;
  dword local_c;
  dword local_8;
  
  OOAnalyzer::cls_0x44422c::__0CD3DXImage__QAE_XZ(&local_44);
  if (((param_1 == (int *)0x0) || (param_4 == (uint *)0x0)) || (param_5 == 0)) {
LAB_0043ff2f:
    iVar1 = -0x7789f794;
  }
  else {
    iVar1 = _Load_CD3DXImage__QAEJPBXKPAU_D3DXIMAGE_INFO___Z(&local_44,param_4,param_5,param_9);
    if (iVar1 < 0) goto LAB_0043ff34;
    if (param_6 == (dword *)0x0) {
      local_14 = local_44.mbr_0xc;
      local_10 = local_44.mbr_0x10;
      local_c = local_44.mbr_0x14;
      local_8 = local_44.mbr_0x18;
    }
    else {
      local_14 = *param_6;
      local_10 = param_6[1];
      local_c = param_6[2];
      local_8 = param_6[3];
      if (((((int)local_14 < 0) || ((int)local_44.mbr_0x14 < (int)local_c)) ||
          (((int)local_c < (int)local_14 ||
           (((int)local_10 < 0 || ((int)local_44.mbr_0x18 < (int)local_8)))))) ||
         ((int)local_8 < (int)local_10)) goto LAB_0043ff2f;
    }
    iVar1 = _D3DXLoadSurfaceFromMemory_40
                      (param_1,param_2,param_3,local_44.mbr_0x4,local_44.mbr_0x0,local_44.mbr_0x8,
                       local_44.mbr_0x1c,&local_14,param_7,param_8);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
LAB_0043ff34:
  OOAnalyzer::cls_0x44422c::__1CD3DXImage__QAE_XZ(&local_44);
  return iVar1;
}

