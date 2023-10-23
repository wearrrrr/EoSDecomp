
void life_before_main_469672_upd(void)

{
  UpdateFunc *unaff_EBP;
  
  UpdateFunc::constructor(&GAME_MANAGER_ON_TICK__priority_,unaff_EBP);
  _atexit(__at_exit_game_manager_on_draw);
  return;
}

