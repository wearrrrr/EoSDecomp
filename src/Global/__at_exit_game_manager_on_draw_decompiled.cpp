
void __at_exit_game_manager_on_draw(void)

{
  UpdateFunc::cleanup(&game_manager_on_draw);
  return;
}

