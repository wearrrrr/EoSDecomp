
void __thiscall _png_read_finish_row(void *this,int *param_1)

{
  uint *puVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  void *local_4;
  
  piVar3 = param_1;
  puVar1 = (uint *)(param_1 + 0x35);
  *puVar1 = *puVar1 + 1;
  if ((uint)param_1[0x30] <= *puVar1) {
    local_4 = this;
    if (*(char *)((int)param_1 + 0x113) != '\0') {
      *puVar1 = 0;
      _png_memset_check(param_1,(undefined4 *)param_1[0x36],0,param_1[0x32] + 1);
      do {
        *(char *)(piVar3 + 0x45) = *(char *)(piVar3 + 0x45) + '\x01';
        bVar2 = *(byte *)(piVar3 + 0x45);
        if (6 < bVar2) goto LAB_00451c0b;
        iVar7 = (uint)bVar2 * 4;
        uVar4 = ((piVar3[0x2e] - *(int *)((int)&UNK_0046ec3e + iVar7 + 2)) + -1 +
                *(uint *)(&DAT_0046ec5c + iVar7)) / *(uint *)(&DAT_0046ec5c + iVar7);
        piVar3[0x34] = uVar4;
        piVar3[0x33] = (*(byte *)((int)piVar3 + 0x119) * uVar4 + 7 >> 3) + 1;
      } while (((*(byte *)(piVar3 + 0x18) & 2) == 0) &&
              (piVar3[0x30] = ((piVar3[0x2f] - *(int *)(&DAT_0046ec78 + iVar7)) + -1 +
                              *(uint *)(&DAT_0046ec94 + iVar7)) / *(uint *)(&DAT_0046ec94 + iVar7),
              piVar3[0x34] == 0));
      if (bVar2 < 7) {
        return;
      }
    }
LAB_00451c0b:
    if ((*(byte *)(piVar3 + 0x17) & 0x20) == 0) {
      piVar3[0x1c] = (int)&param_1;
      piVar3[0x1d] = 1;
      while( true ) {
        if (piVar3[0x1a] == 0) {
          if (piVar3[0x3f] == 0) {
            do {
              _png_crc_finish_D3DX__YAHPAUpng_struct_def_1_K_Z(piVar3,0);
              _png_read_data_D3DX__YAXPAUpng_struct_def_1_PAEI_Z(piVar3,&local_4,4);
              iVar7 = _png_get_uint_32_D3DX__YAKPAE_Z((undefined *)&local_4);
              piVar3[0x3f] = iVar7;
              _png_reset_crc_D3DX__YAXPAUpng_struct_def_1__Z((int)piVar3);
              _png_crc_read(piVar3,(byte *)(piVar3 + 0x43),4);
              if (piVar3[0x43] != DAT_0046ecb0) {
                _png_error(piVar3,"Not enough image data");
              }
            } while (piVar3[0x3f] == 0);
          }
          piVar3[0x1a] = piVar3[0x28];
          piVar3[0x19] = (int)(byte *)piVar3[0x27];
          if ((uint)piVar3[0x3f] < (uint)piVar3[0x28]) {
            piVar3[0x1a] = piVar3[0x3f];
          }
          _png_crc_read(piVar3,(byte *)piVar3[0x27],piVar3[0x1a]);
          piVar3[0x3f] = piVar3[0x3f] - piVar3[0x1a];
        }
        pbVar5 = _inflate((byte **)(piVar3 + 0x19),(byte *)0x1);
        if (pbVar5 == (byte *)0x1) break;
        if (pbVar5 != (byte *)0x0) {
          pcVar6 = (char *)piVar3[0x1f];
          if (pcVar6 == (char *)0x0) {
            pcVar6 = "Decompression Error";
          }
          _png_error(piVar3,pcVar6);
        }
        if (piVar3[0x1d] == 0) {
          _png_error(piVar3,"Extra compressed data");
        }
      }
      if (((piVar3[0x1d] == 0) || (piVar3[0x1a] != 0)) || (piVar3[0x3f] != 0)) {
        _png_error(piVar3,"Extra compressed data");
      }
      piVar3[0x16] = piVar3[0x16] | 8;
      piVar3[0x17] = piVar3[0x17] | 0x20;
      piVar3[0x1d] = 0;
    }
    if ((piVar3[0x3f] != 0) || (piVar3[0x1a] != 0)) {
      _png_error(piVar3,"Extra compression data");
    }
    _inflateReset_D3DX__YAHPAUz_stream_s_1__Z((int)(piVar3 + 0x19));
    piVar3[0x16] = piVar3[0x16] | 8;
  }
  return;
}

