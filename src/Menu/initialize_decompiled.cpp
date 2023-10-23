
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl Menu::initialize(int param_1)

{
  int result;
  
  _memset(&MENU,0,0x10f34);
  game_manager.__byte_181f = '\0';
  (*(code *)(supervisor.d3d_device)->vtable->GetAvailableTextureMem)(supervisor.d3d_device);
  __stub_4();
  _DAT_006dc8b0 = -(uint)(param_1 != 0) & 0xc;
  supervisor.slowdown = 0.0;
  _DAT_006dc8f4 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_tick);
  _DAT_006dc8f4->ecx_arg_to_func = &MENU;
  _DAT_006dc8f4->on_registration = on_registration;
  _DAT_006dc8f4->on_cleanup = on_cleanup;
  _DAT_006dc8b4 = 0;
  result = UpdateFuncRegistry::register_on_tick(&update_func_registry,&_DAT_006dc8f4->priority,2);
  if (result == 0) {
    _DAT_006dc8f8 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_draw);
    _DAT_006dc8f8->ecx_arg_to_func = &MENU;
    UpdateFuncRegistry::register_on_draw(&update_func_registry,_DAT_006dc8f8,0);
    _DAT_006e55f0 = 0;
    _DAT_006dc8b4 = 0x3c;
    _DAT_006e55ec = 0;
    result = 0;
  }
  else {
    result = -1;
  }
  return result;
}

