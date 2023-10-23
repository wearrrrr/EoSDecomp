
void __at_exit_stage_on_tick(void)

{
  UpdateFunc::cleanup(&stage_on_tick);
  return;
}

