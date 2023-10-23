
void __cdecl ecl_write_var(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int local_10;
  undefined4 *local_c;
  
  local_c = ecl_get_var(param_1,param_3,(undefined4 *)0x0);
  puVar1 = ecl_get_var(param_1,&param_2,&local_10);
  if (local_10 == 0) {
    *puVar1 = *local_c;
  }
  else if (local_10 == 1) {
    *puVar1 = *local_c;
  }
  return;
}

