
void life_before_main_4693e0_upd(void)

{
  UpdateFunc *unaff_EBP;
  
  UpdateFunc::constructor(&ascii_manager_on_tick,unaff_EBP);
  _atexit(__at_exit_ascii_manager_on_tick);
  return;
}

