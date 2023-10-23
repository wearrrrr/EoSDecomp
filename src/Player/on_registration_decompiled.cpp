
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl Player::on_registration(Player *player)

{
  int anm_file;
  undefined4 extraout_ECX;
  float *pfVar1;
  ShottypeData *shottype_data;
  float10 fVar2;
  PlayerBullet *bullets;
  int i;
  AnmManager *anm_mgr;
  Timer *timer;
  
  if (game_manager.character == 0) {
    if ((supervisor.dword_18C != 3) &&
       (anm_file = AnmManager::load_anm_file(anm_manager_ptr,5,"data/player00.anm",0x400),
       anm_file != 0)) {
      return -1;
    }
    anm_mgr = anm_manager_ptr;
    (player->vm_0).anm_file_index = 0x400;
    AnmManager::set_vm_script(anm_mgr,&player->vm_0,(AnmRawScript *)anm_mgr->scripts[0x400]);
  }
  else if (game_manager.character == 1) {
    if ((supervisor.dword_18C != 3) &&
       (anm_file = AnmManager::load_anm_file(anm_manager_ptr,5,"data/player01.anm",0x400),
       anm_file != 0)) {
      return -1;
    }
    anm_mgr = anm_manager_ptr;
    (player->vm_0).anm_file_index = 0x400;
    AnmManager::set_vm_script(anm_mgr,&player->vm_0,(AnmRawScript *)anm_mgr->scripts[0x400]);
  }
  (player->position).x = game_manager.arcade_region_size.x / _2_0f;
  (player->position).y = game_manager.arcade_region_size.y - _64_0f;
  (player->position).z = 0.49;
  player->float3_array_4A0[0].z = 0.49;
  player->float3_array_4A0[1].z = 0.49;
  for (i = 0; i < 0x20; i = i + 1) {
    player->size_array_638[i].x = 0.0;
  }
  (player->float3_488).x = 1.25;
  (player->float3_488).y = 1.25;
  (player->float3_488).z = 5.0;
  (player->float3_494).x = 12.0;
  (player->float3_494).y = 12.0;
  (player->float3_494).z = 5.0;
  player->dword_A0C = 0;
  pfVar1 = (float *)(&DAT_00476728 +
                    ((uint)(byte)game_manager.shottype + (uint)(byte)game_manager.character * 2) *
                    0x18);
  shottype_data = &player->shottype_data;
  for (anm_file = 6; anm_file != 0; anm_file = anm_file + -1) {
    shottype_data->float_0 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    shottype_data = (ShottypeData *)&shottype_data->float_4;
  }
  fVar2 = (float10)_sqrt(0,(char)player,SUB81((double)_2_0f,0));
  (player->shottype_data).float_8 = (player->shottype_data).float_0 / (float)fVar2;
  fVar2 = (float10)_sqrt(extraout_ECX,(char)player,SUB81((double)_2_0f,0));
  (player->shottype_data).float_C = (player->shottype_data).float_4 / (float)fVar2;
  player->shot_func_75C0 = (player->shottype_data).shot_func_A;
  player->shot_func_75C4 = (player->shottype_data).shot_func_B;
  player->byte_9E0 = '\x01';
  (player->timer_75B4).current = 0x78;
  (player->timer_75B4).subframe = 0.0;
  (player->timer_75B4).previous = -999;
  player->byte_9E2 = '\0';
  anm_mgr = anm_manager_ptr;
  player->vms_1[0].anm_file_index = 0x480;
  AnmManager::set_vm_script(anm_mgr,player->vms_1,(AnmRawScript *)anm_mgr->scripts[0x480]);
  anm_mgr = anm_manager_ptr;
  player->vms_1[1].anm_file_index = 0x481;
  AnmManager::set_vm_script(anm_mgr,player->vms_1 + 1,(AnmRawScript *)anm_mgr->scripts[0x481]);
  bullets = player->bullets;
  for (i = 0; i < 80; i = i + 1) {
    bullets->state = 0;
    bullets = bullets + 1;
  }
  (player->timer_75A8).current = -1;
  (player->timer_75A8).subframe = 0.0;
  (player->timer_75A8).previous = -999;
  (player->player_inner).bomb_func_14 =
       *(void **)(&DAT_00476708 +
                 ((uint)(byte)game_manager.shottype + (uint)(byte)game_manager.character * 2) * 8);
  (player->player_inner).bomb_func_18 =
       *(void **)(&DAT_0047670c +
                 ((uint)(byte)game_manager.shottype + (uint)(byte)game_manager.character * 2) * 8);
  (player->player_inner).dword_0 = 0;
  for (i = 0; i < 2; i = i + 1) {
    timer = player->timer_array_9B8 + i;
    timer->current = 0;
    timer->subframe = 0.0;
    timer->previous = -999;
  }
  player->float_9D4 = 1.0;
  player->float_9D0 = 1.0;
  player->dword_9D8 = 8;
  return 0;
}

