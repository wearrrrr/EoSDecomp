
undefined4 __cdecl Menu::on_cleanup(Menu *menu)

{
  AnmManager *pAVar1;
  int local_c;
  int local_8;
  
  (*(code *)(supervisor.d3d_device)->vtable->ResourceManagerDiscardBytes)(supervisor.d3d_device,0);
  __sub_43A70A();
  for (local_8 = 0x1b; local_8 < 0x25; local_8 = local_8 + 1) {
    AnmManager::free_anm_file(anm_manager_ptr,local_8);
  }
  AnmManager::free_surface(anm_manager_ptr,0);
  pAVar1 = anm_manager_ptr;
  for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
    pAVar1->scripts[local_c + 0x100] = (AnmRawInstr *)0x0;
  }
  UpdateFuncRegistry::unregister(&update_func_registry,*(UpdateFunc **)(menu + 0x8238));
  *(undefined4 *)(menu + 0x8238) = 0;
  _free(*(void **)(menu + 0x10edc));
  return 0;
}

