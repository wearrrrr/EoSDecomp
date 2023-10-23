
/* WARNING: Removing unreachable block (ram,0x0042a940) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl ReplayManager::on_registration_A2(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 result;
  int i;
  
  *param_1 = 0;
  if (param_1[1] == 0) {
    pcVar1 = __read_file_to_buffer((char *)param_1[3],(uint)(game_manager.demoplay_mode == '\0'));
    param_1[1] = pcVar1;
    iVar2 = __sub_42A140((int *)param_1[1],___current_filesize);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    for (i = 0; i < 7; i = i + 1) {
      if (*(int *)(param_1[1] + 0x34 + i * 4) != 0) {
        *(int *)(param_1[1] + 0x34 + i * 4) = *(int *)(param_1[1] + 0x34 + i * 4) + param_1[1];
      }
    }
  }
  if (*(int *)(param_1[1] + 0x30 + game_manager.current_stage * 4) == 0) {
    result = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(param_1[1] + 0x30 + game_manager.current_stage * 4);
    game_manager.character = (char)((int)(uint)*(byte *)(param_1[1] + 6) >> 1);
    game_manager.shottype = *(byte *)(param_1[1] + 6) & 1;
    game_manager.difficulty = (int32_t)*(byte *)(param_1[1] + 7);
    game_manager.score_items_collected_stage = *(int16_t *)(iVar2 + 6);
    Rng.rng_value = *(uint16_t *)(iVar2 + 4);
    ram0x0069d8fc = 0;
    game_manager.rank = (int32_t)*(byte *)(iVar2 + 0xb);
    game_manager.lives_remaining = *(char *)(iVar2 + 9);
    game_manager.bombs_remaining = *(char *)(iVar2 + 10);
    game_manager.current_power = (ushort)*(byte *)(iVar2 + 8);
    param_1[0x12] = iVar2 + 0x10;
    game_manager.power_item_count = *(char *)(iVar2 + 0xc);
    if ((1 < game_manager.current_stage) &&
       (*(int *)(param_1[1] + 0x2c + game_manager.current_stage * 4) != 0)) {
      game_manager.__dword_0 = **(int32_t **)(param_1[1] + 0x2c + game_manager.current_stage * 4);
      game_manager.score = game_manager.__dword_0;
    }
    result = 0;
  }
  return result;
}

