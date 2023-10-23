
void AsciiManager::unregister_update_funcs(void)

{
  UpdateFuncRegistry::unregister(&update_func_registry,&ascii_manager_on_tick);
  UpdateFuncRegistry::unregister(&update_func_registry,(UpdateFunc *)&DAT_0047b8e0);
  return;
}

