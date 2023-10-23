
int __thiscall
UpdateFuncRegistry::register_on_tick(UpdateFuncRegistry *this,undefined2 *priority,int param_2)

{
  int result;
  UpdateFuncRegistry *this_00;
  
  __stub_3();
  *priority = (undefined2)param_2;
  this_00 = this;
  while (((this_00->on_tick_list_head).list_node.next != (UpdateFuncList *)0x0 &&
         ((this_00->on_tick_list_head).priority <= param_2))) {
    this_00 = (UpdateFuncRegistry *)(this_00->on_tick_list_head).list_node.next;
  }
  if (param_2 < (this_00->on_tick_list_head).priority) {
    *(UpdateFuncRegistry **)(priority + 10) = this_00;
    *(UpdateFunc **)(priority + 8) = (this_00->on_tick_list_head).list_node.entry;
    if (*(int *)(priority + 8) != 0) {
      *(undefined2 **)(*(int *)(priority + 8) + 0x14) = priority;
    }
    (this_00->on_tick_list_head).list_node.entry = (UpdateFunc *)priority;
  }
  else {
    *(undefined4 *)(priority + 10) = 0;
    *(UpdateFuncRegistry **)(priority + 8) = this_00;
    (this_00->on_tick_list_head).list_node.next = (UpdateFuncList *)priority;
  }
  if (*(int *)(priority + 4) == 0) {
    result = 0;
  }
  else {
    result = (**(code **)(priority + 4))(*(undefined4 *)(priority + 0xe));
    *(undefined4 *)(priority + 4) = 0;
  }
  return result;
}

