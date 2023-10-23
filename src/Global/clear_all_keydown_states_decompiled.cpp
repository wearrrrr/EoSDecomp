
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_all_keydown_states(void)

{
  uint unaff_retaddr;
  int i;
  byte key_state [260];
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  GetKeyboardState(key_state);
                    /* Loop through all possible INT-8 values */
  for (i = 0; i < 256; i = i + 1) {
    key_state[i] = key_state[i] & 127;
  }
  SetKeyboardState(key_state);
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

