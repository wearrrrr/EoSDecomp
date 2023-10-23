
void __cdecl Player::reimu_b_bomb_on_draw(Player *player)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int i;
  AnmVm *vms;
  
  bomb_on_draw(player);
  vms = (player->player_inner).vms_11C;
  for (i = 0; i < 4; i = i + 1) {
    piVar1 = (player->player_inner).dword_array_5C + i * 3;
    fVar2 = (float)piVar1[2];
    fVar3 = (vms->pos_2).z;
    fVar4 = (float)piVar1[1];
    fVar5 = (vms->pos_2).y;
    (vms->pos).x = (float)*piVar1 + (vms->pos_2).x;
    (vms->pos).y = fVar4 + fVar5;
    (vms->pos).z = fVar2 + fVar3;
    (vms->pos).x = game_manager.arcade_region_top_left_pos.x + (vms->pos).x;
    (vms->pos).y = game_manager.arcade_region_top_left_pos.y + (vms->pos).y;
    (vms->pos).z = 0.0;
    AnmManager::__draw_vm_2(anm_manager_ptr,vms);
    vms = vms + 1;
  }
  return;
}

