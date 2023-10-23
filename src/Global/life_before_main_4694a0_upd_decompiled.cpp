
void life_before_main_4694a0_upd(void)

{
  UpdateFunc *unaff_EBP;
  
  UpdateFunc::constructor(&stage_on_draw_b,unaff_EBP);
  _atexit(__at_exit_stage_on_draw_B);
  return;
}

