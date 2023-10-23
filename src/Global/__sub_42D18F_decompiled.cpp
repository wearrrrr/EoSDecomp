
undefined4 __cdecl __sub_42D18F(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((input.currently_pressed & 0x40) == 0) ||
      ((input.currently_pressed & 0x40) == (input.word_4 & 0x40))) &&
     (((input.currently_pressed & 0x40) == 0 || (input.word_8 == 0)))) {
    if ((((input.currently_pressed & 0x80) == 0) ||
        ((input.currently_pressed & 0x80) == (input.word_4 & 0x80))) &&
       (((input.currently_pressed & 0x80) == 0 || (input.word_8 == 0)))) {
      uVar1 = 0;
    }
    else {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      if (param_2 <= *(int *)(param_1 + 0x10)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_2;
      }
      SoundManager::play_sound_centered(&sound_manager,0xc,0);
      uVar1 = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x10) < 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
    }
    SoundManager::play_sound_centered(&sound_manager,0xc,0);
    uVar1 = 1;
  }
  return uVar1;
}

