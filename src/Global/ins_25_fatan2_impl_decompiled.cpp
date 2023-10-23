
void __cdecl
ins_25_fatan2_impl(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  float *pfVar1;
  float10 fVar2;
  int local_18;
  float *local_14;
  float *local_10;
  float *local_c;
  float *local_8;
  
  local_c = (float *)ecl_get_var(param_1,&param_2,&local_18);
  if (local_18 == 1) {
    local_14 = (float *)ecl_get_float(param_1,param_3,(undefined4 *)0x0);
    local_10 = (float *)ecl_get_float(param_1,param_4,(undefined4 *)0x0);
    local_8 = (float *)ecl_get_float(param_1,param_5,(undefined4 *)0x0);
    pfVar1 = (float *)ecl_get_float(param_1,param_6,(undefined4 *)0x0);
    fVar2 = (float10)_atan2(SUB84((double)(*pfVar1 - *local_10),0),
                            (int)((ulonglong)(double)(*pfVar1 - *local_10) >> 0x20),
                            SUB84((double)(*local_8 - *local_14),0),
                            (int)((ulonglong)(double)(*local_8 - *local_14) >> 0x20));
    *local_c = (float)fVar2;
  }
  return;
}

