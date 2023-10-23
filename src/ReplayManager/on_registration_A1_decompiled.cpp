
undefined4 __cdecl ReplayManager::on_registration_A1(undefined4 *param_1)

{
  int32_t *piVar1;
  int iVar2;
  void *new;
  int i;
  
  *param_1 = 0;
  if (param_1[1] == 0) {
    new = malloc(0x50);
    param_1[1] = new;
    *(undefined4 *)param_1[1] = magic_T6RP._0_4_;
    *(char *)(param_1[1] + 6) = game_manager.shottype + game_manager.character * '\x02';
    *(undefined2 *)(param_1[1] + 4) = 0x102;
    *(undefined *)(param_1[1] + 7) = (undefined)game_manager.difficulty;
    *(undefined4 *)(param_1[1] + 0x19) = _NO_NAME_._0_4_;
    for (i = 0; i < 7; i = i + 1) {
      *(undefined4 *)(param_1[1] + 0x34 + i * 4) = 0;
    }
  }
  else {
    piVar1 = *(int32_t **)(param_1[1] + 0x2c + game_manager.current_stage * 4);
    if (piVar1 == (int32_t *)0x0) {
      return 0xffffffff;
    }
    *piVar1 = game_manager.score;
  }
  if (*(int *)(param_1[1] + 0x30 + game_manager.current_stage * 4) != 0) {
    __stub_3();
  }
  new = _malloc(0x69780);
  *(void **)(param_1[1] + 0x30 + game_manager.current_stage * 4) = new;
  iVar2 = *(int *)(param_1[1] + 0x30 + game_manager.current_stage * 4);
  *(char *)(iVar2 + 10) = game_manager.bombs_remaining;
  *(char *)(iVar2 + 9) = game_manager.lives_remaining;
  *(undefined *)(iVar2 + 8) = (undefined)game_manager.current_power;
  *(undefined *)(iVar2 + 0xb) = (undefined)game_manager.rank;
  *(int16_t *)(iVar2 + 6) = game_manager.score_items_collected_stage;
  *(int16_t *)(iVar2 + 4) = game_manager.__word_1a2c;
  *(char *)(iVar2 + 0xc) = game_manager.power_item_count;
  param_1[0x12] = iVar2 + 0x10;
  *(undefined4 *)param_1[0x12] = 0;
  *(undefined2 *)(param_1[0x12] + 4) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  return 0;
}

