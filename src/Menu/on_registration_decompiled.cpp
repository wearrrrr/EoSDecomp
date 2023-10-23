
undefined4 __cdecl Menu::on_registration(Menu *menu)

{
  char *scoreDat;
  int local_c;
  AnmManager *anm_mgr;
  
  if (game_manager.demoplay_mode == '\0') {
    Supervisor::__validate_bgm_mode(&supervisor);
  }
  anm_mgr = anm_manager_ptr;
  for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
    anm_mgr->scripts[local_c + 0x100] = (AnmRawInstr *)0x0;
  }
  *(undefined4 *)(menu + 0x81e4) = 0;
  if (supervisor.dword_190 < 2) {
LAB_0043a516:
    *(undefined4 *)(menu + 0x81a0) = 0;
  }
  else {
    if (3 < supervisor.dword_190) {
      if (supervisor.dword_190 == 6) {
        *(undefined4 *)(menu + 0x81a0) = 4;
        goto LAB_0043a520;
      }
      if (supervisor.dword_190 != 7) {
        if (supervisor.dword_190 == 9) {
          *(undefined4 *)(menu + 0x81a0) = 5;
          goto LAB_0043a520;
        }
        goto LAB_0043a516;
      }
    }
    *(uint *)(menu + 0x81a0) = (uint)(game_manager.difficulty == 4);
  }
LAB_0043a520:
  if (game_manager.__byte_1823 != '\0') {
    *(undefined4 *)(menu + 0x81a0) = 2;
  }
  game_manager.__byte_1823 = '\0';
  if ((supervisor.config.flags & 1) == 0) {
    *(undefined4 *)(menu + 0x8208) = 0x80004000;
    *(undefined4 *)(menu + 0x8204) = 0xff008000;
  }
  else {
    *(undefined4 *)(menu + 0x8208) = 0x80ffffff;
    *(undefined4 *)(menu + 0x8204) = 0xffffffff;
  }
  *(undefined4 *)(menu + 0x81fc) = 0;
  *(undefined4 *)(menu + 0x8200) = 0x40000000;
  *(undefined4 *)(menu + 0x820c) = 0;
  *(undefined4 *)(menu + 0x8210) = 0;
  *(undefined4 *)(menu + 0x10f28) = 0x10;
  *(undefined4 *)(menu + 0x10edc) = 0;
  scoreDat = __load_scorefile("score.dat");
  __CLRD_related_1((int)scoreDat,0x69ccd0);
  __PSCR_related_1((int)scoreDat,(undefined4 *)game_manager.pscr_data);
  __free_scorefile(scoreDat);
  if (game_manager.demoplay_mode == '\0') {
    if (supervisor.dword_400 == 0) {
      Supervisor::__load_bgm_file(&supervisor,"bgm/th06_01.mid");
      ScreenEffect::operator_new(0,0x78,0xffffff,0,0);
    }
    else {
      ScreenEffect::operator_new(0,200,0xffffff,0,0);
    }
  }
  game_manager.demoplay_mode = '\0';
  game_manager._6184_4_ = 0;
  return 0;
}

