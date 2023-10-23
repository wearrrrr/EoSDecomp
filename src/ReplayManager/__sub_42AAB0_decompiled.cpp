
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ReplayManager::__sub_42AAB0(void)

{
  undefined4 *puVar1;
  
  puVar1 = _REPLAY_MANAGER_PTR;
  if (_REPLAY_MANAGER_PTR != (undefined4 *)0x0) {
    _REPLAY_MANAGER_PTR[0x12] = _REPLAY_MANAGER_PTR[0x12] + 8;
    *(undefined4 *)puVar1[0x12] = *puVar1;
    *(undefined2 *)(puVar1[0x12] + 4) = 0;
    puVar1[0x12] = puVar1[0x12] + 8;
    *(undefined4 *)puVar1[0x12] = 9999999;
    *(undefined2 *)(puVar1[0x12] + 4) = 0;
    puVar1[game_manager.current_stage + 0x12] = puVar1[0x12] + 8;
  }
  return;
}

