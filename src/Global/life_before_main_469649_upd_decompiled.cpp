
void life_before_main_469649_upd(void)

{
  UpdateFunc *unaff_EBP;
  
  UpdateFunc::constructor(&GUI_ON_DRAW__priority_,unaff_EBP);
  _atexit(__at_exit_gui_on_draw);
  return;
}

