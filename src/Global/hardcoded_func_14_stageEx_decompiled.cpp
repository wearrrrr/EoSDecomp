
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl hardcoded_func_14_stageEx(Enemy *this)

{
  float fVar1;
  float10 laser_sin;
  float j;
  int i;
  float10 laser_cos;
  Laser *lasers;
  
  (this->current_context).int_var_3 = 0;
  for (i = 0; i < 8; i = i + 1) {
    if ((this->lasers[i] != (Laser *)0x0) && (this->lasers[i]->in_use != 0)) {
      lasers = this->lasers[i];
      j = lasers->start_offset;
      laser_cos = (float10)fcos((float10)lasers->angle);
      laser_sin = (float10)fsin((float10)lasers->angle);
      for (; j < lasers->end_offset; j = j + _48_0f) {
        fVar1 = (lasers->position).y;
        (this->bullet_data).pos.x = (float)laser_cos * j + (lasers->position).x;
        (this->bullet_data).pos.y = (float)laser_sin * j + fVar1;
        (this->bullet_data).pos.z = 0.0;
        BulletManager::shoot_bullets(&bullet_manager,&this->bullet_data);
      }
      (this->current_context).int_var_3 = (this->current_context).int_var_3 + 1;
    }
  }
  return;
}

