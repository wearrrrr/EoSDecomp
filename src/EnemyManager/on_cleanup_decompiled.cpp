
undefined4 EnemyManager::on_cleanup(EnemyManager *enemy_manager)

{
  AnmManager::free_anm_file(anm_manager_ptr,9);
  AnmManager::free_anm_file(anm_manager_ptr,8);
  return 0;
}

