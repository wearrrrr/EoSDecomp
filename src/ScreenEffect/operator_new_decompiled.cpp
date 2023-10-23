
int * __cdecl
ScreenEffect::operator_new(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int i;
  int *piVar1;
  int *local_2c;
  UpdateFunc *local_18;
  UpdateFunc *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &__SE_handler_46926B;
  local_10 = ExceptionList;
  local_14 = (UpdateFunc *)0x0;
  local_18 = (UpdateFunc *)0x0;
  ExceptionList = &local_10;
  local_2c = (int *)malloc(0x30);
  local_8 = 0;
  if (local_2c == (int *)0x0) {
    local_2c = (int *)0x0;
  }
  else {
    Timer::constructor((Timer *)(local_2c + 9));
  }
  local_8 = 0xffffffff;
  if (local_2c == (int *)0x0) {
    local_2c = (int *)0x0;
  }
  else {
    piVar1 = local_2c;
    for (i = 0xc; i != 0; i = i + -1) {
      *piVar1 = 0;
      piVar1 = piVar1 + 1;
    }
    if (param_1 == 0) {
      local_14 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,FUN_0042f800);
      local_18 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,FUN_0042fee0);
    }
    else if (param_1 == 1) {
      local_14 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,FUN_0042ffc0);
    }
    else if (param_1 == 2) {
      local_14 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,FUN_0042fc80);
      local_18 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,FUN_0042ff70);
    }
    local_14->on_registration = on_registration;
    local_14->on_cleanup = on_cleanup;
    local_14->ecx_arg_to_func = local_2c;
    *local_2c = param_1;
    local_2c[5] = param_2;
    local_2c[6] = param_3;
    local_2c[7] = param_4;
    local_2c[8] = param_5;
    i = UpdateFuncRegistry::register_on_tick(&update_func_registry,&local_14->priority,0xe);
    if (i == 0) {
      if (local_18 != (UpdateFunc *)0x0) {
        local_18->ecx_arg_to_func = local_2c;
        UpdateFuncRegistry::register_on_draw(&update_func_registry,local_18,0x10);
      }
      local_2c[1] = (int)local_14;
      local_2c[2] = (int)local_18;
    }
    else {
      local_2c = (int *)0x0;
    }
  }
  ExceptionList = local_10;
  return local_2c;
}

