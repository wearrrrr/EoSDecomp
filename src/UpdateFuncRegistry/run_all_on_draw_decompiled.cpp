
int __thiscall UpdateFuncRegistry::run_all_on_draw(UpdateFuncRegistry *this)

{
  UpdateFunc *pUVar1;
  undefined4 uVar2;
  int local_c;
  UpdateFunc *local_8;
  
  local_c = 0;
  local_8 = &this->on_draw_list_head;
LAB_0041cae9:
  while( true ) {
    if (local_8 == (UpdateFunc *)0x0) {
      return local_c;
    }
    if (local_8->function_pointer != (void *)0x0) break;
LAB_0041cb5c:
    local_8 = (UpdateFunc *)(local_8->list_node).next;
  }
  do {
    uVar2 = (*(code *)local_8->function_pointer)(local_8->ecx_arg_to_func);
    switch(uVar2) {
    case 0:
      goto _switch_UpdateFuncRegistry__run_all_on_draw_case_0;
    default:
      local_c = local_c + 1;
      goto LAB_0041cb5c;
    case 2:
      break;
    case 3:
      return 1;
    case 4:
      return 0;
    case 5:
      return -1;
    }
  } while( true );
_switch_UpdateFuncRegistry__run_all_on_draw_case_0:
  pUVar1 = (UpdateFunc *)(local_8->list_node).next;
  unregister(this,local_8);
  local_c = local_c + 1;
  local_8 = pUVar1;
  goto LAB_0041cae9;
}

