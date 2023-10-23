
void life_before_main_469600_upd(void)

{
  UpdateFunc *unaff_EBP;
  
  UpdateFunc::constructor(&bullet_manager_on_draw,unaff_EBP);
  _atexit(__at_exit_bullet_manager_on_draw);
  return;
}

