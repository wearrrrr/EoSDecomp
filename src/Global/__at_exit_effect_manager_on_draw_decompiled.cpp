
void __at_exit_effect_manager_on_draw(void)

{
  UpdateFunc::cleanup((UpdateFunc *)&enemy_manager.enemies[0x32].vms[7].pos_interp_initial.z);
  return;
}

