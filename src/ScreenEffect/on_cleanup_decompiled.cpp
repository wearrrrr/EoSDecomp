
undefined4 __cdecl ScreenEffect::on_cleanup(void *param_1)

{
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0xc) = 0;
  UpdateFuncRegistry::unregister(&update_func_registry,*(UpdateFunc **)((int)param_1 + 8));
  *(undefined4 *)((int)param_1 + 8) = 0;
  _free(param_1);
  return 0;
}

