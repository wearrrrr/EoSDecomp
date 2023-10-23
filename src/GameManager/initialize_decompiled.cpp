
int GameManager::initialize(void)

{
  int result;
  
  GAME_MANAGER_ON_TICK__priority_.function_pointer = on_tick;
  GAME_MANAGER_ON_TICK__priority_.on_registration = on_registration;
  GAME_MANAGER_ON_TICK__priority_.on_cleanup = on_cleanup;
  GAME_MANAGER_ON_TICK__priority_.ecx_arg_to_func = &game_manager;
  game_manager.field46_0x1a2e._2_4_ = 0;
  result = UpdateFuncRegistry::register_on_tick
                     (&update_func_registry,&GAME_MANAGER_ON_TICK__priority_.priority,4);
  if (result == 0) {
    game_manager_on_draw.function_pointer = on_draw;
    game_manager_on_draw.on_registration = (void *)0x0;
    game_manager_on_draw.on_cleanup = (void *)0x0;
    game_manager_on_draw.ecx_arg_to_func = &game_manager;
    UpdateFuncRegistry::register_on_draw(&update_func_registry,&game_manager_on_draw,2);
    result = 0;
  }
  else {
    result = -1;
  }
  return result;
}

