
int __thiscall
UpdateFuncRegistry::register_on_draw(UpdateFuncRegistry *this,UpdateFunc *func,int16_t priority)

{
  int result;
  undefined2 in_stack_0000000a;
  UpdateFunc *on_draw_item;
  
  __stub_3();
  func->priority = priority;
  for (on_draw_item = &this->on_draw_list_head;
      ((on_draw_item->list_node).next != (UpdateFuncList *)0x0 &&
      (on_draw_item->priority <= _priority));
      on_draw_item = (UpdateFunc *)(on_draw_item->list_node).next) {
  }
  if (_priority < on_draw_item->priority) {
    (func->list_node).next = (UpdateFuncList *)on_draw_item;
    (func->list_node).entry = (on_draw_item->list_node).entry;
    if ((func->list_node).entry != (UpdateFunc *)0x0) {
      (((func->list_node).entry)->list_node).next = (UpdateFuncList *)func;
    }
    (on_draw_item->list_node).entry = func;
  }
  else {
    (func->list_node).next = (UpdateFuncList *)0x0;
    (func->list_node).entry = on_draw_item;
    (on_draw_item->list_node).next = (UpdateFuncList *)func;
  }
  if (func->on_registration == (void *)0x0) {
    result = 0;
  }
  else {
    result = (*(code *)func->on_registration)(func->ecx_arg_to_func);
  }
  return result;
}

