
void __at_exit_enemy_manager_on_tick(void)

{
  UpdateFunc::cleanup(&enemy_manager_on_tick);
  return;
}

