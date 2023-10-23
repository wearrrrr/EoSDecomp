
UpdateFunc * __thiscall UpdateFunc::constructor(UpdateFunc *this,UpdateFunc *new)

{
  (this->list_node).entry = (UpdateFunc *)0x0;
  (this->list_node).next = (UpdateFuncList *)0x0;
  this->function_pointer = (void *)0x0;
  (this->list_node).prev = (UpdateFuncList *)this;
  this->on_registration = (void *)0x0;
  this->on_cleanup = (void *)0x0;
  this->priority = 0;
  this->flags = this->flags & 0xfffe;
  return this;
}

