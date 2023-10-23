
void life_before_main_4695e0_upd(void)

{
  UpdateFunc *unaff_EBP;
  
  UpdateFunc::constructor(&bullet_manager_on_tick,unaff_EBP);
  _atexit(__at_exit_bullet_manager_on_tick);
  return;
}

