
void __at_exit_gui_on_tick(void)

{
  UpdateFunc::cleanup(&GUI_ON_TICK__priority_);
  return;
}

