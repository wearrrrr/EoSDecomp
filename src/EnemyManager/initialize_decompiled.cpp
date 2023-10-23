
int __cdecl EnemyManager::initialize(char *ecl_anm_filename,char *ecl2_anm_filename)

{
  int result;
  
  __sub_410E30((EnemyManager *)&enemy_manager.enemies[0x32].current_context.time.subframe);
  enemy_manager.enemies[50].current_context.time.subframe = (float)ecl_anm_filename;
  enemy_manager.enemies[50].current_context.time.current = (int32_t)ecl2_anm_filename;
  enemy_manager_on_tick.function_pointer = on_tick;
  enemy_manager_on_tick.on_registration = on_registration;
  enemy_manager_on_tick.on_cleanup = on_cleanup;
  enemy_manager_on_tick.ecx_arg_to_func = &enemy_manager.enemies[0x32].current_context.time.subframe
  ;
  result = UpdateFuncRegistry::register_on_tick
                     (&update_func_registry,&enemy_manager_on_tick.priority,9);
  if (result == 0) {
    enemy_manager.enemies[50].vms[7].time_of_last_sprite_set = (int32_t)on_draw;
    enemy_manager.enemies[50].vms[7].alpha_interp_time.previous = 0;
    enemy_manager.enemies[50].vms[7].alpha_interp_time.subframe = 0.0;
    enemy_manager.enemies[50].current_context.time.previous = 0x4b79c8;
    result = UpdateFuncRegistry::register_on_draw
                       (&update_func_registry,
                        (UpdateFunc *)&enemy_manager.enemies[0x32].vms[7].pos_interp_time.current,6)
    ;
    if (result == 0) {
      result = 0;
    }
    else {
      result = -1;
    }
  }
  else {
    result = -1;
  }
  return result;
}

