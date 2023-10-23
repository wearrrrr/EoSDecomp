
int __cdecl Stage::initialize(Stage *stage)

{
  int result;
  Stage *ptr_stage;
  
  ptr_stage = &Stage;
  for (result = 189; result != 0; result = result + -1) {
    ptr_stage->quad_vms = (AnmVm *)0x0;
    ptr_stage = (Stage *)&ptr_stage->std_file;
  }
  Stage.std_file = (StdRawHeader *)0x0;
  Stage.timer_2C.current = 0;
  Stage.timer_2C.subframe = 0.0;
  Stage.timer_2C.previous = -999;
  Stage._56_4_ = stage;
  stage_on_tick.function_pointer = on_tick;
  stage_on_tick.on_registration = on_registration;
  stage_on_tick.on_cleanup = on_cleanup;
  stage_on_tick.ecx_arg_to_func = &Stage;
  result = UpdateFuncRegistry::register_on_tick(&update_func_registry,&stage_on_tick.priority,6);
  if (result == 0) {
    stage_on_draw.function_pointer = on_draw_A;
    stage_on_draw.on_registration = (void *)0x0;
    stage_on_draw.on_cleanup = (void *)0x0;
    stage_on_draw.ecx_arg_to_func = &Stage;
    UpdateFuncRegistry::register_on_draw(&update_func_registry,&stage_on_draw,3);
    stage_on_draw_b.function_pointer = on_draw_B;
    stage_on_draw_b.on_registration = (void *)0x0;
    stage_on_draw_b.on_cleanup = (void *)0x0;
    stage_on_draw_b.ecx_arg_to_func = &Stage;
    UpdateFuncRegistry::register_on_draw(&update_func_registry,&stage_on_draw_b,4);
    result = 0;
  }
  else {
    result = -1;
  }
  return result;
}

