
void __at_exit_effect_manager_on_tick(void)

{
  UpdateFunc::cleanup((UpdateFunc *)&enemy_manager.enemies[0x32].vms[7].anm_file_index);
  return;
}

