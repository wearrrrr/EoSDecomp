
undefined4 __cdecl ReplayManager::on_tick_A1(int *param_1)

{
  ushort uVar1;
  
  if (game_manager.__byte_1821 != '\0') {
    uVar1 = input.currently_pressed & 0x1f7;
    if (uVar1 != *(ushort *)(param_1[0x12] + 4)) {
      param_1[0x12] = param_1[0x12] + 8;
      param_1[game_manager.current_stage + 0x12] = param_1[0x12] + 8;
      *(int *)param_1[0x12] = *param_1;
      *(ushort *)(param_1[0x12] + 4) = uVar1;
    }
    *param_1 = *param_1 + 1;
  }
  return 1;
}

