
int __cdecl Player::initialize(char param_1)

{
  int i;
  Player *player;
  
  player = &::player;
  for (i = 9788; i != 0; i = i + -1) {
    (player->vm_0).rotation.x = 0.0;
    player = (Player *)&(player->vm_0).rotation.y;
  }
  ::player.timer_75B4.current = 0;
  ::player.timer_75B4.subframe = 0.0;
  ::player.timer_75B4.previous = -999;
  ::player.byte_9E1 = param_1;
  ::player.on_tick = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_tick);
  ::player.on_draw = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_draw_A);
  ::player.on_draw_2 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_draw_B);
  (::player.on_tick)->ecx_arg_to_func = &::player;
  (::player.on_draw)->ecx_arg_to_func = &::player;
  (::player.on_draw_2)->ecx_arg_to_func = &::player;
  (::player.on_tick)->on_registration = on_registration;
  (::player.on_tick)->on_cleanup = on_cleanup;
  i = UpdateFuncRegistry::register_on_tick(&update_func_registry,&(::player.on_tick)->priority,7);
  if (i == 0) {
    UpdateFuncRegistry::register_on_draw(&update_func_registry,::player.on_draw,5);
    UpdateFuncRegistry::register_on_draw(&update_func_registry,::player.on_draw_2,7);
    i = 0;
  }
  else {
    i = -1;
  }
  return i;
}

