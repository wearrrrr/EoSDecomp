
undefined4 __cdecl Stage::on_cleanup(Stage *stage)

{
  AnmManager::free_anm_file(anm_manager_ptr,4);
  if (stage->quad_vms != (AnmVm *)0x0) {
    _free(stage->quad_vms);
    stage->quad_vms = (AnmVm *)0x0;
  }
  if (stage->std_file != (StdRawHeader *)0x0) {
    _free(stage->std_file);
    stage->std_file = (StdRawHeader *)0x0;
  }
  return 0;
}

