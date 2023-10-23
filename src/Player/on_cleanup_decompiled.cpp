
undefined4 Player::on_cleanup(Player *player)

{
  if (supervisor.dword_18C != 3) {
    AnmManager::free_anm_file(anm_manager_ptr,5);
  }
  return 0;
}

