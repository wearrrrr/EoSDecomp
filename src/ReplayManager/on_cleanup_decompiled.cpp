
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl ReplayManager::on_cleanup(int param_1)

{
  UpdateFuncRegistry::unregister(&update_func_registry,*(UpdateFunc **)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    UpdateFuncRegistry::unregister(&update_func_registry,*(UpdateFunc **)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  _free(*(void **)((int)_REPLAY_MANAGER_PTR + 4));
  _free(_REPLAY_MANAGER_PTR);
  _REPLAY_MANAGER_PTR = (void *)0x0;
  return 0;
}

