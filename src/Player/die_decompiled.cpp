
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Player::die(Player *this)

{
  int i;
  Timer *timer;
  
  _enemy_manager = 0;
  EffectManager::spawn_effect
            ((EffectManager *)((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),0xc,
             &this->position,1,0xff4040ff);
  EffectManager::spawn_effect
            ((EffectManager *)((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),6,
             &this->position,0x10,0xffffffff);
  this->byte_9E0 = 2;
  (this->timer_75B4).current = 0;
  (this->timer_75B4).subframe = 0.0;
  (this->timer_75B4).previous = -999;
  SoundManager::play_sound_centered(&sound_manager,4,0);
  game_manager.__dword_20 = game_manager.__dword_20 + 1;
  for (i = 0; i < 2; i = i + 1) {
    timer = this->timer_array_9B8 + i;
    timer->current = 2;
    timer->subframe = 0.0;
    timer->previous = -999;
  }
  return;
}

