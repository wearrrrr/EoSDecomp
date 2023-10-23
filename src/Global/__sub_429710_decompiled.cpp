
undefined4 __cdecl __sub_429710(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x75b0)) {
    if ((*(int *)(param_1 + 0x75b0) != *(int *)(param_1 + 0x75a8)) &&
       (((player.player_inner.dword_0 == 0 || (game_manager.character != '\x01')) ||
        (game_manager.shottype != '\x01')))) {
      __sub_429820(param_1,*(undefined4 *)(param_1 + 0x75b0));
    }
    *(undefined4 *)(param_1 + 0x75a8) = *(undefined4 *)(param_1 + 0x75b0);
    Supervisor::tick_timer(&supervisor,(int *)(param_1 + 0x75b0),(float *)(param_1 + 0x75ac));
    if (((0x1d < *(int *)(param_1 + 0x75b0)) || (*(char *)(param_1 + 0x9e0) == '\x02')) ||
       (*(char *)(param_1 + 0x9e0) == '\x01')) {
      *(undefined4 *)(param_1 + 0x75b0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x75ac) = 0;
      *(undefined4 *)(param_1 + 0x75a8) = 0xfffffc19;
    }
  }
  return 0;
}

