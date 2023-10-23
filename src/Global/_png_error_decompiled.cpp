
void __cdecl _png_error(int *param_1,undefined4 param_2)

{
  if ((code *)param_1[0x10] != (code *)0x0) {
    (*(code *)param_1[0x10])(param_1,param_2);
  }
  _png_default_error_D3DX__YAXPAUpng_struct_def_1_PBD_Z(param_1);
  return;
}

