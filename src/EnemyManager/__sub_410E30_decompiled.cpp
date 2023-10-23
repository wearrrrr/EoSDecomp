
void __thiscall EnemyManager::__sub_410E30(EnemyManager *this)

{
  int i;
  EnemyManager *enemy_mgr;
  Enemy *enemy_template;
  int j;
  
  enemy_mgr = this;
  for (i = 244091; i != 0; i = i + -1) {
    enemy_mgr->stg_ecl_anm_filename = (char *)0x0;
    enemy_mgr = (EnemyManager *)&enemy_mgr->stg_ecl2_anm_filename;
  }
  enemy_template = &this->template;
  for (i = 946; i != 0; i = i + -1) {
    (enemy_template->primary_vm).rotation.x = 0.0;
    enemy_template = (Enemy *)&(enemy_template->primary_vm).rotation.y;
  }
  for (j = 0; j < 8; j = j + 1) {
    (this->template).vms[j].anm_file_index = -1;
  }
  (this->template).flags_1 = (this->template).flags_1 | 0x80;
  (this->template).boss_timer.current = 0;
  (this->template).boss_timer.subframe = 0.0;
  (this->template).boss_timer.previous = -999;
  (this->template).flags_2 = (this->template).flags_2 | 1;
  (this->template).flags_2 = (this->template).flags_2 | 2;
  (this->template).flags_2 = (this->template).flags_2 & 0xfb;
  (this->template).hitbox_dimensions.x = 12.0;
  (this->template).hitbox_dimensions.y = 12.0;
  (this->template).hitbox_dimensions.z = 12.0;
  (this->template).axis_speed.x = 0.0;
  (this->template).axis_speed.y = 0.0;
  (this->template).axis_speed.z = 0.0;
  (this->template).angular_velocity = 0.0;
  (this->template).angle = 0.0;
  (this->template).acceleration = 0.0;
  (this->template).speed = 0.0;
  (this->template).flags_1 = (this->template).flags_1 & 0xfc;
  (this->template).flags_1 = (this->template).flags_1 & 0xdf;
  (this->template).flags_1 = (this->template).flags_1 & 0xbf;
  (this->template).flags_2 = (this->template).flags_2 & 0xf7;
  (this->template).stack_depth = 0;
  (this->template).life = 1;
  (this->template).score = 100;
  (this->template).death_anm_one = '\0';
  (this->template).death_anm_two = '\0';
  (this->template).death_anm_three = '\0';
  (this->template).shoot_interval = 0;
  (this->template).shoot_interval_timer.current = 0;
  (this->template).shoot_interval_timer.subframe = 0.0;
  (this->template).shoot_interval_timer.previous = -999;
  (this->template).shoot_offset.x = 0.0;
  (this->template).shoot_offset.y = 0.0;
  (this->template).shoot_offset.z = 0.0;
  (this->template).anm_ex_left = -1;
  (this->template).anm_ex_right = -1;
  (this->template).anm_ex_default = -1;
  (this->template).flags_2 = (this->template).flags_2 | 0x10;
  (this->template).flags_2 = (this->template).flags_2 & 0x1f;
  (this->template).death_callback_sub = -1;
  (this->template).flags_3 = (this->template).flags_3 & 0xfe;
  (this->template).effect_index = 0;
  (this->template).run_interrupts = -1;
  (this->template).life_callback_threshold = -1;
  (this->template).timer_callback_threshold = -1;
  (this->template).laser_store = 0;
  (this->template).byte_E41 = 0;
  (this->template).flags_3 = (this->template).flags_3 & 0xfd;
  (this->template).bullet_rank_speed_low = -0.5;
  (this->template).bullet_rank_speed_high = 0.5;
  return;
}

