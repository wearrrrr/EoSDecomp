
void EnemyManager::unregister_update_funcs(void)

{
  UpdateFuncRegistry::unregister(&update_func_registry,&enemy_manager_on_tick);
  UpdateFuncRegistry::unregister
            (&update_func_registry,
             (UpdateFunc *)&enemy_manager.enemies[0x32].vms[7].pos_interp_time.current);
  return;
}

