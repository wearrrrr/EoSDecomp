
undefined4 __thiscall
BulletManager::shoot_bullets(BulletManager *this,EnemyBulletShooter *bullet_data)

{
  int shoot_bullet;
  float10 angle_to_player;
  int i;
  int j;
  
  angle_to_player = Player::angle_to_player_from_point(&::player,&bullet_data->pos);
  for (i = 0; i < (short)bullet_data->count_2; i = i + 1) {
    for (j = 0; j < (short)bullet_data->count_1; j = j + 1) {
      shoot_bullet = shoot_one_bullet(this,bullet_data,j,i,(float)angle_to_player);
      if (shoot_bullet != 0) goto LAB_0041463b;
    }
  }
LAB_0041463b:
  if ((bullet_data->flags & 0x200) != 0) {
    SoundManager::play_sound_centered(&sound_manager,bullet_data->sfx,0);
  }
  return 0;
}

