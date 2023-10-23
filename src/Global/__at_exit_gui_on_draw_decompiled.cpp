
void __at_exit_gui_on_draw(void)

{
  UpdateFunc::cleanup(&GUI_ON_DRAW__priority_);
  return;
}

