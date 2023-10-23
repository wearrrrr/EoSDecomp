
undefined4 __cdecl GameManager::on_cleanup(GameManager *game_manager)

{
  (*(code *)(supervisor.d3d_device)->vtable->ResourceManagerDiscardBytes)(supervisor.d3d_device,0);
  if (::game_manager.demoplay_mode == 0) {
    Supervisor::__sub_424D38(&supervisor);
  }
  Stage::unregister_update_funcs();
  BulletManager::unregister_update_funcs();
  Player::unregister_update_funcs();
  EnemyManager::unregister_update_funcs();
  EnemyController::cleanup((EnemyController *)&enemy_manager);
  EffectManager::unregister_update_funcs();
  Gui::unregister_update_funcs();
  ReplayManager::__sub_42AAB0();
  game_manager->__byte_1821 = '\0';
  AsciiManager::__sub_401410(&ascii_manager);
  return 0;
}

