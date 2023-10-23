
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ItemManager * __thiscall ItemManager::on_tick(ItemManager *this)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  ItemManager *pIVar9;
  AsciiManager *pAVar10;
  AnmVm *item_pos;
  float10 fVar11;
  longlong itemPosYLong;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int j;
  int i;
  ItemManager *this_00;
  int newPowerItemValue;
  int local_8;
  float item_velocity_y;
  float item_velocity_z;
  
  if ((_ITEM_MANAGER_THING___dword_C & 1) == 0) {
    _ITEM_MANAGER_THING___dword_C = _ITEM_MANAGER_THING___dword_C | 1;
    _ITEM_MANAGER_THING____float3_0_ = 0x41800000;
    _ITEM_MANAGER_THING___float3_0_Y = 0x41800000;
    _ITEM_MANAGER_THING___float3_0_Z = 0x41800000;
  }
  bVar7 = false;
  this->item_count = 0;
  local_8 = 0;
  pIVar9 = this;
  this_00 = this;
  do {
    if (511 < local_8) {
      if (bVar7) {
        pIVar9 = (ItemManager *)SoundManager::play_sound_centered(&sound_manager,0x15,0);
      }
      return pIVar9;
    }
    pIVar9 = this_00;
    if (this_00->items[0].in_use != '\0') {
      this->item_count = this->item_count + 1;
      if (this_00->items[0].state == 2) {
        if (59 < this_00->items[0].timer.current) {
          if ((float)this_00->items[0].timer.current == 8.407791e-44) {
            this_00->items[0].velocity.x = 0.0;
            this_00->items[0].velocity.y = 0.0;
            this_00->items[0].velocity.z = 0.0;
          }
          goto moveItems;
        }
        fVar5 = ((float)this_00->items[0].timer.current +
                ((Float2 *)&this_00->items[0].timer.subframe)->x) / _60_0f;
        fVar6 = _1_0f - fVar5;
        item_velocity_z = this_00->items[0].velocity.z;
        item_velocity_y = this_00->items[0].velocity.y;
        fVar1 = this_00->items[0].unknown_vec3.z;
        fVar2 = this_00->items[0].unknown_vec3.y;
        (((AnmVm *)&this_00->items[0].pos)->rotation).x =
             fVar5 * this_00->items[0].unknown_vec3.x + fVar6 * this_00->items[0].velocity.x;
        (((AnmVm *)&this_00->items[0].pos)->rotation).y = fVar5 * fVar2 + fVar6 * item_velocity_y;
        (((AnmVm *)&this_00->items[0].pos)->rotation).z = fVar5 * fVar1 + fVar6 * item_velocity_z;
      }
      else {
        if ((this_00->items[0].state == 1) ||
           ((0x7f < game_manager.current_power && (::player.position.y < _28_0f)))) {
          fVar11 = Player::angle_to_player_from_point(&::player,(Float3 *)&this_00->items[0].pos);
          fVar4 = (float10)fcos((float10)(float)fVar11);
          fVar11 = (float10)fsin((float10)(float)fVar11);
          this_00->items[0].velocity.x = (float)(fVar4 * (float10)8.0);
          this_00->items[0].velocity.y = (float)(fVar11 * (float10)8.0);
          this_00->items[0].state = 1;
        }
        else {
          this_00->items[0].velocity.x = 0.0;
          this_00->items[0].velocity.z = 0.0;
          if (this_00->items[0].velocity.y < _2_2f) {
            this_00->items[0].velocity.y = -2.2;
          }
        }
moveItems:
        item_velocity_z = supervisor.game_speed * this_00->items[0].velocity.z;
        item_velocity_y = supervisor.game_speed * this_00->items[0].velocity.y;
        item_pos = (AnmVm *)&this_00->items[0].pos;
        (item_pos->rotation).x =
             supervisor.game_speed * this_00->items[0].velocity.x + (item_pos->rotation).x;
        (((AnmVm *)&this_00->items[0].pos)->rotation).y =
             item_velocity_y + (((AnmVm *)&this_00->items[0].pos)->rotation).y;
        (((AnmVm *)&this_00->items[0].pos)->rotation).z =
             item_velocity_z + (((AnmVm *)&this_00->items[0].pos)->rotation).z;
        item_velocity_y = game_manager.arcade_region_size.y + ram0x0046a2b4;
        item_velocity_z = (((AnmVm *)&this_00->items[0].pos)->rotation).y;
        pIVar9 = (ItemManager *)
                 CONCAT22((short)((uint)this_00 >> 0x10),
                          (ushort)(item_velocity_y < item_velocity_z) << 8 |
                          (ushort)(item_velocity_y == item_velocity_z) << 0xe);
        if (item_velocity_y < item_velocity_z != (item_velocity_y == item_velocity_z)) {
          this_00->items[0].in_use = '\0';
          GameManager::decrease_rank(&game_manager,3);
          goto LAB_0041f512;
        }
        if (_3_0f <= this_00->items[0].velocity.y) {
          this_00->items[0].velocity.y = 3.0;
        }
        else {
          this_00->items[0].velocity.y =
               __03f * supervisor.game_speed + this_00->items[0].velocity.y;
        }
      }
      pIVar9 = (ItemManager *)
               Player::__sub_426FD0
                         (&::player,(Float3 *)&this_00->items[0].pos,
                          (Float3 *)&ITEM_MANAGER_THING____float3_0_);
      if (pIVar9 == (ItemManager *)0x0) {
        this_00->items[0].timer.previous = this_00->items[0].timer.current;
        Supervisor::tick_timer
                  (&supervisor,&this_00->items[0].timer.current,
                   (float *)&this_00->items[0].timer.subframe);
        pIVar9 = (ItemManager *)AnmManager::run_anm(anm_manager_ptr,(AnmVm *)this_00);
      }
      else {
        cVar3 = *(char *)&((Timer *)&this_00->items[0].item_type)->previous;
        switch((ItemManager *)(int)cVar3) {
        case (ItemManager *)0x0:
                    /* If power level is below 128 (full power mode) */
          if (game_manager.current_power < 128) {
            for (i = 0; iVar8 = i,
                *(int *)(&DAT_004766dc + i * 4) <= (int)(uint)game_manager.current_power; i = i + 1)
            {
            }
            game_manager.power_item_count = 0;
            game_manager.current_power = game_manager.current_power + 1;
            if (127 < game_manager.current_power) {
              game_manager.current_power = 128;
              BulletManager::cancel_bullets_to_star_items(&bullet_manager);
              Gui::__sub_4173D9(&gui,0);
            }
            game_manager.score = game_manager.score + 10;
            gui.flags_0 = gui.flags_0 & 0xffffffcf | 0x20;
            for (; *(int *)(&DAT_004766dc + i * 4) <= (int)(uint)game_manager.current_power;
                i = i + 1) {
            }
            if (i == iVar8) {
              pIVar9 = (ItemManager *)
                       AsciiManager::make_popup_A
                                 (&ascii_manager,(Float3 *)&this_00->items[0].pos,10,0xffffffff);
            }
            else {
              AsciiManager::make_popup_A
                        (&ascii_manager,(Float3 *)&this_00->items[0].pos,-1,0xff80c0ff);
              pIVar9 = (ItemManager *)SoundManager::play_sound_centered(&sound_manager,0x1f,0);
            }
          }
          else {
            game_manager.power_item_count = game_manager.power_item_count + 1;
            if (30 < (byte)game_manager.power_item_count) {
              game_manager.power_item_count = 30;
            }
            newPowerItemValue = *(int *)(&DAT_00476660 + game_manager.power_item_count * 4);
            game_manager.score = game_manager.score + newPowerItemValue;
            pIVar9 = (ItemManager *)
                     AsciiManager::make_popup_A
                               (&ascii_manager,(Float3 *)&this_00->items[0].pos,newPowerItemValue,
                                ((newPowerItemValue < 0x3200) - 1 & 0xffffff01) - 1);
          }
          GameManager::increase_rank(&game_manager,1);
          break;
        case (ItemManager *)0x1:
          pAVar10 = (AsciiManager *)game_manager.difficulty;
          switch(game_manager.difficulty) {
          case 0:
          case 1:
            itemPosYLong = __ftol2((double)(((AnmVm *)&this_00->items[0].pos)->rotation).y);
            if ((int)itemPosYLong < 128) {
              local_e0 = 100000;
            }
            else {
              itemPosYLong = __ftol2((double)(((AnmVm *)&this_00->items[0].pos)->rotation).y);
              local_e0 = ((int)itemPosYLong + -128) * -100 + 60000;
            }
            newPowerItemValue = local_e0;
            pAVar10 = AsciiManager::make_popup_A
                                (&ascii_manager,(Float3 *)&this_00->items[0].pos,local_e0,
                                 ((local_e0 < 100000) - 1 & 0xffffff01) - 1);
            break;
          case 2:
            itemPosYLong = __ftol2((double)(((AnmVm *)&this_00->items[0].pos)->rotation).y);
            if ((int)itemPosYLong < 128) {
              local_e4 = 150000;
            }
            else {
              itemPosYLong = __ftol2((double)(((AnmVm *)&this_00->items[0].pos)->rotation).y);
              local_e4 = ((int)itemPosYLong + -128) * -180 + 100000;
            }
            newPowerItemValue = local_e4;
            pAVar10 = AsciiManager::make_popup_A
                                (&ascii_manager,(Float3 *)&this_00->items[0].pos,local_e4,
                                 ((local_e4 < 150000) - 1 & 0xffffff01) - 1);
            break;
          case 3:
            itemPosYLong = __ftol2((double)(((AnmVm *)&this_00->items[0].pos)->rotation).y);
            if ((int)itemPosYLong < 0x80) {
              local_e8 = 200000;
            }
            else {
              itemPosYLong = __ftol2((double)(((AnmVm *)&this_00->items[0].pos)->rotation).y);
              local_e8 = ((int)itemPosYLong + -128) * -270 + 150000;
            }
            newPowerItemValue = local_e8;
            pAVar10 = AsciiManager::make_popup_A
                                (&ascii_manager,(Float3 *)&this_00->items[0].pos,local_e8,
                                 ((local_e8 < 200000) - 1 & 0xffffff01) - 1);
            break;
          case 4:
            itemPosYLong = __ftol2((double)(((AnmVm *)&this_00->items[0].pos)->rotation).y);
            if ((int)itemPosYLong < 0x80) {
              local_ec = 300000;
            }
            else {
              itemPosYLong = __ftol2((double)(((AnmVm *)&this_00->items[0].pos)->rotation).y);
              local_ec = ((int)itemPosYLong + -0x80) * -400 + 200000;
            }
            newPowerItemValue = local_ec;
            pAVar10 = AsciiManager::make_popup_A
                                (&ascii_manager,(Float3 *)&this_00->items[0].pos,local_ec,
                                 ((local_ec < 300000) - 1 & 0xffffff01) - 1);
          }
          game_manager.score = game_manager.score + newPowerItemValue;
          game_manager.power_items_collected_stage = game_manager.power_items_collected_stage + 1;
          game_manager.score_items_collected_stage = game_manager.score_items_collected_stage + 1;
          gui.flags_0 = gui.flags_0 & 0xfffffcff | 0x200;
          item_velocity_z = (((AnmVm *)&this_00->items[0].pos)->rotation).y;
          pIVar9 = (ItemManager *)
                   CONCAT22((short)((uint)pAVar10 >> 0x10),
                            (ushort)(item_velocity_z < _28_0f) << 8 |
                            (ushort)(item_velocity_z == _28_0f) << 0xe);
          if (item_velocity_z < _28_0f) {
            GameManager::increase_rank(&game_manager,0x1e);
          }
          else {
            GameManager::increase_rank(&game_manager,3);
          }
          break;
        case (ItemManager *)0x2:
          if (game_manager.current_power < 128) {
            for (j = 0; iVar8 = j,
                *(int *)(&DAT_004766dc + j * 4) <= (int)(uint)game_manager.current_power; j = j + 1)
            {
            }
            game_manager.current_power = game_manager.current_power + 8;
            if (127 < game_manager.current_power) {
              game_manager.current_power = 128;
              BulletManager::cancel_bullets_to_star_items(&bullet_manager);
              Gui::__sub_4173D9(&gui,0);
            }
            gui.flags_0 = gui.flags_0 & 0xffffffcf | 0x20;
            game_manager.score = game_manager.score + 10;
            for (; *(int *)(&DAT_004766dc + j * 4) <= (int)(uint)game_manager.current_power;
                j = j + 1) {
            }
            if (j == iVar8) {
              pIVar9 = (ItemManager *)
                       AsciiManager::make_popup_A
                                 (&ascii_manager,(Float3 *)&this_00->items[0].pos,10,0xffffffff);
            }
            else {
              AsciiManager::make_popup_A
                        (&ascii_manager,(Float3 *)&this_00->items[0].pos,-1,0xff80c0ff);
              pIVar9 = (ItemManager *)SoundManager::play_sound_centered(&sound_manager,0x1f,0);
            }
          }
          else {
            game_manager.power_item_count = game_manager.power_item_count + 8;
            if (30 < (byte)game_manager.power_item_count) {
              game_manager.power_item_count = 30;
            }
            newPowerItemValue = *(int *)(&DAT_00476660 + game_manager.power_item_count * 4);
            game_manager.score = game_manager.score + newPowerItemValue;
            pIVar9 = (ItemManager *)
                     AsciiManager::make_popup_A
                               (&ascii_manager,(Float3 *)&this_00->items[0].pos,newPowerItemValue,
                                ((newPowerItemValue < 0x3200) - 1 & 0xffffff01) - 1);
          }
          break;
        case (ItemManager *)0x3:
          pIVar9 = (ItemManager *)(int)cVar3;
          if (game_manager.bombs_remaining < '\b') {
            game_manager.bombs_remaining = game_manager.bombs_remaining + '\x01';
            pIVar9 = (ItemManager *)CONCAT31(cVar3 >> 7,game_manager.bombs_remaining);
            gui.flags_0 = gui.flags_0 & 0xfffffff3 | 8;
          }
          GameManager::increase_rank(&game_manager,5);
          break;
        case (ItemManager *)0x4:
          if (game_manager.current_power < 0x80) {
            BulletManager::cancel_bullets_to_star_items(&bullet_manager);
            Gui::__sub_4173D9(&gui,0);
            SoundManager::play_sound_centered(&sound_manager,0x1f,0);
            AsciiManager::make_popup_A
                      (&ascii_manager,(Float3 *)&this_00->items[0].pos,-1,0xff80c0ff);
          }
          game_manager.current_power = 0x80;
          game_manager.score = game_manager.score + 1000;
          AsciiManager::make_popup_A
                    (&ascii_manager,(Float3 *)&this_00->items[0].pos,1000,0xffffffff);
          pIVar9 = (ItemManager *)(gui.flags_0 & 0xffffffcf | 0x20);
          gui.flags_0 = (uint32_t)pIVar9;
          break;
        case (ItemManager *)0x5:
          if (game_manager.lives_remaining < '\b') {
            game_manager.lives_remaining = game_manager.lives_remaining + '\x01';
            gui.flags_0 = gui.flags_0 & 0xfffffffc | 2;
          }
          GameManager::increase_rank(&game_manager,200);
          pIVar9 = (ItemManager *)SoundManager::play_sound_centered(&sound_manager,0x1c,0);
          break;
        case (ItemManager *)0x6:
          newPowerItemValue = (game_manager.graze_in_stage / 3) * 10 + 500;
          if (::player.player_inner.dword_0 != 0) {
            newPowerItemValue = 100;
          }
          game_manager.score = game_manager.score + newPowerItemValue;
          pIVar9 = (ItemManager *)
                   AsciiManager::make_popup_B
                             (&ascii_manager,(Float3 *)&this_00->items[0].pos,newPowerItemValue,
                              0xffffffff);
        }
        this_00->items[0].in_use = '\0';
        bVar7 = true;
      }
    }
LAB_0041f512:
    local_8 = local_8 + 1;
    this_00 = (ItemManager *)(this_00->items + 1);
  } while( true );
}

