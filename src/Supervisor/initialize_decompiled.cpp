
int Supervisor::initialize(void)

{
  UpdateFunc *update_func;
  int result;
  
  supervisor.dword_188 = 0;
  supervisor.dword_18C = -1;
  supervisor.dword_184 = 0;
  update_func = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_tick);
  update_func->ecx_arg_to_func = &supervisor;
  update_func->on_registration = on_registration;
  update_func->on_cleanup = on_cleanup;
  result = UpdateFuncRegistry::register_on_tick(&update_func_registry,&update_func->priority,0);
  if (result == 0) {
    update_func = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_draw);
    update_func->ecx_arg_to_func = &supervisor;
    UpdateFuncRegistry::register_on_draw(&update_func_registry,update_func,0xe);
    result = 0;
  }
  else {
    result = -1;
  }
  return result;
}

