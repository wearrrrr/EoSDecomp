
void life_before_main_469590_upd(void)

{
  UpdateFunc *unaff_EBP;
  
  UpdateFunc::constructor(&enemy_manager_on_tick,unaff_EBP);
  _atexit(__at_exit_enemy_manager_on_tick);
  return;
}

