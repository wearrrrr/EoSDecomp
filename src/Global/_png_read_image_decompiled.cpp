
void __cdecl _png_read_image(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *extraout_ECX;
  int *this;
  int local_8;
  
  this = param_1;
  local_8 = _png_set_interlace_handling_D3DX__YAHPAUpng_struct_def_1__Z((int)param_1);
  iVar1 = param_1[0x2f];
  param_1[0x30] = iVar1;
  iVar2 = iVar1;
  puVar3 = param_2;
  if (0 < local_8) {
    do {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        _png_read_row_D3DX__YAXPAUpng_struct_def_1_PAE1_Z
                  (this,param_1,(undefined4 *)*puVar3,(undefined4 *)0x0);
        puVar3 = puVar3 + 1;
        this = extraout_ECX;
      }
      local_8 = local_8 + -1;
      iVar2 = iVar1;
      puVar3 = param_2;
    } while (local_8 != 0);
  }
  return;
}

