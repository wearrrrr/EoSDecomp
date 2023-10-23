
void __cdecl ins_17_mod_impl(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  float10 fVar2;
  int local_14;
  float *local_10;
  float *local_c;
  float *local_8;
  
  local_8 = (float *)ecl_get_var(param_1,&param_2,&local_14);
  if (local_14 == 0) {
    local_10 = (float *)ecl_get_var(param_1,param_3,(undefined4 *)0x0);
    piVar1 = ecl_get_var(param_1,param_4,(undefined4 *)0x0);
    *local_8 = (float)((int)*local_10 % *piVar1);
  }
  else if (local_14 == 1) {
    local_10 = (float *)ecl_get_float(param_1,param_3,(undefined4 *)0x0);
    local_c = (float *)ecl_get_float(param_1,param_4,(undefined4 *)0x0);
    fVar2 = (float10)_fmod(SUB84((double)*local_10,0),(int)((ulonglong)(double)*local_10 >> 0x20),
                           SUB84((double)*local_c,0),(int)((ulonglong)(double)*local_c >> 0x20));
    *local_8 = (float)fVar2;
  }
  return;
}

