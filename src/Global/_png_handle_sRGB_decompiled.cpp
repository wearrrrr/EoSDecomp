
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _png_handle_sRGB(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  
  piVar2 = param_1;
  uVar1 = param_1[0x16];
  if ((uVar1 & 1) == 0) {
    _png_error(param_1,"Missing IHDR before sRGB");
  }
  else {
    if ((uVar1 & 4) != 0) {
      pcVar5 = "Invalid sRGB after IDAT";
      goto LAB_00451892;
    }
    if ((uVar1 & 2) == 0) {
      if ((param_2 != 0) && ((*(byte *)(param_2 + 9) & 8) != 0)) {
        pcVar5 = "Duplicate sRGB chunk";
        goto LAB_00451892;
      }
    }
    else {
      _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z((int)param_1,"Out of place sRGB chunk");
    }
  }
  if (param_3 == 1) {
    _png_crc_read(piVar2,(byte *)((int)&param_1 + 3),1);
    iVar4 = _png_crc_finish_D3DX__YAHPAUpng_struct_def_1_K_Z(piVar2,0);
    if (iVar4 != 0) {
      return;
    }
    bVar3 = param_1._3_1_;
    if (3 < param_1._3_1_) {
      _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z((int)piVar2,"Unknown sRGB intent");
      return;
    }
    if (((*(byte *)(param_2 + 8) & 1) != 0) &&
       ((float)_DAT_0046ef08 <
        ABS(((float)piVar2[0x4c] * ram0x0046ef98 + (float)_0_5d) - (float)_DAT_0046ef10))) {
      _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z
                ((int)piVar2,"Ignoring incorrect gAMA value when sRGB is also present");
    }
    _png_set_sRGB_gAMA_and_cHRM_D3DX__YAXPAUpng_struct_def_1_PAUpng_info_struct_1_H_Z
              ((int)piVar2,param_2,bVar3);
    return;
  }
  pcVar5 = "Incorrect sRGB chunk length";
LAB_00451892:
  _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z((int)piVar2,pcVar5);
  _png_crc_finish_D3DX__YAHPAUpng_struct_def_1_K_Z(piVar2,param_3);
  return;
}

