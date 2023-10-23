
void Gui::unregister_update_funcs(void)

{
  UpdateFuncRegistry::unregister(&update_func_registry,&GUI_ON_TICK__priority_);
  UpdateFuncRegistry::unregister(&update_func_registry,&GUI_ON_DRAW__priority_);
  return;
}

