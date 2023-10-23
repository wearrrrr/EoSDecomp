
undefined4 AsciiManager::on_cleanup(void)

{
  AnmManager::free_anm_file(anm_manager_ptr,1);
  AnmManager::free_anm_file(anm_manager_ptr,2);
  AnmManager::free_anm_file(anm_manager_ptr,3);
  return 0;
}

