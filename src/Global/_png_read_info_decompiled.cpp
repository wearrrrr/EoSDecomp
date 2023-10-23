
void __cdecl _png_read_info(int *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  piVar2 = param_1;
  if (*(byte *)(param_1 + 0x47) < 8) {
    uVar4 = (uint)*(byte *)(param_1 + 0x47);
    uVar5 = -uVar4 + 8;
    _png_read_data_D3DX__YAXPAUpng_struct_def_1_PAEI_Z(param_1,uVar4 + 0x20 + (int)param_2,uVar5);
    *(undefined *)(piVar2 + 0x47) = 8;
    iVar3 = _png_sig_cmp_D3DX__YAHPAEII_Z((int)(param_2 + 8),uVar4,uVar5);
    if (iVar3 != 0) {
      if ((uVar4 < 4) &&
         (iVar3 = _png_sig_cmp_D3DX__YAHPAEII_Z((int)(param_2 + 8),uVar4,-uVar4 + 4), iVar3 != 0)) {
        pcVar6 = "Not a PNG file";
      }
      else {
        pcVar6 = "PNG file corrupted by ASCII conversion";
      }
      _png_error(piVar2,pcVar6);
    }
  }
  piVar1 = piVar2 + 0x43;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          _png_read_data_D3DX__YAXPAUpng_struct_def_1_PAEI_Z(piVar2,&param_1,4);
          uVar4 = _png_get_uint_32_D3DX__YAKPAE_Z((undefined *)&param_1);
          _png_reset_crc_D3DX__YAXPAUpng_struct_def_1__Z((int)piVar2);
          _png_crc_read(piVar2,(byte *)piVar1,4);
          if (*piVar1 != DAT_0046e66c) break;
          _png_handle_IHDR_D3DX__YAXPAUpng_struct_def_1_PAUpng_info_struct_1_K_Z
                    (piVar2,param_2,uVar4);
        }
        if (*piVar1 != DAT_0046e684) break;
        _png_handle_PLTE(piVar2,(int)param_2,uVar4);
      }
      if (*piVar1 != DAT_0046e67c) break;
      _png_handle_IEND_D3DX__YAXPAUpng_struct_def_1_PAUpng_info_struct_1_K_Z
                (piVar2,(int)param_2,uVar4);
    }
    if (*piVar1 == DAT_0046e674) break;
    if (*piVar1 == DAT_0046e68c) {
      _png_handle_gAMA(piVar2,(int)param_2,uVar4);
    }
    else if (*piVar1 == DAT_0046e694) {
      _png_handle_sRGB(piVar2,(int)param_2,uVar4);
    }
    else if (*piVar1 == DAT_0046e69c) {
      _png_handle_tRNS(piVar2,(int)param_2,uVar4);
    }
    else {
      _png_handle_unknown_D3DX__YAXPAUpng_struct_def_1_PAUpng_info_struct_1_K_Z
                (piVar2,(int)param_2,uVar4);
    }
  }
  if ((piVar2[0x16] & 1U) == 0) {
    pcVar6 = "Missing IHDR before IDAT";
  }
  else {
    if ((*(char *)((int)piVar2 + 0x116) != '\x03') || ((piVar2[0x16] & 2U) != 0)) goto LAB_0044bf44;
    pcVar6 = "Missing PLTE before IDAT";
  }
  _png_error(piVar2,pcVar6);
LAB_0044bf44:
  piVar2[0x16] = piVar2[0x16] | 4;
  piVar2[0x3f] = uVar4;
  return;
}

