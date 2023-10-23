
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Player::marisa_b_bomb_on_draw(Player *player)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  int i;
  AnmVm *vm;
  
  bomb_on_draw(player);
  vm = (player->player_inner).vms_11C;
  for (i = 0; i < 4; i = i + 1) {
    fVar2 = ((_Pi_5_f * (float)i) / _3_0f - _Pi_f) + __72?_r_f;
    (vm->pos).x = (player->position).x;
    fVar1 = (player->position).y;
    (vm->pos).y = fVar1;
    (vm->pos).z = (player->position).z;
    fVar3 = (float10)_cos(&vm->pos,SUB41(fVar1,0),SUB81((double)fVar2,0));
    (vm->pos).x = ((float)fVar3 * vm->sprite->height_px * vm->scale_y) / _2_0f + (vm->pos).x;
    fVar3 = (float10)_sin(vm,(char)vm,SUB81((double)fVar2,0));
    (vm->pos).y = ((float)fVar3 * vm->sprite->height_px * vm->scale_y) / _2_0f + (vm->pos).y;
    fVar3 = reduce_angle(_Pi_2_f - fVar2,3.141593);
    (vm->rotation).z = (float)fVar3;
    (vm->pos).x = game_manager.arcade_region_top_left_pos.x + (vm->pos).x;
    (vm->pos).y = game_manager.arcade_region_top_left_pos.y + (vm->pos).y;
    (vm->pos).z = 0.0;
    AnmManager::__draw_vm_2(anm_manager_ptr,vm);
    vm = vm + 1;
  }
  return;
}

