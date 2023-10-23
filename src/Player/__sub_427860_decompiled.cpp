
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Player::__sub_427860(Player *player)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float *pfVar4;
  undefined3 extraout_var;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  AnmManager *anm_mgr;
  float player_y;
  float player_z;
  
  local_10 = 0.0;
  local_c = 0.0;
  player->dword_A0C = 0;
  if ((input.currently_pressed & 0x10) == 0) {
    if ((input.currently_pressed & 0x20) == 0) {
      if ((input.currently_pressed & 0x40) != 0) {
        player->dword_A0C = 3;
      }
      if ((input.currently_pressed & 0x80) != 0) {
        player->dword_A0C = 4;
      }
    }
    else {
      player->dword_A0C = 2;
      if ((input.currently_pressed & 0x40) != 0) {
        player->dword_A0C = 7;
      }
      if ((input.currently_pressed & 0x80) != 0) {
        player->dword_A0C = 8;
      }
    }
  }
  else {
    player->dword_A0C = 1;
    if ((input.currently_pressed & 0x40) != 0) {
      player->dword_A0C = 5;
    }
    if ((input.currently_pressed & 0x80) != 0) {
      player->dword_A0C = 6;
    }
  }
  if ((input.currently_pressed & 4) == 0) {
    player->byte_9E3 = '\0';
  }
  else {
    player->byte_9E3 = '\x01';
  }
  anm_mgr = anm_manager_ptr;
  switch(player->dword_A0C) {
  case 1:
    if ((input.currently_pressed & 4) == 0) {
      local_c = (player->shottype_data).float_0;
    }
    else {
      local_c = (player->shottype_data).float_4;
    }
    local_c = -local_c;
    break;
  case 2:
    if ((input.currently_pressed & 4) == 0) {
      local_c = (player->shottype_data).float_0;
    }
    else {
      local_c = (player->shottype_data).float_4;
    }
    break;
  case 3:
    if ((input.currently_pressed & 4) == 0) {
      local_10 = (player->shottype_data).float_0;
    }
    else {
      local_10 = (player->shottype_data).float_4;
    }
    local_10 = -local_10;
    break;
  case 4:
    if ((input.currently_pressed & 4) == 0) {
      local_10 = (player->shottype_data).float_0;
    }
    else {
      local_10 = (player->shottype_data).float_4;
    }
    break;
  case 5:
    if ((input.currently_pressed & 4) == 0) {
      local_10 = (player->shottype_data).float_8;
    }
    else {
      local_10 = (player->shottype_data).float_C;
    }
    local_10 = -local_10;
    local_c = local_10;
    break;
  case 6:
    if ((input.currently_pressed & 4) == 0) {
      local_10 = (player->shottype_data).float_8;
    }
    else {
      local_10 = (player->shottype_data).float_C;
    }
    local_c = -local_10;
    break;
  case 7:
    if ((input.currently_pressed & 4) == 0) {
      local_10 = (player->shottype_data).float_8;
    }
    else {
      local_10 = (player->shottype_data).float_C;
    }
    local_10 = -local_10;
    local_c = -local_10;
    break;
  case 8:
    if ((input.currently_pressed & 4) == 0) {
      local_10 = (player->shottype_data).float_8;
    }
    else {
      local_10 = (player->shottype_data).float_C;
    }
    local_c = local_10;
  }
  if (((float)__0f <= local_10) || (player->float_A10 < (float)__0f)) {
    if ((local_10 == (float)__0f) && (player->float_A10 < (float)__0f)) {
      (player->vm_0).anm_file_index = 0x402;
      AnmManager::set_vm_script(anm_mgr,&player->vm_0,(AnmRawScript *)anm_mgr->scripts[0x402]);
    }
  }
  else {
    (player->vm_0).anm_file_index = 0x401;
    AnmManager::set_vm_script(anm_mgr,&player->vm_0,(AnmRawScript *)anm_mgr->scripts[0x401]);
  }
  anm_mgr = anm_manager_ptr;
  if ((local_10 <= (float)__0f) ||
     (player->float_A10 < (float)__0f == (player->float_A10 == (float)__0f))) {
    if ((local_10 == (float)__0f) && ((float)__0f < player->float_A10)) {
      (player->vm_0).anm_file_index = 0x404;
      AnmManager::set_vm_script(anm_mgr,&player->vm_0,(AnmRawScript *)anm_mgr->scripts[0x404]);
    }
  }
  else {
    (player->vm_0).anm_file_index = 0x403;
    AnmManager::set_vm_script(anm_mgr,&player->vm_0,(AnmRawScript *)anm_mgr->scripts[0x403]);
  }
  player->float_A10 = local_10;
  player->dword_A14 = (int32_t)local_c;
  (player->position).x = local_10 * player->float_9D0 * supervisor.game_speed + (player->position).x
  ;
  pfVar4 = &(player->position).y;
  *pfVar4 = local_c * player->float_9D4 * supervisor.game_speed + *pfVar4;
  if (game_manager.__float2_1a4c.x <= (player->position).x) {
    if (game_manager.__float2_1a4c.x + game_manager.__float2_1a54.x < (player->position).x) {
      (player->position).x = game_manager.__float2_1a4c.x + game_manager.__float2_1a54.x;
    }
  }
  else {
    (player->position).x = game_manager.__float2_1a4c.x;
  }
  if (game_manager.__float2_1a4c.y <= (player->position).y) {
    if (game_manager.__float2_1a4c.y + game_manager.__float2_1a54.y < (player->position).y) {
      (player->position).y = game_manager.__float2_1a4c.y + game_manager.__float2_1a54.y;
    }
  }
  else {
    (player->position).y = game_manager.__float2_1a4c.y;
  }
  player_z = (player->position).z;
  fVar1 = (player->float3_488).z;
  player_y = (player->position).y;
  fVar2 = (player->float3_488).y;
  (player->float3_458).x = (player->position).x - (player->float3_488).x;
  (player->float3_458).y = player_y - fVar2;
  (player->float3_458).z = player_z - fVar1;
  player_z = (player->position).z;
  fVar1 = (player->float3_488).z;
  player_y = (player->position).y;
  fVar2 = (player->float3_488).y;
  (player->float3_464).x = (player->position).x + (player->float3_488).x;
  (player->float3_464).y = player_y + fVar2;
  (player->float3_464).z = player_z + fVar1;
  player_z = (player->position).z;
  fVar1 = (player->float3_494).z;
  player_y = (player->position).y;
  fVar2 = (player->float3_494).y;
  (player->float3_470).x = (player->position).x - (player->float3_494).x;
  (player->float3_470).y = player_y - fVar2;
  (player->float3_470).z = player_z - fVar1;
  player_z = (player->position).z;
  fVar1 = (player->float3_494).z;
  player_y = (player->position).y;
  fVar2 = (player->float3_494).y;
  (player->float3_47C).x = (player->position).x + (player->float3_494).x;
  (player->float3_47C).y = player_y + fVar2;
  (player->float3_47C).z = player_z + fVar1;
  player->float3_array_4A0[0].x = (player->position).x;
  player->float3_array_4A0[0].y = (player->position).y;
  player->float3_array_4A0[0].z = (player->position).z;
  player->float3_array_4A0[1].x = (player->position).x;
  player->float3_array_4A0[1].y = (player->position).y;
  player->float3_array_4A0[1].z = (player->position).z;
  local_14 = 0.0;
  local_18 = 0.0;
  if (game_manager.current_power < 8) {
    player->byte_9E2 = '\0';
  }
  else if (player->byte_9E2 == '\0') {
    player->byte_9E2 = '\x01';
  }
  switch(player->byte_9E2) {
  case '\0':
    (player->timer_9E8).current = 0;
    (player->timer_9E8).subframe = 0.0;
    (player->timer_9E8).previous = -999;
    break;
  case '\x01':
    local_18 = 24.0;
    (player->timer_9E8).current = 0;
    (player->timer_9E8).subframe = 0.0;
    (player->timer_9E8).previous = -999;
    if (player->byte_9E3 == '\0') break;
    player->byte_9E2 = '\x02';
  case '\x02':
    while( true ) {
      (player->timer_9E8).previous = (player->timer_9E8).current;
      Supervisor::tick_timer(&supervisor,&(player->timer_9E8).current,&(player->timer_9E8).subframe)
      ;
      player_z = ((float)(player->timer_9E8).current + (player->timer_9E8).subframe) / _8_0f;
      local_14 = (_1_0f - player_z) * _32_0f + __32_0f;
      local_18 = ram0x0046bac4 * player_z * player_z + _4_0f;
      if (7 < (player->timer_9E8).current) {
        player->byte_9E2 = '\x03';
      }
      if (player->byte_9E3 != '\0') break;
      player->byte_9E2 = '\x04';
      (player->timer_9E8).current = 8 - (player->timer_9E8).current;
      (player->timer_9E8).subframe = 0.0;
      (player->timer_9E8).previous = -999;
_switchB_Player____sub_427860_case_4:
      (player->timer_9E8).previous = (player->timer_9E8).current;
      Supervisor::tick_timer(&supervisor,&(player->timer_9E8).current,&(player->timer_9E8).subframe)
      ;
      player_z = ((float)(player->timer_9E8).current + (player->timer_9E8).subframe) / _8_0f;
      local_14 = _32_0f * player_z + __32_0f;
      local_18 = ram0x0046bac4 * (_1_0f - player_z * player_z) + _4_0f;
      if (7 < (player->timer_9E8).current) {
        player->byte_9E2 = '\x01';
      }
      if (player->byte_9E3 == '\0') break;
      player->byte_9E2 = '\x02';
      (player->timer_9E8).current = 8 - (player->timer_9E8).current;
      (player->timer_9E8).subframe = 0.0;
      (player->timer_9E8).previous = -999;
    }
    break;
  case '\x03':
    local_18 = 8.0;
    local_14 = -32.0;
    (player->timer_9E8).current = 0;
    (player->timer_9E8).subframe = 0.0;
    (player->timer_9E8).previous = -999;
    if (player->byte_9E3 == '\0') {
      player->byte_9E2 = '\x04';
      goto _switchB_Player____sub_427860_case_4;
    }
    break;
  case '\x04':
    goto _switchB_Player____sub_427860_case_4;
  }
  player->float3_array_4A0[0].x = player->float3_array_4A0[0].x - local_18;
  player->float3_array_4A0[1].x = local_18 + player->float3_array_4A0[1].x;
  player->float3_array_4A0[0].y = local_14 + player->float3_array_4A0[0].y;
  player->float3_array_4A0[1].y = local_14 + player->float3_array_4A0[1].y;
  if (((input.currently_pressed & 1) != 0) &&
     (bVar3 = Gui::msg_is_active(&gui), CONCAT31(extraout_var,bVar3) == 0)) {
    __sub_428630((int)player);
  }
  player->word_A18 = input.currently_pressed;
  return 0;
}

