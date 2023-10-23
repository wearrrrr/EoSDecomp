
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl GameManager::on_registration(GameManager *game_manager)

{
  ushort uVar1;
  FILE *scorefile;
  undefined4 result;
  int dataToLoad;
  uint local_14;
  int i;
  ScorefileCatk *ScorefileCatk;
  bool isInReplay;
  
  isInReplay = false;
  (*(code *)(supervisor.d3d_device)->vtable->ResourceManagerDiscardBytes)(supervisor.d3d_device,0);
  if (supervisor.dword_18C == 3) {
    game_manager->__dword_0 = game_manager->score;
    game_manager->__dword_8 = 0;
  }
  else {
    supervisor.config_defaults.starting_bombs = ::game_manager.bombs_remaining;
    supervisor.config_defaults.starting_lives = ::game_manager.lives_remaining;
    (game_manager->arcade_region_top_left_pos).x = _32_0f;
    (game_manager->arcade_region_top_left_pos).y = ram0x0046a2b4;
    (game_manager->arcade_region_size).x = _84_0f;
    (game_manager->arcade_region_size).y = _48_0f;
    (game_manager->__float2_1a4c).x = _8_0f;
    (game_manager->__float2_1a4c).y = ram0x0046a2b4;
    (game_manager->__float2_1a54).x = _68_0f;
    (game_manager->__float2_1a54).y = _16_0f;
    game_manager->__int_1a6c = 0;
    game_manager->__dword_0 = 0;
    game_manager->score = 0;
    game_manager->__dword_8 = 0;
    game_manager->high_score = 100000;
    game_manager->current_power = 0;
    game_manager->__byte_1818 = '\0';
    if (5 < game_manager->current_stage) {
      game_manager->difficulty = 4;
    }
    if (game_manager->difficulty < 4) {
      game_manager->__byte_181c = '\0';
    }
    else {
      game_manager->__byte_181c = '\x04';
    }
    ::game_manager.power_item_count = 0;
    game_manager->rank = 8;
    game_manager->overall_graze = 0;
    game_manager->score_items_collected_stage = 0;
    ScorefileCatk = game_manager->catk_data;
    for (i = 0; i < 64; i = i + 1) {
      for (local_14 = 0; local_14 < 32; local_14 = local_14 + 1) {
        uVar1 = Rng::rand_word(&Rng);
        *(ushort *)(ScorefileCatk->magic__CATK + local_14 * 2) = uVar1;
      }
      *(undefined4 *)ScorefileCatk->magic__CATK = 0x4b544143;
      ScorefileCatk->size_2 = 0x40;
      ScorefileCatk->size_1 = 0x40;
      ScorefileCatk->__byte_8 = '\x10';
      ScorefileCatk->__word_10 = (int16_t)i;
      ScorefileCatk->attempts = 0;
      ScorefileCatk->captures = 0;
      ScorefileCatk = ScorefileCatk + 1;
    }
    scorefile = (FILE *)__load_scorefile("score.dat");
    ::game_manager.high_score =
         __HSCR_related_1((int)scorefile,0,
                          (uint)(byte)::game_manager.shottype +
                          (uint)(byte)::game_manager.character * 2,::game_manager.difficulty);
    __CATK_related_1(scorefile,game_manager->catk_data);
    __CLRD_related_1((int)scorefile,(int)game_manager->clrd_data);
    __PSCR_related_1((int)scorefile,(undefined4 *)game_manager->pscr_data);
    if (game_manager->__byte_1823 != '\0') {
      ::game_manager.high_score =
           game_manager->pscr_data
           [((uint)(byte)::game_manager.shottype + (uint)(byte)::game_manager.character * 2) * 0x18
            + ::game_manager.current_stage * 4 + ::game_manager.difficulty].score;
    }
    __free_scorefile(scorefile);
    game_manager->rank = *(int32_t *)(&DAT_00476564 + ::game_manager.difficulty * 0xc);
    game_manager->min_rank = *(int32_t *)(&DAT_00476568 + ::game_manager.difficulty * 0xc);
    game_manager->max_rank = *(int32_t *)(&DAT_0047656c + ::game_manager.difficulty * 0xc);
    game_manager->__dword_20 = 0;
    game_manager->__dword_24 = 0;
    game_manager->__dword_28 = 0;
  }
  game_manager->subrank = 0;
  game_manager->power_items_collected_stage = 0;
  game_manager->graze_in_stage = 0;
  game_manager->__byte_181f = '\0';
  game_manager->current_stage = game_manager->current_stage + 1;
  if (::game_manager.__spellcard_related_1 == 0) {
    dataToLoad = (uint)(byte)::game_manager.shottype + (uint)(byte)::game_manager.character * 2;
    if ((game_manager->__byte_1818 == '\0') &&
       ((int)(uint)game_manager->clrd_data[dataToLoad].clear_counts[::game_manager.difficulty] <
        game_manager->current_stage + -1)) {
      game_manager->clrd_data[dataToLoad].clear_counts[::game_manager.difficulty] =
           (char)game_manager->current_stage + 0xff;
    }
    if ((int)(uint)game_manager->clrd_data[dataToLoad].continue_counts[::game_manager.difficulty] <
        game_manager->current_stage + -1) {
      game_manager->clrd_data[dataToLoad].continue_counts[::game_manager.difficulty] =
           (char)game_manager->current_stage + 0xff;
    }
  }
  if ((game_manager->__byte_1823 != '\0') && (game_manager->current_stage != 1)) {
    if (game_manager->current_stage == 2) {
      game_manager->current_power = 0x40;
    }
    else {
      game_manager->current_power = 0x80;
    }
  }
  Supervisor::__load_dat_file(&supervisor,4,"g–‚‹½CM.dat");
  Supervisor::__load_dat_file(&supervisor,2,"g–‚‹½ST.dat");
  if (::game_manager.__spellcard_related_1 == 1) {
    dataToLoad = ReplayManager::initialize(1,0x69d4cc);
    if (dataToLoad != 0) {
      isInReplay = true;
    }
    while (*(uint *)(&DAT_004764b0 + game_manager->__byte_181c * 4) < (uint)game_manager->__dword_0
           || *(uint *)(&DAT_004764b0 + game_manager->__byte_181c * 4) == game_manager->__dword_0) {
      game_manager->__byte_181c = game_manager->__byte_181c + '\x01';
    }
    game_manager->min_rank = *(int32_t *)(&DAT_0047652c + ::game_manager.difficulty * 0xc);
    game_manager->max_rank = *(int32_t *)(&DAT_00476530 + ::game_manager.difficulty * 0xc);
  }
  ram0x0069d8fc = 0;
  game_manager->__word_1a2c = Rng.rng_value;
  dataToLoad = Stage::initialize((Stage *)game_manager->current_stage);
  if (dataToLoad == 0) {
    dataToLoad = Player::initialize(0);
    if (dataToLoad == 0) {
      dataToLoad = BulletManager::initialize("data/etama.anm");
      if (dataToLoad == 0) {
        dataToLoad = EnemyManager::initialize
                               (*(char **)(&DAT_004764e8 + game_manager->current_stage * 8),
                                *(char **)(&DAT_004764ec + game_manager->current_stage * 8));
        if (dataToLoad == 0) {
          dataToLoad = EnemyController::initialize
                                 ((EnemyController *)&enemy_manager,
                                  *(char **)(&DAT_004764c4 + game_manager->current_stage * 4));
          if (dataToLoad == 0) {
            dataToLoad = EffectManager::initialize();
            if (dataToLoad == 0) {
              dataToLoad = Gui::operator_new();
              if (dataToLoad == 0) {
                if (::game_manager.__spellcard_related_1 == 0) {
                  ReplayManager::initialize(0,"replay/th6_00.rpy");
                }
                if (::game_manager.demoplay_mode == '\0') {
                  Supervisor::__sub_424AAC(&supervisor,1,(char *)(Stage.std_file)->bgm_paths[1]);
                  Supervisor::__load_bgm_file(&supervisor,(char *)(Stage.std_file)->bgm_paths);
                }
                game_manager->__byte_1820 = '\0';
                game_manager->__byte_1821 = '\x01';
                if (supervisor.dword_18C != 3) {
                  supervisor.float_1B4 = 0.0;
                  supervisor.float_1B8 = 0.0;
                }
                game_manager->__byte_2c = '\0';
                game_manager->score = 0;
                game_manager->__byte_1822 = '\0';
                AsciiManager::__sub_401410(&ascii_manager);
                if (isInReplay) {
                  supervisor.dword_18C = 1;
                }
                supervisor.frames_to_disable_something = 3;
                result = 0;
              }
              else {
                LogBuffer::write(&LogBuffer,"error : 2D•\¦‚Ì‰Šú‰»‚É¸”s‚µ‚Ü‚µ‚½\n");
                result = 0xffffffff;
              }
            }
            else {
              LogBuffer::write(&LogBuffer,
                               "error : ƒGƒtƒFƒNƒg‚Ì‰Šú‰»‚É¸”s‚µ‚Ü‚µ‚½\n");
              result = 0xffffffff;
            }
          }
          else {
            LogBuffer::write(&LogBuffer,"error : “G“ª”]‚Ì‰Šú‰»‚É¸”s‚µ‚Ü‚µ‚½\n");
            result = 0xffffffff;
          }
        }
        else {
          LogBuffer::write(&LogBuffer,"error : “G‚Ì‰Šú‰»‚É¸”s‚µ‚Ü‚µ‚½\n");
          result = 0xffffffff;
        }
      }
      else {
        LogBuffer::write(&LogBuffer,"error : “G’e‚Ì‰Šú‰»‚É¸”s‚µ‚Ü‚µ‚½\n");
        result = 0xffffffff;
      }
    }
    else {
      LogBuffer::write(&LogBuffer,"error : ƒvƒŒƒCƒ„[‚Ì‰Šú‰»‚É¸”s‚µ‚Ü‚µ‚½\n");
      result = 0xffffffff;
    }
  }
  else {
    LogBuffer::write(&LogBuffer,"error : ”wŒiƒf[ƒ^‚Ì‰Šú‰»‚É¸”s‚µ‚Ü‚µ‚½\n");
    result = 0xffffffff;
  }
  return result;
}

