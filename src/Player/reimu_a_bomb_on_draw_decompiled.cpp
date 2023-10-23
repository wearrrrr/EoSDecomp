
void __cdecl Player::reimu_a_bomb_on_draw(Player *player)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int i;
  AnmVm *vm;
  
  bomb_on_draw(player);
  vm = (player->player_inner).vms_11C;
  for (i = 0; i < 8; i = i + 1) {
    if (*(int *)((player->player_inner).field5_0x1c + i * 4) != 0) {
      piVar1 = (player->player_inner).dword_array_5C + i * 3;
      fVar2 = (float)piVar1[2];
      fVar3 = (vm->pos_2).z;
      fVar4 = (float)piVar1[1];
      fVar5 = (vm->pos_2).y;
      (vm->pos).x = (float)*piVar1 + (vm->pos_2).x;
      (vm->pos).y = fVar4 + fVar5;
      (vm->pos).z = fVar2 + fVar3;
      (vm->pos).x = game_manager.arcade_region_top_left_pos.x + (vm->pos).x;
      pfVar6 = &(vm->pos).y;
      *pfVar6 = game_manager.arcade_region_top_left_pos.y + *pfVar6;
      (vm->pos).z = 0.0;
      AnmManager::__draw_vm_1(anm_manager_ptr,vm);
      piVar1 = (player->player_inner).dword_array_5C + i * 3;
      fVar2 = (float)piVar1[2];
      fVar3 = vm[1].pos_2.z;
      fVar4 = (float)piVar1[1];
      fVar5 = vm[1].pos_2.y;
      vm[1].pos.x = (float)*piVar1 + vm[1].pos_2.x;
      vm[1].pos.y = fVar4 + fVar5;
      vm[1].pos.z = fVar2 + fVar3;
      vm[1].pos.x = game_manager.arcade_region_top_left_pos.x + vm[1].pos.x;
      pfVar6 = &vm[1].pos.y;
      *pfVar6 = game_manager.arcade_region_top_left_pos.y + *pfVar6;
      vm[1].pos.z = 0.0;
      AnmManager::__draw_vm_1(anm_manager_ptr,vm + 1);
      piVar1 = (player->player_inner).dword_array_5C + i * 3;
      fVar2 = (float)piVar1[2];
      fVar3 = vm[2].pos_2.z;
      fVar4 = (float)piVar1[1];
      fVar5 = vm[2].pos_2.y;
      vm[2].pos.x = (float)*piVar1 + vm[2].pos_2.x;
      vm[2].pos.y = fVar4 + fVar5;
      vm[2].pos.z = fVar2 + fVar3;
      vm[2].pos.x = game_manager.arcade_region_top_left_pos.x + vm[2].pos.x;
      pfVar6 = &vm[2].pos.y;
      *pfVar6 = game_manager.arcade_region_top_left_pos.y + *pfVar6;
      vm[2].pos.z = 0.0;
      AnmManager::__draw_vm_1(anm_manager_ptr,vm + 2);
      piVar1 = (player->player_inner).dword_array_5C + i * 3;
      fVar2 = (float)piVar1[2];
      fVar3 = vm[3].pos_2.z;
      fVar4 = (float)piVar1[1];
      fVar5 = vm[3].pos_2.y;
      vm[3].pos.x = (float)*piVar1 + vm[3].pos_2.x;
      vm[3].pos.y = fVar4 + fVar5;
      vm[3].pos.z = fVar2 + fVar3;
      vm[3].pos.x = game_manager.arcade_region_top_left_pos.x + vm[3].pos.x;
      pfVar6 = &vm[3].pos.y;
      *pfVar6 = game_manager.arcade_region_top_left_pos.y + *pfVar6;
      vm[3].pos.z = 0.0;
      AnmManager::__draw_vm_1(anm_manager_ptr,vm + 3);
    }
    vm = vm + 4;
  }
  return;
}

