
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Player::marisa_a_bomb_on_draw(Player *player)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  int local_c;
  AnmVm *vm;
  
  bomb_on_draw(player);
  vm = (player->player_inner).vms_11C;
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    piVar1 = (player->player_inner).dword_array_5C + local_c * 3;
    (vm->pos).x = (float)*piVar1;
    (vm->pos).y = (float)piVar1[1];
    (vm->pos).z = (float)piVar1[2];
    (vm->pos).x = game_manager.arcade_region_top_left_pos.x + (vm->pos).x;
    (vm->pos).y = game_manager.arcade_region_top_left_pos.y + (vm->pos).y;
    (vm->pos).z = 0.0;
    vm->scale_x = 3.2;
    vm->scale_y = 3.2;
    AnmManager::__draw_vm_2(anm_manager_ptr,vm);
    piVar1 = (player->player_inner).dword_array_BC + local_c * 3;
    fVar2 = (float)piVar1[2] * _6_0f;
    fVar3 = (float)piVar1[1] * _6_0f;
    (vm->pos).x = (vm->pos).x - (float)*piVar1 * _6_0f;
    (vm->pos).y = (vm->pos).y - fVar3;
    (vm->pos).z = (vm->pos).z - fVar2;
    (vm->pos).x = (vm->pos).x + __32_0f;
    (vm->pos).y = (vm->pos).y + __32_0f;
    (vm->pos).z = 0.0;
    vm->scale_x = 2.2;
    vm->scale_y = 2.2;
    AnmManager::__draw_vm_2(anm_manager_ptr,vm);
    piVar1 = (player->player_inner).dword_array_BC + local_c * 3;
    fVar2 = (float)piVar1[2];
    fVar3 = (float)piVar1[1];
    (vm->pos).x = (vm->pos).x - ((float)*piVar1 + (float)*piVar1);
    (vm->pos).y = (vm->pos).y - (fVar3 + fVar3);
    (vm->pos).z = (vm->pos).z - (fVar2 + fVar2);
    (vm->pos).x = (vm->pos).x + _64_0f;
    (vm->pos).y = (vm->pos).y + _64_0f;
    (vm->pos).z = 0.0;
    piVar1 = (player->player_inner).dword_array_BC + local_c * 3;
    fVar2 = (float)piVar1[2];
    fVar3 = (float)piVar1[1];
    (vm->pos).x = (vm->pos).x - ((float)*piVar1 + (float)*piVar1);
    (vm->pos).y = (vm->pos).y - (fVar3 + fVar3);
    (vm->pos).z = (vm->pos).z - (fVar2 + fVar2);
    (vm->pos).x = (vm->pos).x + __32_0f;
    (vm->pos).y = (vm->pos).y + __32_0f;
    (vm->pos).z = 0.0;
    vm->scale_x = 1.0;
    vm->scale_y = 1.0;
    AnmManager::__draw_vm_2(anm_manager_ptr,vm);
    vm = vm + 1;
  }
  return;
}

