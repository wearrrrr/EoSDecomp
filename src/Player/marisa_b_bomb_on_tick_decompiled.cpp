
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Player::marisa_b_bomb_on_tick(Player *player)

{
  int32_t *piVar1;
  uint uVar2;
  AnmVm *vm;
  int local_8;
  
  if ((player->player_inner).timer.current < (player->player_inner).dword_4) {
    if (((player->player_inner).timer.current == (player->player_inner).timer.previous) ||
       ((player->player_inner).timer.current != 0)) {
      if ((player->player_inner).timer.current == 0x3c) {
        ScreenEffect::operator_new(1,0x3c,1,7,0);
      }
      else if ((player->player_inner).timer.current == 0x78) {
        ScreenEffect::operator_new(1,200,0x18,0,0);
      }
      if ((player->player_inner).timer.current != (player->player_inner).timer.previous) {
        uVar2 = (player->player_inner).timer.current & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        if (uVar2 != 0) {
          player->player_rect_array_8B8[0].pos.x = 192.0;
          player->player_rect_array_8B8[0].pos.y = (player->position).y / _2_0f;
          player->player_rect_array_8B8[0].size.x = 384.0;
          player->player_rect_array_8B8[0].size.y = (player->position).y;
          player->size_array_638[0].x = 384.0;
          player->size_array_638[0].y = (player->position).y;
          player->position_array_4B8[0].x = player->player_rect_array_8B8[0].pos.x;
          player->position_array_4B8[0].y = player->player_rect_array_8B8[0].pos.y;
          player->dword_array_7B8[0] = 0xc;
        }
      }
      AnmManager::run_anm(anm_manager_ptr,(player->player_inner).vms_11C);
      AnmManager::run_anm(anm_manager_ptr,(player->player_inner).vms_11C + 1);
      AnmManager::run_anm(anm_manager_ptr,(player->player_inner).vms_11C + 2);
      AnmManager::run_anm(anm_manager_ptr,(player->player_inner).vms_11C + 3);
    }
    else {
      ItemManager::__bomb_related_1(&item_manager);
      Gui::__sub_417ACD(&gui,0x4a1,"恋符「マスタースパーク」");
      (player->player_inner).dword_4 = 300;
      (player->timer_75B4).current = 0x168;
      (player->timer_75B4).subframe = 0.0;
      (player->timer_75B4).previous = -999;
      vm = (player->player_inner).vms_11C;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        AnmManager::__sub_4051B0(anm_manager_ptr,vm,local_8 + 0x408);
        piVar1 = (player->player_inner).dword_array_5C + local_8 * 3;
        *piVar1 = (int32_t)(player->position).x;
        piVar1[1] = (int32_t)(player->position).y;
        piVar1[2] = (int32_t)(player->position).z;
        vm = vm + 1;
      }
      SoundManager::play_sound_centered(&sound_manager,0x13,0);
      player->float_9D4 = 0.3;
      player->float_9D0 = 0.3;
    }
    player->byte_9E0 = '\x03';
    (player->player_inner).timer.previous = (player->player_inner).timer.current;
    Supervisor::tick_timer
              (&supervisor,&(player->player_inner).timer.current,
               &(player->player_inner).timer.subframe);
  }
  else {
    Gui::player_bomb_on_tick(&gui);
    (player->player_inner).dword_0 = 0;
    player->float_9D4 = 1.0;
    player->float_9D0 = 1.0;
  }
  return;
}

