
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Player::marisa_a_bomb_on_tick(Player *player)

{
  int32_t *piVar1;
  int32_t *piVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  AnmVm *vm;
  int i;
  Float3 *vector;
  
  if ((player->player_inner).timer.current < (player->player_inner).dword_4) {
    if (((player->player_inner).timer.current == (player->player_inner).timer.previous) ||
       ((player->player_inner).timer.current != 0)) {
      for (i = 0; i < 8; i = i + 1) {
        piVar1 = (player->player_inner).dword_array_BC + i * 3;
        fVar3 = supervisor.game_speed * (float)piVar1[2];
        fVar4 = supervisor.game_speed * (float)piVar1[1];
        piVar2 = (player->player_inner).dword_array_5C + i * 3;
        *piVar2 = (int32_t)(supervisor.game_speed * (float)*piVar1 + (float)*piVar2);
        piVar2[1] = (int32_t)(fVar4 + (float)piVar2[1]);
        piVar2[2] = (int32_t)(fVar3 + (float)piVar2[2]);
        if (((player->player_inner).timer.current != (player->player_inner).timer.previous) &&
           ((player->player_inner).timer.current % 3 != 0)) {
          player->player_rect_array_8B8[i].pos.x =
               (float)(player->player_inner).dword_array_5C[i * 3];
          player->player_rect_array_8B8[i].pos.y =
               (float)(player->player_inner).dword_array_5C[i * 3 + 1];
          player->player_rect_array_8B8[i].size.x = 128.0;
          player->player_rect_array_8B8[i].size.y = 128.0;
          player->size_array_638[i].x = 128.0;
          player->size_array_638[i].y = 128.0;
          piVar1 = (player->player_inner).dword_array_5C + i * 3;
          vector = player->position_array_4B8 + i;
          vector->x = (float)*piVar1;
          vector->y = (float)piVar1[1];
          vector->z = (float)piVar1[2];
          player->dword_array_7B8[i] = 8;
        }
        AnmManager::run_anm(anm_manager_ptr,(player->player_inner).vms_11C + i);
      }
    }
    else {
      ItemManager::__bomb_related_1(&item_manager);
      Gui::__sub_417ACD(&gui,0x4a3,"魔符「スターダストレヴァリエ」");
      (player->player_inner).dword_4 = 0xfa;
      (player->timer_75B4).current = 300;
      (player->timer_75B4).subframe = 0.0;
      (player->timer_75B4).previous = -999;
      vm = (player->player_inner).vms_11C;
      for (i = 0; i < 8; i = i + 1) {
        AnmManager::__sub_4051B0(anm_manager_ptr,vm,i % 3 + 0x405);
        piVar1 = (player->player_inner).dword_array_5C + i * 3;
        *piVar1 = (int32_t)(player->position).x;
        fVar3 = (player->position).y;
        piVar1[1] = (int32_t)fVar3;
        piVar1[2] = (int32_t)(player->position).z;
        fVar4 = ((float)i * _Pi_2_f) / _8_0f;
        fVar5 = (float10)_cos(piVar1,SUB41(fVar3,0),SUB81((double)fVar4,0));
        (player->player_inner).dword_array_BC[i * 3] = (int32_t)((float)fVar5 + (float)fVar5);
        fVar5 = (float10)_sin(i * 0xc,(char)player,SUB81((double)fVar4,0));
        (player->player_inner).dword_array_BC[i * 3 + 1] = (int32_t)((float)fVar5 + (float)fVar5);
        (player->player_inner).dword_array_BC[i * 3 + 2] = 0;
        vm = vm + 1;
      }
      SoundManager::play_sound_centered(&sound_manager,6,0);
      ScreenEffect::operator_new(1,0x78,4,1,0);
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

