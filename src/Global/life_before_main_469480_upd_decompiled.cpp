
void life_before_main_469480_upd(void)

{
  UpdateFunc *unaff_EBP;
  
  UpdateFunc::constructor(&stage_on_draw,unaff_EBP);
  _atexit(__at_exit_stage_on_draw_A);
  return;
}

