
int __cdecl ResultScreen::on_registration(ResultScreen *result_screen)

{
  AnmManager *pAVar1;
  int fileToLoad;
  char *pcVar2;
  short local_3c;
  int local_14;
  uint local_10;
  AnmVm *local_c;
  uint i;
  
  if (*(int *)(result_screen->field0_0x0 + 8) != 0x11) {
    fileToLoad = AnmManager::set_surface_image(anm_manager_ptr,0,"data/result/result.jpg");
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x25,"data/result00.anm",0x100);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x26,"data/result01.anm",0x108);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x27,"data/result02.anm",0x10f);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x28,"data/result03.anm",0x125);
    if (fileToLoad != 0) {
      return -1;
    }
    local_c = (AnmVm *)(result_screen->field0_0x0 + 0x40);
    for (i = 0; (int)i < 0x26; i = i + 1) {
      (local_c->pos).x = 0.0;
      (local_c->pos).y = 0.0;
      (local_c->pos).z = 0.0;
      (local_c->pos_2).x = 0.0;
      (local_c->pos_2).y = 0.0;
      (local_c->pos_2).z = 0.0;
      pAVar1 = anm_manager_ptr;
      local_3c = (short)i + 0x100;
      local_c->anm_file_index = local_3c;
      AnmManager::set_vm_script(pAVar1,local_c,(AnmRawScript *)pAVar1->scripts[i + 0x100]);
      local_c = local_c + 1;
    }
    local_c = (AnmVm *)(result_screen->field0_0x0 + 0x28a0);
    for (i = 0; pAVar1 = anm_manager_ptr, (int)i < 0x10; i = i + 1) {
      AnmVm::initialize(local_c);
      AnmManager::set_vm_sprite(pAVar1,local_c,i + 0x708);
      (local_c->pos).x = 0.0;
      (local_c->pos).y = 0.0;
      (local_c->pos).z = 0.0;
      local_c->flags = local_c->flags | 0x300;
      local_c->font_width = '\x0f';
      local_c->font_height = '\x0f';
      local_c = local_c + 1;
    }
  }
  for (i = 0; (int)i < 5; i = i + 1) {
    for (local_10 = 0; (int)local_10 < 4; local_10 = local_10 + 1) {
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        *(int *)(result_screen->field0_0x0 + local_14 * 0x1c + local_10 * 0x118 + i * 0x460 + 0x3bac
                ) = local_14 * -100000 + 1000000;
        *(undefined4 *)
         (result_screen->field0_0x0 + local_14 * 0x1c + local_10 * 0x118 + i * 0x460 + 0x3ba0) =
             _DMYS_._0_4_;
        result_screen->field0_0x0[local_14 * 0x1c + local_10 * 0x118 + i * 0x460 + 0x3bb1] =
             (undefined)i;
        result_screen->field0_0x0[local_14 * 0x1c + local_10 * 0x118 + i * 0x460 + 0x3ba8] = 0x10;
        *(undefined2 *)
         (result_screen->field0_0x0 + local_14 * 0x1c + local_10 * 0x118 + i * 0x460 + 0x3ba6) =
             0x1c;
        *(undefined2 *)
         (result_screen->field0_0x0 + local_14 * 0x1c + local_10 * 0x118 + i * 0x460 + 0x3ba4) =
             0x1c;
        result_screen->field0_0x0[local_14 * 0x1c + local_10 * 0x118 + i * 0x460 + 0x3bb2] = 1;
        result_screen->field0_0x0[local_14 * 0x1c + local_10 * 0x118 + i * 0x460 + 0x3ba9] = 0;
        __sub_42BC2D(result_screen,
                     (int)(result_screen->field0_0x0 +
                          local_14 * 0x1c + local_10 * 0x118 + i * 0x460 + 0x3ba0),i,local_10);
        _strcpy(result_screen->field0_0x0 + local_14 * 0x1c + local_10 * 0x118 + i * 0x460 + 0x3bb3,
                "Nanashi ");
      }
    }
  }
  *(undefined4 *)(result_screen->field0_0x0 + 0x14) = 0;
  pcVar2 = __load_scorefile("score.dat");
  *(char **)result_screen->field0_0x0 = pcVar2;
  for (i = 0; (int)i < 5; i = i + 1) {
    for (local_10 = 0; (int)local_10 < 4; local_10 = local_10 + 1) {
      __HSCR_related_1(*(int *)result_screen->field0_0x0,
                       (int)(result_screen->field0_0x0 + local_10 * 0xc + i * 0x30 + 0x3ab0),
                       local_10,i);
    }
  }
  if ((*(int *)(result_screen->field0_0x0 + 8) != 9) &&
     (*(int *)(result_screen->field0_0x0 + 8) != 0x11)) {
    __CATK_related_1(*(FILE **)result_screen->field0_0x0,game_manager.catk_data);
    __CLRD_related_1(*(int *)result_screen->field0_0x0,0x69ccd0);
    __PSCR_related_1(*(int *)result_screen->field0_0x0,(undefined4 *)game_manager.pscr_data);
  }
  if ((*(int *)(result_screen->field0_0x0 + 8) == 0x11) &&
     (*(uint *)(((uint)(byte)game_manager.shottype + (uint)(byte)game_manager.character * 2) * 0x1e0
                + (game_manager.current_stage + -1) * 0x50 + 0x69cd3c +
               game_manager.difficulty * 0x14) < (uint)game_manager.score)) {
    *(int32_t *)
     (((uint)(byte)game_manager.shottype + (uint)(byte)game_manager.character * 2) * 0x1e0 +
      (game_manager.current_stage + -1) * 0x50 + 0x69cd3c + game_manager.difficulty * 0x14) =
         game_manager.score;
  }
  *(undefined2 *)(result_screen->field0_0x0 + 0x3a50) = 0xffff;
  return 0;
}

