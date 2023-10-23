
void BulletManager::unregister_update_funcs(void)

{
  UpdateFuncRegistry::unregister(&update_func_registry,&bullet_manager_on_tick);
  UpdateFuncRegistry::unregister(&update_func_registry,&bullet_manager_on_draw);
  return;
}

