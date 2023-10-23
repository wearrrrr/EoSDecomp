
undefined4 * __cdecl _png_create_info_struct(int param_1)

{
  undefined4 *puVar1;
  undefined4 *extraout_EDX;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar1 = _png_create_struct_D3DX__YAPAXH_Z(2);
  if (puVar1 != (undefined4 *)0x0) {
    _png_info_init_D3DX__YAXPAUpng_info_struct_1__Z(puVar1);
    puVar1 = extraout_EDX;
  }
  return puVar1;
}

