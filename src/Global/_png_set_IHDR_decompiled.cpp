
void __cdecl
_png_set_IHDR(int param_1,uint *param_2,uint param_3,uint param_4,char param_5,byte param_6,
             undefined param_7,undefined param_8,undefined param_9)

{
  byte bVar1;
  
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    *(undefined *)((int)param_2 + 0x1a) = param_8;
    param_2[1] = param_4;
    *(undefined *)((int)param_2 + 0x1b) = param_9;
    *param_2 = param_3;
    *(char *)(param_2 + 6) = param_5;
    *(byte *)((int)param_2 + 0x19) = param_6;
    *(undefined *)(param_2 + 7) = param_7;
    if ((param_6 == 3) || ((param_6 & 2) == 0)) {
      *(undefined *)((int)param_2 + 0x1d) = 1;
    }
    else {
      *(undefined *)((int)param_2 + 0x1d) = 3;
    }
    if ((param_6 & 4) != 0) {
      *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
    }
    bVar1 = *(char *)((int)param_2 + 0x1d) * param_5;
    *(byte *)((int)param_2 + 0x1e) = bVar1;
    if ((uint)(0x7fffffff / (ulonglong)(uint)((int)(bVar1 + 7) >> 3)) < param_3) {
      _png_warning_D3DX__YAXPAUpng_struct_def_1_PBD_Z
                (param_1,"Width too large to process image data; rowbytes will overflow.");
      param_2[3] = 0;
    }
    else {
      param_2[3] = bVar1 * param_3 + 7 >> 3;
    }
  }
  return;
}

