
undefined4 __cdecl Ending::on_cleanup(void *param_1)

{
  AnmManager::free_anm_file(anm_manager_ptr,0x2c);
  AnmManager::free_anm_file(anm_manager_ptr,0x2d);
  AnmManager::free_anm_file(anm_manager_ptr,0x2e);
  supervisor.dword_18C = 7;
  AnmManager::free_surface(anm_manager_ptr,0);
  _free(*(void **)((int)param_1 + 0x1114));
  UpdateFuncRegistry::unregister(&update_func_registry,*(UpdateFunc **)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  _free(param_1);
  supervisor.dword_19C = 0;
  Supervisor::__sub_4242F3(&supervisor,5);
  return 0;
}

