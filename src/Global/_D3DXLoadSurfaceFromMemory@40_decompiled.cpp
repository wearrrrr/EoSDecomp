
int _D3DXLoadSurfaceFromMemory_40
              (int *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,
              undefined4 param_6,undefined4 param_7,undefined4 *param_8,int *param_9,
              undefined4 param_10)

{
  int *piVar1;
  int iVar2;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48 [6];
  uint local_30;
  uint local_2c;
  cls_0x440f0a local_28;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  OOAnalyzer::cls_0x440f0a::__0CD3DXBlt__QAE_XZ(&local_28);
  if (((param_1 == (int *)0x0) || (param_4 == 0)) || (param_8 == (undefined4 *)0x0)) {
LAB_0043fc1d:
    iVar2 = -0x7789f794;
LAB_0043fe28:
    OOAnalyzer::cls_0x440f0a::__1CD3DXBlt__QAE_XZ(&local_28);
  }
  else {
    if (param_9 == (int *)0xffffffff) {
      piVar1 = _FI_Find__YAPAUFormatInfo__W4_D3DFORMAT___Z(param_5);
      param_9 = (int *)((uint)(piVar1[1] != 3) * 2 + 0x80002);
    }
    (**(code **)(*param_1 + 0x20))(param_1,local_48);
    if (param_3 == (int *)0x0) {
      local_c = local_30;
      local_14 = 0;
      local_10 = 0;
      local_8 = local_2c;
    }
    else {
      local_14 = *param_3;
      local_10 = param_3[1];
      local_c = param_3[2];
      local_8 = param_3[3];
      if ((((local_14 < 0) || (local_30 < local_c)) ||
          (((int)local_c < local_14 || ((local_10 < 0 || (local_2c < local_8)))))) ||
         ((int)local_8 < local_10)) goto LAB_0043fc1d;
    }
    if (((((local_48[0] == 0x31545844) || (local_48[0] == 0x32545844)) ||
         (local_48[0] == 0x32595559)) ||
        ((local_48[0] == 0x33545844 || (local_48[0] == 0x34545844)))) ||
       ((local_48[0] == 0x35545844 || (local_48[0] == 0x59565955)))) {
      iVar2 = (**(code **)(*param_1 + 0x24))(param_1,&local_1c,0,0);
      if (iVar2 < 0) goto LAB_0043fe28;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x24))(param_1,&local_1c,&local_14,0);
      if (iVar2 < 0) {
        OOAnalyzer::cls_0x440f0a::__1CD3DXBlt__QAE_XZ(&local_28);
        return iVar2;
      }
      local_c = local_c - local_14;
      local_8 = local_8 - local_10;
      local_14 = 0;
      local_10 = 0;
    }
    local_6c = local_14;
    local_68 = local_10;
    local_64 = local_c;
    local_60 = local_8;
    local_94 = local_18;
    local_e0 = param_4;
    local_8c = local_1c;
    local_d8 = param_6;
    local_90 = local_48[0];
    local_dc = param_5;
    local_4c = param_2;
    local_9c = param_10;
    local_7c = local_30;
    local_98 = param_7;
    local_b8 = *param_8;
    local_78 = local_2c;
    local_b4 = param_8[1];
    local_b0 = param_8[2];
    local_70 = 1;
    local_58 = 1;
    local_a4 = 1;
    local_ac = param_8[3];
    local_88 = 0;
    local_50 = 0;
    local_84 = 0;
    local_80 = 0;
    local_74 = 0;
    local_5c = 0;
    local_d4 = 0;
    local_a8 = 0;
    iVar2 = OOAnalyzer::cls_0x440f0a::_Blt_CD3DXBlt__QAEJPAUD3DX_BLT__0K_Z
                      (&local_28,(int)&local_94,&local_e0,param_9);
    if (-1 < iVar2) {
      iVar2 = 0;
    }
    (**(code **)(*param_1 + 0x28))(param_1);
    OOAnalyzer::cls_0x440f0a::__1CD3DXBlt__QAE_XZ(&local_28);
  }
  return iVar2;
}

