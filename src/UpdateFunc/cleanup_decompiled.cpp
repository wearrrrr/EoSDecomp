
void __thiscall UpdateFunc::cleanup(UpdateFunc *this)

{
  if (this->on_cleanup != (void *)0x0) {
    (*(code *)this->on_cleanup)(this->ecx_arg_to_func);
  }
  (this->list_node).entry = (UpdateFunc *)0x0;
  (this->list_node).next = (UpdateFuncList *)0x0;
  this->function_pointer = (void *)0x0;
  this->on_registration = (void *)0x0;
  this->on_cleanup = (void *)0x0;
  return;
}

