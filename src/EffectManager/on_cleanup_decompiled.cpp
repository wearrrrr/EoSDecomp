
undefined4 EffectManager::on_cleanup(void)

{
  AnmManager::free_anm_file(anm_manager_ptr,0xb);
  return 0;
}

