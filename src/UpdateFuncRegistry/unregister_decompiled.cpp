
void __thiscall UpdateFuncRegistry::unregister(UpdateFuncRegistry *this,UpdateFunc *func)

{
  code *pcVar1;
  bool bVar2;
  UpdateFuncRegistry *ufr;
  
  bVar2 = false;
  ufr = this;
  if (func != (UpdateFunc *)0x0) {
    for (; ufr != (UpdateFuncRegistry *)0x0;
        ufr = (UpdateFuncRegistry *)(ufr->on_tick_list_head).list_node.next) {
      if (ufr == (UpdateFuncRegistry *)func) goto LAB_0041ce4c;
    }
    bVar2 = true;
    for (ufr = (UpdateFuncRegistry *)&this->on_draw_list_head; ufr != (UpdateFuncRegistry *)0x0;
        ufr = (UpdateFuncRegistry *)((UpdateFuncList *)&ufr->on_tick_list_head)->next) {
      if (ufr == (UpdateFuncRegistry *)func) {
LAB_0041ce4c:
        if (bVar2) {
          __stub_3();
        }
        else {
          __stub_3();
        }
        if ((func->list_node).entry == (UpdateFunc *)0x0) {
          return;
        }
        func->function_pointer = (void *)0x0;
        (((func->list_node).entry)->list_node).next = (func->list_node).next;
        if ((func->list_node).next != (UpdateFuncList *)0x0) {
          (func->list_node).next[1].next = (UpdateFuncList *)(func->list_node).entry;
        }
        (func->list_node).entry = (UpdateFunc *)0x0;
        (func->list_node).next = (UpdateFuncList *)0x0;
        if ((func->flags & 1) != 0) {
          if (func == (UpdateFunc *)0x0) {
            return;
          }
          UpdateFunc::cleanup(func);
          _free(func);
          return;
        }
        if (func->on_cleanup == (void *)0x0) {
          return;
        }
        pcVar1 = (code *)func->on_cleanup;
        func->on_cleanup = (void *)0x0;
        (*pcVar1)(func->ecx_arg_to_func);
        return;
      }
    }
  }
  return;
}

