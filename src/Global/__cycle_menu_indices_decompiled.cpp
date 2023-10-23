
undefined4 __cdecl __cycle_menu_indices(Menu *menu,int max_index)

{
  undefined4 uVar1;
  
  if ((((input.currently_pressed & 0x10) == 0) ||
      ((input.currently_pressed & 0x10) == (input.word_4 & 0x10))) &&
     (((input.currently_pressed & 0x10) == 0 || (input.word_8 == 0)))) {
    if ((((input.currently_pressed & 0x20) == 0) ||
        ((input.currently_pressed & 0x20) == (input.word_4 & 0x20))) &&
       (((input.currently_pressed & 0x20) == 0 || (input.word_8 == 0)))) {
      uVar1 = 0;
    }
    else {
      *(int *)(menu + 0x81a0) = *(int *)(menu + 0x81a0) + 1;
      SoundManager::play_sound_centered(&sound_manager,0xc,0);
      if (*(int *)(menu + 0x81a0) < 0) {
        *(int *)(menu + 0x81a0) = max_index + -1;
      }
      if (max_index <= *(int *)(menu + 0x81a0)) {
        *(undefined4 *)(menu + 0x81a0) = 0;
      }
      uVar1 = 1;
    }
  }
  else {
    *(int *)(menu + 0x81a0) = *(int *)(menu + 0x81a0) + -1;
    SoundManager::play_sound_centered(&sound_manager,0xc,0);
    if (*(int *)(menu + 0x81a0) < 0) {
      *(int *)(menu + 0x81a0) = max_index + -1;
    }
    if (max_index <= *(int *)(menu + 0x81a0)) {
      *(undefined4 *)(menu + 0x81a0) = 0;
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

