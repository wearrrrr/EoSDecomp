
UpdateFuncRegistry * __thiscall UpdateFuncRegistry::__at_exit(UpdateFuncRegistry *this)

{
  UpdateFuncRegistry *ufr;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &__SE_handler_469148;
  local_10 = ExceptionList;
  local_8 = 0;
  ufr = (UpdateFuncRegistry *)ExceptionList;
  ExceptionList = &local_10;
  UpdateFunc::cleanup(&this->on_draw_list_head);
  local_8 = -1;
  UpdateFunc::cleanup(&this->on_tick_list_head);
  ExceptionList = local_10;
  return ufr;
}

