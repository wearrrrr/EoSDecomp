
void __at_exit_enemy_manager_on_draw(void)

{
  UpdateFunc::cleanup((UpdateFunc *)&enemy_manager.enemies[0x32].vms[7].pos_interp_time.current);
  return;
}

