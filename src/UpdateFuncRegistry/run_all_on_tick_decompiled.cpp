
int __thiscall UpdateFuncRegistry::run_all_on_tick(UpdateFuncRegistry *this)

{
  UpdateFuncRegistry *pUVar1;
  undefined4 uVar2;
  int local_c;
  UpdateFuncRegistry *local_8;
  
LAB_0041ca19:
  local_c = 0;
  local_8 = this;
LAB_0041ca26:
  while( true ) {
    if (local_8 == (UpdateFuncRegistry *)0x0) {
      return local_c;
    }
    if ((local_8->on_tick_list_head).function_pointer != (void *)0x0) break;
LAB_0041ca9b:
    local_8 = (UpdateFuncRegistry *)(local_8->on_tick_list_head).list_node.next;
  }
  do {
    uVar2 = (*(code *)(local_8->on_tick_list_head).function_pointer)
                      ((local_8->on_tick_list_head).ecx_arg_to_func);
    switch(uVar2) {
    case 0:
      goto _switch_UpdateFuncRegistry__run_all_on_tick_case_0;
    default:
      local_c = local_c + 1;
      goto LAB_0041ca9b;
    case 2:
      break;
    case 3:
      return 1;
    case 4:
      return 0;
    case 5:
      return -1;
    case 6:
      goto LAB_0041ca19;
    }
  } while( true );
_switch_UpdateFuncRegistry__run_all_on_tick_case_0:
  pUVar1 = (UpdateFuncRegistry *)(local_8->on_tick_list_head).list_node.next;
  unregister(this,&local_8->on_tick_list_head);
  local_c = local_c + 1;
  local_8 = pUVar1;
  goto LAB_0041ca26;
}

