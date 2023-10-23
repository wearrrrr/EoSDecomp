
UpdateFunc * __thiscall UpdateFunc::operator_new(UpdateFunc *this,void *update_func)

{
  UpdateFunc *new;
  UpdateFunc *in_stack_ffffffdc;
  void *errors;
  undefined *frame;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  frame = &__SE_handler_46919B;
  errors = ExceptionList;
  ExceptionList = &errors;
  new = (UpdateFunc *)malloc(0x20);
  local_8 = 0;
  if (new == (UpdateFunc *)0x0) {
    new = (UpdateFunc *)0x0;
  }
  else {
    new = constructor(new,in_stack_ffffffdc);
  }
  new->function_pointer = update_func;
  new->on_registration = (void *)0x0;
  new->on_cleanup = (void *)0x0;
  new->flags = new->flags | 1;
  ExceptionList = errors;
  return new;
}

