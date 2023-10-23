
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _png_handle_gAMA(int *param_1,int param_2,uint param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  
  iVar3 = param_2;
  piVar2 = param_1;
  uVar5 = param_1[0x16];
  if ((uVar5 & 1) == 0) {
    _png_error(param_1,"Missing IHDR before gAMA");
  }
  else {
    if ((uVar5 & 4) != 0) {
      pcVar6 = "Invalid gAMA after IDAT";
      goto LAB_0045179d;
    }
    if ((uVar5 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        pcVar6 = "Duplicate gAMA chunk";
        goto LAB_0045179d;
      }
    }
    else {
      _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z((int)param_1,"Out of place gAMA chunk");
    }
  }
  if (param_3 == 4) {
    _png_crc_read(piVar2,(byte *)&param_1,4);
    iVar4 = _png_crc_finish_D3DX__YAHPAUpng_struct_def_1_K_Z(piVar2,0);
    if (iVar4 != 0) {
      return;
    }
    uVar5 = _png_get_uint_32_D3DX__YAKPAE_Z((undefined *)&param_1);
    if (uVar5 == 0) {
      return;
    }
    if (((*(uint *)(iVar3 + 8) & 0x800) != 0) &&
       (_DAT_0046ef08 < ABS((double)(ulonglong)uVar5 - _DAT_0046ef10))) {
      _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z
                ((int)piVar2,"Ignoring incorrect gAMA value when sRGB is also present");
      return;
    }
    fVar1 = (float)(ulonglong)uVar5 * __00001f;
    piVar2[0x4c] = (int)fVar1;
    _png_set_gAMA((int)piVar2,iVar3,(double)fVar1);
    return;
  }
  pcVar6 = "Incorrect gAMA chunk length";
LAB_0045179d:
  _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z((int)piVar2,pcVar6);
  _png_crc_finish_D3DX__YAHPAUpng_struct_def_1_K_Z(piVar2,param_3);
  return;
}

