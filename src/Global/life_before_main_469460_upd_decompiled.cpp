
void life_before_main_469460_upd(void)

{
  UpdateFunc *unaff_EBP;
  
  UpdateFunc::constructor(&stage_on_tick,unaff_EBP);
  _atexit(__at_exit_stage_on_tick);
  return;
}

