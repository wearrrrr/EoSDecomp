
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl Player::on_tick(Player *player)

{
  float fVar1;
  AnmManager *this;
  bool isMsgActive;
  undefined3 extraout_var;
  uint uVar2;
  longlong lVar3;
  int i;
  bool in_stack_ffffffa0;
  
  if (game_manager.__byte_2c != 0) {
    return 1;
  }
  for (i = 0; i < 32; i = i + 1) {
    player->size_array_638[i].x = 0.0;
  }
  for (i = 0; i < 16; i = i + 1) {
    player->player_rect_array_8B8[i].size.x = 0.0;
  }
  if ((player->player_inner).dword_0 == 0) {
    isMsgActive = Gui::msg_is_active(&gui);
    if (((((CONCAT31(extraout_var,isMsgActive) == 0) && (player->dword_9D8 != 0)) &&
         (0 < game_manager.bombs_remaining)) &&
        (((input.currently_pressed & 2) != 0 &&
         ((input.currently_pressed & 2) != (input.word_4 & 2))))) &&
       ((player->player_inner).bomb_func_14 != (void *)0x0)) {
      game_manager.__dword_24 = game_manager.__dword_24 + 1;
      game_manager.bombs_remaining = game_manager.bombs_remaining + -1;
      gui.flags_0 = gui.flags_0 & 0xfffffff3 | 8;
      (player->player_inner).dword_0 = 1;
      (player->player_inner).timer.current = 0;
      (player->player_inner).timer.subframe = 0.0;
      (player->player_inner).timer.previous = -999;
      (player->player_inner).dword_4 = 999;
      (*(code *)(player->player_inner).bomb_func_14)(player);
      _enemy_manager = 0;
      GameManager::decrease_rank(&game_manager,200);
      _ENEMY_MANAGER___dword_EE5D4 = _ENEMY_MANAGER___spellcard_capture;
    }
  }
  else {
    (*(code *)(player->player_inner).bomb_func_14)(player);
  }
  if (player->byte_9E0 == '\x02') {
    if (player->dword_9D8 != 0) {
      player->dword_9D8 = player->dword_9D8 + -1;
      if (player->dword_9D8 == 0) {
        game_manager.power_item_count = '\0';
                    /* If the player is out of lives */
        if (game_manager.lives_remaining < 1) {
          ItemManager::spawn_item(&item_manager,&player->position,FItem,true);
          ItemManager::spawn_item(&item_manager,&player->position,FItem,true);
          ItemManager::spawn_item(&item_manager,&player->position,FItem,true);
          ItemManager::spawn_item(&item_manager,&player->position,FItem,true);
          ItemManager::spawn_item(&item_manager,&player->position,FItem,true);
          game_manager.current_power = 0;
          game_manager.__byte_181c = -1;
        }
        else {
          ItemManager::spawn_item(&item_manager,&player->position,BigPowerItem,true);
          ItemManager::spawn_item(&item_manager,&player->position,PowerItem,true);
          ItemManager::spawn_item(&item_manager,&player->position,PowerItem,true);
          ItemManager::spawn_item(&item_manager,&player->position,PowerItem,true);
          ItemManager::spawn_item(&item_manager,&player->position,PowerItem,true);
          ItemManager::spawn_item(&item_manager,&player->position,PowerItem,true);
          if (game_manager.current_power < 17) {
            game_manager.current_power = 0;
          }
          else {
            game_manager.current_power = game_manager.current_power - 0x10;
          }
        }
        gui.flags_0 = gui.flags_0 & 0xffffffcf | 0x20;
        GameManager::decrease_rank(&game_manager,1600);
      }
      goto LAB_00428fa8;
    }
    fVar1 = ((float)(player->timer_75B4).current + (player->timer_75B4).subframe) / _0_0f;
    (player->vm_0).scale_y = _3_0f * fVar1 + _1_0f;
    (player->vm_0).scale_x = _1_0f - _1_0f * fVar1;
    lVar3 = __ftol2((double)(_55_0f - (((float)(player->timer_75B4).current +
                                       (player->timer_75B4).subframe) * _55_0f) / _0_0f));
    (player->vm_0).color = (int)lVar3 << 0x18 | 0xffffff;
    (player->vm_0).flags = (player->vm_0).flags | 4;
    player->float_A10 = 0.0;
    player->dword_A14 = 0;
    if ((player->timer_75B4).current < 0x1e) goto LAB_00428fa8;
    player->byte_9E0 = '\x01';
    (player->position).x = game_manager.arcade_region_size.x / _2_0f;
    (player->position).y = game_manager.arcade_region_size.y - _64_0f;
    (player->position).z = 0.2;
    (player->timer_75B4).current = 0;
    (player->timer_75B4).subframe = 0.0;
    (player->timer_75B4).previous = -999;
    (player->vm_0).scale_x = 3.0;
    (player->vm_0).scale_y = 3.0;
    this = anm_manager_ptr;
    (player->vm_0).anm_file_index = 0x400;
    AnmManager::set_vm_script(this,&player->vm_0,(AnmRawScript *)this->scripts[0x400]);
    if (game_manager.lives_remaining < '\x01') {
      game_manager.__byte_1820 = '\x01';
      goto LAB_00428fa8;
    }
    game_manager.lives_remaining = game_manager.lives_remaining + -1;
    if ((game_manager.difficulty < 4) && (game_manager.__byte_1823 == '\0')) {
      game_manager.bombs_remaining = supervisor.config_defaults.starting_bombs;
    }
    else {
      game_manager.bombs_remaining = '\x03';
    }
    gui.flags_0 = gui.flags_0 & 0xfffffff0 | 10;
  }
  else if (player->byte_9E0 != '\x01') goto LAB_00428fa8;
  player->dword_9DC = 0x5a;
  fVar1 = _1_0f - ((float)(player->timer_75B4).current + (player->timer_75B4).subframe) / _0_0f;
  (player->vm_0).scale_y = _2_0f * fVar1 + _1_0f;
  (player->vm_0).scale_x = _1_0f - _1_0f * fVar1;
  (player->vm_0).flags = (player->vm_0).flags | 4;
  player->float_9D4 = 1.0;
  player->float_9D0 = 1.0;
  (player->vm_0).color = ((player->timer_75B4).current * 0xff) / 0x1e << 0x18 | 0xffffff;
  player->dword_9D8 = 0;
  if (0x1d < (player->timer_75B4).current) {
    player->byte_9E0 = '\x03';
    (player->vm_0).scale_x = 1.0;
    (player->vm_0).scale_y = 1.0;
    (player->vm_0).color = 0xffffffff;
    (player->vm_0).flags = (player->vm_0).flags & 0xfffffffb;
    (player->timer_75B4).current = 0xf0;
    (player->timer_75B4).subframe = 0.0;
    (player->timer_75B4).previous = -999;
    player->dword_9D8 = 6;
  }
LAB_00428fa8:
  if (player->dword_9DC != 0) {
    player->dword_9DC = player->dword_9DC + -1;
    BulletManager::cancel_bullets(&bullet_manager,0);
  }
  if (player->byte_9E0 == '\x03') {
    Timer::sub(&player->timer_75B4,1);
    if ((player->timer_75B4).current < 1) {
      player->byte_9E0 = '\0';
      (player->timer_75B4).current = 0;
      (player->timer_75B4).subframe = 0.0;
      (player->timer_75B4).previous = -999;
      (player->vm_0).flags = (player->vm_0).flags & 0xfffffff7;
      (player->vm_0).color = 0xffffffff;
    }
    else {
      uVar2 = (player->timer_75B4).current & 0x80000007;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
      }
      if ((int)uVar2 < 2) {
        (player->vm_0).flags = (player->vm_0).flags | 8;
        (player->vm_0).color = 0xff404040;
      }
      else {
        (player->vm_0).flags = (player->vm_0).flags & 0xfffffff7;
        (player->vm_0).color = 0xffffffff;
      }
    }
  }
  else {
    (player->timer_75B4).previous = (player->timer_75B4).current;
    Supervisor::tick_timer(&supervisor,&(player->timer_75B4).current,&(player->timer_75B4).subframe)
    ;
  }
  if ((player->byte_9E0 != '\x02') && (player->byte_9E0 != '\x01')) {
    __sub_427860(player);
  }
  AnmManager::run_anm(anm_manager_ptr,&player->vm_0);
  __sub_4291B0((int)player);
  if (player->byte_9E2 != '\0') {
    AnmManager::run_anm(anm_manager_ptr,player->vms_1);
    AnmManager::run_anm(anm_manager_ptr,player->vms_1 + 1);
  }
  (player->position_of_last_enemy_hit).x = -999.0;
  (player->position_of_last_enemy_hit).y = -999.0;
  (player->position_of_last_enemy_hit).z = 0.0;
  __sub_429710((int)player);
  return 1;
}

