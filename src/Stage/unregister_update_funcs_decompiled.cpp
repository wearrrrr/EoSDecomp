
void Stage::unregister_update_funcs(void)

{
  UpdateFuncRegistry::unregister(&update_func_registry,&stage_on_tick);
  UpdateFuncRegistry::unregister(&update_func_registry,&stage_on_draw);
  UpdateFuncRegistry::unregister(&update_func_registry,&stage_on_draw_b);
  return;
}

