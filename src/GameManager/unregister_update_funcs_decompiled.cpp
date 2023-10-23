
void GameManager::unregister_update_funcs(void)

{
  UpdateFuncRegistry::unregister(&update_func_registry,&GAME_MANAGER_ON_TICK__priority_);
  UpdateFuncRegistry::unregister(&update_func_registry,&game_manager_on_draw);
  return;
}

