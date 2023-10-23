
void __cdecl Player::reimu_b_bomb_on_tick(Player *player)

{
  Float3 *pFVar1;
  int32_t *piVar2;
  Float3 *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  AnmVm *local_c;
  int i;
  
  if ((player->player_inner).timer.current < (player->player_inner).dword_4) {
    if (((player->player_inner).timer.current == (player->player_inner).timer.previous) ||
       ((player->player_inner).timer.current != 0)) {
      if ((player->player_inner).timer.current == 60) {
        ScreenEffect::operator_new(1,0x50,0x14,0,0);
      }
      player->player_rect_array_8B8[0].size.x = 62.0;
      player->player_rect_array_8B8[0].size.y = 448.0;
      player->player_rect_array_8B8[1].size.x = 384.0;
      player->player_rect_array_8B8[1].size.y = 62.0;
      player->player_rect_array_8B8[2].size.x = 62.0;
      player->player_rect_array_8B8[2].size.y = 448.0;
      player->player_rect_array_8B8[3].size.x = 384.0;
      player->player_rect_array_8B8[3].size.y = 62.0;
      for (i = 0; i < 4; i = i + 1) {
        AnmManager::run_anm(anm_manager_ptr,(player->player_inner).vms_11C + i);
        if ((player->player_inner).timer.current != (player->player_inner).timer.previous) {
          uVar8 = (player->player_inner).timer.current & 0x80000001;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
          }
          if (uVar8 != 0) {
            player->player_rect_array_8B8[i].pos.x =
                 (float)(player->player_inner).dword_array_5C[i * 3] +
                 (player->player_inner).vms_11C[i].pos_2.x;
            player->player_rect_array_8B8[i].pos.y =
                 (float)(player->player_inner).dword_array_5C[i * 3 + 1] +
                 (player->player_inner).vms_11C[i].pos_2.y;
            player->size_array_638[i].x = player->player_rect_array_8B8[i].size.x;
            player->size_array_638[i].y = player->player_rect_array_8B8[i].size.y;
            pFVar1 = &(player->player_inner).vms_11C[i].pos_2;
            piVar2 = (player->player_inner).dword_array_5C + i * 3;
            fVar4 = (float)piVar2[2];
            fVar5 = pFVar1->z;
            fVar6 = (float)piVar2[1];
            fVar7 = pFVar1->y;
            pFVar3 = player->position_array_4B8 + i;
            pFVar3->x = (float)*piVar2 + pFVar1->x;
            pFVar3->y = fVar6 + fVar7;
            pFVar3->z = fVar4 + fVar5;
            player->dword_array_7B8[i] = 8;
          }
        }
      }
    }
    else {
      ItemManager::__bomb_related_1(&item_manager);
      Gui::__sub_417ACD(&gui,0x4a3,"–²•„u••–‚wv");
      (player->player_inner).dword_4 = 0x8c;
      (player->timer_75B4).current = 200;
      (player->timer_75B4).subframe = 0.0;
      (player->timer_75B4).previous = -999;
      local_c = (player->player_inner).vms_11C;
      for (i = 0; i < 4; i = i + 1) {
        AnmManager::__sub_4051B0(anm_manager_ptr,local_c,i + 0x489);
        local_c = local_c + 1;
      }
      SoundManager::play_sound_centered(&sound_manager,6,0);
      (player->player_inner).dword_array_5C[0] = (int32_t)(player->position).x;
      (player->player_inner).dword_array_5C[1] = 0x43600000;
      (player->player_inner).dword_array_5C[2] = 0x3ed70a3d;
      (player->player_inner).dword_array_5C[3] = 0x43400000;
      (player->player_inner).dword_array_5C[4] = (int32_t)(player->position).y;
      (player->player_inner).dword_array_5C[5] = 0x3ed47ae1;
      (player->player_inner).dword_array_5C[6] = (int32_t)(player->position).x;
      (player->player_inner).dword_array_5C[7] = 0x43600000;
      *(undefined4 *)(player->player_inner).field7_0x7c = 0x3ed1eb85;
      *(undefined4 *)((player->player_inner).field7_0x7c + 4) = 0x43400000;
      *(float *)((player->player_inner).field7_0x7c + 8) = (player->position).y;
      *(undefined4 *)((player->player_inner).field7_0x7c + 0xc) = 0x3ecf5c29;
      ScreenEffect::operator_new(1,0x3c,2,6,0);
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
  }
  return;
}

