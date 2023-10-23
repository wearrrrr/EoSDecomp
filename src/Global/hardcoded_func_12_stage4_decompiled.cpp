
void __cdecl hardcoded_func_12_stage4(Enemy *this)

{
  Float3 *bullet_data_pos;
  int i;
  
  for (i = 0; i < 8; i = i + 1) {
    if ((this->lasers[i] != (Laser *)0x0) && (this->lasers[i]->in_use != 0)) {
      (this->bullet_data).pos.x = 64.0;
      (this->bullet_data).pos.y = 0.0;
      (this->bullet_data).pos.z = 0.0;
      bullet_data_pos = &(this->bullet_data).pos;
      __sub_41E8D0(bullet_data_pos,&bullet_data_pos->x,&(this->bullet_data).pos.x);
      bullet_data_pos = &(this->bullet_data).pos;
      bullet_data_pos->x = bullet_data_pos->x + (this->position).x;
      (this->bullet_data).pos.y = (this->bullet_data).pos.y + (this->position).y;
      (this->bullet_data).pos.z = (this->bullet_data).pos.z + (this->position).z;
      BulletManager::shoot_bullets(&bullet_manager,&this->bullet_data);
    }
  }
  return;
}

