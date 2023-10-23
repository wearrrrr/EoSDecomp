
void __cdecl __sub_42D0A4(int param_1,int param_2)

{
  if ((((input.currently_pressed & 0x10) != 0) &&
      ((input.currently_pressed & 0x10) != (input.word_4 & 0x10))) ||
     (((input.currently_pressed & 0x10) != 0 && (input.word_8 != 0)))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x10) < 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
    }
    SoundManager::play_sound_centered(&sound_manager,0xc,0);
  }
  if ((((input.currently_pressed & 0x20) != 0) &&
      ((input.currently_pressed & 0x20) != (input.word_4 & 0x20))) ||
     (((input.currently_pressed & 0x20) != 0 && (input.word_8 != 0)))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (param_2 <= *(int *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_2;
    }
    SoundManager::play_sound_centered(&sound_manager,0xc,0);
  }
  return;
}

