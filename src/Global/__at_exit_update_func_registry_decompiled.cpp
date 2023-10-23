
void __at_exit_update_func_registry(void)

{
  UpdateFuncRegistry::__at_exit(&update_func_registry);
  return;
}

