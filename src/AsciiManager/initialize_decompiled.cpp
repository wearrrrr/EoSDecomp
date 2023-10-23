
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int AsciiManager::initialize(void)

{
  int result;
  
  ascii_manager_on_tick.function_pointer = on_tick_01;
  ascii_manager_on_tick.on_registration = on_registration;
  ascii_manager_on_tick.on_cleanup = on_cleanup;
  ascii_manager_on_tick.ecx_arg_to_func = &ascii_manager;
  result = UpdateFuncRegistry::register_on_tick
                     (&update_func_registry,&ascii_manager_on_tick.priority,1);
  if (result == 0) {
    _DAT_0047b8e4 = on_draw_A;
    _DAT_0047b8e8 = 0;
    _DAT_0047b8ec = 0;
    _DAT_0047b8fc = &ascii_manager;
    UpdateFuncRegistry::register_on_draw(&update_func_registry,(UpdateFunc *)&DAT_0047b8e0,0xf);
    _ASCII_MANAGER_ON_DRAW_B_function_ptr = on_draw_B;
    _ASCII_MANAGER_ON_DRAW_B_on_registration = 0;
    _ASCII_MANAGER_ON_DRAW_B_on_cleanup = 0;
    _ASCII_MANAGER_ON_DRAW_B_ecx_arg = &ascii_manager;
    UpdateFuncRegistry::register_on_draw
              (&update_func_registry,(UpdateFunc *)&ASCII_MANAGER_ON_DRAW_B__priority_,10);
    result = 0;
  }
  else {
    result = -1;
  }
  return result;
}

