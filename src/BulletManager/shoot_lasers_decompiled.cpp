
float * __thiscall BulletManager::shoot_lasers(BulletManager *this,EnemyLaserShooter *laser_data)

{
  int iVar1;
  float10 fVar2;
  short local_10;
  Laser *lasers;
  int local_8;
  AnmManager *anm_mgr;
  uint16_t laser_sprite;
  
  anm_mgr = anm_manager_ptr;
  lasers = this->lasers;
  local_8 = 0;
  while( true ) {
    if (0x3f < local_8) {
      return (float *)lasers;
    }
    if (lasers->in_use == 0) break;
    local_8 = local_8 + 1;
    lasers = lasers + 1;
  }
  laser_sprite = laser_data->sprite;
  local_10 = laser_sprite + 0x209;
  (lasers->vm_0).anm_file_index = local_10;
  AnmManager::set_vm_script
            (anm_mgr,&lasers->vm_0,(AnmRawScript *)anm_mgr->scripts[(short)laser_sprite + 0x209]);
  AnmManager::set_vm_sprite
            (anm_manager_ptr,&lasers->vm_0,
             (int)(lasers->vm_0).sprite_number + (int)(short)laser_data->color);
  anm_mgr = anm_manager_ptr;
  iVar1 = *(int *)(&DAT_00476440 + (short)laser_data->color * 4);
  AnmVm::initialize(&lasers->vm_1);
  AnmManager::set_vm_sprite(anm_mgr,&lasers->vm_1,iVar1 + 0x28c);
  (lasers->vm_1).flags = (lasers->vm_1).flags | 4;
  (lasers->position).x = (laser_data->position).x;
  (lasers->position).y = (laser_data->position).y;
  (lasers->position).z = (laser_data->position).z;
  lasers->color = laser_data->color;
  lasers->in_use = 1;
  lasers->angle = laser_data->angle;
  if (laser_data->type == 0) {
    fVar2 = Player::angle_to_player_from_point(&::player,&laser_data->position);
    lasers->angle = (float)(fVar2 + (float10)lasers->angle);
  }
  lasers->flags = *(uint16_t *)&laser_data->dword_4C;
  (lasers->timer).current = 0;
  (lasers->timer).subframe = 0.0;
  (lasers->timer).previous = -999;
  lasers->start_offset = laser_data->start_offset;
  lasers->end_offset = laser_data->end_offset;
  lasers->start_length = laser_data->start_length;
  lasers->width = laser_data->width;
  lasers->speed = laser_data->speed;
  lasers->start_time = laser_data->start_time;
  lasers->duration = laser_data->duration;
  lasers->end_time = laser_data->stop_time;
  lasers->graze_delay = laser_data->graze_delay;
  lasers->graze_interval = laser_data->graze_distance;
  if (lasers->start_time == 0) {
    lasers->state = '\x01';
    return (float *)lasers;
  }
  lasers->state = '\0';
  return (float *)lasers;
}

