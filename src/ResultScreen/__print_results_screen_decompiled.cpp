
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall ResultScreen::__print_results_screen(int param_1)

{
  Float3 position;
  int local_8;
  
  if ((0xe < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 0x11)) {
    local_8 = param_1 + 0x2790;
    ascii_manager.color = *(D3DCOLOR *)(param_1 + 0x280c);
    position.z = *(float *)(param_1 + 0x2828);
    position.x = *(float *)(param_1 + 0x2820) + _24_0f;
    position.y = *(float *)(param_1 + 0x2824) + _32_0f;
                    /* Print Score */
    AsciiManager::drawf(&ascii_manager,&position,(char *)&__9d_);
    position.y = position.y + _2_0f;
                    /* Print Difficulty */
    AsciiManager::draw(&ascii_manager,&position,
                       *(char **)(&DAT_00478504 + game_manager.difficulty * 4));
    position.y = position.y + _2_0f;
    if ((game_manager.difficulty == 0) || (game_manager.__byte_1822 == 0)) {
                    /* Print Game Progress */
      AsciiManager::drawf(&ascii_manager,&position,"    %3.2f%%");
    }
    else {
                    /* If game was completed... */
      AsciiManager::drawf(&ascii_manager,&position,"      100%%");
    }
    position.y = position.y + _2_0f;
                    /* Continues used */
    AsciiManager::drawf(&ascii_manager,&position,(char *)&__9d_);
    position.y = position.y + _2_0f;
                    /* Hits taken */
    AsciiManager::drawf(&ascii_manager,&position,(char *)&__9d_);
    position.y = position.y + _2_0f;
                    /* Number of bombs used */
    AsciiManager::drawf(&ascii_manager,&position,(char *)&__9d_);
    position.y = position.y + _2_0f;
                    /* Spell card bonuses achieved */
    AsciiManager::drawf(&ascii_manager,&position,(char *)&__9d_);
    position.y = position.y + _2_0f;
    AsciiManager::drawf(&ascii_manager,&position,"    %3.2f%%");
    ascii_manager.color = 0xffffffff;
  }
  return 0;
}

