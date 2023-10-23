
undefined4 Ending::operator_new(void)

{
  Ending *new;
  UpdateFunc *pUVar1;
  int iVar2;
  undefined4 result;
  Ending *local_40;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &__SE_handler_46911B;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  new = (Ending *)malloc(0x1170);
  local_8 = 0;
  if (new == (Ending *)0x0) {
    local_40 = (Ending *)0x0;
  }
  else {
    local_40 = constructor(new);
  }
  local_8 = 0xffffffff;
  pUVar1 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_tick);
  local_40->on_tick = pUVar1;
  local_40->on_tick->ecx_arg_to_func = local_40;
  local_40->on_tick->on_registration = on_registration;
  local_40->on_tick->on_cleanup = on_cleanup;
  iVar2 = UpdateFuncRegistry::register_on_tick(&update_func_registry,&local_40->on_tick->priority,3)
  ;
  if (iVar2 == 0) {
    pUVar1 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_draw);
    *(UpdateFunc **)local_40->field1_0x4 = pUVar1;
    *(Ending **)(*(int *)local_40->field1_0x4 + 0x1c) = local_40;
    UpdateFuncRegistry::register_on_draw
              (&update_func_registry,*(UpdateFunc **)local_40->field1_0x4,1);
    result = 0;
  }
  else {
    result = 0xffffffff;
  }
  ExceptionList = local_10;
  return result;
}

