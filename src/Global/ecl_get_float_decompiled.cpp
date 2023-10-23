
undefined4 * __cdecl ecl_get_float(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 local_c [2];
  
  lVar2 = __ftol2((double)(float)*param_2);
  local_c[0] = (undefined4)lVar2;
  puVar1 = ecl_get_var(param_1,local_c,param_3);
  if (puVar1 == local_c) {
    puVar1 = param_2;
  }
  return puVar1;
}

