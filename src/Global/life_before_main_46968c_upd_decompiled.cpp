
void life_before_main_46968c_upd(void)

{
  UpdateFunc *unaff_EBP;
  
  UpdateFunc::constructor(&game_manager_on_draw,unaff_EBP);
  _atexit(__at_exit_game_manager_on_draw);
  return;
}

