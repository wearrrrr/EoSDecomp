
void Player::unregister_update_funcs(void)

{
  UpdateFuncRegistry::unregister(&update_func_registry,::player.on_tick);
  ::player.on_tick = (UpdateFunc *)0x0;
  UpdateFuncRegistry::unregister(&update_func_registry,::player.on_draw);
  ::player.on_draw = (UpdateFunc *)0x0;
  UpdateFuncRegistry::unregister(&update_func_registry,::player.on_draw_2);
  ::player.on_draw_2 = (UpdateFunc *)0x0;
  return;
}

