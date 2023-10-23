
void __cdecl _png_handle_tRNS(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte local_c [2];
  byte local_a [2];
  byte local_8 [4];
  
  if ((param_1[0x16] & 1U) != 0) {
    if ((param_1[0x16] & 4U) == 0) {
      if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 0x10) == 0)) goto LAB_0045197c;
      pcVar4 = "Duplicate tRNS chunk";
    }
    else {
      pcVar4 = "Invalid tRNS after IDAT";
    }
    goto LAB_00451adc;
  }
  _png_error(param_1,"Missing IHDR before tRNS");
LAB_0045197c:
  cVar1 = *(char *)((int)param_1 + 0x116);
  if (cVar1 == '\x03') {
    if ((*(byte *)(param_1 + 0x16) & 2) == 0) {
      _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z((int)param_1,"Missing PLTE before tRNS");
LAB_004519a0:
      if (param_3 != 0) {
        pbVar2 = (byte *)_png_malloc_D3DX__YAPAXPAUpng_struct_def_1_K_Z(param_1,param_3);
        *(byte *)((int)param_1 + 0x5d) = *(byte *)((int)param_1 + 0x5d) | 0x20;
        param_1[0x57] = (int)pbVar2;
        _png_crc_read(param_1,pbVar2,param_3);
        *(short *)((int)param_1 + 0x10a) = (short)param_3;
        goto LAB_00451aa8;
      }
      _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z((int)param_1,"Zero length tRNS chunk");
    }
    else {
      if (param_3 <= *(ushort *)(param_1 + 0x42)) goto LAB_004519a0;
      _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z((int)param_1,"Incorrect tRNS chunk length");
    }
LAB_00451ae5:
    _png_crc_finish_D3DX__YAHPAUpng_struct_def_1_K_Z(param_1,param_3);
  }
  else {
    if (cVar1 == '\x02') {
      if (param_3 != 6) {
LAB_00451a79:
        pcVar4 = "Incorrect tRNS chunk length";
LAB_00451adc:
        _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z((int)param_1,pcVar4);
        goto LAB_00451ae5;
      }
      _png_crc_read(param_1,local_c,6);
      *(undefined2 *)((int)param_1 + 0x10a) = 1;
      iVar3 = _png_get_uint_16_D3DX__YAGPAE_Z(local_c);
      *(short *)((int)param_1 + 0x162) = (short)iVar3;
      iVar3 = _png_get_uint_16_D3DX__YAGPAE_Z(local_a);
      *(short *)(param_1 + 0x59) = (short)iVar3;
      iVar3 = _png_get_uint_16_D3DX__YAGPAE_Z(local_8);
      *(short *)((int)param_1 + 0x166) = (short)iVar3;
    }
    else {
      if (cVar1 != '\0') {
        pcVar4 = "tRNS chunk not allowed with alpha channel";
        goto LAB_00451adc;
      }
      if (param_3 != 2) goto LAB_00451a79;
      _png_crc_read(param_1,local_c,2);
      *(undefined2 *)((int)param_1 + 0x10a) = 1;
      iVar3 = _png_get_uint_16_D3DX__YAGPAE_Z(local_c);
      *(short *)(param_1 + 0x5a) = (short)iVar3;
    }
LAB_00451aa8:
    iVar3 = _png_crc_finish_D3DX__YAHPAUpng_struct_def_1_K_Z(param_1,0);
    if (iVar3 == 0) {
      _png_set_tRNS_D3DX__YAXPAUpng_struct_def_1_PAUpng_info_struct_1_PAEHPAUpng_color_16_struct_1__Z
                ((int)param_1,param_2,param_1[0x57],(uint)*(ushort *)((int)param_1 + 0x10a),
                 param_1 + 0x58);
    }
  }
  return;
}

