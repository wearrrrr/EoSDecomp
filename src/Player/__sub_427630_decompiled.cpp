
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Player::__sub_427630(Player *this,Float3 *param_1)

{
  Float3 pos_x;
  
  if (::player.player_inner.dword_0 == 0) {
    if (game_manager.graze_in_stage < 9999) {
      game_manager.graze_in_stage = game_manager.graze_in_stage + 1;
    }
    if (game_manager.overall_graze < 999999) {
      game_manager.overall_graze = game_manager.overall_graze + 1;
    }
  }
  pos_x.x = _1_0f / _2_0f;
  pos_x.z = ((this->position).z + param_1->z) * pos_x.x;
  pos_x.y = ((this->position).y + param_1->y) * pos_x.x;
  pos_x.x = ((this->position).x + param_1->x) * pos_x.x;
  EffectManager::spawn_effect
            ((EffectManager *)((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),8,
             &pos_x,1,0xffffffff);
  game_manager.score = game_manager.score + 500;
  GameManager::increase_rank(&game_manager,6);
  gui.flags_0 = gui.flags_0 & 0xffffff3f | 0x80;
  SoundManager::play_sound_centered(&sound_manager,30,0);
  return;
}

