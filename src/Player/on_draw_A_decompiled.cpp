
undefined4 __cdecl Player::on_draw_A(Player *player)

{
  Float3 *vec;
  float *pfVar1;
  
  __sub_429B00((int)player);
  if (((player->player_inner).dword_0 != 0) && ((player->player_inner).bomb_func_18 != (void *)0x0))
  {
    (*(code *)(player->player_inner).bomb_func_18)(player);
  }
  (player->vm_0).pos.x = game_manager.arcade_region_top_left_pos.x + (player->position).x;
  (player->vm_0).pos.y = game_manager.arcade_region_top_left_pos.y + (player->position).y;
  (player->vm_0).pos.z = 0.49;
  if (game_manager.__byte_1820 == '\0') {
    AnmManager::__draw_vm_1(anm_manager_ptr,&player->vm_0);
    if ((player->byte_9E2 != '\0') && ((player->byte_9E0 == '\0' || (player->byte_9E0 == '\x03'))))
    {
      player->vms_1[0].pos.x = player->float3_array_4A0[0].x;
      player->vms_1[0].pos.y = player->float3_array_4A0[0].y;
      player->vms_1[0].pos.z = player->float3_array_4A0[0].z;
      player->vms_1[1].pos.x = player->float3_array_4A0[1].x;
      player->vms_1[1].pos.y = player->float3_array_4A0[1].y;
      player->vms_1[1].pos.z = player->float3_array_4A0[1].z;
      vec = &player->vms_1[0].pos;
      vec->x = game_manager.arcade_region_top_left_pos.x + vec->x;
      pfVar1 = &player->vms_1[0].pos.y;
      *pfVar1 = game_manager.arcade_region_top_left_pos.y + *pfVar1;
      vec = &player->vms_1[1].pos;
      vec->x = game_manager.arcade_region_top_left_pos.x + vec->x;
      pfVar1 = &player->vms_1[1].pos.y;
      *pfVar1 = game_manager.arcade_region_top_left_pos.y + *pfVar1;
      player->vms_1[0].pos.z = 0.491;
      player->vms_1[1].pos.z = 0.491;
      AnmManager::__draw_vm_2(anm_manager_ptr,player->vms_1);
      AnmManager::__draw_vm_2(anm_manager_ptr,player->vms_1 + 1);
    }
  }
  return 1;
}

