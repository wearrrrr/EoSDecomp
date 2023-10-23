
void __thiscall UpdateFuncRegistry::__sub_41CB90(UpdateFuncRegistry *this,UpdateFunc func)

{
  UpdateFuncRegistry *_Memory;
  UpdateFunc *new;
  UpdateFunc *in_stack_ffffff9c;
  UpdateFunc *local_60;
  UpdateFuncRegistry *local_5c;
  UpdateFunc local_3c;
  UpdateFuncRegistry *local_1c;
  UpdateFuncRegistry *local_18;
  UpdateFunc *i;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &__SE_handler_46917E;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UpdateFunc::constructor(&local_3c,in_stack_ffffff9c);
  local_8 = 0;
  new = (UpdateFunc *)malloc(0x20);
  local_8._0_1_ = 1;
  if (new == (UpdateFunc *)0x0) {
    local_5c = (UpdateFuncRegistry *)0x0;
  }
  else {
    local_5c = (UpdateFuncRegistry *)UpdateFunc::constructor(new,in_stack_ffffff9c);
  }
  local_1c = local_5c;
  local_3c.list_node.next = (UpdateFuncList *)local_5c;
  for (i = (UpdateFunc *)func._0_4_; local_8._0_1_ = 0, i != (UpdateFunc *)0x0;
      i = (UpdateFunc *)((UpdateFuncList *)((int)i + 0xc))->prev) {
    (local_1c->on_tick_list_head).list_node.prev = (UpdateFuncList *)i;
    new = (UpdateFunc *)malloc(0x20);
    local_8._0_1_ = 2;
    if (new == (UpdateFunc *)0x0) {
      local_60 = (UpdateFunc *)0x0;
    }
    else {
      local_60 = UpdateFunc::constructor(new,in_stack_ffffff9c);
    }
    (local_1c->on_tick_list_head).list_node.next = (UpdateFuncList *)local_60;
    local_1c = (UpdateFuncRegistry *)(local_1c->on_tick_list_head).list_node.next;
  }
  for (i = &local_3c; i != (UpdateFunc *)0x0; i = (UpdateFunc *)(i->list_node).next) {
    unregister(this,(UpdateFunc *)(i->list_node).prev);
  }
  local_1c = (UpdateFuncRegistry *)local_3c.list_node.next;
  while (_Memory = local_1c, local_1c != (UpdateFuncRegistry *)0x0) {
    local_18 = (UpdateFuncRegistry *)(local_1c->on_tick_list_head).list_node.next;
    if (local_1c != (UpdateFuncRegistry *)0x0) {
      UpdateFunc::cleanup(&local_1c->on_tick_list_head);
      _free(_Memory);
    }
    local_1c = local_18;
  }
  local_8 = 0xffffffff;
  UpdateFunc::cleanup(&local_3c);
  ExceptionList = local_10;
  return;
}

