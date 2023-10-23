
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl BulletManager::initialize(char *filename)

{
  int result;
  
  if ((supervisor.config.flags & 1) == 0) {
    _DAT_00476438 = &DAT_00476358;
  }
  else {
    _DAT_00476438 = &DAT_004763c8;
  }
  reset(&bullet_manager);
  bullet_manager.etama_anm_filename = filename;
  bullet_manager_on_tick.function_pointer = on_tick;
  bullet_manager_on_tick.on_registration = on_registration;
  bullet_manager_on_tick.on_cleanup = on_cleanup;
  bullet_manager_on_tick.ecx_arg_to_func = &bullet_manager;
  result = UpdateFuncRegistry::register_on_tick
                     (&update_func_registry,&bullet_manager_on_tick.priority,11);
  if (result == 0) {
    bullet_manager_on_draw.function_pointer = on_draw;
    bullet_manager_on_draw.on_registration = (void *)0x0;
    bullet_manager_on_draw.on_cleanup = (void *)0x0;
    bullet_manager_on_draw.ecx_arg_to_func = &bullet_manager;
    UpdateFuncRegistry::register_on_draw(&update_func_registry,&bullet_manager_on_draw,9);
    result = 0;
  }
  else {
    result = -1;
  }
  return result;
}

