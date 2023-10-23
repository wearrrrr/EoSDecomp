
Enemy * __thiscall Enemy::constructor(Enemy *this)

{
  int j;
  EnemyBulletShooter *bullet_shooter;
  EnemyLaserShooter *laser_shooter;
  EnemyEclContext *ecl_context;
  int local_30;
  AnmVm *vms;
  int i;
  
  AnmVm::constructor(&this->primary_vm);
  i = 8;
  vms = this->vms;
  while (i = i + -1, -1 < i) {
    AnmVm::constructor(vms);
    vms = vms + 1;
  }
  Timer::constructor(&(this->current_context).time);
  local_30 = 8;
  ecl_context = this->saved_context_stack;
  while (local_30 = local_30 + -1, -1 < local_30) {
    Timer::constructor(&ecl_context->time);
    ecl_context = ecl_context + 1;
  }
  Timer::constructor(&this->move_interp_timer);
  Timer::constructor(&this->boss_timer);
  bullet_shooter = &this->bullet_data;
  for (j = 21; j != 0; j = j + -1) {
    bullet_shooter->sprite = 0;
    bullet_shooter->color = 0;
    bullet_shooter = (EnemyBulletShooter *)&bullet_shooter->pos;
  }
  Timer::constructor(&this->shoot_interval_timer);
  laser_shooter = &this->laser_props;
  for (j = 21; j != 0; j = j + -1) {
    laser_shooter->sprite = 0;
    laser_shooter->color = 0;
    laser_shooter = (EnemyLaserShooter *)&laser_shooter->position;
  }
  Timer::constructor(&this->timer_e44);
  Timer::constructor(&this->timer_ebc);
  return this;
}

