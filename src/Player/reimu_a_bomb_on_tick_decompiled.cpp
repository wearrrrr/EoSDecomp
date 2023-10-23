
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Player::reimu_a_bomb_on_tick(Player *player)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined uVar6;
  undefined extraout_DL;
  uint uVar7;
  float10 fVar8;
  float fVar9;
  int local_28;
  float local_24;
  float local_20;
  float local_18;
  AnmVm *vms;
  int i;
  Float3 *vec;
  
  if ((player->player_inner).timer.current < (player->player_inner).dword_4) {
    if (((player->player_inner).timer.current != (player->player_inner).timer.previous) &&
       ((player->player_inner).timer.current == 0)) {
      Gui::__sub_417ACD(&gui,0x4a1,"—ì•„u–²‘z••ˆóv");
      (player->player_inner).dword_4 = 300;
      (player->timer_75B4).current = 0x168;
      (player->timer_75B4).subframe = 0.0;
      (player->timer_75B4).previous = -999;
      for (i = 0; i < 8; i = i + 1) {
        *(undefined4 *)((player->player_inner).field5_0x1c + i * 4) = 0;
      }
      ItemManager::__bomb_related_1(&item_manager);
      EffectManager::spawn_effect
                ((EffectManager *)((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),0xc
                 ,&player->position,1,0xff4040ff);
      player->player_rect_array_8B8[8].pos.x = (player->position).x;
      player->player_rect_array_8B8[8].pos.y = (player->position).y;
      player->player_rect_array_8B8[8].size.x = 256.0;
      player->player_rect_array_8B8[8].size.y = 256.0;
    }
    uVar6 = SUB41(player,0);
    if ((0x3b < (player->player_inner).timer.current) &&
       ((player->player_inner).timer.current < 0xb4)) {
      uVar7 = (player->player_inner).timer.current & 0x8000000f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
      }
      if ((uVar7 == 0) &&
         (iVar5 = (player->player_inner).timer.current + -0x3c,
         iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 0xfU)) >> 4, iVar5 != 0)) {
        *(undefined4 *)((player->player_inner).field5_0x1c + iVar5 * 4) = 1;
        *(undefined4 *)((player->player_inner).field5_0x1c + iVar5 * 4 + 0x20) = 0x40800000;
        piVar1 = (player->player_inner).dword_array_5C + iVar5 * 3;
        *piVar1 = (int32_t)(player->position).x;
        piVar1[1] = (int32_t)(player->position).y;
        piVar1[2] = (int32_t)(player->position).z;
        fVar8 = Rng::randf_0_to_1(&Rng);
        fVar2 = (float)(fVar8 * (float10)_Pi_2_f - (float10)_Pi_f);
        fVar8 = (float10)_cos(extraout_ECX,extraout_DL,SUB81((double)fVar2,0));
        (player->player_inner).dword_array_BC[iVar5 * 3] =
             (int32_t)((float)fVar8 *
                      *(float *)((player->player_inner).field5_0x1c + iVar5 * 4 + 0x20));
        fVar8 = (float10)_sin(player,uVar6,SUB81((double)fVar2,0));
        (player->player_inner).dword_array_BC[iVar5 * 3 + 1] =
             (int32_t)((float)fVar8 *
                      *(float *)((player->player_inner).field5_0x1c + iVar5 * 4 + 0x20));
        player->dword_array_838[iVar5] = 0;
        vms = (player->player_inner).vms_11C + iVar5 * 4;
        for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
          AnmManager::__sub_4051B0(anm_manager_ptr,vms,local_28 + 0x485);
          vms = vms + 1;
        }
        SoundManager::play_sound_centered(&sound_manager,0xd,0);
      }
    }
    player->byte_9E0 = '\x03';
    for (i = 0; i < 8; i = i + 1) {
      if (*(int *)((player->player_inner).field5_0x1c + i * 4) != 0) {
        if (*(int *)((player->player_inner).field5_0x1c + i * 4) == 1) {
          if ((player->player_inner).timer.current != (player->player_inner).timer.previous) {
            if ((player->position_of_last_enemy_hit).x <= __100_0f) {
              local_24 = (player->position).x;
              local_20 = (player->position).y;
            }
            else {
              local_24 = (player->position_of_last_enemy_hit).x;
              local_20 = (player->position_of_last_enemy_hit).y;
            }
            local_24 = local_24 - (float)(player->player_inner).dword_array_5C[i * 3];
            local_20 = local_20 - (float)(player->player_inner).dword_array_5C[i * 3 + 1];
            fVar8 = (float10)_sqrt(i * 0xc,uVar6,
                                   SUB81((double)(local_24 * local_24 + local_20 * local_20),0));
            local_18 = (float)fVar8 /
                       (*(float *)((player->player_inner).field5_0x1c + i * 4 + 0x20) / _8_0f);
            if (local_18 < _1_0f) {
              local_18 = 1.0;
            }
            fVar3 = local_24 / local_18 + (float)(player->player_inner).dword_array_BC[i * 3];
            fVar4 = local_20 / local_18 + (float)(player->player_inner).dword_array_BC[i * 3 + 1];
            fVar8 = (float10)_sqrt(i * 0xc,uVar6,SUB81((double)(fVar3 * fVar3 + fVar4 * fVar4),0));
            fVar2 = (float)fVar8;
            fVar9 = fVar2;
            if (_10_0f < fVar2) {
              fVar9 = 10.0;
            }
            *(float *)((player->player_inner).field5_0x1c + i * 4 + 0x20) = fVar9;
            if (*(float *)((player->player_inner).field5_0x1c + i * 4 + 0x20) < _1_0f) {
              *(undefined4 *)((player->player_inner).field5_0x1c + i * 4 + 0x20) = 0x3f800000;
            }
            (player->player_inner).dword_array_BC[i * 3] =
                 (int32_t)((fVar3 * *(float *)((player->player_inner).field5_0x1c + i * 4 + 0x20)) /
                          fVar2);
            (player->player_inner).dword_array_BC[i * 3 + 1] =
                 (int32_t)((fVar4 * *(float *)((player->player_inner).field5_0x1c + i * 4 + 0x20)) /
                          fVar2);
            player->size_array_638[i].x = 48.0;
            player->size_array_638[i].y = 48.0;
            piVar1 = (player->player_inner).dword_array_5C + i * 3;
            vec = player->position_array_4B8 + i;
            vec->x = (float)*piVar1;
            vec->y = (float)piVar1[1];
            vec->z = (float)piVar1[2];
            player->dword_array_7B8[i] = 8;
            player->player_rect_array_8B8[i].pos.x =
                 (float)(player->player_inner).dword_array_5C[i * 3];
            player->player_rect_array_8B8[i].pos.y =
                 (float)(player->player_inner).dword_array_5C[i * 3 + 1];
            player->player_rect_array_8B8[i].size.x = 48.0;
            player->player_rect_array_8B8[i].size.y = 48.0;
            if ((99 < player->dword_array_838[i]) ||
               ((player->player_inner).dword_4 + -0x1e <= (player->player_inner).timer.current)) {
              EffectManager::spawn_effect
                        ((EffectManager *)
                         ((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),6,
                         (Float3 *)((player->player_inner).dword_array_5C + i * 3),8,0xffffffff);
              EffectManager::spawn_effect
                        ((EffectManager *)
                         ((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),0xc,
                         (Float3 *)((player->player_inner).dword_array_5C + i * 3),1,0xff4040ff);
              *(undefined4 *)((player->player_inner).field5_0x1c + i * 4) = 2;
              (player->player_inner).vms_11C[i * 4].pending_interrupt = 1;
              (player->player_inner).vms_11C[i * 4 + 1].pending_interrupt = 1;
              (player->player_inner).vms_11C[i * 4 + 2].pending_interrupt = 1;
              (player->player_inner).vms_11C[i * 4 + 3].pending_interrupt = 1;
              player->size_array_638[i].x = 256.0;
              player->size_array_638[i].y = 256.0;
              player->dword_array_7B8[i] = 200;
              player->player_rect_array_8B8[i].size.x = 256.0;
              player->player_rect_array_8B8[i].size.y = 256.0;
              SoundManager::play_sound_centered(&sound_manager,0xf,0);
              ScreenEffect::operator_new(1,0x10,8,0,0);
            }
          }
        }
        else if (((*(int *)((player->player_inner).field5_0x1c + i * 4) != 0) &&
                 ((player->player_inner).timer.current != (player->player_inner).timer.previous)) &&
                (*(int *)((player->player_inner).field5_0x1c + i * 4) =
                      *(int *)((player->player_inner).field5_0x1c + i * 4) + 1,
                0x1d < *(int *)((player->player_inner).field5_0x1c + i * 4))) {
          *(undefined4 *)((player->player_inner).field5_0x1c + i * 4) = 0;
        }
        (player->player_inner).dword_array_5C[i * 3] =
             (int32_t)(supervisor.game_speed * (float)(player->player_inner).dword_array_BC[i * 3] +
                      (float)(player->player_inner).dword_array_5C[i * 3]);
        (player->player_inner).dword_array_5C[i * 3 + 1] =
             (int32_t)(supervisor.game_speed *
                       (float)(player->player_inner).dword_array_BC[i * 3 + 1] +
                      (float)(player->player_inner).dword_array_5C[i * 3 + 1]);
        AnmManager::run_anm(anm_manager_ptr,(player->player_inner).vms_11C + i * 4);
        AnmManager::run_anm(anm_manager_ptr,(player->player_inner).vms_11C + i * 4 + 1);
        AnmManager::run_anm(anm_manager_ptr,(player->player_inner).vms_11C + i * 4 + 2);
        AnmManager::run_anm(anm_manager_ptr,(player->player_inner).vms_11C + i * 4 + 3);
      }
    }
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

