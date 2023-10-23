
void EffectManager::unregister_update_funcs(void)

{
  UpdateFuncRegistry::unregister
            (&update_func_registry,(UpdateFunc *)&enemy_manager.enemies[0x32].vms[7].anm_file_index)
  ;
  UpdateFuncRegistry::unregister
            (&update_func_registry,
             (UpdateFunc *)&enemy_manager.enemies[0x32].vms[7].pos_interp_initial.z);
  return;
}

