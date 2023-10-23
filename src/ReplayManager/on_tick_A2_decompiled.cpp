
/* WARNING: Removing unreachable block (ram,0x0042a60a) */

undefined4 __cdecl ReplayManager::on_tick_A2(int *param_1)

{
  if (game_manager.__byte_1821 != '\0') {
    while (*(int *)(param_1[0x12] + 8) <= *param_1) {
      param_1[0x12] = param_1[0x12] + 8;
    }
    input.currently_pressed = input.currently_pressed & 0xfe08 | *(ushort *)(param_1[0x12] + 4);
    input.word_8 = 0;
    if (input.word_4 == input.currently_pressed) {
      if ((0x1d < input.word_C) &&
         (input.word_8 = (uint16_t)((input.word_C & 7) == 0), 0x25 < input.word_C)) {
        input.word_C = 0x1e;
      }
      input.word_C = input.word_C + 1;
    }
    else {
      input.word_C = 0;
    }
    *param_1 = *param_1 + 1;
  }
  return 1;
}

