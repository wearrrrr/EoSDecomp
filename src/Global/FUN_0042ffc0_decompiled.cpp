
/* WARNING: Removing unreachable block (ram,0x004300e2) */
/* WARNING: Removing unreachable block (ram,0x00430173) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0042ffc0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (game_manager.__byte_2c == '\0') {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
    Supervisor::tick_timer(&supervisor,(int *)(param_1 + 0x2c),(float *)(param_1 + 0x28));
    if (*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x14)) {
      fVar1 = (((float)*(int *)(param_1 + 0x2c) + *(float *)(param_1 + 0x28)) *
              (float)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18))) /
              (float)*(int *)(param_1 + 0x14) + (float)*(int *)(param_1 + 0x18);
      uVar3 = Rng::rand_dword(&Rng);
      uVar3 = uVar3 % 3;
      if (uVar3 == 0) {
        game_manager.arcade_region_top_left_pos.x = 32.0;
        game_manager.arcade_region_size.x = 384.0;
      }
      else if (uVar3 == 1) {
        game_manager.arcade_region_top_left_pos.x = _32_0f + fVar1;
        game_manager.arcade_region_size.x = _84_0f - fVar1;
      }
      else if (uVar3 == 2) {
        game_manager.arcade_region_top_left_pos.x = 32.0;
        game_manager.arcade_region_size.x = _84_0f - fVar1;
      }
      uVar3 = Rng::rand_dword(&Rng);
      uVar3 = uVar3 % 3;
      if (uVar3 == 0) {
        game_manager.arcade_region_top_left_pos.y = 16.0;
        game_manager.arcade_region_size.y = 448.0;
      }
      else if (uVar3 == 1) {
        game_manager.arcade_region_top_left_pos.y = ram0x0046a2b4 + fVar1;
        game_manager.arcade_region_size.y = _48_0f - fVar1;
      }
      else if (uVar3 == 2) {
        game_manager.arcade_region_top_left_pos.y = 16.0;
        game_manager.arcade_region_size.y = _48_0f - fVar1;
      }
      uVar2 = 1;
    }
    else {
      game_manager.arcade_region_top_left_pos.x = 32.0;
      game_manager.arcade_region_top_left_pos.y = 16.0;
      game_manager.arcade_region_size.x = 384.0;
      game_manager.arcade_region_size.y = 448.0;
      uVar2 = 0;
    }
  }
  else {
    game_manager.arcade_region_top_left_pos.x = 32.0;
    game_manager.arcade_region_top_left_pos.y = 16.0;
    game_manager.arcade_region_size.x = 384.0;
    game_manager.arcade_region_size.y = 448.0;
    uVar2 = 1;
  }
  return uVar2;
}

