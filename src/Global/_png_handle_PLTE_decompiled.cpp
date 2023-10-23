
void __cdecl _png_handle_PLTE(int *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  
  piVar3 = param_1;
  uVar2 = param_1[0x16];
  if ((uVar2 & 1) == 0) {
    pcVar7 = "Missing IHDR before PLTE";
LAB_00451624:
    _png_error(param_1,pcVar7);
LAB_0045162c:
    param_1[0x16] = param_1[0x16] | 2;
    if (param_3 % 3 != 0) {
      pcVar7 = "Invalid palette chunk";
      if (*(char *)((int)param_1 + 0x116) != '\x03') goto LAB_0045164c;
      _png_error(param_1,"Invalid palette chunk");
    }
    piVar4 = (int *)((int)param_3 / 3);
    puVar5 = _png_zalloc_D3DX__YAPAXPAXII_Z(param_1,(int)piVar4,3);
    *(byte *)((int)param_1 + 0x5d) = *(byte *)((int)param_1 + 0x5d) | 0x10;
    if (0 < (int)piVar4) {
      puVar6 = (undefined *)((int)puVar5 + 2);
      param_1 = piVar4;
      do {
        _png_crc_read(piVar3,(byte *)&param_3,3);
        puVar6[-2] = (undefined)param_3;
        puVar6[-1] = param_3._1_1_;
        *puVar6 = param_3._2_1_;
        puVar6 = puVar6 + 3;
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
    }
    _png_crc_finish_D3DX__YAHPAUpng_struct_def_1_K_Z(piVar3,0);
    piVar3[0x41] = (int)puVar5;
    *(short *)(piVar3 + 0x42) = (short)piVar4;
    _png_set_PLTE_D3DX__YAXPAUpng_struct_def_1_PAUpng_info_struct_1_PAUpng_color_struct_1_H_Z
              ((int)piVar3,param_2,puVar5,(short)piVar4);
    if ((((*(char *)((int)piVar3 + 0x116) == '\x03') && (param_2 != 0)) &&
        ((*(byte *)(param_2 + 8) & 0x10) != 0)) &&
       (uVar1 = *(ushort *)((int)piVar3 + 0x10a),
       *(ushort *)(piVar3 + 0x42) <= uVar1 && uVar1 != *(ushort *)(piVar3 + 0x42))) {
      _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z
                ((int)piVar3,"Truncating incorrect tRNS chunk length");
      *(ushort *)((int)piVar3 + 0x10a) = *(ushort *)(piVar3 + 0x42);
    }
  }
  else {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 2) != 0) {
        pcVar7 = "Duplicate PLTE chunk";
        goto LAB_00451624;
      }
      goto LAB_0045162c;
    }
    pcVar7 = "Invalid PLTE after IDAT";
LAB_0045164c:
    _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z((int)param_1,pcVar7);
    _png_crc_finish_D3DX__YAHPAUpng_struct_def_1_K_Z(param_1,param_3);
  }
  return;
}

