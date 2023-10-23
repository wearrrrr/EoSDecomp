
undefined4 BulletManager::on_cleanup(void)

{
  if (supervisor.dword_18C != 3) {
    AnmManager::free_anm_file(anm_manager_ptr,6);
    AnmManager::free_anm_file(anm_manager_ptr,7);
  }
  return 0;
}

